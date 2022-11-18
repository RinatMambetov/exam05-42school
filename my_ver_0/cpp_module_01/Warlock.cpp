#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
	: m_name(name), m_title(title)
{
	std::cout << m_name << ": This looks like another boring day.\n";
}

Warlock::~Warlock()
{
	std::cout << m_name << ": My job here is done!\n";
	for (size_t i = 0; i < m_spells.size(); ++i)
	{
		delete m_spells.at(i);
	}
	m_spells.clear();
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
	if (s)
		m_spells.push_back(s->clone());
}

void Warlock::forgetSpell(std::string const &name)
{
	for (size_t i = 0; i < m_spells.size(); ++i)
	{
		if (name.compare(m_spells.at(i)->getName()) == 0)
		{
			delete m_spells.at(i);
			m_spells.erase(m_spells.begin() + i);
		}
	}
}

void Warlock::launchSpell(std::string const &name, ATarget const &t) const
{
	for (size_t i = 0; i < m_spells.size(); ++i)
	{
		if (name.compare(m_spells.at(i)->getName()) == 0)
			t.getHitBySpell(*m_spells.at(i));
	}
}
