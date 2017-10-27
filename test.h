#ifndef _TEST_H_
#define _TEST_H_
#include <iostream>
class ThisIsAClass
{
public:
    ThisIsAClass();
    int variable;
    void HelloWorld();

};

class ThisIsAnotherClass: public ThisIsAClass
{
public:
    ThisIsAnotherClass();
};

int main();

#endif