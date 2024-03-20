#include <iostream>
#include <cstring>

class Weapon{
    private:

        char name[20];
        int damage;

    public:

        Weapon() : name("Hand"), damage(1) {}
        Weapon(const char newName[], int newDamage) : damage(newDamage) {
            strncpy(name, newName, sizeof(name) - 1); 
            name[sizeof(name) - 1] = '\0'; 
        }

        const char* getName() const { return name; }
        int getDamage() const { return damage; }

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
            strncpy(name, newName, sizeof(name) - 1); 
            name[sizeof(name) - 1] = '\0'; 
        };


};



int main(void){





};