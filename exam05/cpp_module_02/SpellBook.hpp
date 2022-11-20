#ifndef SB_HPP
#define SB_HPP

#include "ASpell.hpp"
#include <string>
#include <map>

class SpellBook
{
private:
	SpellBook(SpellBook const &orig);
	SpellBook &operator=(SpellBook const &orig);

	std::map<std::string const &, ASpell *> m;

public:
	SpellBook();
	~SpellBook();

	void learnSpell(ASpell *s);
	void forgetSpell(std::string const &n);
	ASpell *createSpell(std::string const &n);
};

#endif
