#ifndef ANIMAL_H
#define ANIMAL_H

#include "Key.h"

#include <iostream>
#include <string>

using namespace std;

//���������, ���������� ���������� ��� ���� ��������
struct Animal {
    Key K;
    string Name; //����� �������� - �������� ���������
    void* Obj;
};

#endif // ANIMAL_H