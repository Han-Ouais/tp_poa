#include <iostream>

class DocumentPrinterViolation {
public:
    void printDocument(const std::string& documentType) {
        if (documentType == "PDF") {
            std::cout << "Imprime un document PDF." << std::endl;
        }
        else if (documentType == "Word") {
            std::cout << "Imprime un document Word." << std::endl;
        }
    }
};