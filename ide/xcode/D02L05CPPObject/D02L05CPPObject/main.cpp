//
//  main.cpp
//  D02L05CPPObject
//
//  Created by plter on 13-12-1.
//  Copyright (c) 2013年 plter. All rights reserved.
//

#include <iostream>
#include "Object.h"
#include "Timer.h"


class Main:public Object {
    
    
public:
    Main(){
        //&Main::timerHandler 获取该函数的地址
        //(CallBack)(&Main::timerHandler) 强制类型转成CallBack
        timer = new Timer(this, Callback_Selector(Main::timerHandler) );
    };
    
    virtual void timerHandler(){
        printf("Callback execute\n");
    };
    
    virtual ~Main(){
        
    }
    
private:
    Timer *timer;
    
};



int main(int argc, const char * argv[])
{
//    Object * obj = new Object();
//    obj->release();
    
    new Main();
    return 0;
}

