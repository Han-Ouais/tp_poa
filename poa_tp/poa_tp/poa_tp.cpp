#include <iostream>
#include "SingleResponsibilityPrincipleViolation.cpp"
#include "SingleResponsibilityPrincipleRefactorisation.cpp"

#include "OpenClosedPrincipleViolation.cpp"
#include "OpenClosedPrincipleRefactorisation.cpp"

#include "LiskovSubstitutionPrincipleViolation.cpp"
#include "LiskovSubstitutionPrincipleRefactorisation.cpp"

#include "InterfaceSegregationPrincipleViolation.cpp"
#include "InterfaceSegregationPrincipleRefactorisation.cpp"

#include "DependencyInversionPrincipleViolation.cpp"
#include "DependencyInversionPrincipleRefactorisation.cpp"

using namespace std;

int main()
{
    cout << endl <<
        "===============================" << endl <<
        "UTILISATION DE L'EXEMPLE SingleResponsibilityPrincipleViolation\n" << endl <<
        "===============================" << endl <<
        endl;

    cout << "Création de l'unique classe Employee..." << endl;
    Employee* employee = new Employee();

    employee->addEmployee("Pierre");
    cout << "Ajout de Pierre dans la base des employés..." << endl;
    employee->addEmployee("Paul");
    cout << "Ajout de Paul dans la base des employés..." << endl;
    employee->addEmployee("Jacques");
    cout << "Ajout de Jacques dans la base des employés..." << endl;

    cout << "Affichage de la base des employés" << endl;
    employee->printAllEmployees();




    cout << endl <<
        "===============================" << endl <<
        "UTILISATION DE L'EXEMPLE SingleResponsibilityPrincipleRefactorisation\n" << endl <<
        "===============================" << endl <<
        endl;

    cout << "Création de la classe EmployeeDatabase qui gère la base..." << endl;
    EmployeeDatabase* employeeDatabase = new EmployeeDatabase();
    employeeDatabase->addEmployee("Pierre");
    cout << "Ajout de Pierre dans la base des employés..." << endl;
    employeeDatabase->addEmployee("Paul");
    cout << "Ajout de Paul dans la base des employés..." << endl;
    employeeDatabase->addEmployee("Jacques");
    cout << "Ajout de Jacques dans la base des employés..." << endl;

    cout << "Création de la classe EmployeeReporter qui gère l'affichage..." << endl;
    EmployeeReporter* employeeReporter = new EmployeeReporter();

    cout << "Affichage de la base des employés" << endl;
    employeeReporter->printAllEmployees(*employeeDatabase);
     



    cout << endl <<
        "===============================" << endl <<
        "UTILISATION DE L'EXEMPLE OpenClosedPrincipleViolation\n" << endl <<
        "===============================" << endl <<
        endl;

    cout << "Création de la classe DocumentPrinterViolation qui imprime tous les documents..." << endl;
    DocumentPrinterViolation* documentPrinterViolation = new DocumentPrinterViolation();

    cout << "Impression d'un document PDF..." << endl;
    documentPrinterViolation->printDocument("PDF");
    cout << "Impression d'un document Word..." << endl;
    documentPrinterViolation->printDocument("Word");




    cout << endl <<
        "===============================" << endl <<
        "UTILISATION DE L'EXEMPLE OpenClosedPrincipleRefactorisation\n" << endl <<
        "===============================" << endl <<
        endl;

    cout << "Création de la classe PDFPrinter qui imprime tous les documents..." << endl;
    PDFPrinter* pdfPrinter = new PDFPrinter();
    cout << "Impression d'un document PDF avec PDFPrinter..." << endl;
    pdfPrinter->print();

    cout << "Création de la classe WordPrinter qui imprime tous les documents..." << endl;
    WordPrinter* wordPrinter = new WordPrinter();
    cout << "Impression d'un document Word avec WordPrinter..." << endl;
    wordPrinter->print();




    cout << endl <<
        "===============================" << endl <<
        "UTILISATION DE L'EXEMPLE LiskovSubstitutionPrincipleViolation\n" << endl <<
        "===============================" << endl <<
        endl;

    cout << "Création de la classe PenguinViolation à partir de la classe BirdViolation qui incorpore la méthode fly()..." << endl;
    PenguinViolation* penguinViolation = new PenguinViolation();
    cout << "Le pingouin essaie de voler..." << endl;
    penguinViolation->fly();



    cout << endl <<
        "===============================" << endl <<
        "UTILISATION DE L'EXEMPLE LiskovSubstitutionPrincipleRefactorisation\n" << endl <<
        "===============================" << endl <<
        endl;

    cout << "Création de la classe Penguin à partir de la classe Bird qui n'incorpore pas la méthode fly() dont Penguin n'a pas besoin..." << endl;
    Penguin* penguin = new Penguin();
    cout << "Le pingouin n'essaie pas de voler, mais utilise une de ses méthodes..." << endl;
    penguin->swim();

    cout << "Création de la classe Sparrow à partir de la classe FlyingBird qui incorpore la méthode fly(), elle même héritant de la classe générale Bird..." << endl;
    Sparrow* sparrow = new Sparrow();
    cout << "Le moineau essaie de voler..." << endl;
    sparrow->fly();



    cout << endl <<
        "===============================" << endl <<
        "UTILISATION DE L'EXEMPLE InterfaceSegregationPrincipleViolation\n" << endl <<
        "===============================" << endl <<
        endl;

    cout << "Création de la classe BasicPrinterViolation à partir de l'interface MultiFunctionPrinter, qui implémente des méthodes dont elle n'a pas besoin..." << endl;
    BasicPrinterViolation* basicPrinterViolation = new BasicPrinterViolation();

    cout << "La BasicPrinterViolation essaie d'imprimer un document" << endl;
    basicPrinterViolation->print();
    cout << "La BasicPrinterViolation essaie de faxer un document" << endl;
    basicPrinterViolation->fax();
    cout << "La BasicPrinterViolation essaie de scanner un document" << endl;
    basicPrinterViolation->scan();



    cout << endl <<
        "===============================" << endl <<
        "UTILISATION DE L'EXEMPLE InterfaceSegregationPrincipleRefactorisation\n" << endl <<
        "===============================" << endl <<
        endl;

    cout << "Création de la classe BasicPrinter à partir de l'interface Printer, qui implémente uniquement la méthode Print dont a besoin la classe BasicPrinter..." << endl;
    BasicPrinter* basicPrinter = new BasicPrinter();

    cout << "La BasicPrinter essaie d'imprimer un document" << endl;
    basicPrinter->print();

    cout << "Création de la classe AdvencedPrinter à partir des interfaces Printer, Scanner, et Fax car AdvancedPrinter utilise toutes leurs méthodes..." << endl;
    AdvancedPrinter* advancedPrinter = new AdvancedPrinter();

    cout << "L'AdvancedPrinter essaie d'imprimer un document" << endl;
    advancedPrinter->print();
    cout << "L'AdvancedPrinter essaie de faxer un document" << endl;
    advancedPrinter->fax();
    cout << "L'AdvancedPrinter essaie de scanner un document" << endl;
    advancedPrinter->scan();



    cout <<
        "===============================" << endl <<
        "UTILISATION DE L'EXEMPLE DependencyInversionPrincipleViolation\n" << endl <<
        "===============================" << endl <<
        endl;

    cout << "Création de la classe LightBulbViolation" << endl;
    LightBulbViolation* lightBulbViolation = new LightBulbViolation();

    cout << "Création de la classe SwitchViolation qui utilise directement LightBulbViolation" << endl;
    SwitchViolation* switchViolation = new SwitchViolation();

    cout << "SwitchViolation allume LightBulbViolation en l'utilisant directement" << endl;
    switchViolation->operate();



    cout <<
        "===============================" << endl <<
        "UTILISATION DE L'EXEMPLE DependencyInversionPrincipleRefactorisation\n" << endl <<
        "===============================" << endl <<
        endl;

    cout << "Création de la classe LightBulb qui hérite de SwitchableDevice" << endl;
    LightBulb bulb;

    cout << "Création de la classe Switch qui utilise LightBulb via SwitchableDevice" << endl;
    Switch switcher(bulb);

    cout << "Switch allume LightBulb en passant par SwitchableDevice" << endl;
    switcher.operate();

}
