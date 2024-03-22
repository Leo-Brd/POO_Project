#include <iostream>
#include <cstring>
#include <vector>

class Weapon{
    private:

        char name[20];
        int damage;

    public:

        Weapon() : name("None"), damage(0) {}

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
            weapon_list.resize(10); 
            weapon_used = Weapon();
            is_dead = false;

        };

        const char* getName() const { return name; }
        void setName(const char* newName) {
            strncpy(name, newName, sizeof(name) - 1); 
            name[sizeof(name) - 1] = '\0'; 
        };

        void apply_damage(int damage_value){
            hp -= damage_value;
            if (hp <= 0){
                is_dead = true;
                hp = 0;
            };
        };

        Weapon get_weapon(){
            if (weapon_quantity > 0){
                return weapon_used;
            }else if (weapon_quantity == 0){
                weapon_quantity += 1;
                weapon_list.clear();
                if (level = 1){
                    weapon_list.push_back(Weapon("Hand", 1));
                }else{
                    weapon_list.push_back(Weapon("Hand", level/2));
                };
                return Weapon();
            };
        };

        void Attack(RPCharacter& targetCharacter) {
            int damage = get_weapon().getDamage(); 
            targetCharacter.apply_damage(damage); 
            xp_points += damage;
        };

        void store_weapon(Weapon weapon){
            if (weapon_quantity == 10){
                weapon_list.pop_back();
            };
            weapon_list.push_back(weapon);
        };

        void switch_weapon(int indice){
            if ( indice < 0 || indice > 9){
                std::cout << "Veuillez rentrer un emplacement valide" << std::endl;
                return;
            };

            if (weapon_list[indice].getName() == "None") {
                int last_weapon_index = -1;
                for (int i = 0; i < 10; ++i) {
                    if (weapon_list[i].getName() != "None") {
                        last_weapon_index = i;
                    }
                }

                if (last_weapon_index != -1) {
                    weapon_used = weapon_list[last_weapon_index];
                    std::cout << "Arme switchée à l'emplacement " << last_weapon_index << std::endl;
                } else {
                    std::cout << "La liste des armes est vide" << std::endl;
                }
            } else {
                weapon_used = weapon_list[indice];
                std::cout << "Arme switchée à l'emplacement " << indice << std::endl;
            }
        };

};



int main(void){





};