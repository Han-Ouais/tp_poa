#include <iostream>

class MultiFunctionPrinter {
public:
    virtual void print() = 0;
    virtual void scan() = 0;
    virtual void fax() = 0;
};
class BasicPrinterViolation : public MultiFunctionPrinter {
public:
    void print() override {
        std::cout << "Impression du document..." << std::endl;
    }

    void scan() override {
        // En r�alit�, cette m�thode ne devrait pas �tre impl�ment�e dans BasicPrinter
        std::cout << "Erreur: cette imprimante ne supporte pas la num�risation." << std::endl;
    }

    void fax() override {
        // De m�me, cette m�thode ne devrait pas �tre impl�ment�e dans BasicPrinter
        std::cout << "Erreur: cette imprimante ne supporte pas l'envoi de fax." << std::endl;
    }
};