//
//  People.cpp
//  D02L03HelloCPP
//
//  Created by plter on 13-12-1.
//  Copyright (c) 2013 plter. All rights reserved.
//

#include "eoe/People.h"


//struct B {
//};

//extern "C" {
//    struct A{
//        
//    };
//}


namespace eoe {
    People::People(int age,char *name){
        _name = name;
        _age = age;
    }
    
    void People::setAge(int age){
        _age = age;
    }
    
    char * People::getName(){
        return _name;
    }
    
    People::~People(){
        printf("Delete People\n");
    }
}
