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

#ifndef GOF_OBSERVER_EVENT_H
#define GOF_OBSERVER_EVENT_H

#include "Observer/Subject.h"
#include "Observer/Listener/EventListener.h"

namespace GoF {

    namespace Observer {

        namespace Event {

            class Event : public Subject
            {
            public:
                Event(const std::string &);
                virtual ~Event() = 0;

                void trigger();
                void addEventListener(Listener::EventListener *);
                void removeEventListener(Listener::EventListener *);

            };

        }

    }

}

#endif