#include "StdAfx.h"
#include "Manager.h"


CManager::CManager(void)
{
	this->m_performance = "";
}

CManager::~CManager(void)
{
}

string CManager::GetPerformance()
{
	return m_performance;
}

void CManager::SetPerformance(string per)
{
	this->m_performance = per;
}

/*string CManager::GetOtherInfo()
{
	string info = "";
	info.append("ҵ��A��");
	info.append(this->m_performance);
	info.append("\t");
	return info;
}*/

void CManager::Accept(IVisitor *pVisitor)
{
	pVisitor->Visit(*this);
}