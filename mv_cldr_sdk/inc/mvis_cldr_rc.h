//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//!
//! \file
//!
//! \brief Contains all possible return codes from the various Microvision consumer Lidar (CLDR) APIs.
//!
//! Copyright (C) 2019 MicroVision, Inc.
//!
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#ifndef _MV_CLDR_RC_H_
#define _MV_CLDR_RC_H_

// Error codes returned from the APIs

typedef enum
{
    eRECONNECT_FAILED   = -13,  ///<  Reconnecting to MCU reboot failed
    eCONNECT_FAILED     = -12,  ///<  Connecting to MCU reboot failed
    ePAYLOAD_TOO_LARGE  = -11,  ///<  Payload too large
    eNOT_CONNECTED      = -10,  ///<  Not connected
    eALREADY_OPENED     = -9,   ///<  Connection already open
    eINCOMPLETE         = -8,   ///<  operation could not be completed
    eINIT_FAILURE       = -7,   ///<  Failed to initialize
    eINVALID_ARG        = -6,   ///<  One or more arguements are invalid
    eUNINITIALIZED      = -5,   ///<  Object is not initialized
    eTIMEOUT            = -4,   ///<  Operation Timed out
    eBUSY               = -3,   ///<  Resource Busy
    eNOT_SUPPORTED      = -2,   ///<  Operation not supported
    eFAILURE            = -1,   ///<  Call Failed
    eSUCCESS            =  0,   ///<  Call Successful
    eCOMMUNICATION_ERROR,       ///<  Error while trying to communicate
    eBROKEN_CONNECTION,         ///<  A previously opened connection is no longer valid
    eNOT_INITIALIZED,           ///<  API or library not initialized
    eINTERNAL_ERROR,            ///<  Internal unspecified error
    eDEVICE_ERROR,              ///<  Error reading or writing to an I/O device
    eRESOURCE_BUSY,             ///<  Resource is not available
    eRETRY,                     ///<  Retry if PDE uart overflows
    eBTH_DISABLED,              ///<  If host device doesn't have bluetooth support or bluetooth enabled
    eINVALID_STATE,             ///<  Unit/resource is in an invalid state
    eFRAME_ERROR,               ///<  Error happens in getting frame information from Toflib
    eNUM_PULSES_PER_LINE_TOO_LARGE,       ///<  number of pusles per line too large 
    eNOT_SUPPORTED_DATA_FORMAT,  ///<  not supported for current data format
    eTOF_FRAME_NONE,            ///<  no new tof frame is ready
    eTOF_NOT_CONFIGURED,        ///<  TOF has not been configured
    eTOF_NOT_STREAMING          ///<  TOF is not streaming
} MV_CLDR_RC;

#endif // _MV_CLDR_RC_H_
