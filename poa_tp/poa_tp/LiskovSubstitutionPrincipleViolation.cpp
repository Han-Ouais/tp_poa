#include <iostream>

class BirdViolation {
public:
    virtual void fly() {
        std::cout << "L'oiseau vole." << std::endl;
    }
private:
    int beakLength;
    int wingsLength;
    std::string color;
};

class PenguinViolation : public BirdViolation {
public:
    void fly() override {
        std::cout << "logic_error(\"Les pingouins ne volent pas.\")" << std::endl;
    }
};