/*
 * Copyright (C) 2008 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ANDROID_HARDWARE_CAMERA_PARAMETERS_SMP_H
#define ANDROID_HARDWARE_CAMERA_PARAMETERS_SMP_H

#include <camera/CameraParameters.h>

namespace android {


class CameraParametersSmp:public CameraParameters
{
public:
    CameraParametersSmp();
    CameraParametersSmp(const String8 &params) { unflatten(params); }
    ~CameraParametersSmp();

   
    void setWaterMarkTimerSize(int width, int height);
    void getWaterMarkTimerSize(int *width, int *height) const;
	  void setWaterMarkTimerOffset(int TimerOffsetX, int TimerOffsetY);
	  void getWaterMarkTimerOffset(int *TimerOffsetX, int *TimerOffsetY) const;
	  void setWaterMarkTimerDataAddr(char* timerdataaddr);
	  int  getWaterMarkTimerDataAddrFD() const;
	  void setWaterMarkOffset(int offsetX, int offsetY);
	  void getWaterMarkOffset(int *offsetX, int *offsetY) const;
	  const char* getWaterMarkDataPath() const;
	  void setWaterMarkDataPath(const String8 format);
	  const char* getWaterMarkDataOwner() const;

	  static const char KEY_WATERMARK_SIZE[];
	  static const char KEY_WATERMARK_OFFSITE[];
	  static const char KEY_WATERMARK_DATAPATH[];
	  static const char KEY_WATERMARK_TIMEROFFSITE[];
	  static const char KEY_WATERMARK_TIMERADDR[];
	  static const char KEY_WATERMARK_OWNER[];
};

}; // namespace android

#endif
