#include "FragTrap.hpp"

// Canonical Form

// default constructor
FragTrap::FragTrap(void) : ClapTrap()
{
    this->_name = "NoName";
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap's default constructor called." << std::endl;
}
// parameterized constructor
FragTrap::FragTrap(std::string name) : ClapTrap()
{
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap's parameterized constructor called." << std::endl;
    return;
}

// copy constructor
FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
    // check if the current object is not the same as the source object
    // if different it copies the values from src to the current object using assignement operator
    if (this != &src)
        *this = src;
    std::cout << "FragTrap's copy constructor called." << std::endl;
}

// copy assignement operator
FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
    std::cout << "FragTrap's assignation operator called." << std::endl;
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
FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap's destructor called." << std::endl;
    return;
}

// Member functions
void FragTrap::attack(const std::string &target)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "Game over for FragTrap " << this->_name << ". No attack is possible." << std::endl;
        return;
    }
    else if (this->_energyPoints == 0)
    {
        std::cout << "FragTrap " << this->_name << " has no energy left. No attack is possible. " << std::endl;
        return;
    }
    else
    {
        std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage." << std::endl;
        this->_energyPoints--;
    }
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->_name << " is asking for a High Five." << std::endl;
    return;
}