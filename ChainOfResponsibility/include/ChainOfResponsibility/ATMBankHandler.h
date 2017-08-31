/*
 * (C) Copyright 2017 Edson (http://edsonaraujosoares.com) and others.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * Contributors:
 *     Edson Araújo Soares
 */

#ifndef GOF_CHAIN_OF_RESPONSIBILTY_ATM_BANK_HANDLER_H
#define GOF_CHAIN_OF_RESPONSIBILTY_ATM_BANK_HANDLER_H

#include "ChainOfResponsibility/BankOption.h"

namespace GoF {

    namespace ChainOfResponsibility {

        class ATMBankHandler
        {
        public:
            ATMBankHandler();
            ATMBankHandler(BankOption);

            virtual ~ATMBankHandler();

            bool isOption(BankOption);
            void setNext(ATMBankHandler *);
            void withdraw(BankOption, double);

        protected:
            virtual double withdraw(double) const = 0;

        private:
            ATMBankHandler * next;
            BankOption bankOption;

        };

    }

}

#endif