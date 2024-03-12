#include <iostream>

class SwitchableDevice {
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
};

class LightBulb : public SwitchableDevice {
public:
    void turnOn() override {
        std::cout << "L'ampoule s'allume." << std::endl;
    }
    void turnOff() override {
        std::cout << "L'ampoule s'éteint." << std::endl;
    }
};

class Switch {
private:
    SwitchableDevice& device;
public:
    Switch(SwitchableDevice& device) : device(device) {}

    void operate() {
        // Utilise l'abstraction SwitchableDevice, et non LightBulb directement.
        device.turnOn();
    }
};