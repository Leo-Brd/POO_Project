#include <iostream>
#include <cmath>

class Complexe {
    private:
        float re;
        float im;
    
    public:
        
        Complexe() : re(0.0), im(0.0) {}
        Complexe(const Complexe &other) : re(other.re), im(other.im) {}

        float getRe() {return re; }
        float getIm() {return im; }
        
        void setRe(float newRe) {re = newRe; }
        void setIm(float newIm) {im = newIm; }

        void getMod() {
            std::cout << "Module :" << sqrt(re*re+ im*im) << std::endl;
            }

        void getArg() {
            std::cout << "Argument : " << atan2(im, re) << std::endl; 
        }

        void print(){
            std::cout << "Partie réelle : " << getRe() << ", Partie imaginaire : " << getIm() << std::endl;
        }
};

int main() {
    Complexe nbComplexe;
    nbComplexe.print();
    nbComplexe.setRe(4.3);
    nbComplexe.setIm(-0.453);
    nbComplexe.print();
    nbComplexe.getMod();
    nbComplexe.getArg();
    return 0;
};