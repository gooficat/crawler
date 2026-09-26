#ifndef E
#define E(name, class, hp, damage_multiplier, desc, ...)
#define UNDEFCHECK
#endif

E(rat, vermin, 7, 0.3, "It's a rat. A small creature with fur that eats whatever it can find, and probably carries diseases.", attack_brute_force, attack_animalistic)
E(ratman, vermin, 23, 0.6, "A strange chimera of a rat and some humanoid creature. Or at least it seems that way. It's too civilized to be a mindless beast and not sophisticated enough to actually be of human descent. Something fishy is going on.", attack_brute_force, attack_animalistic, attack_concoction)
E(miasma, disease, 0, 0.1, "The air itself attacks you. It forms in pockets and your presence destabilizes it.", attack_concoction)
E(spall, disease, 0, 0.1, "The ceiling fell on you. Do you want an essay about falling ceilings?", attack_striking)
E(beastman, monster, 40, 1.2, "A more typical chimera. If it's attacking you, the human half is probably already dead.", attack_brute_force, attack_animalistic, attack_striking)


#ifdef UNDEFCHECK
#undef E
#undef UNDEFCHECK
#endif