//
//  Timer.h
//  D02L05CPPObject
//
//  Created by plter on 13-12-1.
//  Copyright (c) 2013年 plter. All rights reserved.
//

#ifndef __D02L05CPPObject__Timer__
#define __D02L05CPPObject__Timer__

#include <iostream>
#include "Object.h"

class Timer:public Object {
    
public:
    
    Timer(Object* target,CallBack cb);
    
    inline void setTimerHandler(CallBack timeHandler){
        _timerHandler = timeHandler;
    };
    
    inline CallBack getTimerHandler(){
        return _timerHandler;
    };
    
    virtual ~Timer(){};
    
    
private:
    CallBack _timerHandler;
    Object * _target;
};

#endif /* defined(__D02L05CPPObject__Timer__) */
