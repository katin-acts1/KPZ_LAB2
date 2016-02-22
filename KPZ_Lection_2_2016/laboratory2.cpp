#include "laboratory2.h"
#include <iostream>
using namespace L2;
//-----------------------------

Laboratory2::Laboratory2()
{

}
Laboratory2::~Laboratory2()
{

}
void Laboratory2::ShowTestsSimvol()
{
 std::cout<<"ShowTestsSimvol"<<std::endl;
}

void Laboratory2::SimpleSwap (int *a, int *b) // NOT static
{
    int tmp = 0;
    tmp = *a;
    *a = *b;
    *b = tmp;

}

void Laboratory2::ShowTests()
{
 //  PrivateTest();
   ProtectedTest();
}
void Laboratory2::PrivateTest()
{
 std::cout<<"Private"<<std::endl;
}
void Laboratory2::ProtectedTest()
{
 std::cout<<"Protected"<<std::endl;
}
//------------------------------------

    LDepartment::LDepartment()
    {

    }
    LDepartment::~LDepartment()
    {

    }

    void LDepartment::DepartmentTest()
    {
        std::cout<<"Department Test"<<std::endl;
    }

    void LDepartment::LDTest()
    {
      ProtectedTest();
    // PrivateTest();
    }
