/*
 *
 *  Iter Vehemens ad Necem (IVAN)
 *  Copyright (C) Timo Kiviluoto
 *  Released under the GNU General
 *  Public License
 *
 *  See LICENSING which should be included
 *  along with this file for more details
 *
 */

#ifndef __TYPEDEF_H__
#define __TYPEDEF_H__

#include "pragmas.h"
#include "stdint.h"

class bitmap;
class festring;
struct blitdata;
struct v2;

typedef bool truth;
typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef uint64_t ulong;
typedef int64_t slong;
typedef int col16;
typedef ushort packcol16;
typedef ulong col24;
typedef int alpha;
typedef uchar packalpha;
typedef int priority;
typedef uchar packpriority;
typedef uchar paletteindex;

typedef const bool ctruth;
typedef const char cchar;
typedef const int cint;
typedef const unsigned char cuchar;
typedef const unsigned short cushort;
typedef const unsigned int cuint;
typedef const uint64_t culong;
typedef const int ccol16;
typedef const ushort cpackcol16;
typedef const ulong ccol24;
typedef const int calpha;
typedef const uchar cpackalpha;
typedef const int cpriority;
typedef const uchar cpackpriority;
typedef const uchar cpaletteindex;

typedef const bitmap cbitmap;
typedef const blitdata cblitdata;
typedef const festring cfestring;
typedef const v2 cv2;

#endif
