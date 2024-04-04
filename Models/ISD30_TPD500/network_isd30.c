/**
  ******************************************************************************
  * @file    network_isd30.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Fri Jan 19 12:20:50 2024
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */


#include "network_isd30.h"
#include "network_isd30_data.h"

#include "ai_platform.h"
#include "ai_platform_interface.h"
#include "ai_math_helpers.h"

#include "core_common.h"
#include "core_convert.h"

#include "layers.h"



#undef AI_NET_OBJ_INSTANCE
#define AI_NET_OBJ_INSTANCE g_network_isd30
 
#undef AI_NETWORK_ISD30_MODEL_SIGNATURE
#define AI_NETWORK_ISD30_MODEL_SIGNATURE     "d31681f3d5d0c87cc04219f8376ede96"

#ifndef AI_TOOLS_REVISION_ID
#define AI_TOOLS_REVISION_ID     ""
#endif

#undef AI_TOOLS_DATE_TIME
#define AI_TOOLS_DATE_TIME   "Fri Jan 19 12:20:50 2024"

#undef AI_TOOLS_COMPILE_TIME
#define AI_TOOLS_COMPILE_TIME    __DATE__ " " __TIME__

#undef AI_NETWORK_ISD30_N_BATCHES
#define AI_NETWORK_ISD30_N_BATCHES         (1)

static ai_ptr g_network_isd30_activations_map[1] = AI_C_ARRAY_INIT;
static ai_ptr g_network_isd30_weights_map[1] = AI_C_ARRAY_INIT;



/**  Array declarations section  **********************************************/
/* Array#0 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_1_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 832, AI_STATIC)
/* Array#1 */
AI_ARRAY_OBJ_DECLARE(
  max_pooling1d_1_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 384, AI_STATIC)
/* Array#2 */
AI_ARRAY_OBJ_DECLARE(
  dense_2_dense_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)
/* Array#3 */
AI_ARRAY_OBJ_DECLARE(
  dense_2_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)
/* Array#4 */
AI_ARRAY_OBJ_DECLARE(
  dense_3_dense_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 1, AI_STATIC)
/* Array#5 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_1_conv2d_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 768, AI_STATIC)
/* Array#6 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_1_conv2d_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)
/* Array#7 */
AI_ARRAY_OBJ_DECLARE(
  dense_2_dense_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 24576, AI_STATIC)
/* Array#8 */
AI_ARRAY_OBJ_DECLARE(
  dense_2_dense_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)
/* Array#9 */
AI_ARRAY_OBJ_DECLARE(
  dense_3_dense_weights_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 64, AI_STATIC)
/* Array#10 */
AI_ARRAY_OBJ_DECLARE(
  dense_3_dense_bias_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 1, AI_STATIC)
/* Array#11 */
AI_ARRAY_OBJ_DECLARE(
  input_0_output_array, AI_ARRAY_FORMAT_FLOAT|AI_FMT_FLAG_IS_IO,
  NULL, NULL, 60, AI_STATIC)
/* Array#12 */
AI_ARRAY_OBJ_DECLARE(
  conv1d_1_conv2d_output_array, AI_ARRAY_FORMAT_FLOAT,
  NULL, NULL, 832, AI_STATIC)
/**  Tensor declarations section  *********************************************/
/* Tensor #0 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_1_output, AI_STATIC,
  0, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 13), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv1d_1_output_array, NULL)

/* Tensor #1 */
AI_TENSOR_OBJ_DECLARE(
  max_pooling1d_1_output, AI_STATIC,
  1, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 6), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &max_pooling1d_1_output_array, NULL)

/* Tensor #2 */
AI_TENSOR_OBJ_DECLARE(
  max_pooling1d_1_output0, AI_STATIC,
  2, 0x0,
  AI_SHAPE_INIT(4, 1, 384, 1, 1), AI_STRIDE_INIT(4, 4, 4, 1536, 1536),
  1, &max_pooling1d_1_output_array, NULL)

/* Tensor #3 */
AI_TENSOR_OBJ_DECLARE(
  dense_2_dense_output, AI_STATIC,
  3, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &dense_2_dense_output_array, NULL)

