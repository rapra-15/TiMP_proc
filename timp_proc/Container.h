#ifndef CONTAINER_H
#define CONTAINER_H

#include "Animal.h"

//���������
struct Container {
    Container* Next; //��������� �� ����. ������� ����������
    Animal* Cont; //��������� �� ���������, ���������� ���������� � ��������
    int Len = 0; //���������� ����������
};

#endif // CONTAINER_H