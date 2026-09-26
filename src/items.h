#ifndef I
#define I(name, class, weight, desc)
#define UNDEFCHECK
#endif

I(brick, usable, 12, "A brick. You throw it at people. Could've gotten one out of the wall but this is easier I guess.")
I(johnathon, collectable, 0, "I don't know what this is.")
I(osagechan, collectable, 0, "Marketable plushie. Strangely protected from the disgusting environment we are in.")

#ifdef UNDEFCHECK
#undef I
#undef UNDEFCHECK
#endif