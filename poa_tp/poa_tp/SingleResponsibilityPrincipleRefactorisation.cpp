#include <iostream>
#include <vector>


// Une classe pour g�rer la base de donn�es des employ�s
class EmployeeDatabase {
public:
    void addEmployee(const std::string& name) {
        employees.push_back(name);
    }

    const std::vector<std::string>& getEmployees() const {
        return employees;
    }
private:
    std::vector<std::string> employees;
};


// Une classe pour l�affichage des employ�s
class EmployeeReporter {
public:
    static void printAllEmployees(const EmployeeDatabase& db) {
        for (auto& name : db.getEmployees()) {
            std::cout << name << std::endl;
        }
    }
};