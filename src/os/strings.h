/* $Id$ */

/** @file src/os/strings.h OS-independent inclusion of string routines. */

#ifndef OS_STRINGS_H
#define OS_STRINGS_H

/*
 * This header should define the following functions:
 *
 * strcasecmp     - strcmp, but case insensitive
 * strncasecmp    - strncmp, but case insensitive
 * snprintf
 *
 */

#if defined(_MSC_VER)
	#include <stdio.h>
	#include <assert.h>
	#include <errno.h>
	#include <string.h>
	#include <stdarg.h>
	#define strcasecmp _stricmp
	#define strncasecmp _strnicmp

	static int snprintf(char *str, size_t size, const char *format, ...)
	{
		va_list ap;
		int ret;

		va_start(ap, format);
		ret = vsnprintf(str, size, format, ap);
		va_end(ap);
		return ret;
	}

	/**
	 * Almost POSIX compliant implementation of \c vsnprintf for VC compiler.
	 * The difference is in the value returned on output truncation. This
	 * implementation returns size whereas a POSIX implementation returns
	 * size or more (the number of bytes that would be written to str
	 * had size been sufficiently large excluding the terminating null byte).
	 */
	static int vsnprintf(char *str, size_t size, const char *format, va_list ap)
	{
		int ret;
		if (size == 0) return 0;

		errno = 0;
		ret = _vsnprintf(str, size, format, ap);

		if (ret < 0) {
			if (errno != ERANGE) {
				/* There's a formatting error, better get that looked
				 * at properly instead of ignoring it. */
				assert(0);
			}
		} else if ((size_t)ret < size) {
			/* The buffer is big enough for the number of
			 * characers stored (excluding null), i.e.
			 * the string has been null-terminated. */
			return ret;
		}

		/* The buffer is too small for _vsnprintf to write the
		 * null-terminator at its end and return size. */
		str[size - 1] = '\0';
		return (int)size;
	}
#elif !defined(DECOMPILED_INCLUDE) || !defined(__TINYC__)
	#include <strings.h>
	#if defined(__MINGW32__) && defined(__STRICT_ANSI__)
		int __cdecl __MINGW_NOTHROW strcasecmp (const char *, const char *);
		int __cdecl __MINGW_NOTHROW strncasecmp (const char *, const char *, size_t);
	#endif /* __MINGW32__ && __STRICT_ANSI__ */
	#if !defined(__MINGW32__) && defined(__GNUC__) && !defined(snprintf)
		/* snprintf is in fact C99, but we like to use it over sprintf for the obvious reasons */
		#if !defined(__APPLE__)
			extern int snprintf (char *__restrict __s, size_t __maxlen, __const char *__restrict __format, ...) __THROW __attribute__ ((__format__ (__printf__, 3, 4)));
		#else /* __APPLE__ */
			extern int snprintf(char * __restrict, size_t, const char * __restrict, ...) __DARWIN_LDBL_COMPAT(snprintf);
		#endif /* __APPLE__ */
	#endif /* __GCC__ */
#endif /* _MSC_VER && (!DECOMPILED_INCLUDE || !__TINYC__) */

#endif /* OS_STRINGS_H */
