#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"
// Brazil is defined in its own file for Reasons
#include "brazil.h"
// The autistic pride flag works the same as crabs, so it's in here. I'm sorry. 
#include "crabs.h"
// More flags in here also for Reasons
#include "flagdefx.h"



// Shouldn't we be able to declare this inline?
// YEAH YOU'D THINK. UNFORTUNATELY, BORLAND C++ 3.0 DISAGREES
static GraphicsCommand rainbow_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_6_0),Right(h_6_1),RGB(228,3,3)),
	GraphicsCommand(Rectangle,Left(h_6_1),Right(h_6_2),RGB(255,140,0)),
	GraphicsCommand(Rectangle,Left(h_6_2),Right(h_6_3),RGB(255,237,3)),
	GraphicsCommand(Rectangle,Left(h_6_3),Right(h_6_4),RGB(0,128,38)),
	GraphicsCommand(Rectangle,Left(h_6_4),Right(h_6_5),RGB(0,77,255)),
	GraphicsCommand(Rectangle,Left(h_6_5),Right(h_6_6),RGB(117,7,135)),
	GraphicsCommand(EndCommandList)
};

static Flag rainbow_flag = Flag(
	"rainbow1979",
	"The Rainbow Pride flag (1979 edition)",
	"Designed by Gilbert Baker, changed in 1979 based on fabric availability",
	"gay|rainbow",
	rainbow_flag_commands
);


static GraphicsCommand seven_stripe_rainbow_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(255,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(255,142,  0)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(255,255,  0)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(  0,142,  0)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(  0,192,192)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB( 64,  0,152)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(142,  0,142)),
	GraphicsCommand(EndCommandList)
};

static Flag seven_stripe_rainbow_flag = Flag(
	"seven-stripe-rainbow",
	"The Rainbow Pride flag (7-stripe version)",
	"Designed by Gilbert Baker, hot pink dropped due to fabric availability",
	"gay7|rainbow7",
	seven_stripe_rainbow_flag_commands,
	RGB(255,255,255),
	3
);

static GraphicsCommand original_rainbow_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_8_0),Right(h_8_1),RGB(255,105,180)),
	GraphicsCommand(Rectangle,Left(h_8_1),Right(h_8_2),RGB(255,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_8_2),Right(h_8_3),RGB(255,142,  0)),
	GraphicsCommand(Rectangle,Left(h_8_3),Right(h_8_4),RGB(255,255,  0)),
	GraphicsCommand(Rectangle,Left(h_8_4),Right(h_8_5),RGB(  0,142,  0)),
	GraphicsCommand(Rectangle,Left(h_8_5),Right(h_8_6),RGB(  0,192,192)),
	GraphicsCommand(Rectangle,Left(h_8_6),Right(h_8_7),RGB( 64,  0,152)),
	GraphicsCommand(Rectangle,Left(h_8_7),Right(h_8_8),RGB(142,  0,142)),
	GraphicsCommand(EndCommandList)
};

static Flag original_rainbow_flag = Flag(
	"original-rainbow",
	"The Original Rainbow Pride flag",
	"Designed by Gilbert Baker in 1978",
	"original-gay",
	original_rainbow_flag_commands
);

static GraphicsCommand nine_stripe_rainbow_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_9_0),Right(h_9_1),RGB(255,105,180)),
	GraphicsCommand(Rectangle,Left(h_9_1),Right(h_9_2),RGB(255,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_9_2),Right(h_9_3),RGB(255,142,  0)),
	GraphicsCommand(Rectangle,Left(h_9_3),Right(h_9_4),RGB(255,255,  0)),
	GraphicsCommand(Rectangle,Left(h_9_4),Right(h_9_5),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_9_5),Right(h_9_6),RGB(  0,142,  0)),
	GraphicsCommand(Rectangle,Left(h_9_6),Right(h_9_7),RGB(  0,192,192)),
	GraphicsCommand(Rectangle,Left(h_9_7),Right(h_9_8),RGB( 64,  0,152)),
	GraphicsCommand(Rectangle,Left(h_9_8),Right(h_9_9),RGB(142,  0,142)),
	GraphicsCommand(EndCommandList)
};

static Flag nine_stripe_rainbow_flag = Flag(
	"nine-stripe-rainbow",
	"The Rainbow Pride flag (9-stripe version)",
	"Designed by Estevao Romane in 2018",
	"gay9|rainbow9",
	nine_stripe_rainbow_flag_commands,
	RGB(255,255,255),
	3
);

static GraphicsCommand trans_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB( 91,206,250)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(245,160,194)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(245,160,194)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB( 91,206,250)),
	GraphicsCommand(EndCommandList)
};

static Flag trans_pride = Flag(
	"trans",
	"The Trans Pride Flag",
	"Designed by Monica Helms in 1999",
	"transgender|transsexual",
	trans_pride_flag_commands
);

static GraphicsCommand aromantic_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB( 61,165, 66)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(167,211,121)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(169,169,169)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(  0,  0,  0)),
	GraphicsCommand(EndCommandList)
};

static Flag aromantic_flag = Flag(
	"aromantic",
	"The Aromantic Pride Flag",
	"Created by Cameron Whimsey in 2014", // according to https://prideflags.info/flag/aromantic
	"aro",
	aromantic_pride_flag_commands
);


static GraphicsCommand asexual_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_4_0),Right(h_4_1),RGB(  0,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_4_1),Right(h_4_2),RGB(163,163,163)),
	GraphicsCommand(Rectangle,Left(h_4_2),Right(h_4_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_4_3),Right(h_4_4),RGB(128,  0,128)),
	GraphicsCommand(EndCommandList)
};

static Flag asexual_flag = Flag(
	"asexual",
	"The Asexual Pride Flag",
	"Created by AVEN user 'standup' in 2010",
	"ace",
	asexual_pride_flag_commands
);

static GraphicsCommand bisexual_pride_flag_commands[]={
	/* This flag isn't actually a 5-striper, it's a 3-striper, but the 
	proportions are equivalent to a 5-striper. */
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(214,  2,112)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(214,  2,112)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(115, 79,150)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(  0, 56,168)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(  0, 56,168)),
	GraphicsCommand(EndCommandList)
};

static Flag bisexual_flag = Flag(
	"bisexual",
	"The Bisexual Pride Flag",
	"Designed by Michael Page in 1998",
	"bi",
	bisexual_pride_flag_commands
);


static GraphicsCommand pansexual_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB(255, 33,140)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB(255,216,  0)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB( 33,177,255)),
	GraphicsCommand(EndCommandList)
};

static Flag pansexual_flag = Flag(
	"pansexual",
	"The Pansexual Pride Flag",
	"Designed in 2010 by an unknown person", // according to https://prideflags.info/flag/pansexual
	"pan",
	pansexual_pride_flag_commands
);


static GraphicsCommand lipstick_lesbian_colors_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(164,  0, 97)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(183, 85,146)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(208, 99,166)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(237,237,235)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(228,172,207)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(197, 78, 84)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(138, 30,  4)),
	GraphicsCommand(EndCommandList)
};

static Flag lipstick_lesbian_colors_flag = Flag(
	"lipstick-lesbian-colors-lesbian",
	"A Lesbian Pride Flag using the Lipstick Lesbian flag colors",
	"Introduced on the blog This Lesbian Life in 2010",
	"lipstick-lesbian-colors",
	lipstick_lesbian_colors_commands,
	RGB(255,255,255),
	2
);


