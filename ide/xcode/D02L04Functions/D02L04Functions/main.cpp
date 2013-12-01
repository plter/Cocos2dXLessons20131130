//
//  main.cpp
//  D02L04Functions
//
//  Created by plter on 13-12-1.
//  Copyright (c) 2013 plter. All rights reserved.
//

#include <iostream>
#include "People.h"
#include "Man.h"

int main(int argc, const char * argv[])
{
//    People * p = new People();
//    p->sayHello();
//    delete p;
    
    People* m = new Man(20);
    m->sayHello();
    m->eat();
    
    printf("age : %d\n",m->getAge());
    
    delete m;
    
    
    std::cout << "Hello, World!\n";
    return 0;
}

