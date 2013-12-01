//
//  Button.cpp
//  D02L06Operator
//
//  Created by plter on 13-12-1.
//  Copyright (c) 2013 plter. All rights reserved.
//

#include "Button.h"


Button::Button(ClickHandler * handler){
    _clickHandler = handler;
    (*_clickHandler)();
}