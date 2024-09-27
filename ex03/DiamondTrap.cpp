#include "DiamondTrap.hpp"

// constructors
DiamondTrap::DiamondTrap()
    : ClapTrap(), ScavTrap(), FragTrap(), _name("DiamondTrapDefault")
{
    // Initialization of attributes
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap's default constructor called." << std::endl;
}



DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap's parameterized constructor called." << std::endl;
}

// destructor
DiamondTrap ::~DiamondTrap()
{
	std::cout << "DiamondTrap's destructor called." << std::endl;
}

// copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap &src)
	: ClapTrap(src), ScavTrap(src), FragTrap(src), _name(src._name)
{
	std::cout << "DiamondTrap's copy constructor called." << std::endl;
}
// assignment operator
DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
	std::cout << "DiamondTrap's assignment operator called." << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs._name; // assign DiamondTrap-specific attribute
		ClapTrap::_name = this->_name + "_clap_name";
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}

// accessors
const std::string &DiamondTrap::getName(void) const
{
	return this->_name;
}

// member functions

void DiamondTrap::attack(const std::string &target)
{
	std::cout << "DiamondTrap attacks." << std::endl;
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "Diamond name is : " << _name << std::endl;
	std::cout << "And this (from ClapTrap name): " << ClapTrap::_name << std::endl;
}