// Factory.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "IHuman.h"
#include "YellowHuman.h"
#include "WhiteHuman.h"
#include "BlackHuman.h"

#include "IHumanFactory.h"
#include "YellowHumanFactory.h"
#include "WhiteHumanFactory.h"
#include "BlackHumanFactory.h"

#include <iostream>
using std::cout;
using std::endl;
using std::string;

void DoFactoryMethod1()
{
	cout << "----------��1��" << endl;
	IHumanFactory *pHumanFactory = new CYellowHumanFactory();
	IHuman *pHuman = pHumanFactory->CreateHuman();
	pHuman->Cry();
	pHuman->Laugh();
	pHuman->Talk();
	delete pHuman;
	delete pHumanFactory;
}
void DoFactoryMethod2()
{
	cout << "----------��2��" << endl;
	IHumanFactory *pHumanFactory = new CWhiteHumanFactory();
	IHuman *pHuman = pHumanFactory->CreateHuman();
	pHuman->Cry();
	pHuman->Laugh();
	pHuman->Talk();
	delete pHuman;
	delete pHumanFactory;
}
void DoFactoryMethod3()
{
	cout << "----------��3��" << endl;
	IHumanFactory *pHumanFactory = new CBlackHumanFactory();
	IHuman *pHuman = pHumanFactory->CreateHuman();
	pHuman->Cry();
	pHuman->Laugh();
	pHuman->Talk();
	delete pHuman;
	delete pHumanFactory;
}


int _tmain(int argc, _TCHAR* argv[])
{
	DoFactoryMethod1();
	DoFactoryMethod2();
	DoFactoryMethod3();
	return 0;
}