static GraphicsCommand sadlesbeandisaster_lesbian_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(213, 45,  0)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(239,118, 39)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(255,154, 86)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(209, 98,164)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(181, 86,144)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(163,  2, 98)),
	GraphicsCommand(EndCommandList)
};

static Flag sadlesbeandisaster_lesbian_flag = Flag(
	"sadlesbeandisaster-lesbian",
	"A Lesbian Pride Flag, chosen by the official-lesbian-flag tumblr",
	"Designed by sadlesbeandisaster (aka Emily) in 2018",
	"official-lesbian-flag|sadlesbeandisaster",
	sadlesbeandisaster_lesbian_flag_commands
);


static GraphicsCommand five_stripe_lesbian_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(213, 45,  0)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(255,154, 86)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(211, 98,164)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(163,  2, 98)),
	GraphicsCommand(EndCommandList)
};

static Flag five_stripe_lesbian_flag = Flag(
	"five-stripe-lesbian",
	"A 5-stripe version of the sadlesbeandisaster flag",
	"Originally designed by sadlesbeandisaster (aka Emily) in 2018",
	"lesbian5|lesbian",
	five_stripe_lesbian_flag_commands,
	RGB(255,255,255),
	3
);


static GraphicsCommand lydiandragon_lesbian_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_4_0),Right(h_4_1),RGB(102, 51,153)),
	GraphicsCommand(Rectangle,Left(h_4_1),Right(h_4_2),RGB(255,204, 51)),
	GraphicsCommand(Rectangle,Left(h_4_2),Right(h_4_3),RGB(102,204, 51)),
	GraphicsCommand(Rectangle,Left(h_4_3),Right(h_4_4),RGB(255,102,153)),
	GraphicsCommand(EndCommandList)
};

static Flag lydiandragon_lesbian_flag = Flag(
	"lydiandragon-lesbian",
	"A Lesbian Pride Flag",
	"Designed by lydiandragon (aka Lydia) in 2018",
	"lydiandragon",
	lydiandragon_lesbian_flag_commands
);

static GraphicsCommand maya_kern_lesbian_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_4_0),Right(h_4_1),RGB(102, 51,153)),
	GraphicsCommand(Rectangle,Left(h_4_1),Right(h_4_2),RGB(255,102,153)),
	GraphicsCommand(Rectangle,Left(h_4_2),Right(h_4_3),RGB(255,204, 51)),
	GraphicsCommand(Rectangle,Left(h_4_3),Right(h_4_4),RGB(102,204, 51)),
	GraphicsCommand(EndCommandList)
};

static Flag maya_kern_lesbian_flag = Flag(
	"maya-kern-lesbian",
	"A revised version of the lydiandragon Lesbian flag",
	"Originally designed by lydiandragon in 2018. Modified by Maya Kern in 2019",
	"maya-kern",
	maya_kern_lesbian_flag_commands,
	RGB(255,255,255),
	3
);

static GraphicsCommand femme_lesbian_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_4_0),Right(h_4_1),RGB(102, 51,153)),
	GraphicsCommand(Rectangle,Left(h_4_1),Right(h_4_2),RGB(204,153,255)),
	GraphicsCommand(Rectangle,Left(h_4_2),Right(h_4_3),RGB(255,204,255)),
	GraphicsCommand(Rectangle,Left(h_4_3),Right(h_4_4),RGB(255,102,153)),
	GraphicsCommand(EndCommandList)
};

static Flag femme_lesbian_flag = Flag(
	"femme-lesbian",
	"A Femme Lesbian Pride Flag",
	"Designed by Rebecca Bettencourt in 2019",
	NULL,
	femme_lesbian_flag_commands
);


static GraphicsCommand agender_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(  0,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(185,185,185)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(184,244,131)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(185,185,185)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(  0,  0,  0)),
	GraphicsCommand(EndCommandList)
};

static Flag agender_flag = Flag(
	"agender",
	"The Agender pride flag",
	"Designed by Salem Fontana in 2014",
	NULL,
	agender_flag_commands
);


static GraphicsCommand bigender_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(196,121,162)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(237,165,205)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(213,199,232)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(213,199,232)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(154,199,232)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(109,130,209)),
	GraphicsCommand(EndCommandList)
};

static Flag bigender_flag = Flag(
	"bigender",
	"The Bigender flag. Modified from the original to be easier to print",
	"Created by Natalie Phox (@NittrusFox) in 2009",
	NULL,
	bigender_flag_commands
);


static GraphicsCommand leonis_ignis_gay_men_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB( 95, 51, 22)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(221, 89,  0)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(240,185,  0)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(129,199,230)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(  0,130,202)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(  0, 35,149)),
	GraphicsCommand(EndCommandList)
};

static Flag leonis_ignis_gay_men_flag = Flag(
	"leonis-ignis-gay-men",
	"A pride flag for Gay men",
	"Created by Leonis Ignis at an unknown date",
	"leonis-ignis",
	leonis_ignis_gay_men_flag_commands
);

static GraphicsCommand gay_men_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(  7,141,112)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB( 38,206,170)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(153,232,194)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(123,173,227)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB( 80, 73,203)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB( 62, 26,120)),
	GraphicsCommand(EndCommandList)
};

static Flag gay_men_flag = Flag(
	"gay-men",
	"A pride flag for Gay men",
	"Created by Triton (@gayflagblog on tumblr) in 2019, based on a design by Hermy", //according to https://prideflags.info/flag/mlm
	"toothpaste",
	gay_men_flag_commands
);

static GraphicsCommand five_stripe_gay_men_alt_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(  7,141,112)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(153,232,194)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(123,173,227)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB( 62, 26,120)),
	GraphicsCommand(EndCommandList)
};

static Flag five_stripe_gay_men_alt_flag = Flag(
	"five-stripe-gay-men-alt",
	"A 5-stripe unmodified version of the gayflagblog flag",
	NULL,
	"toothpaste5a",
	five_stripe_gay_men_alt_flag_commands,
	RGB(255,255,255),
	2
);

static GraphicsCommand five_stripe_gay_men_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(  0,165,213)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB( 86,185,255)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB( 98,211,143)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(  2,163, 66)),
	GraphicsCommand(EndCommandList)
};

static Flag five_stripe_gay_men_flag = Flag(
	"five-stripe-gay-men",
	"A 5-stripe modified version of the gayflagblog flag",
	NULL, // who designed this?
	"toothpaste5",
	five_stripe_gay_men_flag_commands,
	RGB(255,255,255),
	2
);


static GraphicsCommand genderfluid_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(255,117,162)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(245,245,245)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(190, 24,214)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB( 44, 44, 44)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB( 51, 62,189)),
	GraphicsCommand(EndCommandList)
};

static Flag genderfluid_flag = Flag(
	"genderfluid",
	"The Genderfluid Pride Flag",
	NULL, 
	NULL,
	genderfluid_flag_commands
);

static GraphicsCommand genderqueer_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB(181,126,220)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB( 74,129, 35)),
	GraphicsCommand(EndCommandList)
};

static Flag genderqueer_flag = Flag(
	"genderqueer",
	"The Genderqueer Pride Flag",
	"Designed by Marilyn Roxie in 2011",
	NULL,
	genderqueer_flag_commands
);


static GraphicsCommand polysexual_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB(246, 28,185)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB(  7,213,105)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB( 28,146,246)),
	GraphicsCommand(EndCommandList)
};

