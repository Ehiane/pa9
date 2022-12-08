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
		//std::cout << "in print" << std::endl;
		//pCur->ParentShape::Draw(window);
		for(int i = 0; i <= length; i++)
		{
			pCur->ParentShape::Draw(window);
			pCur = pCur->pNext;
		}
	};

	ParentShape* pHead;
	int length = 0;
};