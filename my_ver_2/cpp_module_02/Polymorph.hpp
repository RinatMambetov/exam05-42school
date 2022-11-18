#ifndef PM_HPP
#define PM_HPP

#include "ASpell.hpp"

class Polymorph : public ASpell
{
public:
	Polymorph();
	ASpell *clone() const;
};

#endif
