#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{
	std::map<std::string const &, ASpell *>::iterator it = m.begin();
	while (it != m.end())
	{
		delete it->second;
		++it;
	}
	m.clear();
}

void SpellBook::learnSpell(ASpell *s)
{
	if (s)
		m.insert(std::pair<std::string const &, ASpell *>(s->getName(), s->clone()));
}

void SpellBook::forgetSpell(std::string const &n)
{
	if (m.find(n) != m.end())
		delete m.find(n)->second;
	m.erase(n);
}

ASpell *SpellBook::createSpell(std::string const &n)
{
	if (m[n])
		return m[n]->clone();
	return 0;
}
