// Agent.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "WangPo.h"
#include "PanJinLian.h"
#include "JiaShi.h"
#include <iostream>
using std::cout;
using std::endl;
void DoPanJinLian()
{
	CWangPo *pWangPo;
	
	pWangPo = new CWangPo(new CPanJinLian());
	pWangPo->MakeEyesWithMan();
	pWangPo->HappyWithMan();
	delete pWangPo;
}
void DoJiaShi()
{
	CWangPo *pWangPo;

	pWangPo = new CWangPo(new CJiaShi());
	pWangPo->MakeEyesWithMan();
	pWangPo->HappyWithMan();
	delete pWangPo;
}


int _tmain(int argc, _TCHAR* argv[])
{
	DoPanJinLian();


	//DoJiaShi();
	return 0;
}

