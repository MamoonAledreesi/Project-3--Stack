
#include <iostream>
#include "clsMyStack.h";
using namespace std;

int main()
{
    clsMyStack<int>MyStack;
    MyStack.Push(10);
    MyStack.Push(20);
    MyStack.Push(30);
    MyStack.Push(40);
    MyStack.Push(50);

    cout << "\n Stack : \n";
    MyStack.Print();

    cout << "\n Stack Size : " << MyStack.Size();
    cout << "\n Stack Top : " << MyStack.Top();
    cout << "\n Stack Button : " << MyStack.Button();

    MyStack.Pop();
    cout << "\n\n Stack After Pop : \n";
    MyStack.Print();



    cout << "\n\n Stack Item : " << MyStack.GetItem(2);

    MyStack.Reverse();
    cout << "\n\n  Stack after Reverse() : \n";
    MyStack.Print();

    MyStack.UpdateItem(2, 500);
    cout << "\n\n Update Stack Item (2) to 500 : \n";
    MyStack.Print();

    MyStack.InstertAfter(2, 800);
    cout << "\n\n Stack After Insterting  : \n";
    MyStack.Print();

    MyStack.InsertAtFront(1000);
    cout << "\n\n Stack After Insterting 1000  : \n";
    MyStack.Print();


    MyStack.InsertAtBack(2000);
    cout << "\n\n Stack After Insterting 2000  : \n";
    MyStack.Print();


    MyStack.Clear();
    cout << "\n\n Stack After Clear(): \n";
    MyStack.Print();









    system("pause>0");
}

