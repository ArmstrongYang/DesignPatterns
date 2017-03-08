// Person.h: interface for the CPerson class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_PERSON_H__4716A36D_FB89_4D86_9332_1502B1CA71CA__INCLUDED_)
#define AFX_PERSON_H__4716A36D_FB89_4D86_9332_1502B1CA71CA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


#include <iostream>
#include <string>


using namespace std;

class Mediator;  

//������  
class Person  
{  
protected:  
    Mediator *m_mediator; //�н�  
public:  
    virtual void SetMediator(Mediator *mediator){} //�����н�  
    virtual void SendMessage(string message) {}    //���н鷢����Ϣ  
    virtual void GetMessage(string message) {}     //���н��ȡ��Ϣ  
};  

class Renter: public Person  
{  
public:  
    void SetMediator(Mediator *mediator);  
    void SendMessage(string message);  
    void GetMessage(string message);  
};  

class Landlord: public Person  
{  
public:  
    void SetMediator(Mediator *mediator);  
    void SendMessage(string message);  
    void GetMessage(string message);  
};  

#endif // !defined(AFX_PERSON_H__4716A36D_FB89_4D86_9332_1502B1CA71CA__INCLUDED_)
