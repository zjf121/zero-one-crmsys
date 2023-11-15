#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: Andrew211vibe
 @Date: 2023/11/07 17:17:17

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
#ifndef _CONTACTNAMEJSONVO_H_
#define _CONTACTNAMEJSONVO_H_

#include "../../GlobalInclude.h"
#include "../../dto/clientManage/ContactNameDTO.h"
#include "domain/vo/JsonVO.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * 客户联系人下拉列表JsonVO
 * 负责人: Andrew
 */
class ContactNameArrayJsonVO : public JsonVO<oatpp::List<ContactNameDTO::Wrapper>>
{
	DTO_INIT(ContactNameArrayJsonVO, JsonVO<oatpp::List<ContactNameDTO::Wrapper>>);
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_CONTACTNAMEJSONVO_H_