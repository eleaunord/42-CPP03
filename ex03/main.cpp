#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "Creating FragTrap instances..." << std::endl;

    std::cout << "Testing default constructor:" << std::endl;
    FragTrap fragtrap1;

    std::cout << "Testing parameterized constructor:" << std::endl;
    FragTrap fragtrap2("Fragtrap2");

    std::cout << "Testing attack method:" << std::endl;
    fragtrap1.attack("target1");
    fragtrap2.attack("target2");

    std::cout << "Testing highFivesGuys method:" << std::endl;
    fragtrap1.highFivesGuys();
    fragtrap2.highFivesGuys();

    std::cout << "Testing takeDamage method:" << std::endl;
    fragtrap2.takeDamage(20); // FragTrap takes damage
    fragtrap2.takeDamage(90); // FragTrap takes more damage and should "die"

    std::cout << "Testing beRepaired method:" << std::endl;
    fragtrap2.beRepaired(5);   // FragTrap repairs itself
    fragtrap2.beRepaired(100); // FragTrap attempts to repair beyond maximum hit points

    std::cout << "Testing copy constructor:" << std::endl;
    FragTrap fragtrap3(fragtrap2); // Create a copy of fragtrap2

    std::cout << "Testing assignation operator:" << std::endl;
    FragTrap fragtrap4;
    fragtrap4 = fragtrap2; // Assign fragtrap2 to fragtrap4

    return 0;
}