static Flag polysexual_flag = Flag(
	"polysexual",
	"The Polysexual Pride Flag",
	NULL, // Who made this?
	NULL,
	polysexual_flag_commands
);

static GraphicsCommand philadelphia_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_8_0),Right(h_8_1),RGB(  0,  0, 0)),
	GraphicsCommand(Rectangle,Left(h_8_1),Right(h_8_2),RGB(120, 79, 23)),
	GraphicsCommand(Rectangle,Left(h_8_2),Right(h_8_3),RGB(228,  3,  3)),
	GraphicsCommand(Rectangle,Left(h_8_3),Right(h_8_4),RGB(255,140,  0)),
	GraphicsCommand(Rectangle,Left(h_8_4),Right(h_8_5),RGB(225,237,  0)),
	GraphicsCommand(Rectangle,Left(h_8_5),Right(h_8_6),RGB(  0,128, 38)),
	GraphicsCommand(Rectangle,Left(h_8_6),Right(h_8_7),RGB(  0, 77,255)),
	GraphicsCommand(Rectangle,Left(h_8_7),Right(h_8_8),RGB(117,  7,135)),
	GraphicsCommand(EndCommandList)
};

static Flag philadelphia_pride_flag = Flag(
	"philadelphia-pride-flag",
	"Adds black & brown to the rainbow flag for POC",
	"Designed in Philadelphia for the 2017 Pride Kick-Off",
	"philadelphia|philly",
	philadelphia_pride_flag_commands,
	RGB(255,255,255),
	3
);

static GraphicsCommand androgyne_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Top(v_3_0),Bottom(v_3_1),RGB(254,  0,127)),
	GraphicsCommand(Rectangle,Top(v_3_1),Bottom(v_3_2),RGB(152, 50,255)),
	GraphicsCommand(Rectangle,Top(v_3_2),Bottom(v_3_3),RGB(  0,184,231)),
	GraphicsCommand(EndCommandList)
};

static Flag androgyne_flag = Flag(
	"androgyne",
	"The Androgyne flag",
	"Designed by tumblr user saveferris in 2011",
	NULL,
	androgyne_pride_flag_commands
);

static GraphicsCommand demisexual_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(110,  0,112)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(210,210,210)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(210,210,210)),
	GraphicsCommand(Triangle,Top(0),Point(243,h_2_1),Bottom(0),RGB(0,0,0)),
	GraphicsCommand(EndCommandList)
};

static Flag demisexual_flag = Flag(
	"demisexual",
	"The Demisexual pride flag",
	NULL,
	NULL,
	demisexual_pride_flag_commands,
	RGB(0,0,0),
	4
);

static GraphicsCommand demiromantic_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB( 61,165, 66)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(210,210,210)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(210,210,210)),
	GraphicsCommand(Triangle,Top(0),Point(243,h_2_1),Bottom(0),RGB(0,0,0)),
	GraphicsCommand(EndCommandList)
};

static Flag demiromantic_flag = Flag(
	"demiromantic",
	"The Demiromantic pride flag",
	NULL,
	NULL,
	demiromantic_pride_flag_commands,
	RGB(0,0,0),
	4
);

static GraphicsCommand progressive_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_6_0),Right(h_6_1),RGB(228,3,3)),
	GraphicsCommand(Rectangle,Left(h_6_1),Right(h_6_2),RGB(255,140,0)),
	GraphicsCommand(Rectangle,Left(h_6_2),Right(h_6_3),RGB(255,237,3)),
	GraphicsCommand(Rectangle,Left(h_6_3),Right(h_6_4),RGB(0,128,38)),
	GraphicsCommand(Rectangle,Left(h_6_4),Right(h_6_5),RGB(0,77,255)),
	GraphicsCommand(Rectangle,Left(h_6_5),Right(h_6_6),RGB(117,7,135)),
	// Black chevron
	GraphicsCommand(Quad,Point(51,0),Point(102,0),Point(304,240),Point(254,240),RGB(  0,  0,  0)),
	GraphicsCommand(Quad,Point(254,240),Point(304,240),Point(102,480),Point(51,480),RGB(  0,  0,  0)),
	// Brown chevron
	GraphicsCommand(Quad,Point(0,0),Point(51,0),Point(254,240),Point(204,240),RGB( 97, 57, 21)),
	GraphicsCommand(Quad,Point(204,240),Point(254,240),Point(51,480),Point(0,480),RGB( 97, 57, 21)),
	// Light-blue chevron
	GraphicsCommand(Quad,Point(0,60),Point(0,0),Point(204,240),Point(152,240),RGB(116,215,238)),
	GraphicsCommand(Quad,Point(204,240),Point(152,240),Point(0,420),Point(0,480),RGB(116,215,238)),
	// Pink chevron
	GraphicsCommand(Quad,Point(0,122),Point(0,60),Point(152,240),Point(102,240),RGB(255,175,200)),
	GraphicsCommand(Quad,Point(152,240),Point(102,240),Point(0,358),Point(0,418),RGB(255,175,200)),
	// White triangle
	GraphicsCommand(Triangle,Point(0,122),Point(102,240),Point(0,358),RGB(255,255,255)),

	GraphicsCommand(EndCommandList)
};

static Flag progressive_flag = Flag(
	"progress",
	"The Progress Pride Flag",
	"Designed in 2018 by Daniel Quasar",
	"progressive|progress2018|progressive2018",
	progressive_pride_flag_commands
);

static GraphicsCommand intersex_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Top(0),Bottom(640),RGB(255,216,  0)),
	GraphicsCommand(Ellipse,Point(320,240),122,122,RGB(121, 2,170)),
	GraphicsCommand(Ellipse,Point(320,240),87,87,RGB(255,216,  0)),
	GraphicsCommand(EndCommandList)
};

static Flag intersex_flag = Flag(
	"intersex",
	"The Intersex Pride Flag",
	NULL,
	NULL,
	intersex_pride_flag_commands,
	RGB(0,0,0),
	4
);

static int polygon_heart[]={207,200,147,196,112,191,81,177,55,145,52,115,59,91,79,74,99,70,120,75,121,53,129,28,146,14,161,7,183,11,197,22,210,40,219,56,224,80,-1,-1};
static GraphicsCommand leather_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_9_0),Right(h_9_1),RGB(  0,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_9_1),Right(h_9_2),RGB( 42, 42,127)),
	GraphicsCommand(Rectangle,Left(h_9_2),Right(h_9_3),RGB(  0,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_9_3),Right(h_9_4),RGB( 42, 42,127)),
	GraphicsCommand(Rectangle,Left(h_9_4),Right(h_9_5),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_9_5),Right(h_9_6),RGB( 42, 42,127)),
	GraphicsCommand(Rectangle,Left(h_9_6),Right(h_9_7),RGB(  0,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_9_7),Right(h_9_8),RGB( 42, 42,127)),
	GraphicsCommand(Rectangle,Left(h_9_8),Right(h_9_9),RGB(  0,  0,  0)),

	GraphicsCommand(Polygon,polygon_heart,RGB(231,  0, 57)),
	GraphicsCommand(EndCommandList)
};

static Flag leather_flag = Flag(
	"leather",
	"The Leather Pride Flag",
	NULL,
	NULL,
	leather_pride_flag_commands
);

