#include <iostream>

class LightBulbViolation {
public:
    void turnOn() {
        // Allume l'ampoule
        std::cout << "L'ampoule s'allume." << std::endl;
    }
    void turnOff() {
        // Eteint l'ampoule
        std::cout << "L'ampoule s'éteint." << std::endl;
    }
};

class SwitchViolation {
private:
    LightBulbViolation bulb;
public:
    void operate() {
        // Utilise directement LightBulb sans passer par une abstraction.
        bulb.turnOn();
    }
};