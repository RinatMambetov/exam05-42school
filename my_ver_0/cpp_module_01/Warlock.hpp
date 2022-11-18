#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
private:
	std::string m_name;
	std::string m_title;
	Warlock(Warlock const &orig);
	Warlock &operator=(Warlock const &orig);
	Warlock();
	std::vector<ASpell *> m_spells;

public:
	Warlock(std::string const &name, std::string const &title);
	~Warlock();

	std::string const &getName() const;
	std::string const &getTitle() const;

	void setTitle(std::string const &title);

	void introduce() const;

	void learnSpell(ASpell *s);

	void forgetSpell(std::string const &name);

	void launchSpell(std::string const &name, ATarget const &t) const;
};

#endif
