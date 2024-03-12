#include <iostream>
#include <vector>

class Employee {
public:
    void addEmployee(const std::string& name) {
        // On ajoute un employ�
        employees.push_back(name);
    }

    void printAllEmployees() {
        // On affiche tous les employ�s
        for (auto& name : employees) {
            std::cout << name << std::endl;
        }
    }
private:
    // Vecteur de string qui mod�lise la base de donn�es des employ�s
    std::vector<std::string> employees;
};