#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: 。好
 @Date: 2023/10/25 13:55:11

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

	  https://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/
#ifndef _BASICDATASERVICE_H_
#define _BASICDATASERVICE_H_

#include <list>
#include "domain/dto/supplierLinkman/BasicDataDTO.h"
#include "domain/vo/supplierLinkman/BasicDataVO.h"

/**
 * BasicData的Service层
 * 负责人：。好
 */
class BasicDataService 
{
public:
	BasicDataListDTO::Wrapper listAll();
};

#endif // !_BASICDATASERVICE_H_