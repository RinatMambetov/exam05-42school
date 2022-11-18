#ifndef W_HPP
#define W_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>
#include "SpellBook.hpp"

class Warlock
{
private:
	std::string name;
	std::string title;
	SpellBook book;

	Warlock();
	Warlock(Warlock const &orig);
	Warlock operator=(Warlock const &orig);

public:
	std::string const &getName() const;
	std::string const &getTitle() const;
	void setTitle(std::string const &t);
	void introduce() const;

	void learnSpell(ASpell *s);
	void forgetSpell(std::string const &n);
	void launchSpell(std::string const &n, ATarget const &t);

	Warlock(std::string const &n, std::string const &t);
	~Warlock();
};

#endif
