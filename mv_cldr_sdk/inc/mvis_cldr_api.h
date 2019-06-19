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

#ifndef _MVIS_CLDR_API_H
#define _MVIS_CLDR_API_H

#include "mvis_cldr_def.h"
#include "mvis_cldr_rc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef MV_TLC_EXPORTS
#define MV_TLC_API __declspec(dllexport)
#else
#define MV_TLC_API
#endif

//!
//! \brief This function must be the first call into the SDK API library. 
//! It opens the library and allocates resources necessary for operation.
//! \param[out] library_handle  Returned handle to the library that must be
//! used in subsequent calls.
MV_TLC_API MV_CLDR_RC MV_CLDR_OpenLibrary(MV_CLDR_HANDLE *library_handle);

//!
//! \brief Closes the SDK API library and releases all resources. 
//! 
//! \param library_handle  A valid library handle previously obtained by a
//! call to MV_CLDR_OpenLibrary()
MV_TLC_API MV_CLDR_RC MV_CLDR_CloseLibrary(const MV_CLDR_HANDLE library_handle);


//!
//! \brief Start TOF streaming.
//! A valid library handle must be previously obtained
//! by a call to MV_CLDR_OpenLibrary()
//!\param[in] frame_res frame resolution selection
//!
MV_TLC_API MV_CLDR_RC MV_CLDR_TofStartStreaming(MV_CLDR_FrameResolutionE frame_res);


//!
//! \brief Stop TOF streaming.
//! A valid library handle must be previously obtained
//! by a call to MV_CLDR_OpenLibrary()
//!
MV_TLC_API MV_CLDR_RC MV_CLDR_TofStopStreaming();


//!
//! \brief Gets frame size for depth and intensity buffers.
//! A valid library handle must be previously obtained
//! by a call to MV_CLDR_OpenLibrary()
//!\param[out] numBytes points to destination for number of bytes of TOF Frame
MV_TLC_API MV_CLDR_RC MV_CLDR_TofGetFrameSize(UINT32 *numBytes);

//!
//! \brief Get a frame from the TOF stream
//! The frame is stored into equal sized depth and intensity buffers.
//! The function is non-blocking, polled by application.
//!
//! A valid library handle must be previously obtained
//! by a call to MV_CLDR_OpenLibrary()
//! \param[out] pDepth points to destination for depth section of frame
//! \param[out] pIntensity points to destination for intensity section of frame
//!
//! Return codes:
//!     eSUCCESS: valid frame was retrieved
//!     eFRAME_NONE: no frame available
//!     eFRAME_ERROR: Destination buffer less than frame size
//!     eCONNECT_FAILED: No stream connection
//!
MV_TLC_API MV_CLDR_RC MV_CLDR_TofGetFrame(
    UINT16 *const pDepth,         /**< [OUT] Data Buffer with depth values (mm) */
    UINT16 *const pIntensity      /**< [OUT] Data Buffer */
);

//!
//! \brief Apply a TOF filter setting
//!
//! \param[in] select is filter select
MV_TLC_API MV_CLDR_RC MV_CLDR_SelectFilter(MV_CLDR_FilterSelectE select);

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // _MVIS_CLDR_API_H
