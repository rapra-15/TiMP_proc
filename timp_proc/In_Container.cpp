#include "In_Container.h"
#include "In_Animal.h"

void In(Container* Head, ifstream& ifst) {
    Container* Temp, *P; //��������� ����, � ������� ����� ����������� ������������� ����������
    int Len = 0; //���� ����� ������ ���������� �����
    while (!ifst.eof())
    {
        Temp = new Container();
        
        //��������� ������ ����
        if (Len == 0)
        {
            if ((Head->Cont = In_Animal(ifst)) != 0) //��������� ���������� � ��������
            {
                Len++;
            }
        }
        else //��������� ��� ��������� ����
        {
            if ((Temp->Cont = In_Animal(ifst)) != 0)
            {
                P = Head->Next; //��������� ��������� �� ����. ������� (������ ������)
                Head->Next = Temp; //������� ���� ������ ��������� �� �����
                Temp->Next = P; //����� ���� ������ ��������� �� ������ ������
                Head = Temp; //���������� ����� ������ ������
                Len++;
            }
        }
    }

    //���������� ����������� ���������� � ������ ����
    for (int i = 0; i < Len; i++)
    {
        Head->Len = Len;
        Head = Head->Next;
    }
}
