#include "Init_Container.h"
#include <cstdlib>

Container* Init(Container* Head) {
    Head = new Container(); //�������� ������ ��� ����� ���� 
    Head->Cont = NULL; //���� �������� ��� 
    Head->Len = 0; //��������� ������
    Head->Next = Head; //��������� �� ����. ������� ��������� �� ����� ������ ����,
                        //�.�. ��� ��������� ������
    
    return Head;
}