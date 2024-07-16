
#pragma once
#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;
template<class T >class clsMyQueue
{

protected:
	clsDblLinkedList<T> _MyList;
public:

	void Push(T Item)
	{
		_MyList.InsertAtEnd(Item);
	}
	void Pop()
	{
		_MyList.DeleteFirstNode();
	}
	void Print()
	{
		_MyList.PrintList();
	}

	int Size()
	{
		return _MyList.Size();
	}

	bool IsEmpty()
	{
		return _MyList.ISEmpty();
	}

	T Front()
	{
		return _MyList.GetItem(0);
	}

	T Back()
	{
		return _MyList.GetItem(Size() - 1);
	}

	T GetItem(int Item)
	{
		return _MyList.GetItem(Item);
	}

	void Reverse()
	{
		_MyList.Reverse();
	}

	bool UpdateItem(int Index, T NewValue)
	{
		return _MyList.UpdateItem(Index, NewValue);
	}

	bool InstertAfter(int Index, T NewValue)
	{
		return _MyList.InsertAfter(Index, NewValue);
	}

	void InsertAtFront(T value)
	{
		_MyList.InsertAtBeginning(value);
	}

	void InsertAtBack(T value)
	{
		_MyList.InsertAtEnd(value);
	}

	void Clear()
	{
		_MyList.Clear();
	}

};


