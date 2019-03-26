/* Copyright (c) 2018 PaddlePaddle Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#ifdef TRANSPOSE_OP

#pragma once

#include <vector>

#include "framework/operator.h"
#include "operators/op_param.h"

namespace paddle_mobile {
namespace operators {

/*template <typename T>
class TransposeKernel
    : public framework::OpKernelBase<DeviceType, TransposeParam<DeviceType>> {
 public:
  void Compute(const TransposeParam<DeviceType>& param);
  bool Init(TransposeParam<DeviceType>* param);
};*/

DECLARE_KERNEL_ALL(Transpose);

}  // namespace operators
}  // namespace paddle_mobile

#endif
