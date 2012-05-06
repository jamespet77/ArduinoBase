#ifndef MORSECODE_HH
#define MORSECODE_HH

#include <Arduino.h>
#include <led.h>
#include <pins.h>

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
public:
	morsecode();
	morsecode(byte id);
	~morsecode();
	void	blink(int num);
	void	dot();
	void	dash();
	void	decode(const char *str);
	void	play(const char *str);
private:
	LED led;

};

#endif
