//
//  Timer.cpp
//  D02L05CPPObject
//
//  Created by plter on 13-12-1.
//  Copyright (c) 2013年 plter. All rights reserved.
//

#include "Timer.h"

Timer::Timer(Object* target,CallBack cb){
    _timerHandler = cb;
    _target = target;
    
    (_target->*_timerHandler)();
}