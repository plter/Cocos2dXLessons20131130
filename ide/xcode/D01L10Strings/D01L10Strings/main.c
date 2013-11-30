//
//  main.c
//  D01L10Strings
//
//  Created by plter on 13-11-30.
//  Copyright (c) 2013年 plter. All rights reserved.
//

#include <stdio.h>
#include <string.h>


void strcatExample(){
    char * a ="Hello";
    char * b ="eoe";
    
    char c[20];
    memset(c, 0, 20);
    
    strcat(c, a);
    strcat(c, " ");
    strcat(c, b);
    
    printf("%s\n",c);
}

void strcmpExample(){
    
    char * a = "Hello";
    char * b = "Hello";
    
    if(strcmp(a, b)==0){
        printf("Same\n");
    }
    
}

int main(int argc, const char * argv[])
{

//    strcatExample();
//    strcmpExample();
    
    char * a = "Hello ";
//    char buf[20];
//    memset(buf, 0, 20);
//    
//    sprintf(buf, "%s %d",a,100);
//    
//    printf("%s\n",buf);
    
    printf("%c\n",a[0]);
    
    return 0;
}

