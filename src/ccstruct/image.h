///////////////////////////////////////////////////////////////////////
// File:        image.h
// Description: Image wrapper.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// http://www.apache.org/licenses/LICENSE-2.0
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
///////////////////////////////////////////////////////////////////////

#ifndef TESSERACT_CCSTRUCT_IMAGE_H_
#define TESSERACT_CCSTRUCT_IMAGE_H_

#include <tesseract/export.h>

struct Pix;

namespace tesseract {

class TESS_API Image {
public:
  Pix *pix_ = nullptr;

public:
  Image() = default;
  Image(Pix *pix) : pix_(pix) {}

  // service
  operator Pix *() const { return pix_; }
  Pix *operator->() const { return pix_; }

  // api
  void destroy();
};

} // namespace tesseract

#endif // TESSERACT_CCSTRUCT_IMAGE_H_
