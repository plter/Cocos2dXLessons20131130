//
//  main.c
//  D01L04Scope
//
//  Created by plter on 13-11-30.
//  Copyright (c) 2013年 plter. All rights reserved.
//

#include <stdio.h>


int max(int a,int b){
    return a>b?a:b;
}

char* getWords(){
    char buf[20];
    buf[0] = 'H';
    buf[1] = 'e';
    buf[2] = '\0';
    return buf;
}


int main(int argc, const char * argv[])
{
//    {
//        int a = 10;
//        int b = 20;
//    }
    
    do{
        int a = 10;
    }while(0);
    
    
    
    
    char * words = getWords();

    // insert code here...
    printf("Hello, World %s!\n",words);
    return 0;
}

