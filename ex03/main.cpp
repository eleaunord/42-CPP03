#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    // Creating a DiamondTrap object
    DiamondTrap dt1("Alpha");

    // Testing the attack method (inherited from ScavTrap)
    dt1.attack("Target 1");

    // Testing the whoAmI method (specific to DiamondTrap)
    dt1.whoAmI();

    // Copying DiamondTrap object using copy constructor
    DiamondTrap dt2(dt1);
    std::cout << "\nAfter copy construction:" << std::endl;
    dt2.whoAmI();

    // Using assignment operator
    DiamondTrap dt3("Gamma");
    dt3 = dt1;
    std::cout << "\nAfter assignment operation:" << std::endl;
    dt3.whoAmI();

    // Testing the destructor (will be called automatically when objects go out of scope)
    return 0;
}
