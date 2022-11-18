#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string const &type) : m_type(type) {}

ATarget::~ATarget() {}

ATarget::ATarget(ATarget const &orig) : m_type(orig.getType()) {}

ATarget &ATarget::operator=(ATarget const &orig)
{
	if (this == &orig)
		return *this;
	m_type = orig.getType();
	return *this;
}

std::string const &ATarget::getType() const { return m_type; }

void ATarget::getHitBySpell(ASpell const &s) const
{
	std::cout << getType() << " has been " << s.getEffects() << "!\n";
}
