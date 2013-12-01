//
//  main.cpp
//  D02L06Operator
//
//  Created by plter on 13-12-1.
//  Copyright (c) 2013年 plter. All rights reserved.
//

#include <iostream>
#include "Button.h"


class Point {
    
public:
    Point(float x,float y){
        setX(x);
        setY(y);
    }
    
    virtual ~Point(){
    }
    
    inline void setX(float x){
        this->x = x;
    }
    
    inline void setY(float y){
        this->y = y;
    }
    
    inline float getX(){
        return x;
    }
    
    inline float getY(){
        return y;
    }
    
    virtual void add(Point & p){
        this->x+=p.getX();
        this->y+=p.getY();
        
        p.setY(20);
    }
    
    virtual void operator+=(Point & p){
        add(p);
    }
    
private:
    float x,y;
};


class Func {
    
public:
    
    void execute(){
        printf("Function execute\n");
    }
    
    void operator()(){
        execute();
    }
};


class Handler:public ClickHandler {
    
public:
    virtual void operator()(){
        printf("Button Clicked\n");
    }
    
    virtual ~Handler(){};
};



int main(int argc, const char * argv[])
{
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//    Point *p = new Point(2,2);
//    Point *p1 = new Point(1,2);
    
//    p->add(p1);
    
//    printf("x:%f,y:%f\n",p->getX(),p->getY());
//    
//    delete p;
//    delete p1;
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//    Point p(1,2);
//    Point p1(2,2);
//    
//    p+=p1;
//    
//    printf("x:%f,y:%f,p1 y:%f\n",p.getX(),p.getY(),p1.getY());
    
//    Func f;
//    f();
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    
    
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
    
    Handler * h = new Handler();
    Button * btn = new Button(h);
    
    delete h;
    delete btn;
    return 0;
}

