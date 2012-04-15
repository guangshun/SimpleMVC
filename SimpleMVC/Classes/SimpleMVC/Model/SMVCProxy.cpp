//
//  SMVCProxy.cpp
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#include <iostream>

#include <string>
#include "CCObject.h"
#include "SMVCObject.h"
#include "SMVCProxy.h"

using namespace cocos2d;

namespace SimpleMVC {
    SMVCProxy::SMVCProxy(std::string name) {
        this->mName = name;
    }
    
    SMVCProxy::~SMVCProxy() {
        
    }
    
    std::string SMVCProxy::getName() const {
        return this->mName;
    }
}