/* Tensor #4 */
AI_TENSOR_OBJ_DECLARE(
  dense_2_output, AI_STATIC,
  4, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &dense_2_output_array, NULL)

/* Tensor #5 */
AI_TENSOR_OBJ_DECLARE(
  dense_3_dense_output, AI_STATIC,
  5, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &dense_3_dense_output_array, NULL)

/* Tensor #6 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_1_conv2d_weights, AI_STATIC,
  6, 0x0,
  AI_SHAPE_INIT(4, 4, 1, 3, 64), AI_STRIDE_INIT(4, 4, 16, 1024, 1024),
  1, &conv1d_1_conv2d_weights_array, NULL)

/* Tensor #7 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_1_conv2d_bias, AI_STATIC,
  7, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv1d_1_conv2d_bias_array, NULL)

/* Tensor #8 */
AI_TENSOR_OBJ_DECLARE(
  dense_2_dense_weights, AI_STATIC,
  8, 0x0,
  AI_SHAPE_INIT(4, 384, 64, 1, 1), AI_STRIDE_INIT(4, 4, 1536, 98304, 98304),
  1, &dense_2_dense_weights_array, NULL)

/* Tensor #9 */
AI_TENSOR_OBJ_DECLARE(
  dense_2_dense_bias, AI_STATIC,
  9, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 1), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &dense_2_dense_bias_array, NULL)

/* Tensor #10 */
AI_TENSOR_OBJ_DECLARE(
  dense_3_dense_weights, AI_STATIC,
  10, 0x0,
  AI_SHAPE_INIT(4, 64, 1, 1, 1), AI_STRIDE_INIT(4, 4, 256, 256, 256),
  1, &dense_3_dense_weights_array, NULL)

/* Tensor #11 */
AI_TENSOR_OBJ_DECLARE(
  dense_3_dense_bias, AI_STATIC,
  11, 0x0,
  AI_SHAPE_INIT(4, 1, 1, 1, 1), AI_STRIDE_INIT(4, 4, 4, 4, 4),
  1, &dense_3_dense_bias_array, NULL)

/* Tensor #12 */
AI_TENSOR_OBJ_DECLARE(
  input_0_output, AI_STATIC,
  12, 0x0,
  AI_SHAPE_INIT(4, 1, 4, 1, 15), AI_STRIDE_INIT(4, 4, 4, 16, 16),
  1, &input_0_output_array, NULL)

/* Tensor #13 */
AI_TENSOR_OBJ_DECLARE(
  conv1d_1_conv2d_output, AI_STATIC,
  13, 0x0,
  AI_SHAPE_INIT(4, 1, 64, 1, 13), AI_STRIDE_INIT(4, 4, 4, 256, 256),
  1, &conv1d_1_conv2d_output_array, NULL)



/**  Layer declarations section  **********************************************/


AI_TENSOR_CHAIN_OBJ_DECLARE(
  dense_3_dense_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &dense_2_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &dense_3_dense_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &dense_3_dense_weights, &dense_3_dense_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  dense_3_dense_layer, 4,
  DENSE_TYPE, 0x0, NULL,
  dense, forward_dense,
  &dense_3_dense_chain,
  NULL, &dense_3_dense_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  dense_2_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &dense_2_dense_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &dense_2_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  dense_2_layer, 3,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &dense_2_chain,
  NULL, &dense_3_dense_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  dense_2_dense_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &max_pooling1d_1_output0),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &dense_2_dense_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 2, &dense_2_dense_weights, &dense_2_dense_bias),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  dense_2_dense_layer, 3,
  DENSE_TYPE, 0x0, NULL,
  dense, forward_dense,
  &dense_2_dense_chain,
  NULL, &dense_2_layer, AI_STATIC, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  max_pooling1d_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_1_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &max_pooling1d_1_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  max_pooling1d_1_layer, 1,
  POOL_TYPE, 0x0, NULL,
  pool, forward_mp,
  &max_pooling1d_1_chain,
  NULL, &dense_2_dense_layer, AI_STATIC, 
  .pool_size = AI_SHAPE_2D_INIT(1, 2), 
  .pool_stride = AI_SHAPE_2D_INIT(1, 2), 
  .pool_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_1_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_1_conv2d_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_1_output),
  AI_TENSOR_LIST_OBJ_EMPTY,
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_1_layer, 0,
  NL_TYPE, 0x0, NULL,
  nl, forward_relu,
  &conv1d_1_chain,
  NULL, &max_pooling1d_1_layer, AI_STATIC, 
  .nl_params = NULL, 
)

