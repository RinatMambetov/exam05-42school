#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string const &name, std::string const &effects)
	: m_name(name), m_effects(effects) {}

ASpell::~ASpell() {}

ASpell::ASpell(ASpell const &orig)
	: m_name(orig.getName()), m_effects(orig.getEffects()) {}

ASpell &ASpell::operator=(ASpell const &orig)
{
	if (this == &orig)
		return *this;
	m_name = orig.getName();
	m_effects = orig.getEffects();
	return *this;
}

std::string const &ASpell::getName() const { return m_name; }

std::string const &ASpell::getEffects() const { return m_effects; }

void ASpell::launch(ATarget const &t) const
{
	t.getHitBySpell(*this);
}
