#include "test.h"

void ThisIsAClass::HelloWorld()
{
   std::cout << "Hello World";
}

void Entry()
{
    ThisIsAClass a;
    a.HelloWorld();
}