//
//  SMVCFacadeTestCase.cpp
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#include <iostream>

#include "CCMutableDictionary.h"
#include "CCObject.h"
#include "CCArray.h"
#include "TestCase.h"
#include "SMVCFacadeTestCase.h"

#include "SMVCFacadeTestCase.h"
#include "SMVCInclude.h"

using namespace cocos2d;

namespace guangshun {
    
SMVCFacadeTestCase::SMVCFacadeTestCase() {
    TestCase::TestCaseFunc f = 
        (TestCase::TestCaseFunc)(&SMVCFacadeTestCase::testFacadeBasic);
    this->addTest(f);
}

SMVCFacadeTestCase::~SMVCFacadeTestCase() {
    
}

void SMVCFacadeTestCase::setUp() {
    SimpleMVC::SMVCRetrieveFacade();
}
    
void SMVCFacadeTestCase::tearDown() {
    SimpleMVC::SMVCResetFacade();
}

class A:public SimpleMVC::SMVCProxy {
public:
    A(std::string name):SimpleMVC::SMVCProxy(name) {
        SimpleMVC::SMVCRetrieveFacade()->mModel->registerProxy(this);
        SimpleMVC::SMVCNotifier *n = new SimpleMVC::SMVCNotifier("DUMMY_EVENT", this, (SMVCObject::SMVCObjectCallback)(&A::onGetData));
        SimpleMVC::SMVCRetrieveFacade()->registerNotifier(n);
    }
    void onGetData(SMVCObject* dataObject) {
        assert ((int)dataObject == 1);
    }
    
};
    
bool SMVCFacadeTestCase::testFacadeBasic() {
    A* a = new A("DUMMY_PROXY");
    SimpleMVC::SMVCRetrieveFacade()->sendNotification("DUMMY_EVENT", (SimpleMVC::SMVCObject*)1);
    a->release();
    return true;
}
    
}