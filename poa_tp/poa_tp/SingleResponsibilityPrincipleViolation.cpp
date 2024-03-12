#include <iostream>
#include <vector>

class Employee {
public:
    void addEmployee(const std::string& name) {
        // On ajoute un employé
        employees.push_back(name);
    }

    void printAllEmployees() {
        // On affiche tous les employés
        for (auto& name : employees) {
            std::cout << name << std::endl;
        }
    }
private:
    // Vecteur de string qui modélise la base de données des employés
    std::vector<std::string> employees;
};