int polygon_bear0[]={82,239,59,215,52,200,53,195,61,191,77,194,89,202,96,216,92,231,88,238,-1,-1};
int polygon_bear1[]={70,181,60,172,50,156,45,140,49,131,62,129,77,138,90,157,88,170,81,181,-1,-1};
int polygon_bear2[]={74,112,59,101,49,87,45,70,49,60,60,60,75,67,87,81,89,95,84,108,-1,-1};
int polygon_bear3[]={116,80,104,68,92,63,81,57,81,46,91,36,105,32,120,36,133,46,134,60,130,72,124,79,-1,-1};
int polygon_bear4[]={177,106,163,98,153,84,147,64,148,53,154,47,170,50,183,57,191,67,196,81,193,96,188,104,-1,-1};
int polygon_bear5[]={112,241,105,236,102,221,103,189,106,167,105,159,89,139,85,130,85,115,98,93,112,85,128,84,155,103,168,109,185,110,206,99,214,98,227,108,231,122,224,133,209,149,198,160,163,185,142,217,125,238,118,243,-1,-1};

static GraphicsCommand bear_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB( 98, 56,  4)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(213, 99,  0)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(254,221, 99)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(254,230,184)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB( 85, 85, 85)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB( 0, 0, 0)),

	GraphicsCommand(Polygon,polygon_bear0,RGB(  0,  0,  0)),
	GraphicsCommand(Polygon,polygon_bear1,RGB(  0,  0,  0)),
	GraphicsCommand(Polygon,polygon_bear2,RGB(  0,  0,  0)),
	GraphicsCommand(Polygon,polygon_bear3,RGB(  0,  0,  0)),
	GraphicsCommand(Polygon,polygon_bear4,RGB(  0,  0,  0)),
	GraphicsCommand(Polygon,polygon_bear5,RGB(  0,  0,  0)),
	GraphicsCommand(EndCommandList)
};

static Flag bear_flag = Flag(
	"bear",
	"The Bear Pride Flag",
	NULL,
	NULL,
	bear_pride_flag_commands
);


int polygon_labrys[]={308,369,311,161,301,152,294,153,286,158,275,178,267,197,258,179,252,162,248,141,249,119,254,94,264,70,268,69,278,95,290,109,296,111,304,110,314,100,319,97,324,99,332,109,340,111,347,110,355,103,365,86,372,69,375,70,383,88,389,108,390,122,391,143,385,168,378,191,373,197,361,172,351,158,340,152,332,158,327,161,331,366,331,372,311,372,-1,-1};
static GraphicsCommand labrys_lesbian_flag_commands[]={
	GraphicsCommand(Rectangle,Top(0),Bottom(640),RGB(153, 51,153)),
	GraphicsCommand(Triangle,Point(150,56),Point(489,56),Point(319,420),RGB(0,0,0)),

	GraphicsCommand(Polygon,polygon_labrys,RGB(255,255,255)),
	GraphicsCommand(EndCommandList)
};

static Flag labrys_flag = Flag(
	"labrys-lesbian",
	"The Labrys lesbian Flag: Designed for a special edition of the Palm Springs Gay and Lesbian Times",
	"Designed by Sean Campbel in 1999",
	NULL,
	labrys_lesbian_flag_commands
);
int polygon_polyamory[]={289,281,299,234,305,205,294,203,283,209,277,218,274,229,270,228,268,219,273,203,281,194,292,189,306,187,357,189,362,190,371,184,375,184,376,187,376,197,370,206,351,205,347,207,341,254,340,262,343,267,354,267,358,265,361,267,362,274,357,284,349,290,340,289,335,282,332,274,332,252,336,216,337,207,331,206,315,205,310,220,304,256,303,282,305,283,304,292,294,288,-1,-1};
static GraphicsCommand polyamory_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB(  0,  0,255)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB(255,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB(  0,  0,  0)),

	GraphicsCommand(Polygon,polygon_polyamory,RGB(255,255,  0)),
	GraphicsCommand(EndCommandList)
};

static Flag polyamory_flag = Flag(
	"polyamory",
	"The Polyamory Flag",
	"Designed by Jim Evans in 1995",
	NULL,
	polyamory_flag_commands
);

int polygon_canada[]={314,407,316,330,312,326,252,336,257,313,256,306,195,247,210,237,210,230,200,184,232,193,238,193,244,172,248,172,275,210,279,211,283,208,271,123,289,136,294,136,320,82,343,135,348,136,369,124,356,198,357,208,362,211,392,171,394,172,399,191,403,194,439,184,429,230,429,238,444,246,385,305,382,315,387,336,325,325,323,329,324,408,-1,-1};
static GraphicsCommand canada_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_6_0),Right(h_6_1),RGB(228,3,3)),
	GraphicsCommand(Rectangle,Left(h_6_1),Right(h_6_2),RGB(255,140,0)),
	GraphicsCommand(Rectangle,Left(h_6_2),Right(h_6_3),RGB(255,237,3)),
	GraphicsCommand(Rectangle,Left(h_6_3),Right(h_6_4),RGB(0,128,38)),
	GraphicsCommand(Rectangle,Left(h_6_4),Right(h_6_5),RGB(0,77,255)),
	GraphicsCommand(Rectangle,Left(h_6_5),Right(h_6_6),RGB(117,7,135)),
	GraphicsCommand(Rectangle,Top(v_4_1),Bottom(v_4_3),RGB(255,0,255)),
	GraphicsCommand(Polygon,polygon_canada,RGB(228,  3,  3)),
	GraphicsCommand(EndCommandList)
};

static Flag canada_pride_flag = Flag(
	"canada",
	"The Canada Pride Flag",
	NULL,
	NULL,
	canada_pride_flag_commands,
	RGB(0,0,0),
	4
);
int polygon_star_of_david0[]={232,292,319,135,319,169,260,274,-1,-1};
int polygon_star_of_david1[]={232,292,260,274,377,274,406,291,-1,-1};
int polygon_star_of_david2[]={319,135,406,291,377,274,319,169,-1,-1};
int polygon_star_of_david3[]={319,342,232,188,260,203,319,310,-1,-1};
int polygon_star_of_david4[]={232,188,406,187,378,203,260,203,-1,-1};
int polygon_star_of_david5[]={319,310,378,203,406,187,319,342,-1,-1};

static GraphicsCommand jewish_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_6_0),Right(h_6_1),RGB(228,3,3)),
	GraphicsCommand(Rectangle,Left(h_6_1),Right(h_6_2),RGB(255,140,0)),
	GraphicsCommand(Rectangle,Left(h_6_2),Right(h_6_3),RGB(255,237,3)),
	GraphicsCommand(Rectangle,Left(h_6_3),Right(h_6_4),RGB(0,128,38)),
	GraphicsCommand(Rectangle,Left(h_6_4),Right(h_6_5),RGB(0,77,255)),
	GraphicsCommand(Rectangle,Left(h_6_5),Right(h_6_6),RGB(117,7,135)),
	GraphicsCommand(Polygon,polygon_star_of_david0,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_star_of_david1,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_star_of_david2,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_star_of_david3,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_star_of_david4,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_star_of_david5,RGB(255,255,255)),
	GraphicsCommand(EndCommandList)
};

static Flag jewish_pride_flag = Flag(
	"jewish",
	"The Jewish Pride Flag",
	NULL,
	NULL,
	jewish_pride_flag_commands
);

static GraphicsCommand littleender_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(109,130,209)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(154,199,232)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(213,199,232)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(213,199,232)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(237,165,205)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(196,121,162)),
	GraphicsCommand(EndCommandList)
};
// TODO: hidden flag? 
static Flag littleender_flag = Flag(
	"littleender",
	"The Littleender Pride Flag: A joke on the Bigender Flag",
	"Created by Ellie Coyote (@LEDCoyote) in 2022",
	NULL,
	littleender_flag_commands
);

