#include "test.h"

void ThisIsAClass::HelloWorld()
{
   std::cout << "Hello World";
}

int main()
{
    ThisIsAClass a;
    a.variable = 10;
    std::cout << a.variable;
    a.HelloWorld();
    return(1);
}