#pragma once
#include <iostream>
using std::string;
class IUserInfo
{
public:
	IUserInfo(void)
	{
	}
	virtual ~IUserInfo(void)
	{
	}
	virtual string GetUserName() = 0;        //����
	virtual string GetHomeAddress() = 0;     //��ͥ��ַ
	virtual string GetMobileNumber() = 0;    //�ֻ���
	virtual string GetOfficeTelNumber() = 0; //�칫�ҵ绰����	
	virtual string GetJobPosition() = 0;     //������λ
	virtual string GetHomeTelNumber() = 0;   //��ͥ�绰����
};