static GraphicsCommand trains_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB(165,213, 67)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB(  1,179, 93)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB(254,238,  2)),
	GraphicsCommand(EndCommandList)
};

static Flag trains_flag = Flag(
	"trains",
	"The Trains Pride flag: actually a painting called 'Train Landscape'",
	"Painted by Ellsworth Kelly in 1953",
	NULL,
	trains_pride_flag_commands,
	RGB(0,0,0),
	4
);


int polygon_lipstick0[]={59, 169, 70, 163, 74, 158, 68, 154, 56, 150, 70, 152, 85, 154, 98, 149, 90, 142, 78, 137, 67, 132, 78, 137, 89, 141, 100, 142, 110, 137, 102, 126, 90, 120, 98, 121, 107, 118, 99, 109, 91, 101, 87, 90, 93, 99, 99, 108, 108, 114, 113, 108, 120, 105, 109, 102, 101, 95, 113, 102, 126, 103, 138, 108, 143, 95, 141, 90, 145, 93, 152, 86, 152, 77, 156, 87, 164, 89, 172, 93, 174, 89, 176, 97, 181, 102, 189, 96, 193, 87, 196, 96, 200, 97, 206, 90, 211, 82, 211, 92, 221, 90, 230, 85, 230, 90, 243, 86, 255, 78, 264, 67, 256, 63, 247, 59, 240, 72, 244, 65, 243, 57, 233, 56, 233, 67, 228, 54, 219, 45, 216, 44, 212, 50, 210, 61, 210, 48, 202, 38, 190, 33, 192, 43, 195, 53, 196, 63, 193, 52, 189, 40, 184, 30, 173, 25, 162, 22, 150, 21, 151, 31, 156, 40, 157, 51, 154, 40, 146, 32, 136, 27, 127, 37, 128, 50, 129, 64, 125, 51, 123, 39, 118, 46, 113, 53, 106, 53, 106, 62, 108, 72, 105, 62, 98, 55, 83, 54, 70, 61, 59, 70, 53, 83, 49, 97, 54, 103, 59, 108, 48, 102, 45, 110, 44, 117, 54, 124, 61, 132, 53, 126, 44, 124, 41, 133, 40, 144, 47, 150, 39, 150, 36, 160, 41, 167, 35, 167, 33, 175, 33, 183, 44, 179, 50, 170, 59, 169, -1, -1};
int polygon_lipstick1[]={229, 97, 217, 99, 205, 101, 194, 107, 206, 115, 220, 121, 233, 129, 222, 124, 211, 119, 200, 115, 189, 111, 177, 115, 173, 129, 178, 140, 183, 151, 178, 140, 174, 135, 169, 138, 166, 151, 174, 162, 182, 174, 176, 165, 169, 157, 163, 149, 159, 155, 150, 154, 156, 166, 162, 178, 169, 189, 160, 179, 152, 166, 146, 154, 138, 152, 131, 151, 133, 164, 135, 176, 132, 165, 127, 154, 118, 146, 106, 148, 103, 160, 105, 173, 107, 186, 109, 198, 106, 185, 104, 171, 100, 157, 90, 157, 83, 161, 69, 167, 56, 174, 43, 182, 36, 194, 45, 202, 56, 209, 66, 215, 78, 220, 90, 223, 94, 209, 97, 219, 105, 226, 104, 215, 114, 223, 126, 227, 139, 225, 138, 212, 147, 220, 159, 221, 169, 214, 165, 203, 170, 210, 177, 213, 185, 206, 183, 195, 179, 184, 185, 196, 192, 207, 196, 195, 205, 199, 207, 190, 205, 180, 204, 178, 205, 180, 208, 187, 214, 193, 217, 184, 213, 174, 207, 165, 215, 176, 225, 184, 227, 175, 223, 163, 217, 155, 225, 165, 235, 172, 235, 159, 229, 147, 236, 154, 244, 159, 244, 149, 239, 140, 250, 146, 247, 137, 242, 128, 254, 135, 258, 121, 260, 107, 262, 93, 262, 79, 251, 84, 240, 91, 229, 97, -1, -1};

static GraphicsCommand lipstick_lesbian_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(164,  0, 97)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(183, 85,146)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(208, 99,166)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(237,237,235)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(228,172,207)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(197, 78, 84)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(138, 30,  4)),
	GraphicsCommand(Polygon,polygon_lipstick0,RGB(243,  9, 67)),
	GraphicsCommand(Polygon,polygon_lipstick1,RGB(243,  9, 67)),
	GraphicsCommand(PolygonOutline,polygon_lipstick0,RGB(  0,  0,  0)),
	GraphicsCommand(PolygonOutline,polygon_lipstick1,RGB(  0,  0,  0)),
	GraphicsCommand(EndCommandList)
};

static Flag lipstick_lesbian_flag = Flag(
	"lipstick-lesbian",
	"The Lipstick Lesbian pride flag",
	NULL,
	NULL,
	lipstick_lesbian_pride_flag_commands
);

int polygon_south_africa0[]={192,240,0,96,0,58,242,239,-1,422,-1,383,-1,-1};
int polygon_south_africa1[]={77,0,129,0,341,160,640,160,639,191,330,191,-1,-1};
int polygon_south_africa2[]={75,480,331,288,639,288,640,320,341,320,129,480,-1,-1};

static GraphicsCommand gay_flag_of_south_africa_commands[]={
	GraphicsCommand(Rectangle,Left(h_6_0),Right(h_6_1),RGB(228,3,3)),
	GraphicsCommand(Rectangle,Left(h_6_1),Right(h_6_2),RGB(255,140,0)),
	GraphicsCommand(Rectangle,Left(h_6_2),Right(h_6_3),RGB(255,237,3)),
	GraphicsCommand(Rectangle,Left(h_6_3),Right(h_6_4),RGB(0,128,38)),
	GraphicsCommand(Rectangle,Left(h_6_4),Right(h_6_5),RGB(0,77,255)),
	GraphicsCommand(Rectangle,Left(h_6_5),Right(h_6_6),RGB(117,7,135)),

	GraphicsCommand(Polygon,polygon_south_africa0,RGB(  0,  0,  0)),
	GraphicsCommand(Polygon,polygon_south_africa1,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_south_africa2,RGB(255,255,255)),
	GraphicsCommand(EndCommandList)
};

static Flag gay_flag_of_south_africa = Flag(
	"gay-flag-of-south-africa",
	"The gay flag of South Africa",
	"Designed by Eugene Brockman in 2010",
	"south-africa|sa",
	gay_flag_of_south_africa_commands,
	RGB(255,255,255),
	3,
	LAYOUT_RIGHT
);

