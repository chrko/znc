#ifndef _VERSION_H
#define _VERSION_H

// The following defines are for #if comparison (preprocessor only likes ints)
#define VERSION_MAJOR  0
#define VERSION_MINOR  207
// This one is for display purpose
#define VERSION        (VERSION_MAJOR + VERSION_MINOR / 1000.0)

// You can add -DVERSION_EXTRA="stuff" to your CXXFLAGS!
extern const char* ZNC_VERSION_EXTRA;

#endif