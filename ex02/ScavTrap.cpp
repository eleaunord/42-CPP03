#include "ScavTrap.hpp"

// Canonical Form

// default constructor
ScavTrap::ScavTrap(void) : ClapTrap()
{
    this->_name = "NoName";
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap's default constructor called." << std::endl;
}
// parameterized constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap()
{
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap's parameterized constructor called." << std::endl;
    return;
}

// copy constructor
ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
    // check if the current object is not the same as the source object
    // if different it copies the values from src to the current object using assignement operator
    if (this != &src)
        *this = src;
    std::cout << "ScavTrap's copy constructor called." << std::endl;
}

// copy assignement operator
ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
    std::cout << "ScavTrap's assignation operator called." << std::endl;
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
ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap's destructor called." << std::endl;
    return;
}

// Member functions
void ScavTrap::attack(const std::string &target)
{
    if (this->_hitPoints == 0)
    {
        std::cout << "Game over for ScavTrap " << this->_name << ". No attack is possible." << std::endl;
        return;
    }
    else if (this->_energyPoints == 0)
    {
        std::cout << "ScavTrap " << this->_name << "has no energy left. No attack is possible. " << std::endl;
        return;
    }
    else
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage." << std::endl;
        this->_energyPoints--;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
    return ;
}