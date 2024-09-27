#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

/*
The diamond pblm

DiamondTrap inherits from : ScavTrap and FragTrap => inherits both from ClapTrap
may cause 2 instances of ClapTrap but we only want 1 subobject
=> virtual inheritance => by marking inheritance as virtual = make sure only 1 instance
of ClapTrap is created and shared btwn ScavTrap and FragTrap
*/
int main()
{
    std::cout << "Creating DiamondTrap using the default constructor:" << std::endl;
    DiamondTrap defaultDiamond;
    defaultDiamond.whoAmI(); // check default diamond init properly

    std::cout << std::endl;
    
    // Creating a DiamondTrap object . 
    DiamondTrap diamond1("Harry");

    // attack method (inherited from ScavTrap)
    diamond1.attack("Target 1");

    // Testing the whoAmI method (specific to DiamondTrap)
    diamond1.whoAmI();

    // Copying DiamondTrap object using copy constructor
    DiamondTrap diamond2(diamond1);
    std::cout << "\nAfter copy construction:" << std::endl;
    diamond2.whoAmI();

    // Using assignment operator
    DiamondTrap diamond3("Ron");
    diamond3 = diamond1;
    std::cout << "\nAfter assignment operation:" << std::endl;
    diamond3.whoAmI();

    return 0;
}
