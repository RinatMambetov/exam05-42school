#ifndef BW_HPP
#define BW_HPP

#include "ATarget.hpp"

class BrickWall : public ATarget
{
public:
	BrickWall();
	ATarget *clone() const;
};

#endif
