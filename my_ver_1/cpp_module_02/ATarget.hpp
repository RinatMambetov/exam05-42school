#ifndef AT_HPP
#define AT_HPP

#include <string>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
private:
	std::string type;

public:
	ATarget();
	ATarget(std::string const &t);
	virtual ~ATarget();
	ATarget(ATarget const &orig);
	ATarget &operator=(ATarget const &orig);

	std::string const &getType() const;
	virtual ATarget *clone() const = 0;
	void getHitBySpell(ASpell const &s) const;
};

#endif
