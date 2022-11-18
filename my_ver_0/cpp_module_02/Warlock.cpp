#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
	: m_name(name), m_title(title)
{
	std::cout << m_name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << m_name << ": My job here is done!\n";
}

std::string const &Warlock::getName() const { return m_name; }

std::string const &Warlock::getTitle() const { return m_title; }

void Warlock::setTitle(std::string const &title) { m_title = title; }

void Warlock::introduce() const
{
	std::cout << m_name << ": I am " << m_name << ", " << m_title << "!\n";
}

void Warlock::learnSpell(ASpell *s)
{
	m_sbook.learnSpell(s);
}

void Warlock::forgetSpell(std::string const &name)
{
	m_sbook.forgetSpell(name);
}

void Warlock::launchSpell(std::string const &name, ATarget const &t)
{
	ASpell *s = m_sbook.createSpell(name);
	if (s)
	{
		s->launch(t);
		delete s;
	}
}
