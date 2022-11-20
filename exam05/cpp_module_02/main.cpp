#include "Warlock.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "BrickWall.hpp"
#include "Polymorph.hpp"
#include "TargetGenerator.hpp"

int main()
{
	Warlock richard("Richard", "foo");
	richard.setTitle("Hello, I'm Richard the Warlock!");
	BrickWall model1;

	Polymorph *polymorph = new Polymorph();
	TargetGenerator tarGen;

	tarGen.learnTargetType(&model1);
	richard.learnSpell(polymorph);

	Fireball *fireball = new Fireball();

	richard.learnSpell(fireball);

	ATarget *wall = tarGen.createTarget("Inconspicuous Red-brick Wall");
	ATarget *wall2 = tarGen.createTarget("Inconspicuous Red-brick Wal");

	richard.introduce();
	richard.launchSpell("Polymorph", *wall);
	richard.launchSpell("Fireball", *wall);
	richard.launchSpell("Firebal", *wall);

	delete polymorph;
	delete fireball;
	delete wall;
	delete wall2;

	return 0;
}
