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
    TestCase::TestCaseFunc f = (TestCase::TestCaseFunc*)this->testFacadeBasic;
    //TestCase::TestCaseFunc f = NULL;
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

bool SMVCFacadeTestCase::testFacadeBasic() {
    return true;
}
}