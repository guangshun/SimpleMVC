//
//  SMVCModel.cpp
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#include <iostream>

#include "CCObject.h"
#include "CCMutableDictionary.h"
#include "SMVCObject.h"
#include "SMVCProxy.h"
#include "SMVCModel.h"

using namespace cocos2d;

namespace SimpleMVC {
    SMVCModel::SMVCModel() {
        this->mProxies = new PROXY_TYPE();
    }
    
    SMVCModel::~SMVCModel() {
        if (this->mProxies->begin()) {
            SMVCObject * o;
            while ((o = this->mProxies->next())) {
                o->release();
            }
        }
        this->mProxies->release();
    }
    
    void SMVCModel::registerProxy(SMVCProxy* proxy) {
        this->mProxies->setObject(proxy, proxy->getName());
    }    
}