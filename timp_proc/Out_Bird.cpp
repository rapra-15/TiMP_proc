#include "Out_Bird.h"
#include "Bird.h"

void Out_Bird(Bird* B, ofstream& ofst) {
    ofst << "It's a Bird: " << B->Name << endl;
    ofst << "Is it a migration bird: "; //������� �������� �����
    
    //������� ���������� � ���, ��������� �� �����
    if (B->Migration)
    {
        ofst << "Yes" << endl;
    }
    else
    {
        ofst << "No" << endl;
    }
}