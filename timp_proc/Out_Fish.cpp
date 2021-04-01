#include "Out_Fish.h"
#include "Fish.h"

void Out_Fish(Fish* F, ofstream& ofst) {
    ofst << "It's a Fish: " << F->Name << endl;
    ofst << "Fish's habitat is "; //������� �������� ����

    //������� ����� �������� ����
    if (F->H == Fish::RIVER)
    {
        ofst << "River" << endl;
    }
    else if (F->H == Fish::SEA)
    {
        ofst << "Sea" << endl;
    }
    else if (F->H == Fish::OCEAN)
    {
        ofst << "Ocean" << endl;
    }
}