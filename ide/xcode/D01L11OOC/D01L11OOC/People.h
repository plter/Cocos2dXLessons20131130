//
//  People.h
//  D01L11OOC
//
//  Created by plter on 13-11-30.
//  Copyright (c) 2013年 plter. All rights reserved.
//

#ifndef D01L11OOC_People_h
#define D01L11OOC_People_h

#include "Object.h"


#define PEOPLE_CONTENT \
    int age;\
    char *name;


typedef struct{
    OBJECT_CONTENT
    PEOPLE_CONTENT
} People;

void PeopleInit(People* p,int age,char* name);
int PeopleGetAge(People* p);
void PeopleOnDestory(People *p);


#endif
