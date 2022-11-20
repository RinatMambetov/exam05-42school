#ifndef WL_HPP
#define WL_HPP

#include <string>
#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
private:
	std::string name;
	std::string title;

	Warlock();
	Warlock(Warlock const &orig);
	Warlock &operator=(Warlock const &orig);

	std::map<std::string const &, ASpell *> m;

public:
	std::string const &getName() const;
	std::string const &getTitle() const;
	void setTitle(std::string const &t);

	Warlock(std::string const &n, std::string const &t);
	~Warlock();

	void introduce() const;

	void learnSpell(ASpell *s);
	void forgetSpell(std::string const &n);
	void launchSpell(std::string const &n, ATarget const &t);
};

#endif
