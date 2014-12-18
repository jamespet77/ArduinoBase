#ifndef MORSECODE_H
#define MORSECODE_H

#include <Arduino.h>
#include "led.h"

const struct {
	const char letter, *code;
} Morse[] =
{
	{ 'A', ".- "   },{ 'B', "-... " },{ 'C', "-.-. " },{ 'D', "-.. "  },
	{ 'E', ". "    },{ 'F', "..-. " },{ 'G', "--. "  },{ 'H', ".... " },
	{ 'I', ".. "   },{ 'J', ".--- " },{ 'K', ".-.- " },{ 'L', ".-.. " },
	{ 'M', "-- "   },{ 'N', "-. "   },{ 'O', "--- "  },{ 'P', ".--. " },
	{ 'Q', "--.- " },{ 'R', ".-. "  },{ 'S', "... "  },{ 'T', "- "    },
	{ 'U', "..- "  },{ 'V', "...- " },{ 'W', ".-- "  },{ 'X', "-..- " },
	{ 'Y', "-.-- " },{ 'Z', "--.. " },{ ' ', "  "    },
};

class morsecode {
	LED ld;
	public:
	morsecode();
	morsecode(byte);
	void    blink(int num);
	void    dot();
	void    dash();
	void    decode(const char *str);
	void    play(const char *str);
};

#endif
