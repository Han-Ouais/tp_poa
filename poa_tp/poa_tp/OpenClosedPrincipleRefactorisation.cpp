#include <iostream>


class DocumentPrinter {
public:
    virtual void print() const = 0;
};

class PDFPrinter : public DocumentPrinter {
public:
    void print() const override {
        std::cout << "Imprime un document PDF." << std::endl;
    }
};

class WordPrinter : public DocumentPrinter {
public:
    void print() const override {
        std::cout << "Imprime un document Word." << std::endl;
    }
};