#include <iostream>
#include <cmath>
using namespace std;


class Wektor2D
    {
        public:
            Wektor2D(){
                this->setX(0);
                this->setY(0);
            }
            Wektor2D(double a, double b){
                this->setX(a);
                this->setY(b);
            }
            double norm(){return sqrt(this->x*this->x+this->y*this->y);}
            void print(){cout << "współrzędna x: " << this->x << "\nwspółrzędna y: " << this->y << '\n';}
            void setX(double a){this->x=a;}
            void setY(double a){this->y=a;}
            double getX(){return this->x;}
            double getY(){return this->y;}

        private:
            double x;
            double y;

    };

Wektor2D operator+(Wektor2D w1, Wektor2D w2){ return Wektor2D{w1.getX()+w2.getX(),w1.getY()+w2.getY()};}
double operator*(Wektor2D w1, Wektor2D w2){return w1.getX()*w2.getX()+w1.getY()*w2.getY();}
