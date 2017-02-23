// Builder.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "CarModel.h"
#include "BenzModel.h"
#include "BMWModel.h"
#include "BenzBuilder.h"
#include "BMWBuilder.h"
#include "Director.h"
#include <vector>
#include <iostream>
using std::vector;
using std::string;
using std::cout;
using std::endl;


void DoBenzRun()     //û��ʹ��ģʽʱ����Ҫ�Ѳ���һ��һ���Ĵ���ģ�͡�
{
	cout << "----------���ɱ���ģ��----------" << endl;
	CBenzModel *pBenz = new CBenzModel();
	vector<string> seq;
	seq.push_back("engine boom");//�ͻ�Ҫ��run��ʱ���ȷ�������
	seq.push_back("start");//��������
	seq.push_back("stop");//����һ�ξ�ͣ����

	pBenz->SetSequence(&seq);
	pBenz->Run();
	delete pBenz;
	cout << "*****************************" << endl;
}


void DoBuilder()      //ʹ��ģʽ����benzBuilder��bmwBuilder�����ɣ�����ʹ��ͬ���Ĵ���˳��
{
	cout << "----------��ͬһ��˳������ģ��----------" << endl;
	vector<string> seq;
	seq.push_back("engine boom");
	seq.push_back("start");
	seq.push_back("stop");

	CBenzBuilder benzBuilder;
	benzBuilder.SetSequence(&seq);
	CBenzModel *pBenz = dynamic_cast<CBenzModel*>(benzBuilder.GetCarModel());
	pBenz->Run();

	CBMWBuilder bmwBuilder;
	bmwBuilder.SetSequence(&seq);
	CBMWModel *pBmw = dynamic_cast<CBMWModel*>(bmwBuilder.GetCarModel());
	pBenz->Run();
	cout << "*****************************" << endl;
}
void DoDirector()     //ʹ��ָ��������װ�������߼����Ѵ�����˳���ھ���ָ���������档
{
	cout << "----------��������ģ��----------" << endl;
	CDirector director;

	//1W��A���͵ı��۳�
	//for(int i = 0; i < 2; i++)
		director.GetABenzModel()->Run();cout << "*****************************" << endl;

	//100W��B���͵ı��۳�
	//for(int i = 0; i < 2; i++)
		director.GetBBenzModel()->Run();cout << "*****************************" << endl;

	//1000W��C���͵ı���
	//for(int i = 0; i < 2; i++)
		director.GetCBMWModel()->Run();cout << "*****************************" << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	//DoBenzRun();

	//DoBuilder();

	DoDirector();
	return 0;
}

