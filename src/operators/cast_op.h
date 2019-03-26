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

#ifdef CAST_OP

#pragma once

#include <string>
#include "framework/operator.h"
#include "operators/kernel/kernels.h"
#include "operators/op_param.h"

namespace paddle_mobile {
namespace operators {

// template <typename T>
// class CastOp : public framework::OperatorWithKernel<
//                   DeviceType, CastParam<DeviceType>,
//                   operators::CastKernel<DeviceType, T>> {
// public:
//  CastOp(const std::string &type, const VariableNameMap &inputs,
//         const VariableNameMap &outputs, const framework::AttributeMap &attrs,
//         framework::Scope *scope)
//      : framework::OperatorWithKernel<DeviceType, CastParam<DeviceType>,
//                                      operators::CastKernel<DeviceType, T>>(
//            type, inputs, outputs, attrs, scope) {}
//  // inference output shape
//  void InferShape() const override;
//};
/*template <typename T>
class CastOp : public framework::OperatorWithKernels<T, CastParam> {
 public:
  CastOp(const std::string &type, const VariableNameMap &inputs,
         const VariableNameMap &outputs, const framework::AttributeMap &attrs,
         framework::Scope *scope)
      : framework::OperatorWithKernels<T, CastParam>(type, inputs, outputs,
                                                     attrs, scope) {
    framework::OperatorWithKernels<T, CastParam>::kernels.insert(TYPE_GPU,
                                                                 kernelGpu_);
    framework::OperatorWithKernels<T, CastParam>::kernels.insert(TYPE_CPU,
                                                                 kernelCpu_);
  }
  void InferShape() const override;
  CastKernelCpu<T> kernelCpu_;
  CastKernelGpu<T> kernelGpu_;
};*/
DECLARE_OPERATOR_WITH_PARAMS(Cast, CastParam);

}  // namespace operators
}  // namespace paddle_mobile

#endif  // CAST_OP
