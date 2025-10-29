/* https://www.youtube.com/watch?v=wN0x9eZLix4 */
#include <iostream>
#include <string>

class employee {
private:
        std::string Name = "name";
        std::string Company = "company";
        int Age = 25;
public:
        void introduce_yourself() {
                std::cout << "Employee name: " << Name << "\n";
                std::cout << "Employee age: " << Age << "\n";
                std::cout << "Employee company: " << Company << "\n";
        }
        employee(std::string name, std::string company, int age) {
                Name = name;
                Company = company;
                Age = age;
        }
        void setName(std::string name) {
                Name = name;
        }
        std::string getName() {
                return Name;
        }
        void setAge(int age) {
                if(age >= 18) {
                        Age = age;
                }
        }
        int getAge() {
                return Age;
        }
        void setCompany(std::string company) {
                Company = company;
        }
        std::string getCompany() {
                return Company;
        }
};
int main() {
        employee employee1 = employee("Leonardo", "Estância Toscana", 25);
        /*employee1.Age = 25;
        employee1.Name = "Leonardo";
        employee1.Company = "Estância Toscana";*/
        employee1.introduce_yourself();
        employee employee2 = employee("Edval", "Estância Toscana", 56);
        /*employee2.Name = "Edval";
        employee2.Age = 56;
        employee2.Company = "Estância Toscana";*/
        employee2.introduce_yourself();
}