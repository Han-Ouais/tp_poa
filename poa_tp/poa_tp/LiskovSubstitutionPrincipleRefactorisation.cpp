#include <iostream>


// Cette classe représente tous les oiseaux, qu’ils volent ou non.
class Bird {
private:
    int beakLength;
    int wingsLength;
    std::string color;
};


// Cette classe hérite de la classe Bird générale, et qualifie tous les oiseaux capables de voler.
class FlyingBird : public Bird {
public:
    virtual void fly() {
        std::cout << "L'oiseau vole." << std::endl;
    }
};


// Cette classe hérite de la classe Bird générale, et qualifie l’espèce des pingouins, qui ne peuvent pas voler.
class Penguin : public Bird {

// Pas de méthode fly, car les pingouins ne volent pas.
public:
    void swim() {
        std::cout << "Le pingouin nage." << std::endl;
    }
};





// Cette classe hérite de la classe FlyingBird, qui hérite elle-même de la classe Bird générale. La classe Sparrow a donc accès à la méthode fly(), car le moineau peut voler, et la surcharge pour l’adapter spécifiquement.
class Sparrow : public FlyingBird {
public:
    void fly() override {
        std::cout << "Le moineau vole." << std::endl;
    }
};