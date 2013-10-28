//----------------------------------------------------------------------------
//
//  Copyright (C) 2004-2013 by EMGU. All rights reserved.
//
//----------------------------------------------------------------------------

#pragma once
#ifndef EMGU_SUPERRES_C_H
#define EMGU_SUPERRES_C_H

#include "opencv2/core/core_c.h"
#include "opencv2/superres.hpp"

CVAPI(cv::superres::FrameSource*) cvSuperresCreateFrameSourceVideo(const char* fileName, bool useGpu);
CVAPI(cv::superres::FrameSource*) cvSuperresCreateFrameSourceCamera(int deviceId);
CVAPI(void) cvSuperresFrameSourceRelease(cv::superres::FrameSource** frameSource);
CVAPI(void) cvSuperresFrameSourceNextFrame(cv::superres::FrameSource* frameSource, cv::Mat* frame);

CVAPI(cv::superres::SuperResolution*) cvSuperResolutionCreate(int type, cv::superres::FrameSource* frameSource, cv::superres::FrameSource** frameSourceOut);
CVAPI(void) cvSuperResolutionRelease(cv::superres::SuperResolution** superres);
#endif