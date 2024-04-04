/**
  ******************************************************************************
  * @file    network_isd110_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    Fri Jan 19 12:48:47 2024
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#ifndef NETWORK_ISD110_DATA_PARAMS_H
#define NETWORK_ISD110_DATA_PARAMS_H
#pragma once

#include "ai_platform.h"

/*
#define AI_NETWORK_ISD110_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_network_isd110_data_weights_params[1]))
*/

#define AI_NETWORK_ISD110_DATA_CONFIG               (NULL)


#define AI_NETWORK_ISD110_DATA_ACTIVATIONS_SIZES \
  { 14096, }
#define AI_NETWORK_ISD110_DATA_ACTIVATIONS_SIZE     (14096)
#define AI_NETWORK_ISD110_DATA_ACTIVATIONS_COUNT    (1)
#define AI_NETWORK_ISD110_DATA_ACTIVATION_1_SIZE    (14096)



#define AI_NETWORK_ISD110_DATA_WEIGHTS_SIZES \
  { 429828, }
#define AI_NETWORK_ISD110_DATA_WEIGHTS_SIZE         (429828)
#define AI_NETWORK_ISD110_DATA_WEIGHTS_COUNT        (1)
#define AI_NETWORK_ISD110_DATA_WEIGHT_1_SIZE        (429828)



#define AI_NETWORK_ISD110_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_network_isd110_activations_table[1])

extern ai_handle g_network_isd110_activations_table[1 + 2];



#define AI_NETWORK_ISD110_DATA_WEIGHTS_TABLE_GET() \
  (&g_network_isd110_weights_table[1])

extern ai_handle g_network_isd110_weights_table[1 + 2];


#endif    /* NETWORK_ISD110_DATA_PARAMS_H */
