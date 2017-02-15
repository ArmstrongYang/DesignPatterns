// Strategy.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Context.h"
#include "BackDoor.h"
#include "GivenGreenLight.h"
#include "BlockEnemy.h"
#include <iostream>
using std::cout;
using std::endl;


int _tmain(int argc, _TCHAR* argv[])
{
	CContext *pContext;

	
	cout << "----------��һ��----------" << endl;
	pContext = new CContext(new CBackDoor());
	pContext->Operate();
	delete pContext;

	

	cout << "----------�ڶ���----------" << endl;
	pContext = new CContext(new CGivenGreenLight());
	pContext->Operate();
	delete pContext;

	
	cout << "----------������----------" << endl;
	pContext = new CContext(new CBlockEnemy());
	pContext->Operate();
	delete pContext;


	system("PAUSE");
	return 0;
}

