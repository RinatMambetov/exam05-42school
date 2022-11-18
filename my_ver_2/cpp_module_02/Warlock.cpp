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

void Warlock::learnSpell(ASpell *s)
{
	book.learnSpell(s);
}

void Warlock::forgetSpell(std::string const &n)
{
	book.forgetSpell(n);
}

void Warlock::launchSpell(std::string const &n, ATarget const &t)
{
	ASpell *s = book.createSpell(n);
	if (s)
	{
		s->launch(t);
		delete s;
	}
}
