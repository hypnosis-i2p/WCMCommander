#pragma once

#define LIBSSH2_EXIST

#if defined(__GNUC__)
#	undef LIBSSH2_EXIST
#endif

#if defined(_WIN32)
//		Disable LibSSH2 on Win builds
//#	undef LIBSSH2_EXIST
#endif // _WIN64
