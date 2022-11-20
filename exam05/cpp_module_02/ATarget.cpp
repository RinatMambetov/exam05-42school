#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string const &t)
	: type(t) {}

ATarget::~ATarget() {}

ATarget::ATarget(ATarget const &orig)
	: type(orig.getType()) {}

ATarget &ATarget::operator=(ATarget const &orig)
{
	if (this == &orig)
		return *this;
	type = orig.getType();
	return *this;
}

std::string const &ATarget::getType() const { return type; }

void ATarget::getHitBySpell(ASpell const &s) const
{
	std::cout << type << " has been " << s.getEffects() << "!\n";
}
