// Facade.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "ILetterProcess.h"
#include "LetterProcessImpl.h"
#include "ModenPostOffice.h"
#include<iostream>
using std::string;
using std::cout;
using std::endl;
void DoItByPostOffice()
{
	CModenPostOffice modenPostOffice;
	string context = "Hello, It's me, do you know who I am? I'm your old lover. I'd like to ... ...";
	string address = "Happy Road No. 666, Beijing City, China";
	modenPostOffice.SendLetter(context, address);
}
void DoItYourself()
{
	ILetterProcess *pLetterProcess = new CLetterProcessImpl();
	pLetterProcess->WriteContext("Hello, It's me, do you know who I am? I'm your old lover. I'd like to ... ...");
	pLetterProcess->FillEnvelope("Happy Road No. 666, Beijing City, China");
	pLetterProcess->LetterIntoEnvelope();
	pLetterProcess->SendLetter();
	delete pLetterProcess;
}


int _tmain(int argc, _TCHAR* argv[])
{
	//���ڵĵ��÷�ʽ�����ڿͻ���˵ȷʵ�򵥶��ˡ�
	//����Ҫ�����߼��������þ���������ʼ����������ʾ�������������
	DoItByPostOffice();

	//ԭ���ĵ��÷�ʽ��
	cout << "****************" << endl;
	//DoItYourself();
	return 0;
}

