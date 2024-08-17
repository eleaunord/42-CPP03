#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "Creating ClapTrap and ScavTrap instances..." << std::endl;

    std::cout << "Testing default constructors:" << std::endl;
    ClapTrap claptrap1; // ClapTrap's default constructor called to init claptrap1
    ScavTrap scavtrap1; // ClapTrap's constructor automatically called to init the base part of scavtrap1

    std::cout << "Testing parameterized constructor:" << std::endl;
    ClapTrap claptrap2("Claptrap2");
    ScavTrap scavtrap2("Scavtrap2");

    std::cout << "Testing attack method:" << std::endl;
    claptrap1.attack("target1");
    scavtrap1.attack("Dona"); // ScavTrap attacks ClapTrap

    std::cout << "Testing takeDamage method:" << std::endl;
    claptrap2.takeDamage(20); // ClapTrap takes damage

    std::cout << "Testing beRepaired method:" << std::endl;
    claptrap2.beRepaired(5);  // ClapTrap repairs itself
    claptrap2.beRepaired(10); // ClapTrap attempts to repair beyond maximum hit points

    std::cout << "Testing guardGate method:" << std::endl;
    scavtrap1.guardGate(); // ScavTrap goes into Gate keeper mode

    std::cout << "Testing copy constructor:" << std::endl;
    ScavTrap scavtrap3(scavtrap2); // Create a copy of scavtrap2

    return 0;
}

/*
Before the ScavTrap constructor body starts executing, 
the base class (ClapTrap) constructor must be called to 
init the ClapTrap part of the ScavTrap object.
*/