#ifndef LABORATORY2_H
#define LABORATORY2_H

/*
 * Тези питання Лекції 2. Конструювання програмного забезпечення. Основні положення,
 менеджмент та практична реалізація. Особливості управління памяттю з використанням засобів С++.
 *
		Література:
	1. Digital copies of SWEBOK Guide V3.0 may be downloaded free of charge for personal and academic use via www.swebok.org.
    2. Marc Gregoire, Nicholas A. Solter Scott J. Kleper. Professional C++, Second Edition.Copyright © 2011 by John Wiley & Sons, Inc., Indianapolis, Indiana.

 
		Тези питання 2.1 Конструювання програмного забезпечення [1] c.(3-1) - (3-8).
 
        Тези питання 2.2 Використання стеку (Stack) та ділянки памяті купи (Heap Memory).
        2.2.1 Визначення покажчику, тотожність покажчику та масиву.
        Тезиси див у коді main.cpp.
        2.2.2 Синтаксис покажчика. Основні правила синтаксису
і використання покажчику в якості параметрів функції (методів).
Тезиси див у коді main.cpp.
        2.2.3 Синтаксис посилання. Основні правила синтаксису
і використання покажчику в якості параметрів функції (методів).
Тезиси див у коді main.cpp.


	The Stack and the Heap Memory in your C++ application is divided into two parts — the stack and the heap. 
	Dynamically Allocated Arrays.
	int arraySize = 8;
    int myVariableSizedArray[arraySize];   // This won’t compile! It is not in C++11.
	//-------------
	int* myVariableSizedArray;
	myVariableSizedArray = new int[arraySize];
	int* myVariableSizedArray1 = new int[arraySize];

 
 
Конструкція загального типу класу:

class ClassName
 {
 //Members of class
 public:
 ClassName();      // Типовий Ktor
 ClassName(int A); // Перевантажений Ktor

~ClassName();      // Деструктор
 void Method();
 int field;

 protected:

 private:

 };

 Синтаксис створення екземпляру класу у стек С++.
Звичайний   Ktor
ClassName classStack;
 classStack.Method();
 classStack.field = 12;
Перевантажений Ktor
ClassName classStack1(12);
 classStack1.Method();
 classStack1.field = 12;


Синтаксис створення екземпляру класу у купі памяті С++.
Звичайний   Ktor
 ClassName *classHeap = new ClassName ();
 classHeap -> Method();
 classHeap -> field = 12;
 Перевантажений Ktor
 ClassName *classHeap1 = new ClassName (12);
 classHeap1 -> Method();
 classHeap1 -> field = 12;


Створення екземпляру передбачае виділення ділянки ОЗП для
членів класу.

public - відкриті члени класу, можливий доступ на зовні.
private - закриті члени класу, не можуть бути викликані в main.

Конструктор автоматично працює під час створення екземпляру класу.
Основне призначення конструктору - ініціалізація.
Конструктор завжди  public!!! За винятком деяких випадків.
Деструктор це спеціальний метод що автоматично викликаєтся під час
виходу екзепляру класу з області відімості.

(Конструктор копіювання дає можливість точно визначити порядок
створення обєкту. Сінтаксис)

Все це блоки для будування програмних продуктів і систем.
Core WebKit Multimedia Містить систему вводу виводу, взаємодію, події та інш.
Core Scripting XML

GUI QML Database
CUI QtQuick Networking

Unit Testing

Що можно робити з використанням Qt. Практично все.
Існують 4 способи побудови графічного інтерфейсу: Qt Widgets, Qt Quick, Qt Graphics,
Qt Web Kit.
Найбільше розповсюдження отримали Qt Quick, які дає широкі можливості за рахунок використання
сторонніх технологій.



*/


namespace L2
{


class Laboratory2
{
public:
    Laboratory2();
    ~Laboratory2();
    void ShowTestsSimvol();
    void ShowTests();
    static void SimpleSwap (int *a, int *b);

private:
    void PrivateTest();
protected:
    void ProtectedTest();
};

class LDepartment : Laboratory2
{
public:
    LDepartment();
    ~LDepartment();
    void DepartmentTest();
private:
    void LDTest();


};

}
#endif // LABORATORY2_H
