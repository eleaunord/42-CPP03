#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

/*
Virtual Destructors: Ensure proper cleanup of derived class resources when deleted through base class pointers.
Virtual Methods: Allow derived classes to override methods and provide specific implementations.
Virtual Inheritance: Manage multiple inheritance scenarios to avoid duplication of base class subobjects and ensure a single instance of the base clas
*/
class DiamondTrap : public ScavTrap, public FragTrap
{
    // from ClapTrap
    private:
        std::string _name;

    public :
        // Constructors
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &src);

        // Destructors 
        virtual ~DiamondTrap();
        // ensures that when an object of DiamondTrap is deleted, 
        // all destructors in the inheritance chain are called correctly.

        // Operators
        DiamondTrap& operator=(const DiamondTrap & rhs);

        // Accessors
        //void setName(const std::string &name);
        const std::string &getName(void) const;

        // Member functions
        void attack(const std::string& target); // redefine attack since both Frag and Scav has them
        void whoAmI();
};

//std::ostream &operator<<(std::ostream &os, const DiamondTrap &obj);

#endif