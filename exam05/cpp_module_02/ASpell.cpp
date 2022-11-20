#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string const &n, std::string const &e)
	: name(n), effects(e) {}

ASpell::~ASpell() {}

ASpell::ASpell(ASpell const &orig)
	: name(orig.getName()), effects(orig.getEffects()) {}

ASpell &ASpell::operator=(ASpell const &orig)
{
	if (this == &orig)
		return *this;
	name = orig.getName();
	effects = orig.getEffects();
	return *this;
}

std::string const &ASpell::getName() const { return name; }

std::string const &ASpell::getEffects() const { return effects; }

void ASpell::launch(ATarget const &t) const
{
	t.getHitBySpell(*this);
}
