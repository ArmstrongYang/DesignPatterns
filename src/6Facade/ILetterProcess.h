#pragma once
#include <iostream>
using std::string;
class ILetterProcess
{
public:
	ILetterProcess(void){}
	virtual ~ILetterProcess(void){}
	virtual void WriteContext(string context) = 0; //д��
	virtual void FillEnvelope(string address) = 0; //���ŷ�
	virtual void LetterIntoEnvelope() = 0; //װ���ŷ�
	virtual void SendLetter() = 0; //����
};