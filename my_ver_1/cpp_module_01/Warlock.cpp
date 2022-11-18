#include "Warlock.hpp"

Warlock::Warlock(std::string const &n, std::string const &t)
	: name(n), title(t)
{
	std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << name << ": My job here is done!\n";

	std::map<std::string const &, ASpell *>::iterator bit = m.begin();
	std::map<std::string const &, ASpell *>::iterator eit = m.end();

	while (bit != eit)
	{
		delete bit->second;
		++bit;
	}
	m.clear();
}

std::string const &Warlock::getName() const { return name; }

std::string const &Warlock::getTitle() const { return title; }

void Warlock::setTitle(std::string const &t) { title = t; }

void Warlock::introduce() const
{
	std::cout << name << ": I am " << name << ", " << title << "!\n";
}

void Warlock::learnSpell(ASpell *s)
{
	if (s)
		m.insert(std::pair<std::string const &, ASpell *>(s->getName(), s->clone()));
}

void Warlock::forgetSpell(std::string const &n)
{
	std::map<std::string const &, ASpell *>::iterator it = m.find(n);
	if (it != m.end())
		delete it->second;
	m.erase(n);
}

void Warlock::launchSpell(std::string const &n, ATarget const &t)
{
	ASpell *s = m[n];
	if (s)
		s->launch(t);
}
