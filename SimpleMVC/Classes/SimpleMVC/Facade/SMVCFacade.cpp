//
//  Facade.cpp
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#include <iostream>
#include <cassert>
#include "CCMutableDictionary.h"
#include "SMVCObject.h"
#include "SMVCProxy.h"
#include "SMVCModel.h"
#include "SMVCMediator.h"
#include "SMVCViewer.h"
#include "SMVCCommand.h"
#include "SMVCController.h"
#include "SMVCNotifier.h"
#include "SMVCFacade.h"

using namespace cocos2d;

namespace SimpleMVC {
 
    SMVCFacade::SMVCFacade() {
        this->mModel = new SMVCModel();
        this->mViewer = new SMVCViewer();
        this->mController = new SMVCController();
        this->mNotifiers = new NOTIFIER_MAP_TYPE();        
    }
    
    SMVCFacade::~SMVCFacade() {
        this->mModel->release();
        this->mViewer->release();
        this->mController->release();
        
        if (this->mNotifiers->begin()) {
            SMVCObject * o;
            while ((o = this->mNotifiers->next())) {
                o->release();
            }
        }
        this->mNotifiers->release();
    }
    
    void SMVCFacade::registerNotifier(SMVCNotifier* notifier) {
        this->mNotifiers->setObject(notifier, notifier->getEvent());
    }
    
    void SMVCFacade::sendNotification(SMVCNotifier::SMVCEVENT_NAME event, SMVCObject * dataObject) {
        SMVCNotifier * handler = this->mNotifiers->objectForKey(event);
        assert (handler);
        handler->mCallback(dataObject);
    }
    
    SMVCObject* SMVCFacade::retrieveInstance(std::string instName) {
        SMVCObject* ret;
        ret = this->mModel->mProxies->objectForKey(instName);
        if (ret) {
            return ret;
        }
        ret = this->mViewer->mMediators->objectForKey(instName);
        if (ret) {
            return ret;
        }
        ret = this->mController->mCommands->objectForKey(instName);
        assert (ret);
        return ret;
    }
    
    void SMVCFacade::resetViewer() {
        this->mViewer->release();
        this->mViewer = new SMVCViewer();
    }
    
    static SMVCFacade* _aSMVCFacade = NULL;
    SMVCFacade* SMVCRetrieveFacade() {
        if (!_aSMVCFacade)
            _aSMVCFacade = new SMVCFacade();
        return _aSMVCFacade;
    }
    
    void SMVCResetFacade() {
        _aSMVCFacade->release();
        _aSMVCFacade = NULL;
    }
}


