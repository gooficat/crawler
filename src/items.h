#ifndef I
#define I(name, class, weight, desc)
#define UNDEFCHECK
#endif

I(brick, usable, 12, "A brick. You throw it at people. Could've gotten one out of the wall but this is easier I guess.")
I(water, usable, 4, "A vessel containing potable water.")
I(johnathon, collectable, 0, "I don't know what this is.")
I(osagechan, collectable, 0, "Marketable plushie. Strangely protected from the disgusting environment we are in.")
I(fumoofmiyoi, collectable, 0, "Fumo of Miyoi Okunoda. Whatever that is.")
I(radiclejar, collectable, 0, "A jar with a root in it that slowly poisons any water contained in the jar. The maximum potency weakens over time.")

#ifdef UNDEFCHECK
#undef I
#undef UNDEFCHECK
#endif