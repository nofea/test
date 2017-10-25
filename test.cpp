#include "test.h"

void ThisIsAClass::HelloWorld()
{
   std::cout << "Hello World";
}

int main()
{
    ThisIsAClass a;
    a.HelloWorld();
    return(1);
}