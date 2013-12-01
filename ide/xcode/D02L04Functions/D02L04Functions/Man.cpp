//
//  Man.cpp
//  D02L04Functions
//
//  Created by plter on 13-12-1.
//  Copyright (c) 2013年 plter. All rights reserved.
//

#include "Man.h"

Man::Man(int age):People(age){
    
}


void Man::sayHello(){
    People::sayHello();
    
    printf("Man sayHello\n");
}

void Man::eat(){
    printf("Man eat\n");
}

Man::~Man(){
    
}