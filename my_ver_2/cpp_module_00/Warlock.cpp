#include "Warlock.hpp"

Warlock::Warlock(std::string const &n, std::string const &t)
	: name(n), title(t)
{
	std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!\n";
}

void Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!\n";
}

std::string const &Warlock::getName() const { return name; }

std::string const &Warlock::getTitle() const { return title; }

void Warlock::setTitle(std::string const &t) { title = t; }
