#include <iostream>

class Point{
    private :

        float x;
        float y; 

    public :
        
        Point() : x(0.0), y(0.0) {}
    
        Point(const Point& other) : x(other.x), y(other.y) {}

        Point(float newX, float newY) : x(newX), y(newY) {}

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

    Point point3(31.4, 22.8);
    point3.print();

};
