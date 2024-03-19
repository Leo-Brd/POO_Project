#include <iostream>


class Point{
    public :
    
        float x;
        float y; 

        void AfficherCoordonnees(){
            std::cout << "Coordonnées du point : (" << x << ", " << y << ")" << std::endl;
        }
        

};


int main(){

    Point point;

    point.x = 30.5;
    point.y = 50.3;

    point.AfficherCoordonnees();

}
