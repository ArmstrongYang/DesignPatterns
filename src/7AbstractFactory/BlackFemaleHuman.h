#pragma once
#include "blackhuman.h"
#include <iostream>
using std::cout;
using std::endl;
class CBlackFemaleHuman :
	public CBlackHuman
{
public:
	CBlackFemaleHuman(void)
	{
	}
	~CBlackFemaleHuman(void)
	{
	}
	void Sex()
	{
		cout << "�ú����˵��Ա�ΪŮ..." << endl;
	}
};