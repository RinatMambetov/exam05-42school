#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook()
{
	std::map<std::string const &, ASpell *>::iterator bit = m.begin();
	std::map<std::string const &, ASpell *>::iterator eit = m.end();

	while (bit != eit)
	{
		delete bit->second;
		++bit;
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
	std::map<std::string const &, ASpell *>::iterator it = m.find(n);
	if (it != m.end())
		delete it->second;
	m.erase(n);
}

ASpell *SpellBook::createSpell(std::string const &n)
{
	ASpell *s = m[n];
	if (s)
		return s->clone();
	return 0;
}