AI_TENSOR_CHAIN_OBJ_DECLARE(
  conv1d_1_conv2d_chain, AI_STATIC_CONST, 4,
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &input_0_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 1, &conv1d_1_conv2d_output),
  AI_TENSOR_LIST_OBJ_INIT(AI_FLAG_NONE, 3, &conv1d_1_conv2d_weights, &conv1d_1_conv2d_bias, NULL),
  AI_TENSOR_LIST_OBJ_EMPTY
)

AI_LAYER_OBJ_DECLARE(
  conv1d_1_conv2d_layer, 0,
  CONV2D_TYPE, 0x0, NULL,
  conv2d, forward_conv2d_if32of32wf32,
  &conv1d_1_conv2d_chain,
  NULL, &conv1d_1_layer, AI_STATIC, 
  .groups = 1, 
  .filter_stride = AI_SHAPE_2D_INIT(1, 1), 
  .dilation = AI_SHAPE_2D_INIT(1, 1), 
  .filter_pad = AI_SHAPE_INIT(4, 0, 0, 0, 0), 
  .in_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
  .out_ch_format = AI_LAYER_FORMAT_CHANNEL_LAST_VALID, 
)


#if (AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 102148, 1, 1),
    102148, NULL, NULL),
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 3568, 1, 1),
    3568, NULL, NULL),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_ISD30_IN_NUM, &input_0_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_ISD30_OUT_NUM, &dense_3_dense_output),
  &conv1d_1_conv2d_layer, 0, NULL)

#else

AI_NETWORK_OBJ_DECLARE(
  AI_NET_OBJ_INSTANCE, AI_STATIC,
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 102148, 1, 1),
      102148, NULL, NULL)
  ),
  AI_BUFFER_ARRAY_OBJ_INIT_STATIC(
  	AI_FLAG_NONE, 1,
    AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
      AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 3568, 1, 1),
      3568, NULL, NULL)
  ),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_ISD30_IN_NUM, &input_0_output),
  AI_TENSOR_LIST_IO_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_ISD30_OUT_NUM, &dense_3_dense_output),
  &conv1d_1_conv2d_layer, 0, NULL)

#endif	/*(AI_TOOLS_API_VERSION < AI_TOOLS_API_VERSION_1_5)*/


/******************************************************************************/
AI_DECLARE_STATIC
ai_bool network_isd30_configure_activations(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_activations_map(g_network_isd30_activations_map, 1, params)) {
    /* Updating activations (byte) offsets */
    
    input_0_output_array.data = AI_PTR(g_network_isd30_activations_map[0] + 0);
    input_0_output_array.data_start = AI_PTR(g_network_isd30_activations_map[0] + 0);
    
    conv1d_1_conv2d_output_array.data = AI_PTR(g_network_isd30_activations_map[0] + 240);
    conv1d_1_conv2d_output_array.data_start = AI_PTR(g_network_isd30_activations_map[0] + 240);
    
    conv1d_1_output_array.data = AI_PTR(g_network_isd30_activations_map[0] + 240);
    conv1d_1_output_array.data_start = AI_PTR(g_network_isd30_activations_map[0] + 240);
    
    max_pooling1d_1_output_array.data = AI_PTR(g_network_isd30_activations_map[0] + 240);
    max_pooling1d_1_output_array.data_start = AI_PTR(g_network_isd30_activations_map[0] + 240);
    
    dense_2_dense_output_array.data = AI_PTR(g_network_isd30_activations_map[0] + 1776);
    dense_2_dense_output_array.data_start = AI_PTR(g_network_isd30_activations_map[0] + 1776);
    
    dense_2_output_array.data = AI_PTR(g_network_isd30_activations_map[0] + 0);
    dense_2_output_array.data_start = AI_PTR(g_network_isd30_activations_map[0] + 0);
    
    dense_3_dense_output_array.data = AI_PTR(g_network_isd30_activations_map[0] + 256);
    dense_3_dense_output_array.data_start = AI_PTR(g_network_isd30_activations_map[0] + 256);
    
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_ACTIVATIONS);
  return false;
}



