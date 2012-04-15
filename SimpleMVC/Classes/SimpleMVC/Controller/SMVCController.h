//
//  SMVCController.h
//  SimpleMVC
//
//  Created by yong liu on 4/14/12.
//  Copyright (c) 2012 guangshun. All rights reserved.
//

#ifndef SimpleMVC_SMVCController_h
#define SimpleMVC_SMVCController_h

namespace SimpleMVC {
    
    class SMVCController: public SMVCObject{
    private:
        typedef cocos2d::CCMutableDictionary<std::string, SMVCObject*> COMMAND_TYPE; 
    public:
        SMVCController();
        ~SMVCController();
        void registerCommand(SMVCCommand* command);
        
        COMMAND_TYPE *mCommands;

    };
}


#endif
