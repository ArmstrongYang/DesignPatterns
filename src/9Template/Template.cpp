// Template.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "HummerModel.h"
#include "HummerH1Model.h"
#include "HummerH2Model.h"
#include <crtdbg.h>
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//H1�ͺ�
	CHummerModel *ph1 = new CHummerH1Model();
	ph1->Run();
	delete ph1;

	cout << "****************" << endl;

	//H2�ͺ�
	CHummerModel *ph2 = new CHummerH2Model();
	ph2->Run();
	delete ph2;

	//H1�ͺŲ��Ҳ�����
	/*CHummerH1Model *ph11 = new CHummerH1Model();
	ph11->SetAlarm(false);
	ph11->Run();
	delete ph11;*/
	return 0;
}