/******************************************************************************/
AI_DECLARE_STATIC
ai_bool network_isd30_configure_weights(
  ai_network* net_ctx, const ai_network_params* params)
{
  AI_ASSERT(net_ctx)

  if (ai_platform_get_weights_map(g_network_isd30_weights_map, 1, params)) {
    /* Updating weights (byte) offsets */
    
    conv1d_1_conv2d_weights_array.format |= AI_FMT_FLAG_CONST;
    conv1d_1_conv2d_weights_array.data = AI_PTR(g_network_isd30_weights_map[0] + 0);
    conv1d_1_conv2d_weights_array.data_start = AI_PTR(g_network_isd30_weights_map[0] + 0);
    
    conv1d_1_conv2d_bias_array.format |= AI_FMT_FLAG_CONST;
    conv1d_1_conv2d_bias_array.data = AI_PTR(g_network_isd30_weights_map[0] + 3072);
    conv1d_1_conv2d_bias_array.data_start = AI_PTR(g_network_isd30_weights_map[0] + 3072);
    
    dense_2_dense_weights_array.format |= AI_FMT_FLAG_CONST;
    dense_2_dense_weights_array.data = AI_PTR(g_network_isd30_weights_map[0] + 3328);
    dense_2_dense_weights_array.data_start = AI_PTR(g_network_isd30_weights_map[0] + 3328);
    
    dense_2_dense_bias_array.format |= AI_FMT_FLAG_CONST;
    dense_2_dense_bias_array.data = AI_PTR(g_network_isd30_weights_map[0] + 101632);
    dense_2_dense_bias_array.data_start = AI_PTR(g_network_isd30_weights_map[0] + 101632);
    
    dense_3_dense_weights_array.format |= AI_FMT_FLAG_CONST;
    dense_3_dense_weights_array.data = AI_PTR(g_network_isd30_weights_map[0] + 101888);
    dense_3_dense_weights_array.data_start = AI_PTR(g_network_isd30_weights_map[0] + 101888);
    
    dense_3_dense_bias_array.format |= AI_FMT_FLAG_CONST;
    dense_3_dense_bias_array.data = AI_PTR(g_network_isd30_weights_map[0] + 102144);
    dense_3_dense_bias_array.data_start = AI_PTR(g_network_isd30_weights_map[0] + 102144);
    
    return true;
  }
  AI_ERROR_TRAP(net_ctx, INIT_FAILED, NETWORK_WEIGHTS);
  return false;
}


/**  PUBLIC APIs SECTION  *****************************************************/


AI_DEPRECATED
AI_API_ENTRY
ai_bool ai_network_isd30_get_info(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_NETWORK_ISD30_MODEL_NAME,
      .model_signature   = AI_NETWORK_ISD30_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 36417,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .params            = AI_STRUCT_INIT,
      .activations       = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}


AI_API_ENTRY
ai_bool ai_network_isd30_get_report(
  ai_handle network, ai_network_report* report)
{
  ai_network* net_ctx = AI_NETWORK_ACQUIRE_CTX(network);

  if (report && net_ctx)
  {
    ai_network_report r = {
      .model_name        = AI_NETWORK_ISD30_MODEL_NAME,
      .model_signature   = AI_NETWORK_ISD30_MODEL_SIGNATURE,
      .model_datetime    = AI_TOOLS_DATE_TIME,
      
      .compile_datetime  = AI_TOOLS_COMPILE_TIME,
      
      .runtime_revision  = ai_platform_runtime_get_revision(),
      .runtime_version   = ai_platform_runtime_get_version(),

      .tool_revision     = AI_TOOLS_REVISION_ID,
      .tool_version      = {AI_TOOLS_VERSION_MAJOR, AI_TOOLS_VERSION_MINOR,
                            AI_TOOLS_VERSION_MICRO, 0x0},
      .tool_api_version  = AI_STRUCT_INIT,

      .api_version            = ai_platform_api_get_version(),
      .interface_api_version  = ai_platform_interface_api_get_version(),
      
      .n_macc            = 36417,
      .n_inputs          = 0,
      .inputs            = NULL,
      .n_outputs         = 0,
      .outputs           = NULL,
      .map_signature     = AI_MAGIC_SIGNATURE,
      .map_weights       = AI_STRUCT_INIT,
      .map_activations   = AI_STRUCT_INIT,
      .n_nodes           = 0,
      .signature         = 0x0,
    };

    if (!ai_platform_api_get_network_report(network, &r)) return false;

    *report = r;
    return true;
  }
  return false;
}

