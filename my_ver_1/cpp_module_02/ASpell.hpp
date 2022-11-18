#ifndef AS_HPP
#define AS_HPP

#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
private:
	std::string name;
	std::string effects;

public:
	ASpell();
	ASpell(std::string const &n, std::string const &e);
	virtual ~ASpell();
	ASpell(ASpell const &orig);
	ASpell &operator=(ASpell const &orig);

	std::string const &getName() const;
	std::string const &getEffects() const;
	virtual ASpell *clone() const = 0;
	void launch(ATarget const &t) const;
};

#endif
