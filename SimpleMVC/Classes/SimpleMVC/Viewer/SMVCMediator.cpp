//
//  SMVCMediator.cpp
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#include <iostream>

#include <string>
#include "CCString.h"
#include "CCObject.h"
#include "SMVCObject.h"
#include "SMVCMediator.h"

using namespace cocos2d;

namespace SimpleMVC {
    SMVCMediator::SMVCMediator(std::string name) {
        this->mName = name;
    }
    
    SMVCMediator::~SMVCMediator() {
        
    }
    
    std::string SMVCMediator::getName() const {
        return this->mName;
    }
}
