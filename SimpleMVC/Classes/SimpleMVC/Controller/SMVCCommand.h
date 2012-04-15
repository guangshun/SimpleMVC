//
//  SMVCCommand.h
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#ifndef SimpleMVC_SMVCCommand_h
#define SimpleMVC_SMVCCommand_h

namespace SimpleMVC {
    class SMVCCommand : public SMVCObject {
    public:
        SMVCCommand(std::string name);
        std::string getName() const;
        ~SMVCCommand();
        std::string mName;
    };
}

#endif
