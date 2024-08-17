#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>


class ClapTrap
{
    protected:
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
        std::string _name;

    public :
        // Constructors
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & src);

        // Operators
        ClapTrap& operator=(ClapTrap const & rhs);

        // Destructor
        ~ClapTrap();

        // Member functions
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    
};

#endif