AI_API_ENTRY
ai_error ai_network_isd30_get_error(ai_handle network)
{
  return ai_platform_network_get_error(network);
}

AI_API_ENTRY
ai_error ai_network_isd30_create(
  ai_handle* network, const ai_buffer* network_config)
{
  return ai_platform_network_create(
    network, network_config, 
    &AI_NET_OBJ_INSTANCE,
    AI_TOOLS_API_VERSION_MAJOR, AI_TOOLS_API_VERSION_MINOR, AI_TOOLS_API_VERSION_MICRO);
}

AI_API_ENTRY
ai_error ai_network_isd30_create_and_init(
  ai_handle* network, const ai_handle activations[], const ai_handle weights[])
{
    ai_error err;
    ai_network_params params;

    err = ai_network_isd30_create(network, AI_NETWORK_ISD30_DATA_CONFIG);
    if (err.type != AI_ERROR_NONE)
        return err;
    if (ai_network_isd30_data_params_get(&params) != true) {
        err = ai_network_isd30_get_error(*network);
        return err;
    }
#if defined(AI_NETWORK_ISD30_DATA_ACTIVATIONS_COUNT)
    if (activations) {
        /* set the addresses of the activations buffers */
        for (int idx=0;idx<params.map_activations.size;idx++)
            AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_activations, idx, activations[idx]);
    }
#endif
#if defined(AI_NETWORK_ISD30_DATA_WEIGHTS_COUNT)
    if (weights) {
        /* set the addresses of the weight buffers */
        for (int idx=0;idx<params.map_weights.size;idx++)
            AI_BUFFER_ARRAY_ITEM_SET_ADDRESS(&params.map_weights, idx, weights[idx]);
    }
#endif
    if (ai_network_isd30_init(*network, &params) != true) {
        err = ai_network_isd30_get_error(*network);
    }
    return err;
}

AI_API_ENTRY
ai_buffer* ai_network_isd30_inputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    ((ai_network *)network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_inputs_get(network, n_buffer);
}

AI_API_ENTRY
ai_buffer* ai_network_isd30_outputs_get(ai_handle network, ai_u16 *n_buffer)
{
  if (network == AI_HANDLE_NULL) {
    network = (ai_handle)&AI_NET_OBJ_INSTANCE;
    ((ai_network *)network)->magic = AI_MAGIC_CONTEXT_TOKEN;
  }
  return ai_platform_outputs_get(network, n_buffer);
}

AI_API_ENTRY
ai_handle ai_network_isd30_destroy(ai_handle network)
{
  return ai_platform_network_destroy(network);
}

AI_API_ENTRY
ai_bool ai_network_isd30_init(
  ai_handle network, const ai_network_params* params)
{
  ai_network* net_ctx = ai_platform_network_init(network, params);
  if (!net_ctx) return false;

  ai_bool ok = true;
  ok &= network_isd30_configure_weights(net_ctx, params);
  ok &= network_isd30_configure_activations(net_ctx, params);

  ok &= ai_platform_network_post_init(network);

  return ok;
}


AI_API_ENTRY
ai_i32 ai_network_isd30_run(
  ai_handle network, const ai_buffer* input, ai_buffer* output)
{
  return ai_platform_network_process(network, input, output);
}

AI_API_ENTRY
ai_i32 ai_network_isd30_forward(ai_handle network, const ai_buffer* input)
{
  return ai_platform_network_process(network, input, NULL);
}



#undef AI_NETWORK_ISD30_MODEL_SIGNATURE
#undef AI_NET_OBJ_INSTANCE
#undef AI_TOOLS_DATE_TIME
#undef AI_TOOLS_COMPILE_TIME

