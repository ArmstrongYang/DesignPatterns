#pragma once
#include "employee.h"
#include "IVisitor.h"
#include <iostream>
#include <string>
using namespace std;

class CManager :public CEmployee
{
public:
	CManager(void);
	~CManager(void);
	string GetPerformance();
	void SetPerformance(string per);
	void Accept(IVisitor *pVisitor);
//protected:
//	string GetOtherInfo();
private:
	string m_performance;
};