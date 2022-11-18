#ifndef FW_HPP
#define FW_HPP

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
public:
	Fwoosh();
	ASpell *clone() const;
};

#endif
