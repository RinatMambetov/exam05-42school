#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include "ASpell.hpp"
#include <vector>
#include <string>

class SpellBook
{
private:
	SpellBook(SpellBook const &orig);
	SpellBook &operator=(SpellBook const &orig);

	std::vector<ASpell *> m_book;

public:
	SpellBook();
	~SpellBook();

	void learnSpell(ASpell *s);
	void forgetSpell(std::string const &name);
	ASpell *createSpell(std::string const &name);
};

#endif
