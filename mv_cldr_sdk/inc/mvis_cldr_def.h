//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!
//! \file
//!
//! \brief Microvision consumer LiDAR (CLDR) API definitions for communication 
//!        to the Microvision LiDAR Scanning Engine.
//!
//! Copyright (C) 2019 MicroVision, Inc.
//!
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#ifndef _MVIS_CLDR_DEF_H
#define _MVIS_CLDR_DEF_H


typedef void* MV_CLDR_HANDLE;

typedef signed char INT8;       ///<  An 8 bit wide signed type
typedef signed short INT16;     ///<  A 16 bit wide signed type
typedef signed int INT32;       ///<  A 32 bit wide signed type
typedef unsigned char UINT8;    ///<  An 8 bit wide signed type
typedef unsigned short UINT16;  ///<  A 16 bit wide signed type
typedef unsigned int UINT32;    ///<  A 32 bit wide signed type
typedef float FP32;             ///<  A 32 bit IEEE754 floating point type
typedef int BOOL;               ///<  A 32 bit wide signed type


#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif


// ****************************************************************************
// Data Types enumerations 

typedef enum
{
    eCLDR_BOOL,          ///<  A boolean type
    eCLDR_INT8,          ///<  An 8 bit wide signed type
    eCLDR_INT16,         ///<  A 16 bit wide signed type
    eCLDR_INT32,         ///<  A 32 bit wide signed type
    eCLDR_UINT8,         ///<  An 8 bit wide signed type
    eCLDR_UINT16,        ///< A 16 bit wide signed type
    eCLDR_UINT32,        ///< A 32 bit wide signed type
    eCLDR_FP32,          ///<  A 32 bit IEEE754 floating point type
    eCLDR_VOIDP          ///<  A pointer to void, can be cast to the appropriate pointer type
} MV_CLDR_DataTypeE;

typedef enum
{
    eCLDR_FRAMERES3_720_360 = 0x32,  ///<  720x360 frame resolution
    eCLDR_FRAMERES1_480_180 = 0x14,  ///<  480x180 frame resolutoin
    eCLDR_INVALID_FRAMERES
} MV_CLDR_FrameResolutionE;

typedef enum
{
    eCLDR_FILTER_D0 = 0,  ///<  Depth Filter Off
    eCLDR_FILTER_D1 = 1,  ///<  Depth Filter Slight
    eCLDR_FILTER_D2 = 2,  ///<  Depth Filter Moderate
    eCLDR_FILTER_D3 = 3   ///<  Depth Filter Strong
} MV_CLDR_FilterSelectE;


#endif // _MVIS_CLDR_H
