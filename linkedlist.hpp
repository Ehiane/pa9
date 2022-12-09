#pragma once
#include "Shapes.hpp"

class ShapeList
{
public:
	ShapeList(ParentShape* newpHead = nullptr, ParentShape* newpTail = nullptr)
	{
		pHead = newpHead;
	};
	~ShapeList()
	{
		DeleteShapeList();
	};
	void insert(ParentShape* newShape)
	{
		if (this->pHead == nullptr)
		{
			pHead = newShape;
			length += 1;
		}
		if (this->pHead != nullptr)
		{
			ParentShape* pTemp = pHead;
			pHead = newShape;
			pHead->pNext = pTemp;
			length += 1;
		}
	};
	void printShapeList(RenderWindow* window) 
	{
		ParentShape* pCur = pHead;
		for(int i = 0; i <= length; i++)
		{
			pCur->ParentShape::Draw(window);
			pCur = pCur->pNext;
		}
	};
	void DeleteShapeList()
	{
		ParentShape* pCur = pHead;
		/*ParentShape* pTemp;
		for (int i = 0; i <= length; i++)
		{
			pTemp = pCur;
			pCur = pCur->pNext;
			delete(pTemp);
		}*/
		
		length = 0;
		pHead = nullptr;
	};

	ParentShape* pHead;
	int length = 0;
};