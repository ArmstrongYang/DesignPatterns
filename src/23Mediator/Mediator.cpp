// Temp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "MediatorOrganization.h"
#include "Person.h"

using namespace std;

  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    Mediator *mediator = new HouseMediator();  
    Person *person1 = new Renter();    //�ⷿ��  
    Person *person2 = new Landlord();  //����  

    mediator->SetA(person1);  
    mediator->SetB(person2);  

    person1->SetMediator(mediator);  
    person2->SetMediator(mediator);  

    person1->SendMessage("�������Ͼ�·�������׷��ӣ��۸�800Ԫһ����\n");  
    person2->SendMessage("���ⷿ�ӣ��Ͼ�·100�ţ�70ƽ�ף�1000Ԫһ����\n");  
    delete person1; 
	delete person2; 
	delete mediator;  

    return 0;
}






























