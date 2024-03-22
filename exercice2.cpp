#include <iostream>
#include <cmath>

class Complexe {
    private:
        float mod;
        float arg;
    
    public:
        
        Complexe() : mod(0.0), arg(0.0) {}
        Complexe(const Complexe &other) : mod(other.mod), arg(other.arg) {}
        
        float getMod() { return mod; }
        
        float getArg() { return arg; }
        
        float getRe() { return mod * cos(arg); }

        float getIm() { return mod * sin(arg); }

        void setRe(float newRe) {
            float im = getIm();
            mod = sqrt(newRe * newRe + getIm() * getIm());
            arg = atan2(im, newRe);
        }

        void setIm(float newIm) { 
            float re = getRe();
            arg = atan2(newIm, getRe());
            mod = sqrt(re * re + getIm() * getIm());
        }
        
        void setMod(float newMod) { mod = newMod; }

        void setArg(float newArg) { arg = newArg; }



        void print(){
            std::cout << "Partie réelle : " << getRe() << ", Partie imaginaire : " << getIm() << ", Module : " << getMod() << ", Argument :" << getArg() << std::endl;
        }
};

int main() {
    Complexe nb;
    nb.print();
    nb.setRe(4.3);
    nb.print();
    nb.setIm(-0.45);
    nb.print();
    nb.setMod(5.0);
    nb.setArg(0.643);
    nb.print();
    return 0;
}