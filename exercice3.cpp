#include <iostream>
#include <cstring>

class Weapon{
    public:

        char name[20];
        int damage;

};

class RPCharacter{
    private:

        char name[15];
        int level;
        int xp_points;
        int hp;
        Weapon weapon_list[10];
        int weapon_quantity;
        Weapon weapon_used;

    public:

        const char* getName() const { return name; }
        void setName(const char* newName) {
            strncpy(name, newName, 14); 
            name[14] = '\0'; 
        };


};



int main(void){





};