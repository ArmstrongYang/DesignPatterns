// Bridge.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
//#include "ClothesCorp.h"
#include "Clothes.h"
#include "NewHouseCorp.h"
#include "Clothes.h"
#include "IPod.h"
#include "ShanZhaiCorp.h"
#include <iostream>
using std::cout;
using std::endl;

void DoNewRun1()
{
	cout << "----------��----------" << endl;
	CHouse house;
	CNewHouseCorp newHouseCorp(&house);
	newHouseCorp.MakeMoney();
	cout << endl;

	cout << "----------ɽ----------" << endl;
	CClothes clothes;
	CShanZhaiCorp shanZhaiCorp(&clothes);
	shanZhaiCorp.MakeMoney();
	cout << endl;
}

void DoNewRun2()
{
	cout << "----------��----------" << endl;
	CHouse house;
	CNewHouseCorp newHouseCorp(&house);
	newHouseCorp.MakeMoney();
	cout << endl;

	cout << "----------ɽ----------" << endl;
	CIPod ipod;
	CShanZhaiCorp shanZhaiCorp(&ipod);
	shanZhaiCorp.MakeMoney();
	cout << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	//������
	DoNewRun1();

	//����ipod
	DoNewRun2();
	return 0;
}

