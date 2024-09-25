#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "Creating ClapTrap and ScavTrap instances..." << std::endl;

    std::cout << "\nTesting default constructors:" << std::endl;
    ClapTrap claptrap1; // ClapTrap's default constructor called to init claptrap1
    ScavTrap scavtrap1; // ClapTrap's constructor automatically called to init the base part of scavtrap1
    // since ScavTrap is derived from ClapTrap, before ScavTrap's constructor is called ClapTrap constructor automatically called

    std::cout << "\nTesting parameterized constructor:" << std::endl;
    ClapTrap claptrap2("Dinosaur"); // param constr of Claptrap since we have a name
    ScavTrap scavtrap2("Scavtrap2"); //ScavTrap is derived from ClapTrap, the parameterized constructor of ClapTrap is called first to init scavtrap2

    std::cout << "\nTesting attack method:" << std::endl;
    claptrap1.attack("target1");
    scavtrap1.attack("Dona"); // ScavTrap attacks ClapTrap

    std::cout << "\nTesting takeDamage method:" << std::endl;
    claptrap2.takeDamage(20); // ClapTrap takes damage
    scavtrap1.takeDamage(20);

    std::cout << "\nTesting beRepaired method:" << std::endl;
    claptrap2.beRepaired(5);  // ClapTrap repairs itself
    scavtrap1.beRepaired(10);

    std::cout << "\nTesting guardGate method:" << std::endl;
    scavtrap1.guardGate(); // ScavTrap goes into Gate keeper mode

    std::cout << "\nTesting copy constructor:" << std::endl;
    ScavTrap scavtrap3(scavtrap2); // Create a copy of scavtrap2

    return 0;
}

/*
Before the ScavTrap constructor body starts executing, 
the base class (ClapTrap) constructor must be called to 
init the ClapTrap part of the ScavTrap object.
*/