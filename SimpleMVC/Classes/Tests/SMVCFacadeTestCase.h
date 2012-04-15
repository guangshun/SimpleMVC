//
//  SMVCFacadeTestCase.h
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#ifndef SimpleMVC_SMVCFacadeTestCase_h
#define SimpleMVC_SMVCFacadeTestCase_h

namespace guangshun {
    class SMVCFacadeTestCase : public TestCase {
    public:
        SMVCFacadeTestCase();
        ~SMVCFacadeTestCase();
        virtual void setUp();
        virtual void tearDown();
        
        bool testFacadeBasic();
    };
    
}

#endif
