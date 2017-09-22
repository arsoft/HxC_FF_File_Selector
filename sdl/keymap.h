
keyboard_funct_mapper keysmap[]=
{
	{FCT_UP_KEY,             0x00},
	{FCT_DOWN_KEY,           0x01},
	{FCT_LEFT_KEY,           0x02},
	{FCT_RIGHT_KEY,          0x03},
	{FCT_SELECT_FILE_DRIVEA, 0x04},
	{FCT_SAVE,               0x05},
	{FCT_REBOOT,             0x06},
	{FCT_CLEARSLOT,          0x07},
	{FCT_HELP,               0x08},
	{FCT_SAVEREBOOT,         0x09},
	{FCT_SELECTSAVEREBOOT,   0x0A},
	{FCT_OK,                 0x0B},
	{FCT_SHOWSLOTS,          0x0C},
	{FCT_SEARCH,             0x0D},
	{FCT_TOP,                0x0E},
	{FCT_CHGCOLOR,           0x0F},
	{FCT_EMUCFG,             0x10},
	{FCT_ESCAPE,             0x11},

	{FCT_NO_FUNCTION,        0x00}
};

unsigned long sdl_scancode[]=
{
	SDLK_UP,
	SDLK_DOWN,
	SDLK_LEFT,
	SDLK_RIGHT,
	SDLK_RETURN,
	SDLK_F9,
	SDLK_F8,
	SDLK_BACKSPACE,
	SDLK_F11,
	SDLK_F10,
	SDLK_F7,
	SDLK_RETURN,
	SDLK_TAB,
	SDLK_F1,
	SDLK_RSHIFT,
	SDLK_F2,
	SDLK_F3,
	SDLK_ESCAPE,
	0x00
};

keyboard_funct_mapper char_keysmap[]=
{
	{'a',SDLK_a},
	{'b',SDLK_b},
	{'c',SDLK_c},
	{'d',SDLK_d},
	{'e',SDLK_e},
	{'f',SDLK_f},
	{'g',SDLK_g},
	{'h',SDLK_h},
	{'i',SDLK_i},
	{'j',SDLK_j},
	{'k',SDLK_k},
	{'l',SDLK_l},
	{'m',SDLK_m},
	{'n',SDLK_n},
	{'o',SDLK_o},
	{'p',SDLK_p},
	{'q',SDLK_q},
	{'r',SDLK_r},
	{'s',SDLK_s},
	{'t',SDLK_t},
	{'u',SDLK_u},
	{'v',SDLK_v},
	{'w',SDLK_w},
	{'x',SDLK_x},
	{'y',SDLK_y},
	{'z',SDLK_z},

	{'0',SDLK_0},
	{'1',SDLK_1},
	{'2',SDLK_2},
	{'3',SDLK_3},
	{'4',SDLK_4},
	{'5',SDLK_5},
	{'6',SDLK_6},
	{'7',SDLK_7},
	{'8',SDLK_8},
	{'9',SDLK_9},

	{' ',SDLK_SPACE},
	{'.',SDLK_PERIOD},
	{'\n',SDLK_RETURN},
	{127,SDLK_DELETE},

	{0xFF,0x00},
};
