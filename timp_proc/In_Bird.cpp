#include "In_Bird.h"
#include "Bird.h"

void* In_Bird(ifstream& ifst) {
    Bird* B = new Bird; //�������� ������ ��� �����

    ifst >> B->Name; //��������� �������� �����
    ifst >> B->Migration; //��������� ���������� � ���, ��������� �� ���

    return B;
}