#include <iostream>
#include <cstring>
#include <vector>

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
        std::vector<Weapon> weapon_list;
        int weapon_quantity;
        Weapon weapon_used;
        bool is_dead;

    public:

        RPCharacter(const char newName[]) {
            strncpy(name, newName, sizeof(name) - 1); 
            name[sizeof(name) - 1] = '\0'; 

            level = 1;
            xp_points = 0;
            hp = 100;
            weapon_quantity = 0;
            weapon_list.push_back(Weapon());
            weapon_used = Weapon();
            is_dead = false;

        }

        const char* getName() const { return name; }
        void setName(const char* newName) {
            strncpy(name, newName, sizeof(name) - 1); 
            name[sizeof(name) - 1] = '\0'; 
        };


};



int main(void){





};