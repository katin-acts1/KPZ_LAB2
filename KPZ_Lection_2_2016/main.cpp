#include <iostream>
#include "laboratory2.h"
using namespace std;
// Прості функції в С++
void SimpleSwap (int a, int b)
{
    int tmp = 0;
    tmp = a;
    a = b;
    b = tmp;

}

void SimpleSwap (int *a, int *b)
{
    int tmp = 0;
    tmp = *a;
    *a = *b;
    *b = tmp;

}

void SimpleSwapRef (int &refA, int &refB)
{
    int tmp = 0;
    tmp = refA;
    refA = refB;
    refB = tmp;

}


int main()
{
//    cout << "Hello World!" << endl;
    // Tez 2.2
    L2::Laboratory2 laboratory2;
    laboratory2.ShowTests();
    L2::LDepartment department;
    department.DepartmentTest();
    //department.ShowTests();
    laboratory2.ShowTestsSimvol();
//    2.2.1 Визначення покажчика, тотожність покажчкиа та
//            масиву (скорочений варіант)
  const int ArrSize = 7;
int ArrayStack [ArrSize] = {0,1,2,3,4,5,6};
for (int i=0; i<ArrSize; i++)
    cout<< ArrayStack[i];

int ArrSizeVar = 7;
int ArrayStackFolt [ArrSizeVar];

for (int i=0; i<ArrSizeVar; i++)
{
    ArrayStackFolt[i] = 7;
    cout<< ArrayStackFolt[i];

}
int * ArrayHeap = new int [ArrSizeVar];
for (int i=0; i<ArrSizeVar; i++)
 {
    ArrayHeap[i] = i;
    cout<< ArrayHeap[i];
}
for (int i=0; i<ArrSizeVar; i++)
 {
    *(ArrayHeap+i) = i;
    cout<< *(ArrayHeap+i);
}
cout<<endl;
cout <<"2.2 Синтаксис покажчика----------"<<endl;
int *IntPointer = new int;
int *IntPointer1 = new int;
cout <<*IntPointer<<"  This is memory contanse "<<endl;
cout <<IntPointer<<"  This is adress!!!"<<endl;
*IntPointer = 7;
cout <<*IntPointer<<"  This is memory contanse"<<endl;
cout <<IntPointer<<"  This is adress!!!"<<endl;
cout <<IntPointer<<"-----------------"<<endl;
int IntVar0 = 22, IntVar1 = 77;
cout <<IntVar1<<"   This contense of IntVar 1"<<endl;
cout <<&IntVar1<<"  This is adress of IntVar 1!!!"<<endl;
cout <<IntVar0<<"   This contense of IntVar 1"<<endl;
cout <<&IntVar0<<"  This is adress of IntVar 1!!!"<<endl;

 IntPointer = &IntVar0;
 IntPointer1 = &IntVar0;
cout <<"  Connect IntVar0 and IntPointer, IntPointer1   "<<endl;
 cout <<IntVar0<<"  This contense of IntVar0"<<endl;
 cout <<&IntVar0<<" This is adress of IntVar0!!!"<<endl;
 cout <<*IntPointer<<"  This contense of IntPointer"<<endl;
 cout <<IntPointer<<" This is adress of  IntPointer!!!"<<endl;
 cout <<*IntPointer1<<"  This contense of IntPointer1"<<endl;
 cout <<IntPointer1<<" This is adress of  IntPointer1!!!"<<endl;

 int a = 7, b = 0;

 cout << "A = "<<a<<"B ="<<b<<endl;
 SimpleSwap (a, b);
 cout << "A = "<<a<<"B ="<<b<<endl;

 cout << "A = "<<a<<"B ="<<b<<endl;
 SimpleSwap (&a, &b);
 cout << "A = "<<a<<"B ="<<b<<endl;

 L2::Laboratory2::SimpleSwap(&a, &b);
 cout << "A = "<<a<<"B ="<<b<<endl;


 cout <<"2.3 Синтаксис посилання----------"<<endl;
a = 888;
 int &Ref1 = a;
 int &Ref2 = a;
  cout << "Ref2 ="<<Ref2<<"  Ref1 ="<<Ref1<<"  a =" <<a<<endl;
Ref1 = 999;
cout << "Ref2 ="<<Ref2<<"  Ref1 ="<<Ref1<<"  a =" <<a<<endl;
a=555;
b=222;
 cout << "A ="<<a<<"   B ="<<b<<endl;
SimpleSwapRef(a,b);
 cout << "A ="<<a<<"   B ="<<b<<endl;
return 0;
}

