/*
 * 
 *  Tiny Multimedia Framework
 *  Copyright (C) 2014 Arash Shafiei
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef VIDEOENCODERFILTER_H_
#define VIDEOENCODERFILTER_H_

#include "core/Filter.h"
#include "core/Port.h"
#include "filters/libav/types/RawFrame.h"
#include "filters/libav/types/EncodedFrame.h"
#include "filters/libav/tools/VideoEncoder.h"

class VideoEncoderFilter : public Filter {
  
private:
  VideoEncoder * videoEncoder;
  
  InputPort<RawFrame> * inputPortRawFrame;
  OutputPort<EncodedFrame> * outputPortEncodedFrame;
public:
  VideoEncoderFilter(string name);
  
  virtual void init();
  
  virtual void run();
  
  virtual ~VideoEncoderFilter();
};

#endif /* VIDEOENCODERFILTER_H_ */