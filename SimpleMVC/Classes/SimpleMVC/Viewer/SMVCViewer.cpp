//
//  SMVCViewer.cpp
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#include <iostream>

#include "CCObject.h"
#include "CCMutableDictionary.h"
#include "SMVCObject.h"
#include "SMVCMediator.h"
#include "SMVCViewer.h"

using namespace cocos2d;

namespace SimpleMVC {
    SMVCViewer::SMVCViewer() {
        this->mMediators = new MEDIATOR_TYPE();
    }
    
    SMVCViewer::~SMVCViewer() {
        if (this->mMediators->begin()) {
            SMVCObject * o;
            while ((o = this->mMediators->next())) {
                o->release();
            }
        }
        this->mMediators->release();
    }
    
    void SMVCViewer::registerMediator(SMVCMediator* mediator) {
        this->mMediators->setObject(mediator, mediator->getName());
    }    
}
