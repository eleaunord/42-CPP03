#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

// constructors, destructor and attack() print different messages.
class FragTrap : virtual public ClapTrap
{

public:
    // Constructors
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const &src);

    // Operators
    FragTrap &operator=(FragTrap const &rhs);

    // Destructor
    ~FragTrap();

    // Member functions
    void attack(const std::string &target);

    void highFivesGuys();
};

#endif