#include <iostream>
#include "third.h"
extern int Sum(int a, int b);
int main(int argc, char** argv)
{
    int result = Sum(1, 2);
    std::cout<< "result: "<< result <<std::endl;
}