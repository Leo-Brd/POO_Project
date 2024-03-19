#include <iostream>

class Point{
    private :

        float x;
        float y; 

    public :
        
    
        Point(const Point& other) : x(other.x), y(other.y) {}

        float getX() const { return x; }
        float getY() const { return y; }
        void setX(float newX) { x = newX; }
        void setY(float newY) { y = newY; }

        void print(){
            std::cout << "Coordonnées du point : (" << getX() << ", " << getY() << ")" << std::endl;
        }
        
};


int main(){

    Point point;

    point.setX(30.5);
    point.setY(40.3);
    point.print();

    Point point2 = point;
    point2.print();

};
