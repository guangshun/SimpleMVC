//
//  SMVCProxy.h
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#ifndef SimpleMVC_SMVCProxy_h
#define SimpleMVC_SMVCProxy_h

#include "CCString.h"

namespace SimpleMVC {
    class SMVCProxy : public SMVCObject {
    public:
        SMVCProxy(std::string name);
        std::string getName() const;
        ~SMVCProxy();
        std::string mName;
    };
}

#endif
