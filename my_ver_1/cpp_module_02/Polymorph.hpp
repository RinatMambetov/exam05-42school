#ifndef P_HPP
#define P_HPP

#include "ASpell.hpp"

class Polymorph : public ASpell
{
public:
	Polymorph();
	ASpell *clone() const;
};

#endif
