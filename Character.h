#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

enum Races {
    Human,
    Elf,
    Dwarf,
    Goliath
};

enum Archetypes {
    Soldier,
    Rogue,
    Ranger,
    Sorcerer,
    Cleric,
    Warlock,
    Wizard,
    Inventor
};

class Character
{
    public:
        void Archetype();
        void Race();
        void Stats();
       
    private:
        Races race = Human;
        Archetypes archetype = Soldier;
        double maxHP = 200;
        double maxMP = 200;
        double maxSP = 200;
};

void Character::Archetype()
{
    char pickedArchetype;
    
    cout << "\nPick your class: (Input the letter in the paranthesis to pick)\n";
    cout << "Soldier (S)\n";
    cout << "Rogue (R)\n";
    cout << "Ranger (N)\n";
    cout << "Sorcerer (O)\n";
    cout << "Cleric (C)\n";
    cout << "Warlock (L)\n";
    cout << "Wizard (W)\n";
    cout << "Inventor (I)\n\n";

    do {
        cin >> pickedArchetype;
    } while (pickedArchetype != 'S' && pickedArchetype != 'R' && pickedArchetype != 'N' && pickedArchetype != 'O' && pickedArchetype != 'C' && pickedArchetype != 'L' && pickedArchetype != 'W' && pickedArchetype != 'I');

    switch (pickedArchetype) {
        case 'S':
            archetype = Soldier;
            break;
        case 'R':
            archetype = Rogue;
            break;
        case 'N':
            archetype = Ranger;
            break;
        case 'O':
            archetype = Sorcerer;
            break;
        case 'C':
            archetype = Cleric;
            break;
        case 'L':
            archetype = Warlock;
            break;
        case 'W':
            archetype = Wizard;
            break;
        case 'I':
            archetype = Inventor;
            break;
    }
}

void Character::Race()
{
    char Picked_Race;
    
    cout << "\nPick your race: (Input the letter in the paranthesis to pick)\n";
    cout << "Human (H)\n";
    cout << "Elf (E)\n";
    cout << "Dwarf (D)\n";
    cout << "Goliath (G)\n\n";
    
    do {
        cin >> Picked_Race;
    } while (Picked_Race != 'H' && Picked_Race != 'E' && Picked_Race != 'D' && Picked_Race != 'G');

    switch (Picked_Race) {
        case 'H':
            race = Human;
            break;
        case 'E':
            race = Elf;
            break;
        case 'D':
            race = Dwarf;
            break;
        case 'G':
            race = Goliath;
            break;
    }
}

void Character::Stats()
{

    switch (archetype) {
        case Soldier:
            maxMP = 0;
            break;
        case Rogue:
            maxHP *= 0.75;
            maxMP *= 0.25;
            break;
        case Ranger:
            maxMP *= 0.5;
            maxSP *= 0.5;
            break;
        case Sorcerer:
            maxHP *= 0.5;
            maxMP *= 0.75;
            maxSP *= 0.75;
            break;
        case Cleric:
            maxHP *= 0.6;
            maxSP *= 0.5;
            break;
        case Warlock:
            maxHP *= 0.5;
            maxSP *= 0.6;
            break;
        case Wizard:
            maxHP *= 0.5;
            maxMP *= 1.25;
            maxSP *= 0.35;
            break;
        case Inventor:
            maxHP *= 0.75;
            maxMP *= 0.5;
            maxSP *= 0.75;
            break;
    }
    
    switch (race) {
        case Human:
            break;
        case Elf:
            maxHP *= 0.75;
            maxMP *= 1.25;
            break;
        case Dwarf:
            maxSP *= 1.25;
            maxMP *= 0.75;
            break;
        case Goliath:
            maxHP *= 1.25;
            maxMP *= 0.75;
            break;
    }
   
    cout << "\n\nYour stats are as follows:\n\n";
    cout << "Max Health:" << maxHP << "\n";
    cout << "Max Magic:" << maxMP << "\n";
    cout << "Max Stamina:" << maxSP << "\n";
}