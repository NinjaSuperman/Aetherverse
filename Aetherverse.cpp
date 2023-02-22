// Aetherverse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>
#include "Character.h"

using namespace std;

char name;

int main()
{
    char response;
    
    do
    {
        cout << "What is your character's name?\n";
        cin >> name;

        Character *player = new Character();
        player->Archetype();
        player->Race();
        player->Stats();
    
        do
        {
            cout << "Do you want to keep this character? (Y/N)\n";
            cin >> response;
        } while (response != 'Y' && response != 'N');

    } while (response != 'Y');

    return 0;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

