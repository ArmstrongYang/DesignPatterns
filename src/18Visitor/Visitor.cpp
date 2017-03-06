#include "stdafx.h"
#include <vector>
#include <iostream>
#include <string>
#include <stdio.h>

#include "Employee.h"
#include "Manager.h"
#include "BaseVisitor.h"

using namespace std;

void MockEmployee(vector<CEmployee*> *pvce)
{
	CCommonEmployee *pZhangSan = new CCommonEmployee();
	pZhangSan->SetJob("编写Java程序，蓝领、苦工");
	pZhangSan->SetName("张三");
	pZhangSan->SetSalary(1800);
	pZhangSan->SetSex(CEmployee::MALE);
	pvce->push_back(pZhangSan);

	CCommonEmployee *pLiSi = new CCommonEmployee();
	pLiSi->SetJob("页面美工！");
	pLiSi->SetName("李四");
	pLiSi->SetSalary(1900);
	pLiSi->SetSex(CEmployee::FEMALE);
	pvce->push_back(pLiSi);

	CManager *pWangWu = new CManager();
	pWangWu->SetPerformance("基本上是负值，但会拍马屁");
	pWangWu->SetName("王五");
	pWangWu->SetSalary(1900);
	pWangWu->SetSex(CEmployee::FEMALE);
	pvce->push_back(pWangWu);
}

void DoIt()
{
	vector<CEmployee*> vce;
	MockEmployee(&vce);
	vector<CEmployee*>::const_iterator readIt = vce.begin();

	CBaseVisitor visitor;
	for (; readIt != vce.end(); readIt ++)
	{
		(*readIt)->Accept(&visitor);
	}
	cout << "本公司的月工资总额是：" << visitor.GetTotalSalary() << endl;

	vector<CEmployee*>::reverse_iterator delIt = vce.rbegin();
	for (; delIt != vce.rend(); delIt++)
	{
		delete (*delIt);
		(*delIt) = NULL;
	}
	vce.clear();
}


int _tmain(int argc, _TCHAR* argv[])
{
	DoIt();
	
	return 0;
}

