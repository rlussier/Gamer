#include <iostream>
#include <string>

using namespace std;

int main() {
    std::string name;
    std:: cout << "What is your name?\n";
    getline(std::cin, name);
    std::cout << "Nice to meet you, " << name << "!\n"
              << "Your name has " << name.length() << " letters. \n"
              << "Your name starts with the letter  " << name.front() << "."
              << "Your name ends with the letter " << name.back << ".";
    std::cin.ignore();
	return 0;
}
