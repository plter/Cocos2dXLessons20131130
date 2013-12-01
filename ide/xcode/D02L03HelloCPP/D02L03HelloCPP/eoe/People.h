//
//  People.h
//  D02L03HelloCPP
//
//  Created by plter on 13-12-1.
//  Copyright (c) 2013年 plter. All rights reserved.
//

#ifndef __D02L03HelloCPP__People__
#define __D02L03HelloCPP__People__

#include <iostream>


namespace eoe {
    class People {
        
    public:
        People(int age,char * name);
        
        inline int getAge(){
            return _age;
        };
        
        char * getName();
        
        virtual ~People();
        
        void setAge(int age);
        
    private:
        int _age;
        char* _name;
    };
    
}


#endif /* defined(__D02L03HelloCPP__People__) */
