//
//  SMVCMediator.h
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#ifndef SimpleMVC_SMVCMediator_h
#define SimpleMVC_SMVCMediator_h


namespace SimpleMVC {
    class SMVCMediator : public SMVCObject {
    public:
        SMVCMediator(std::string name);
        std::string getName() const;
        ~SMVCMediator();
        std::string mName;
    };
}

#endif
