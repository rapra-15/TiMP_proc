#ifndef FISH_H
#define FISH_H

#include <iostream>
#include <string>

using namespace std;

//���������, ���������� ���������� � �����
struct Fish { 
    
    string Name; //�������� ����

    //����� �������� ����
    enum  Habitat {
        RIVER,
        SEA,
        OCEAN
    };

    Habitat H;
};

#endif // FISH_H