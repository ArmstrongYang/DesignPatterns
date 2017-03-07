// State.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "ILift.h"
#include "Lift.h"
#include "Context.h"
#include "OpenningState.h"
#include "CloseingState.h"
#include "RunningState.h"
#include "StoppingState.h"
#include <iostream>
using std::cout;
using std::endl;

void DoIt()
{
	//ILift.h, Lift.h, Lift.cpp
	ILift *pLift = new CLift();
	pLift->SetState(ILift::STOPPING_STATE);//���ݵĳ�ʼ������ֹͣ״̬��
	pLift->Open();//�����ǵ����ſ������˽�ȥ
	pLift->Close();//Ȼ������Źر�
	pLift->Run();//��Ȼ�󣬵��������������ϻ�������
	pLift->Stop();//��󵽴�Ŀ�ĵأ�����ͣ����
	delete pLift;
}


void DoNew()
{
	//LiftState.h, LiftState.cpp, OpenningState.h, CloseingState.h, RunningState.h, StoppingState.h
	//Context.h, Context.cpp
	CContext context;
	CCloseingState closeingState;
	context.SetLiftState(&closeingState);
	context.Open();
	context.Close();
	context.Run();
	context.Stop();
}

int _tmain(int argc, _TCHAR* argv[])
{
	//cout << "----------ʹ��ģʽ֮ǰ----------" << endl;
	//DoIt();
	cout << "----------ʹ��ģʽ֮��----------" << endl;
	DoNew();
	return 0;
}

