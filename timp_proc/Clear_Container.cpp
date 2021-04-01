#include "Clear_Container.h"
#include <cstdlib>

Container* Clear(Container* Head) {
    int Len = Head->Len; //��������� ����������� ����������

    while (Len > 0) //���� ����������� ���������� �� 0
    {
        free(Head->Cont); //������� ������, ����������� ���������� ���������� � ��������
        Head->Len = 0; //��������� ����������� ���������� ��� ������ ��� ���� 0
        Head = Head->Next; //��������� � ����. �������� ����������
        Len--; //��������� ��������������� �����
    }
    return Head;
}