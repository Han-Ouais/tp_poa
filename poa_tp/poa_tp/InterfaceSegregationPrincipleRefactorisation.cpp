#include <iostream>

class Printer {
public:
    virtual void print() = 0;
};

class Scanner {
public:
    virtual void scan() = 0;
};

class Fax {
public:
    virtual void fax() = 0;
};


// Utilise toutes les interfaces, car elle en a l’utilité
class AdvancedPrinter : public Printer, public Scanner, public Fax {
public:
    void print() override {
        std::cout << "Impression avancée du document." << std::endl;
    }

    void scan() override {
        std::cout << "Numérisation du document en cours." << std::endl;
    }

    void fax() override {
        std::cout << "Envoi du document par fax." << std::endl;
    }
};


// Utilise seulement l’interface Printer, car elle n’a pas besoin des autres.
class BasicPrinter : public Printer {
public:
    void print() override {
        std::cout << "Impression basique du document." << std::endl;
    }
};