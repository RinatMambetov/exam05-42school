#ifndef F_HPP
#define F_HPP

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
public:
	Fwoosh();
	ASpell *clone() const;
};

#endif
