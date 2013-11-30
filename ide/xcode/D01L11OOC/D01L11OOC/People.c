//
//  People.c
//  D01L11OOC
//
//  Created by plter on 13-11-30.
//  Copyright (c) 2013年 plter. All rights reserved.
//

#include <stdio.h>
#include "People.h"

void PeopleInit(People* p,int age,char* name){
    ObjectInit((Object*)p);
    
    p->age = age;
    p->name = name;
    p->onDestory = &PeopleOnDestory;
}

void PeopleOnDestory(){
    printf("Delete People\n");
    
    ObjectOnDestory();
}

int PeopleGetAge(People* p){
    return p->age;
}