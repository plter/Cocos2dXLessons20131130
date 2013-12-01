//
//  Button.h
//  D02L06Operator
//
//  Created by plter on 13-12-1.
//  Copyright (c) 2013年 plter. All rights reserved.
//

#ifndef __D02L06Operator__Button__
#define __D02L06Operator__Button__

#include <iostream>


class ClickHandler {
    
public:
    virtual void operator()()=0;
    
    virtual ~ClickHandler(){};
};


class Button {
    
public:
    Button(ClickHandler *handler);
    virtual ~Button(){};
    
    
private:
    ClickHandler * _clickHandler;
};

#endif /* defined(__D02L06Operator__Button__) */
