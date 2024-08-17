#include "ClapTrap.hpp"

// Canonical Form

// default constructor : init ClapTrap w/ default values
ClapTrap::ClapTrap(void)
{
    this->_name = "NoName";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "Default constructor called." << std::endl;
}
// parameterized constructor
ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "Parameterized constructor called." << std::endl;
    return;
}

// copy constructor
ClapTrap::ClapTrap(ClapTrap const & src)
{
    // check if the current object is not the same as the source object
    // if different it copies the values from src to the current object using assignement operator
    if (this != &src)
        *this = src;
    std::cout << "Copy constructor called." << std::endl;
}

// copy assignement operator
ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout << "Assignation operator called." << std::endl;
    // self assignement check (so we don't have a = a)
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}

// destructor
ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called." << std::endl;
    return;
}

// Member functions

// When ClapTrack attacks, it causes its target to lose <attack damage> hp
// -1 energy point
void ClapTrap::attack(const std::string &target)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "Game over for ClapTrap " << this->_name << ". No attack is possible." << std::endl;
        return ;

    }
    else if (this->_energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << "has no energy left. No attack is possible. " << std::endl;
        return ;
    }
    else
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage." << std::endl;
        this->_energyPoints--;
    }
}

// When ClapTrap repairs itself, it gets <amount> hp back
// -1 energy point
void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints >= 10)
    {
        std::cout << "ClapTrap " << this->_name << " has already enough hit points. A reparation is not needed" << std::endl;
        return ;
    }
    else if (this->_energyPoints == 0)
    {
         std::cout << "ClapTrap " << this->_name << " has no energy left to be repaired." << std::endl;
         return ;
    }
    else if (this->_hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is already dead and can't be repaired." << std::endl;
        return ;
    }        
    else
    {
        if (amount > 10 || this->_hitPoints + amount > 10)
            this->_hitPoints = 10;
        else
            this->_hitPoints += amount;
        this->_energyPoints--;
        std::cout << "ClapTrap " << this->_name << " has been repaired and has now " << this->_hitPoints << " Hit Points and " << this->_energyPoints << " energy points left." << std::endl;
        return ;
    }
}

// lose hit points
void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " can't take damage. He's already dead." << std::endl;
        return ;
    }
    if (amount >= this->_hitPoints)
        this->_hitPoints = 0;
    else
        this->_hitPoints -= amount;
    std::cout << "ClapTrap " << this->_name << " was attacked and lost " << amount << " of Hit Points. Now he has " << this->_hitPoints << " Hit Points left." << std::endl;
    if (this->_hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " has died." << std::endl;
        return ;
    }
    return ;
}