static GraphicsCommand pink_union_jack_flag_commands[]={
	// White background
	GraphicsCommand(Rectangle,Top(0),Bottom(640),RGB(255,255,255)),
	// Red cross
	GraphicsCommand(Rectangle, Left(h_5_2), Right(h_5_3), RGB(224,  0, 52)),
	GraphicsCommand(Rectangle, Top(288), Bottom(352), RGB(224,  0, 52)),

	// Red saltire of St. Patrick
	// Top left
	GraphicsCommand(Quad, Point(0,35), Point(0,0), Point(213,160), Point(165,160), RGB(224,  0, 52)),
	// Top right
	GraphicsCommand(Quad, Point(379,160), Point(591,0), Point(640,0), Point(427,160), RGB(224,  0, 52)),
	// Bottom left
	GraphicsCommand(Quad, Point(0,480), Point(212,320), Point(260,320), Point(48,480), RGB(224,  0, 52)),
	// Bottom right
	GraphicsCommand(Quad, Point(427,320), Point(475,320), Point(640,444), Point(640,480), RGB(224,  0, 52)),
	// Pink triangles
	GraphicsCommand(Triangle,Point(0,53),Point(142,160),Point(0,160),RGB(250,135,210)),
	GraphicsCommand(Triangle,Point(0,320),Point(142,320),Point(0,426),RGB(250,135,210)),
	GraphicsCommand(Triangle,Point(72,480),Point(267,333),Point(267,480),RGB(250,135,210)),
	GraphicsCommand(Triangle,Point(373,333),Point(568,480),Point(373,480),RGB(250,135,210)),
	GraphicsCommand(Triangle,Point(499,320),Point(640,320),Point(640,426),RGB(250,135,210)),
	GraphicsCommand(Triangle,Point(499,160),Point(640, 53),Point(640,160),RGB(250,135,210)),
	GraphicsCommand(Triangle,Point(373,  0),Point(568,  0),Point(373,146),RGB(250,135,210)),
	GraphicsCommand(Triangle,Point( 72,  0),Point(267,  0),Point(267,146),RGB(250,135,210)),


	GraphicsCommand(EndCommandList)
};

static Flag pink_union_jack_flag = Flag(
	"pink-union-jack",
	"A pink variant on the Union Jack flag",
	"Designed by David Gwinnutt and launched in 2006",
	"pink-jack",
	pink_union_jack_flag_commands,
	RGB(0,0,0),
	4
);

int polygon_rubber0[]={0,113,306,113,400,271,410,275,639,131,639,202,388,372,282,181,-1,181,-1,-1};
int polygon_rubber1[]={315,86,411,244,640,101,639,132,410,275,401,272,304,113,0,113,-1,86,-1,-1};
int polygon_rubber2[]={0,205,-1,181,281,181,387,371,640,202,638,234,388,400,378,398,272,205,-1,-1};
int polygon_rubber3[]={0,262,238,262,355,479,330,480,228,290,0,290,-1,-1};
int polygon_rubber4[]={388,480,640,303,640,334,429,483,-1,-1};


static GraphicsCommand rubber_pride_flag_commands[]={
	// black background
	GraphicsCommand(Rectangle,Top(0),Bottom(640),RGB(0,0,0)),
	// Wide yellow stripe
	GraphicsCommand(Polygon,polygon_rubber0,RGB(255,255,  0)),
	// Red stripes
	GraphicsCommand(Polygon,polygon_rubber1,RGB(204,  0, 51)),
	GraphicsCommand(Polygon,polygon_rubber2,RGB(204,  0, 51)),
	GraphicsCommand(Polygon,polygon_rubber3,RGB(204,  0, 51)),
	GraphicsCommand(Polygon,polygon_rubber4,RGB(204,  0, 51)),

	GraphicsCommand(EndCommandList)
};

static Flag rubber_pride_flag = Flag(
	"rubber-pride",
	"The Rubber Pride flag",
	"Designed by Peter Tolos and Scott Moats in 1995",
	"rubber",
	rubber_pride_flag_commands
);


static GraphicsCommand demigirl_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(127,127,127)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(196,196,196)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(255,174,201)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(255,174,201)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(196,196,196)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(127,127,127)),
	GraphicsCommand(EndCommandList)
};

static Flag demigirl_flag = Flag(
	"demigirl",
	"The Demigirl/Demiwoman Pride flag",
	"Designed by the tumblr user Transrants at an unknown date",
	"demiwoman",
	demigirl_flag_commands
);

static GraphicsCommand demiboy_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(127,127,127)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(196,196,196)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(154,217,235)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(154,217,235)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(196,196,196)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(127,127,127)),
	GraphicsCommand(EndCommandList)
};

static Flag demiboy_flag = Flag(
	"demiboy",
	"The Demiboy/Demiman Pride flag",
	"Designed by the tumblr user Transrants at an unknown date",
	"demiman|demiguy",
	demiboy_flag_commands
);

static GraphicsCommand demigender_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(127,127,127)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(196,196,196)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(251,255,116)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(251,255,116)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(196,196,196)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(127,127,127)),
	GraphicsCommand(EndCommandList)
};

static Flag demigender_flag = Flag(
	"demigender",
	"The Demigender Pride flag",
	NULL,
	NULL,
	demigender_flag_commands
);

static GraphicsCommand demiandrogyne_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(127,127,127)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(196,196,196)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(184,244,131)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(184,244,131)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(196,196,196)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(127,127,127)),
	GraphicsCommand(EndCommandList)
};

static Flag demiandrogyne_flag = Flag(
	"demiandrogyne",
	"The Demiandrogyne Pride flag",
	NULL,
	NULL,
	demiandrogyne_flag_commands
);

static GraphicsCommand demiandrogyne_enbygsrd_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(127,127,127)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(196,196,196)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(254,  0,127)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(152, 50,255)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(  0,184,231)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(196,196,196)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(127,127,127)),
	GraphicsCommand(EndCommandList)
};

static Flag demiandrogyne_enbygsrd_flag = Flag(
	"demiandrogyne-enbygsrd",
	"A proposed Demiandrogyne Pride flag",
	"Created by deviantArt user enbygsrd in 2016",
	"enbygsrd-demiandrogyne",
	demiandrogyne_enbygsrd_flag_commands
);

static GraphicsCommand demiflux_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(127,127,127)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(196,196,196)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(255,181,183)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(243,246,145)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(153,217,234)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(196,196,196)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(127,127,127)),
	GraphicsCommand(EndCommandList)
};

static Flag demiflux_flag = Flag(
	"demiflux",
	"The Demiflux Pride flag",
	NULL,
	NULL,
	demiflux_flag_commands
);

static GraphicsCommand demifluid_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_7),RGB(127,127,127)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_6),RGB(196,196,196)),
	GraphicsCommand(Rectangle,Point(0  ,h_7_2),Point(53 ,h_7_5),RGB(255,178,201)),
	GraphicsCommand(Rectangle,Point(53 ,h_7_2),Point(107,h_7_5),RGB(255,193,193)),
	GraphicsCommand(Rectangle,Point(107,h_7_2),Point(160,h_7_5),RGB(255,207,184)),
	GraphicsCommand(Rectangle,Point(160,h_7_2),Point(213,h_7_5),RGB(255,222,176)),
	GraphicsCommand(Rectangle,Point(213,h_7_2),Point(267,h_7_5),RGB(255,236,168)),
	GraphicsCommand(Rectangle,Point(267,h_7_2),Point(320,h_7_5),RGB(246,238,173)),
	GraphicsCommand(Rectangle,Point(320,h_7_2),Point(373,h_7_5),RGB(234,235,184)),
	GraphicsCommand(Rectangle,Point(373,h_7_2),Point(427,h_7_5),RGB(222,232,195)),
	GraphicsCommand(Rectangle,Point(427,h_7_2),Point(480,h_7_5),RGB(210,229,206)),
	GraphicsCommand(Rectangle,Point(480,h_7_2),Point(533,h_7_5),RGB(198,226,218)),
	GraphicsCommand(Rectangle,Point(533,h_7_2),Point(587,h_7_5),RGB(186,222,229)),
	GraphicsCommand(Rectangle,Point(587,h_7_2),Point(640,h_7_5),RGB(174,219,240)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(255,255,255)),
	GraphicsCommand(EndCommandList)
};

