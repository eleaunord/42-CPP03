#include <iostream>
#include "ClapTrap.hpp"

int main()
{
    std::cout << "Creating ClapTrap instances..." << std::endl;

    std::cout << "Testing default constructor:" << std::endl;
    ClapTrap claptrap1;

    std::cout << "Testing parameterized constructor:" << std::endl;
    ClapTrap claptrap2("CT2");

    std::cout << "\nTesting attack method:" << std::endl;
    claptrap1.attack("target1"); // show no attack possible due to 0 attack damage
    claptrap2.attack("target2"); // show attack with 0 damage

    std::cout << "\nTesting takeDamage method:" << std::endl;
    claptrap1.takeDamage(5); 
    claptrap2.takeDamage(3); 

    std::cout << "\nTesting beRepaired method:" << std::endl;
    claptrap1.beRepaired(4); // show hit points increase to 10 (already full)
    claptrap2.beRepaired(8); // repair up to 10 hit points (if less than 10)

    std::cout << "\nTesting copy constructor and assignment operator:" << std::endl;
    ClapTrap claptrap3 = claptrap2; // copy constructor
    ClapTrap claptrap4;             // default constructor
    claptrap4 = claptrap1;          // copy assignment operator

    std::cout << "\nTesting attack method on copied objects:" << std::endl;
    claptrap3.attack("target3"); // show attack with 0 damage
    claptrap4.attack("target4"); // show attack with 0 damage

    std::cout << "\nTesting takeDamage method on copied objects:" << std::endl;
    claptrap3.takeDamage(5); // show 5 damage taken
    claptrap4.takeDamage(7); // show 7 damage taken

    std::cout << "\nTesting beRepaired method on copied objects:" << std::endl;
    claptrap3.beRepaired(6); // repair up to 10 hit points
    claptrap4.beRepaired(5); // repair up to 10 hit points

    std::cout << std::endl;

    return 0;
}