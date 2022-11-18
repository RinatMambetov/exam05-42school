#ifndef D_HPP
#define D_HPP

#include "ATarget.hpp"

class Dummy : public ATarget
{
public:
	Dummy();
	ATarget *clone() const;
};

#endif