static Flag demifluid_flag = Flag(
	"demifluid",
	"The Demifluid Pride flag",
	NULL,
	NULL,
	demifluid_flag_commands
);

static GraphicsCommand omnisexual_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(255,155,205)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(255, 83,190)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB( 38,  0, 70)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(102, 94,255)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(140,166,255)),
	GraphicsCommand(EndCommandList)
};

static Flag omnisexual_flag = Flag(
	"omnisexual",
	"The Omnisexual Pride Flag",
	NULL,
	"omni",
	omnisexual_flag_commands
);


static GraphicsCommand nonbinary_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_4_0),Right(h_4_1),RGB(252,244, 52)),
	GraphicsCommand(Rectangle,Left(h_4_1),Right(h_4_2),RGB(252,252,252)),
	GraphicsCommand(Rectangle,Left(h_4_2),Right(h_4_3),RGB(156, 89,209)),
	GraphicsCommand(Rectangle,Left(h_4_3),Right(h_4_4),RGB( 44, 44, 44)),
	GraphicsCommand(EndCommandList)
};

static Flag nonbinary_flag = Flag(
	"non-binary",
	"The Non-binary Pride Flag",
	"Created by Kye Rowan in 2014",
	"nb|nonbinary",
	nonbinary_flag_commands
);



static GraphicsCommand abrosexual_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(117,202,146)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(178,228,197)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(230,149,181)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(218, 68,108)),
	GraphicsCommand(EndCommandList)
};

static Flag abrosexual_flag = Flag(
	"abrosexual",
	"The Abrosexual Pride Flag",
	"Designed by the tumblr user pride-flags-for-us at an unknown date",
	"abro",
	abrosexual_flag_commands
);

static GraphicsCommand aroace_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(226,140,  0)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(236,205,  0)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB( 98,174,220)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB( 32, 56, 86)),
	GraphicsCommand(EndCommandList)
};

static Flag aroace_flag = Flag(
	"aroace",
	"The Aroace Pride Flag",
	"Designed by the tumblr user aroaceflags at an unknown date",
	"acearo|arosexual",
	aroace_flag_commands
);

static GraphicsCommand genderflux_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_6_0),Right(h_6_1),RGB(244,118,149)),
	GraphicsCommand(Rectangle,Left(h_6_1),Right(h_6_2),RGB(241,163,185)),
	GraphicsCommand(Rectangle,Left(h_6_2),Right(h_6_3),RGB(206,206,206)),
	GraphicsCommand(Rectangle,Left(h_6_3),Right(h_6_4),RGB(123,224,247)),
	GraphicsCommand(Rectangle,Left(h_6_4),Right(h_6_5),RGB( 62,205,250)),
	GraphicsCommand(Rectangle,Left(h_6_5),Right(h_6_6),RGB(254,244,140)),
	GraphicsCommand(EndCommandList)
};

static Flag genderflux_flag = Flag(
	"genderflux",
	"The Genderflux Pride Flag",
	"Designed by the tumblr user pride-flags-for-us at an unknown date",
	"flux",
	genderflux_flag_commands,
	RGB(0,0,0),
	4
);

static GraphicsCommand greysexual_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(110,  0,112)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(210,210,210)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(210,210,210)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(110,  0,112)),
	GraphicsCommand(EndCommandList)
};

static Flag greysexual_flag = Flag(
	"greysexual",
	"The Greysexual Pride Flag",
	"Designed by Milith Rusignuolo in 2013",
	"graysexual|grey-asexual|gray-asexual|grey|gray",
	greysexual_flag_commands
);

static GraphicsCommand neutrois_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB( 61,165, 66)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB(  0,  0,  0)),
	GraphicsCommand(EndCommandList)
};

static Flag neutrois_flag = Flag(
	"neutrois",
	"The Neutrois Pride Flag",
	NULL,
	NULL,
	neutrois_flag_commands
);

static GraphicsCommand proculsexual_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(210,210,210)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(255,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(211,176, 55)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(255,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(210,210,210)),
	GraphicsCommand(EndCommandList)
};

static Flag proculsexual_flag = Flag(
	"proculsexual",
	"The Proculsexual Pride Flag",
	"Designed by the tumblr user beyond-mogai-pride-flags at an unknown date",
	"procul",
	proculsexual_flag_commands,
	RGB(0,0,0),
	4
);


static GraphicsCommand aegosexual_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_4_0),Right(h_4_1),RGB(  0,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_4_1),Right(h_4_2),RGB(163,163,163)),
	GraphicsCommand(Rectangle,Left(h_4_2),Right(h_4_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_4_3),Right(h_4_4),RGB(128,  0,128)),
	GraphicsCommand(Quad,Point(0,h_4_0),Point(640,h_4_0),Point(560,h_4_1),Point(80,h_4_1),RGB(128,  0,128)),
	GraphicsCommand(Quad,Point(80,h_4_1),Point(560,h_4_1),Point(480,h_4_2),Point(160,h_4_2),RGB(255,255,255)),
	GraphicsCommand(Quad,Point(159,h_4_2),Point(481,h_4_2),Point(400,h_4_3),Point(240,h_4_3),RGB(163,163,163)), // Cheating slightly to prevent white touching white
	GraphicsCommand(Triangle,Point(240,h_4_3),Point(400,h_4_3),Point(320,h_4_4),RGB(  0,  0,  0)),
	GraphicsCommand(EndCommandList)
};

static Flag aegosexual_flag = Flag(
	"aegosexual",
	"The Aegosexual Pride Flag, formerly called the Autochorissexual Pride Flag",
	"Created by tumblr user 'hunterinabrowncoat' in 2014",
	"aego|autochorissexual|autochoris",
	aegosexual_pride_flag_commands
);



static GraphicsCommand disability_pride_flag_commands[]={
	GraphicsCommand(Triangle,Point(196,  0),Point(649,  0),Point(639,333),               RGB( 88, 88, 88)),
	GraphicsCommand(Quad,    Point(116,  0),Point(195,  0),Point(639,334),Point(639,394),RGB( 58,175,125)),
	GraphicsCommand(Quad,    Point( 33,  0),Point(115,  0),Point(639,395),Point(639,456),RGB(122,193,224)),
	GraphicsCommand(Quad,    Point(  0, 38),Point(  0,  0),Point( 32,  0),Point(639,457),RGB(233,233,233)),
	GraphicsCommand(Quad,    Point(  0, 38),Point(639,457),Point(639,479),Point(588,479),RGB(233,233,233)),
	GraphicsCommand(Quad,    Point(  0, 99),Point(  0, 39),Point(587,479),Point(507,479),RGB(238,223,119)),
	GraphicsCommand(Quad,    Point(  0,159),Point(  0, 98),Point(506,479),Point(430,479),RGB(207,114,128)),
	GraphicsCommand(Triangle,Point(  0,160),Point(429,479),Point(  0,479),               RGB( 88, 88, 88)),


	GraphicsCommand(EndCommandList)
};

static Flag disability_pride_flag = Flag(
	"disability",
	"The Disability Pride Flag",
	"Created by Ann Magill (@capricorn-0mnikorn) in 2022",
	"disabled",
	disability_pride_flag_commands,
	RGB(255,255,255),
	3,
	LAYOUT_LEFT
);

