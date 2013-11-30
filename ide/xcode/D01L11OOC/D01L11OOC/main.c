//
//  main.c
//  D01L11OOC
//
//  Created by plter on 13-11-30.
//  Copyright (c) 2013 plter. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Object.h"
#include "People.h"



int main(int argc, const char * argv[])
{

//    Object* obj = ObjectAlloc(Object);
//    ObjectInit(obj);
//    
//    printf("%d\n",ObjectRetainCount(obj));
//    
//    ObjectRelease(obj);
    
    People * p = ObjectAlloc(People);
    PeopleInit(p, 20, "ZhangSan");
    
    printf("%d\n",PeopleGetAge(p));
    
    ObjectRelease((Object*)p);
    return 0;
}

