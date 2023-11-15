#pragma once
/*
 Copyright Zero One Star. All rights reserved.

 @Author: Andrew211vibe
 @Date: 2023/11/03 18:32:29

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
#ifndef _BANKACCOUNTDTO_H_
#define _BANKACCOUNTDTO_H_

#include "../../GlobalInclude.h"
#include "ApiHelper.h"

#include OATPP_CODEGEN_BEGIN(DTO)

/**
 * �����˻�����DTO
 */
class BankAccountDTO : public oatpp::DTO
{
	DTO_INIT(BankAccountDTO, DTO);
	API_DTO_FIELD_DEFAULT(Int32, bank_id, ZH_WORDS_GETTER("finance-type.bank-account.field.bank_id"));
	API_DTO_FIELD_DEFAULT(String, name, ZH_WORDS_GETTER("finance-type.bank-account.field.name"));
	API_DTO_FIELD_DEFAULT(Int32, card, ZH_WORDS_GETTER("finance-type.bank-account.field.card"));
};

#include OATPP_CODEGEN_END(DTO)

#endif // !_BANKACCOUNTDTO_H_