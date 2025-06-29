#ifndef YUNIFRAME_PROTO_ADDTWO_H
#define YUNIFRAME_PROTO_ADDTWO_H

#ifdef BUILD_LIBRARY
/* Define MODEXPORT = export */
#if defined(__CYGWIN__) || defined(_WIN32)
// https://learn.microsoft.com/en-us/cpp/build/exporting-from-a-dll-using-declspec-dllexport
#define MODEXPORT __declspec(dllexport)
#else /* ELF platform */
#define MODEXPORT __attribute__((visibility ("default")))
#endif
#else
/* Define MODEXPORT = import */
#if defined(__CYGWIN__) || defined(_WIN32)
// https://learn.microsoft.com/en-us/cpp/build/importing-into-an-application-using-declspec-dllimport
#define MODEXPORT __declspec(dllimport)
#else /* ELF platform */
#define MODEXPORT
#endif
#endif

MODEXPORT int addtwo(int a, int b);

#endif
