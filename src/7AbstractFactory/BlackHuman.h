#pragma once
#include "ihuman.h"
#include <iostream>
using std::cout;
using std::endl;
class CBlackHuman :
	public IHuman
{
public:
	CBlackHuman(void)
	{
	}
	~CBlackHuman(void)
	{
	}
	void Laugh()
	{
		cout << "���˻�Ц" << endl;
	}
	void Cry()
	{
		cout << "���˻��" << endl;
	}
	void Talk()
	{
		cout << "���˿���˵����һ����������" << endl;
	}

	virtual void Sex() = 0;
};