/*******************************************************************************
    Copyright (c) 2011 Yahoo! Inc. All rights reserved.

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License. See accompanying LICENSE file.

    The Initial Developer of the Original Code is Shravan Narayanamurthy.
******************************************************************************/
/*
 * Filter_Updater.cpp
 *
 * A filter in the TBB pipeline. Delegates the task to be done to
 * refiner.update()
 *
 *  Created on: 6 Apr, 2009
 *      
 */

#ifndef FILTER_UPDATER_H_
#define FILTER_UPDATER_H_

#include "tbb/pipeline.h"
#include "Model_Refiner.h"

using namespace tbb;

class Filter_Updater: public filter {
private:
    Model_Refiner& _refiner;

public:
    Filter_Updater(Model_Refiner&);
    virtual ~Filter_Updater();

    void* operator ()(void *);
};

#endif /* FILTER_UPDATER_H_ */
