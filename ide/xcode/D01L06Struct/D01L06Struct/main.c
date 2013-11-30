//
//  main.c
//  D01L06Struct
//
//  Created by plter on 13-11-30.
//  Copyright (c) 2013年 plter. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


#define ALLOC(TYPE) malloc(sizeof(TYPE))


typedef struct{
    int age;
    char * name;
} People;


void PeopleAlloc(People ** p){
    (*p) = malloc(sizeof(People));
}


int PeopleInit(int age,char* name,People* p){
    p->age = age;
    p->name = name;
    return 0;
}

void PeopleDelete(People * p){
    free(p);
}



int main(int argc, const char * argv[])
{
    
//    People p;
//    p.age = 20;
//    p.name = "ZhangSan";
//    
//    People * p1 = &p;
//    p1->age = 18;
    
    People *p;
    PeopleAlloc(&p);
    PeopleInit(20, "ZhangSan", p);
    
    printf("%d\n",p->age);
    
    PeopleDelete(p);
    
    

    // insert code here...
//    printf("%d\n",p.age);
    return 0;
}

