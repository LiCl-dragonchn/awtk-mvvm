﻿/**
 * File:   model_array.h
 * Author: AWTK Develop Team
 * Brief:  model_array
 *
 * Copyright (c) 2019 - 2019  Guangzhou ZHIYUAN Electronics Co.,Ltd.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * License file for more details.
 *
 */

/**
 * History:
 * ================================================================
 * 2019-03-12 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#ifndef TK_MODEL_ARRAY_H
#define TK_MODEL_ARRAY_H

#include "tkc/darray.h"
#include "mvvm/base/model.h"

BEGIN_C_DECLS

struct _model_array_t;
typedef struct _model_array_t model_array_t;

/**
 * @class model_array_t
 * @parent model_t
 *
 * array model
 *
 */
struct _model_array_t {
  model_t model;

  darray_t array;
};

/**
 * @method model_array_create
 * 创建array模型对象。
 *
 * @param {navigator_request_t*} req 请求参数。
 *
 * @return {model_t*} 返回model对象。
 */
model_t* model_array_create(navigator_request_t* req);

/**
 * @method model_array_clear
 * 清除全部submodel。
 *
 * @param {model_t*} model model对象。
 *
 * @return {ret_t} 返回RET_OK表示成功，否则表示失败。
 */
ret_t model_array_clear(model_t* model);

/**
 * @method model_array_add
 * 增加一个submodel。
 *
 *>submodel由model负责释放。
 *
 * @param {model_t*} model model对象。
 * @param {model_t*} submodel submodel对象。
 *
 * @return {ret_t} 返回RET_OK表示成功，否则表示失败。
 */
ret_t model_array_add(model_t* model, model_t* submodel);

#define MODEL_ARRAY(model) ((model_array_t*)(model))

END_C_DECLS

#endif /*TK_MODEL_ARRAY_H*/