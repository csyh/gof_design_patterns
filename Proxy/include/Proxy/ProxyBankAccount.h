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

#ifndef GOF_PROXY_PROXY_BANK_ACCOUNT_H
#define GOF_PROXY_PROXY_BANK_ACCOUNT_H

#include <string>
#include "Proxy/IBankAccount.h"

namespace GoF {

    namespace Proxy {

        class ProxyBankAccount : public IBankAccount
        {
        public:
            ProxyBankAccount();
            ~ProxyBankAccount();

            void printBalance();
            void deposit(double);
            void withdraw(double);

            void signIn(const std::string &, const std::string &);

        private:
            bool isAuthenticated;
            IBankAccount * realAccount;

            void init();
            void authorize();

        };

    }

}

#endif
