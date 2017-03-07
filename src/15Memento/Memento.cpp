// Temp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>

using namespace std;

//��ɫ����¼��
class RoleStateMemento
{
private:
    int vitality;
public:
    RoleStateMemento(){};
    RoleStateMemento(int vit)
    {
        this->vitality = vit;
    }
    int get_vitality()
    {
        return vitality;
    }
};

//��Ϸ��ɫ��
class GameRole
{
private:
    int vitality;
    string name;
public:
    GameRole(int Vit,string Name)
    {
        this->vitality = Vit;
        this->name = Name;
    }
    //������ȣ�ֻ��������������vitality��
    RoleStateMemento save_state()
    {
        RoleStateMemento memento(vitality);
        return memento;
    }
    //�ָ�����
    void role_state_recover(RoleStateMemento memento)
    {
        this->vitality = memento.get_vitality();
    }
    //չʾ��Ϸ��ɫ״̬
    void show()
    {
        cout<<"��Ϸ��ɫ���ƣ� "<<name<<endl;
        cout<<"��Ϸ��ɫ����ֵ: "<<vitality<<endl;
    }
    //��սboss����ֵ��Ϊ0
    void fight()
    {
        this->vitality = 0;
    }
};
//��ɫ״̬��������
class RoleStateCaretaker
{
private:
    RoleStateMemento memento;
public:
    void set_memento(RoleStateMemento mem)
    {
        this->memento = mem;
    }
    RoleStateMemento get_memento()
    {
        return this->memento;
    }
};

int main()
{
    //ǰ
    GameRole Vincent(100,"VincentChen");
    Vincent.show();
    //�������
    RoleStateCaretaker StateManager;
    StateManager.set_memento(Vincent.save_state());
    //��ս
    Vincent.fight();
    cout<<endl<<"��սboss���״̬��"<<endl;
    Vincent.show();
    //�ָ�����
    Vincent.role_state_recover(StateManager.get_memento());
    cout<<endl<<"�ָ����Ⱥ��״̬��"<<endl;
    Vincent.show();
    return 0;
}


































