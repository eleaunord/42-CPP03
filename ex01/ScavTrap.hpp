#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

// constructors, destructor and attack() print different messages.
class ScavTrap : public ClapTrap
{

public:
    // Constructors
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const & src);

    // Operators
    ScavTrap & operator=(ScavTrap const & rhs);

    // Destructor
    ~ScavTrap();

    // Member functions
    void attack(const std::string &target);
    
    void guardGate();    
    
};

#endif