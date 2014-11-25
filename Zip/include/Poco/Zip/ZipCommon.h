//
// ZipCommon.h
//
// $Id: //poco/1.4/Zip/include/Poco/Zip/ZipCommon.h#3 $
//
// Library: Zip
// Package: Zip
// Module:  ZipCommon
//
// Definition of the ZipCommon class.
//
// Copyright (c) 2007, Applied Informatics Software Engineering GmbH.
// and Contributors.
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
// 
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.
//


#ifndef Zip_ZipCommon_INCLUDED
#define Zip_ZipCommon_INCLUDED


#include "Poco/Zip/Zip.h"


namespace Poco {
namespace Zip {


class Zip_API ZipCommon
	/// Common enums used in the Zip project
{
public:
	enum
	{
		HEADER_SIZE = 4
	};

	enum CompressionMethod
	{
		CM_STORE   = 0,
		CM_SHRUNK  = 1,
		CM_FACTOR1 = 2,
		CM_FACTOR2 = 3,
		CM_FACTOR3 = 4,
		CM_FACTOR4 = 5,
		CM_IMPLODE = 6,
		CM_TOKENIZE= 7,
		CM_DEFLATE = 8,
		CM_ENHANCEDDEFLATE = 9,
		CM_DATECOMPRIMPLODING = 10,
		CM_UNUSED = 11,
		CM_AUTO = 255 /// automatically select DM_DEFLATE or CM_STORE based on file type (extension)
	};

	enum CompressionLevel
	{
		CL_NORMAL    = 0,
		CL_MAXIMUM   = 1,
		CL_FAST      = 2,
		CL_SUPERFAST = 3
	};

	enum HostSystem
	{
		HS_FAT = 0,  // + PKZIPW 2.50 VFAT, NTFS
		HS_AMIGA = 1,
		HS_VMS = 2,
		HS_UNIX = 3,
		HS_VM_CMS = 4,
		HS_ATARI = 5,
		HS_HPFS = 6,
		HS_MACINTOSH = 7,
		HS_ZSYSTEM = 8,
		HS_CP_M = 9,
		HS_TOPS20 = 10, // used by pkzip2.5 to indicate ntfs
		HS_NTFS = 11,
		HS_SMS_QDOS = 12,
		HS_ACORN = 13,
		HS_VFAT = 14,
		HS_MVS = 15,
		HS_BEOS = 16,
		HS_TANDEM = 17,
		HS_UNUSED = 18
	};

	enum FileType
	{
		FT_BINARY= 0,
		FT_ASCII = 1
	};

	static bool isValidPath(const std::string& path);
		/// Checks whether the given path is valid (does
		/// not contain ".." path segments).
};


} } // namespace Poco::Zip


#endif // Zip_ZipCommon_INCLUDED
