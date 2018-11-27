#include <iostream>
#include <string>

int main()
{
  std::string name;
  std::string age;
  std::string favorite_food;
  std::string pets2;
  std::string gender;
  
  std::cout << "What is your name? ";
  getline (std::cin, name);
  std::cout << "Nice to meet you " << name << "!\n";
  
  std::cout << "How old are you? ";
  getline (std::cin, age);
  std::cout << "So, you are " << age << " years old!\n";
  
  std::cout << "What is your favorite food? ";
  getline (std::cin, favorite_food);
  std::cout << "Yummy, I like " << favorite_food << " too!\n";
  
  std::cout << "Do you have any pets? ";
  getline (std::cin, pets2);
  std::cout << "Cool, I love " << pets2 << "s!\n";
  
  std::cout << "How do you identify? ";
  getline (std::cin, gender);
  std::cout << "You are a " << gender << "!\n";
}
