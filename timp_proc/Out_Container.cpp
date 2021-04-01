#include "Out_Container.h"
#include "Out_Animal.h"

void Out(Container* Head, ofstream& ofst) {
    ofst << "Container contains " << Head->Len
        << " elements." << endl; //������� ���������� � ����������� ����������

    for (int i = 0; i < Head->Len; i++)
    {
        ofst << i << ": "; //������� ����� ����
        Out_Animal(Head->Cont, ofst); //������� ���������� � ��������
        Head = Head->Next; //��������� � ����. ����
    }
}