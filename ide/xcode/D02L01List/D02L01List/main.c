//
//  main.c
//  D02L01List
//
//  Created by plter on 13-12-1.
//  Copyright (c) 2013 plter. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Item{
    struct Item* next;
    void *data;
} Item;


int main(int argc, const char * argv[])
{

    Item * begin = malloc(sizeof(Item));
    
    begin->data = "Hello";
    
    Item *pre;
    Item *current;
    
    pre = begin;
    
    for (int i=0; i<100; i++) {
        char * buf = malloc(sizeof(20));
        memset(buf, 0, 20);
        sprintf(buf, "Hello %d",i);
        
        current = malloc(sizeof(Item));
        current->data = buf;
        current->next = NULL;
        
        pre->next = current;
        pre = current;
    }
    
    
    current = begin;
    while (current!=NULL) {
        printf("%s\n",current->data);
        
        current = current->next;
    }
    
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

