#ifndef C
#define C(name, hp, damage_multiplier, desc, ...)
#define UNDEFCHECK
#endif


C(brawler, 50, 1.5, "A humanoid(?) in a suit of armour. Can take a beating. Punches are nothing to sniff at either.", attack_striking, attack_brute_force, attack_animalistic)
C(coward, 30, 0.8, "Can't tell what it looks like because it keeps hiding. Quite frail but fights dirty.", attack_striking, attack_animalistic, attack_fleeing, attack_sneak, attack_concoction)
C(catalyzer, 25, 1, "Never(?) fights hand-to-hand. Throws weird concoctions and bizarre glowing things at people.", attack_sneak, attack_ranged, attack_concoction, attack_bright)
C(beastman, 35, 1.8, "A chimera of something humanoid and something beastly. Hard to tell what specific variety. Hits hard and can take a few hits too. Not the best stamina though.", attack_striking, attack_brute_force, attack_animalistic, attack_sneak)
C(bloodsucker, 30, 1, "A chimera of a humanoid and a non-beastly creature known as a bat. Can replenish by feeding off of the blood of its foes (clue's in the name).", attack_animalistic, attack_sneak)

#ifdef UNDEFCHECK
#undef C
#undef UNDEFCHECK
#endif