static GraphicsCommand progressive_intersex_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_6_0),Right(h_6_1),RGB(216,0,19)),
	GraphicsCommand(Rectangle,Left(h_6_1),Right(h_6_2),RGB(236,117,20)),
	GraphicsCommand(Rectangle,Left(h_6_2),Right(h_6_3),RGB(235,227,29)),
	GraphicsCommand(Rectangle,Left(h_6_3),Right(h_6_4),RGB(103,174,32)),
	GraphicsCommand(Rectangle,Left(h_6_4),Right(h_6_5),RGB(34,67,147)),
	GraphicsCommand(Rectangle,Left(h_6_5),Right(h_6_6),RGB(89,17,109)),
	// Black chevron
	GraphicsCommand(Quad,Point(153,  0),Point(199,  0),Point(421,240),Point(374,240),RGB( 22, 22,  21)),
	GraphicsCommand(Quad,Point(374,240),Point(421,240),Point(199,480),Point(152,480),RGB( 22, 22,  21)),
	// Brown chevron
	GraphicsCommand(Quad,Point(107,  0),Point(153,  0),Point(374,240),Point(328,240),RGB(129, 67, 18)),
	GraphicsCommand(Quad,Point(328,240),Point(374,240),Point(153,480),Point(107,480),RGB(129, 67, 18)),
	// Light-blue chevron
	GraphicsCommand(Quad,Point( 60, 0),Point(107,  0),Point(328,240),Point(282,240),RGB(107,193,223)),
	GraphicsCommand(Quad,Point(328,240),Point(282,240),Point(60,480),Point(107,480),RGB(107,193,223)),
	// Pink chevron
	GraphicsCommand(Quad,Point( 15,0),Point(60,0),Point(282,240),Point(236,240),RGB(239,155,188)),
	GraphicsCommand(Quad,Point(282,240),Point(236,240),Point(15,480),Point(60,480),RGB(239,155,188)),
	// White chevron
	GraphicsCommand(Quad,Point(-31,0),Point(15,0),Point(236,240),Point(190,240),RGB(255,255,255)),
	GraphicsCommand(Quad,Point(-31,480),Point(15,480),Point(236,240),Point(190,240),RGB(255,255,255)),
	// Yellow triangle
	GraphicsCommand(Triangle,Point(0,35),Point(190,240),Point(0,447),RGB(252,210,21)),
	// Purple circle
	GraphicsCommand(Ellipse,Point(70,240),57,57,RGB(82, 32,120)),
	// Yellow circle inside purple circle
	GraphicsCommand(Ellipse,Point(70,240),45,45,RGB(252,210,21)),

	GraphicsCommand(EndCommandList)
};

static Flag progressive_intersex_pride_flag = Flag(
	"inclusive-progress",
	"The Intersex-Inclusive (Progress) Pride Flag",
	"Created in 2021 by Valentino Vecchietti",
	"progress2022|progressive2022|progress-inclusive",
	progressive_intersex_pride_flag_commands,
	RGB(128,128,128),
	3,
	LAYOUT_CENTER
);
int polygon_poly_heart[]={
	230,159,143,245,122,253,104,252,85,244,69,229,62,212,62,192,65,180,69,172,
	79,159,67,144,62,128,62,109,71,88,88,72,111,65,127,67,140,73,148,78,
	-1,-1};
static GraphicsCommand tricolor_polyamory_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB(  0,159,227)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB(228,  0, 80)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB( 52, 12, 70)),
	// white chevron
	GraphicsCommand(Quad,Point(0,0),Point(159,  0),Point(318,159),Point(0,479),RGB(255,255,255)),
	// yellow heart
	GraphicsCommand(Polygon,polygon_poly_heart,RGB(252,191,  0)),
	GraphicsCommand(EndCommandList)
};

static Flag tricolor_polyamory_pride_flag = Flag(
	"tricolor-polyamory",
	"The tricolor polyamory pride flag",
	"Created in 2022 by Red Howell, selected by community on polyamproud.com",
	"tricolor-poly|polyamproud",
	tricolor_polyamory_pride_flag_commands
);


static GraphicsCommand voidpunk_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(  0),Right(101),RGB( 55, 46, 73)),
	GraphicsCommand(Rectangle,Left(101),Right(219),RGB(158,116,182)),
	GraphicsCommand(Rectangle,Left(219),Right(262),RGB(233,233,233)),
	GraphicsCommand(Rectangle,Left(262),Right(379),RGB( 81,172, 86)),
	GraphicsCommand(Rectangle,Left(379),Right(480),RGB( 32, 69, 44)),
	// grey circle
	GraphicsCommand(Ellipse,Point(320,240),103,103,RGB(233,233,233)),
	// black circle inside grey circle
	GraphicsCommand(Ellipse,Point(320,240),72,72,RGB( 27, 23, 30)),

	GraphicsCommand(EndCommandList)
};

static Flag voidpunk_pride_flag = Flag(
	"voidpunk",
	"The voidpunk pride flag",
	"Created in 2018 by tumblr user simeleons (Simon)", // https://simeleons.tumblr.com/post/179520932707/i-tried-my-hand-at-making-a-voidpunk-flag-d-the
	"void-punk",
	voidpunk_pride_flag_commands
);

static GraphicsCommand pangender_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(255,247,152)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(255,221,205)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(255,235,251)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(255,235,251)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(255,221,205)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(255,247,152)),
	GraphicsCommand(EndCommandList)
};

static Flag pangender_pride_flag = Flag(
	"pangender",
	"The Pangender pride flag",
	"Created in 2015 by tumblr user pangendering (Cari Rez Lobo)", // https://pangendering.tumblr.com/post/109400686126/possible-pangender-pride-flags
	NULL,
	pangender_pride_flag_commands,
	RGB(0,0,0),
	4,
	LAYOUT_CENTER
);

static GraphicsCommand objectum_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Top(v_5_0),Bottom(v_5_1),RGB(106,159,182)),
	GraphicsCommand(Rectangle,Top(v_5_1),Bottom(v_5_2),RGB(217,217,217)),
	GraphicsCommand(Rectangle,Top(v_5_2),Bottom(v_5_3),RGB(253,255,255)),
	GraphicsCommand(Rectangle,Top(v_5_3),Bottom(v_5_4),RGB(253,255,155)),
	GraphicsCommand(Rectangle,Top(v_5_4),Bottom(v_5_5),RGB(180,153,194)),
	// red circle
	GraphicsCommand(Ellipse,Point(320,240),136,136,RGB(227,  0,  0)),
	// white circle
	GraphicsCommand(Ellipse,Point(320,240),122,122,RGB(253,255,255)),
	GraphicsCommand(EndCommandList)
};

static Flag objectum_pride_flag = Flag(
	"objectum",
	"The Objectum pride flag",
	"The creator/date of this flag is unknown", // https://www.lgbtqia.wiki/wiki/Objectum
	"objectum-sexuality",
	objectum_pride_flag_commands,
	RGB(0,0,0),
	4,
	LAYOUT_CENTER
);

static GraphicsCommand ps_slash_2_pride_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(147,140,243)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(  0,215,142)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(213,207,195)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(  0,215,142)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(147,140,243)),
	GraphicsCommand(EndCommandList)
};

static Flag ps_slash_2_pride_flag = Flag(
	"ps/2",
	"The PS/2 Pride Flag",
	"Designed by Foone Turing in 2021",
	"ps2|ps-slash-2|ibm",
	ps_slash_2_pride_flag_commands
);




#include "flagordr.h"