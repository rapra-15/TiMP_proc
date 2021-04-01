#include "Fish.h"
#include "Bird.h"
#include "In_Animal.h"
#include "In_Fish.h"
#include "In_Bird.h"

Animal* In_Animal(ifstream& ifst) {
    Animal *An = new Animal; //�������� ������ ��� ����� ��������
    int K; //������������� ���������
    ifst >> K; //��������� �� ����� ������������� ���������
    if (K == 1) //���� K == 1, �� ��� ����
    {
        An->K = FISH; //���������� ��, ��� ��� ����
        An->Obj = In_Fish(ifst); //��������� ���������� � ����
        Fish* Temp_F = (Fish*)An->Obj; //�������� ������ � ����
        An->Name = Temp_F->Name; //���������� � ����� �������� ��������
        return An;
    }
    else if (K == 2) //���� K == 2, �� ��� �����
    {
        An->K = BIRD; //���������� ��, ��� ��� �����
        An->Obj = In_Bird(ifst); //��������� ���������� � �����
        Bird* Temb_B = (Bird*)An->Obj; //�������� ���������� � �����
        An->Name = Temb_B->Name; //���������� � ����� �������� ��������
        return An;
    }
    else
    {
        return 0;
    }
}
