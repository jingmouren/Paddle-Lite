// Copyright (c) 2019 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once
#include "paddle_lite_factory_helper.h"  // NOLINT

USE_MIR_PASS(demo);
USE_MIR_PASS(static_kernel_pick_pass);
USE_MIR_PASS(variable_place_inference_pass);
USE_MIR_PASS(type_target_cast_pass);
USE_MIR_PASS(generate_program_pass);

USE_MIR_PASS(io_copy_kernel_pick_pass);
USE_MIR_PASS(argument_type_display_pass);
USE_MIR_PASS(runtime_context_assign_pass);
USE_MIR_PASS(graph_visualize_pass);

USE_MIR_PASS(lite_conv_bn_fuse_pass);
USE_MIR_PASS(lite_fc_fuse_pass);
USE_MIR_PASS(lite_shuffle_channel_fuse_pass);
USE_MIR_PASS(lite_transpose_softmax_transpose_fuse_pass);
USE_MIR_PASS(lite_interpolate_fuse_pass);
USE_MIR_PASS(lite_sequence_pool_concat_fuse_pass);
USE_MIR_PASS(identity_scale_eliminate_pass);
USE_MIR_PASS(lite_conv_elementwise_fuse_pass);
USE_MIR_PASS(lite_conv_activation_fuse_pass);
USE_MIR_PASS(lite_var_conv_2d_activation_fuse_pass);
USE_MIR_PASS(lite_elementwise_add_activation_fuse_pass);
USE_MIR_PASS(lite_quant_dequant_fuse_pass);
USE_MIR_PASS(type_precision_cast_pass);
USE_MIR_PASS(type_layout_cast_pass);
USE_MIR_PASS(type_layout_cast_preprocess_pass);
USE_MIR_PASS(memory_optimize_pass);
USE_MIR_PASS(elementwise_mul_constant_eliminate_pass)
USE_MIR_PASS(npu_subgraph_pass);
USE_MIR_PASS(xpu_subgraph_pass);
USE_MIR_PASS(mlu_subgraph_pass);
USE_MIR_PASS(mlu_postprocess_pass);
USE_MIR_PASS(weight_quantization_preprocess_pass);
USE_MIR_PASS(quantized_op_attributes_inference_pass);
USE_MIR_PASS(__xpu__resnet_fuse_pass);
USE_MIR_PASS(__xpu__multi_encoder_fuse_pass);
