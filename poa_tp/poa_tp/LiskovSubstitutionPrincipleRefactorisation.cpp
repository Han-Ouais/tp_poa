#include <iostream>


// Cette classe repr�sente tous les oiseaux, qu�ils volent ou non.
class Bird {
private:
    int beakLength;
    int wingsLength;
    std::string color;
};


// Cette classe h�rite de la classe Bird g�n�rale, et qualifie tous les oiseaux capables de voler.
class FlyingBird : public Bird {
public:
    virtual void fly() {
        std::cout << "L'oiseau vole." << std::endl;
    }
};


// Cette classe h�rite de la classe Bird g�n�rale, et qualifie l�esp�ce des pingouins, qui ne peuvent pas voler.
class Penguin : public Bird {

// Pas de m�thode fly, car les pingouins ne volent pas.
public:
    void swim() {
        std::cout << "Le pingouin nage." << std::endl;
    }
};





// Cette classe h�rite de la classe FlyingBird, qui h�rite elle-m�me de la classe Bird g�n�rale. La classe Sparrow a donc acc�s � la m�thode fly(), car le moineau peut voler, et la surcharge pour l�adapter sp�cifiquement.
class Sparrow : public FlyingBird {
public:
    void fly() override {
        std::cout << "Le moineau vole." << std::endl;
    }
};