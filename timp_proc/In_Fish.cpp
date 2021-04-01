#include "In_Fish.h"
#include "Fish.h"

void* In_Fish(ifstream& ifst) {
    Fish* F = new Fish; //�������� ������ ��� ����
    
    ifst >> F->Name; //��������� �������� ����
    
    string Temp_K = ""; //������, �������� ���������� � ����� �������� ����

    ifst >> Temp_K; //��������� ���������� � ����� ��������
    
    //����������, ��� ������� �����
    if (Temp_K == "River")
    {
        F->H = Fish::RIVER;
    }
    else if (Temp_K == "Sea")
    {
        F->H = Fish::SEA;
    }
    else if (Temp_K == "Ocean")
    {
        F->H = Fish::OCEAN;
    }

    return F;
}