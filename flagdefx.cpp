#include <stdlib.h>
#include <string.h>
#include "graphics.h"
#include "flags.h"
#include "geometry.h"

// Extension to flagdefs.cpp which has grown so big adding any more would break the compiler

int polygon_hongkong_petal0[] = {320,240,294,224,278,202,272,179,275,155,285,133,303,115,326,103,354,100,339,117,344,139,348,152,346,167,329,187,315,198,309,212,310,227,320,240,-1,-1};
int polygon_hongkong_petal1[] = {320,240,328,210,343,189,364,176,387,171,411,174,434,185,452,203,463,229,443,220,424,232,412,240,398,242,373,233,359,223,343,221,329,227,320,240,-1,-1};
int polygon_hongkong_petal2[] = {320,240,351,238,376,246,395,262,407,283,411,307,408,331,396,354,375,373,377,351,360,336,349,328,342,315,343,288,348,271,345,256,335,245,320,240,-1,-1};
int polygon_hongkong_petal3[] = {320,240,331,269,332,295,322,318,306,335,285,347,260,352,235,347,211,333,232,328,241,308,246,294,256,284,282,277,299,277,313,269,320,256,320,240,-1,-1};
int polygon_hongkong_petal4[] = {320,240,296,260,271,268,247,266,225,256,207,240,195,218,192,192,197,165,209,184,231,186,245,186,258,193,273,215,279,231,290,242,305,245,320,240,-1,-1};
int polygon_hongkong_trace0[] = {320,239,307,227,298,210,297,187,305,166,303,165,295,187,296,210,305,229,319,241,-1,-1};
int polygon_hongkong_trace1[] = {321,240,328,224,342,210,363,202,386,203,386,201,363,200,341,208,326,223,319,240,-1,-1};
int polygon_hongkong_trace2[] = {320,241,338,243,355,252,370,269,376,291,378,291,371,268,356,250,339,240,320,239,-1,-1};
int polygon_hongkong_trace3[] = {319,241,323,258,320,277,307,296,289,309,289,311,309,298,322,278,325,258,321,240,-1,-1};
int polygon_hongkong_trace4[] = {319,239,304,248,285,251,263,245,245,231,243,233,262,247,285,253,305,251,321,241,-1,-1};
int polygon_hongkong_star0[] = {315,161,311,168,309,160,300,157,308,153,308,144,314,150,322,147,319,155,324,162,-1,-1};
int polygon_hongkong_star1[] = {394,211,385,209,393,205,393,196,399,202,407,199,404,207,409,213,400,212,396,220,-1,-1};
int polygon_hongkong_star2[] = {370,301,370,293,376,299,384,295,381,303,386,310,378,309,373,317,371,308,363,306,-1,-1};
int polygon_hongkong_star3[] = {277,307,285,304,282,312,287,318,278,317,274,325,272,316,263,314,271,310,271,301,-1,-1};
int polygon_hongkong_star4[] = {243,220,249,227,240,226,235,233,234,224,225,222,233,218,232,209,239,215,247,212,-1,-1};

GraphicsCommand hongkong_rainbow_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_6_0),Right(h_6_1),RGB(228,3,3)),
	GraphicsCommand(Rectangle,Left(h_6_1),Right(h_6_2),RGB(255,140,0)),
	GraphicsCommand(Rectangle,Left(h_6_2),Right(h_6_3),RGB(255,237,3)),
	GraphicsCommand(Rectangle,Left(h_6_3),Right(h_6_4),RGB(0,128,38)),
	GraphicsCommand(Rectangle,Left(h_6_4),Right(h_6_5),RGB(0,77,255)),
	GraphicsCommand(Rectangle,Left(h_6_5),Right(h_6_6),RGB(117,7,135)),
	GraphicsCommand(Polygon,polygon_hongkong_petal0,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_hongkong_petal1,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_hongkong_petal2,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_hongkong_petal3,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_hongkong_petal4,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_hongkong_trace0,RGB(117,7,135)),
	GraphicsCommand(Polygon,polygon_hongkong_trace1,RGB(0,77,255)),
	GraphicsCommand(Polygon,polygon_hongkong_trace2,RGB(228,3,3)),
	GraphicsCommand(Polygon,polygon_hongkong_trace3,RGB(255,140,0)),
	GraphicsCommand(Polygon,polygon_hongkong_trace4,RGB(0,128,38)),
	GraphicsCommand(Polygon,polygon_hongkong_star0,RGB(255,140,0)),
	GraphicsCommand(Polygon,polygon_hongkong_star1,RGB(0,128,38)),
	GraphicsCommand(Polygon,polygon_hongkong_star2,RGB(117,7,135)),
	GraphicsCommand(Polygon,polygon_hongkong_star3,RGB(0,77,255)),
	GraphicsCommand(Polygon,polygon_hongkong_star4,RGB(228,3,3)),
	GraphicsCommand(EndCommandList)
};

Flag hongkong_rainbow_flag = Flag(
	"hong-kong-rainbow",
	"The Hong Kong Rainbow Pride Flag",
	NULL,
	"hongkong-rainbow|hk-rainbow",
	hongkong_rainbow_flag_commands
);

int polygon_taiwan[] = {205,132,250,120,205,108,238,75,193,87,205,42,172,75,160,30,148,75,115,42,127,87,82,75,115,108,70,120,115,132,82,165,127,153,115,198,148,165,160,210,172,165,205,198,193,153,238,165,-1,-1};

GraphicsCommand taiwan_rainbow_flag_commands[]={
	GraphicsCommand(Rectangle,Point(0,0),Point(320,240),RGB(25,57,138)),
	GraphicsCommand(Rectangle,Point(320,h_6_0),Right(h_6_1),RGB(228,3,3)),
	GraphicsCommand(Rectangle,Point(320,h_6_1),Right(h_6_2),RGB(255,140,0)),
	GraphicsCommand(Rectangle,Point(320,h_6_2),Right(h_6_3),RGB(255,237,3)),
	GraphicsCommand(Rectangle,Left(h_6_3),Right(h_6_4),RGB(0,128,38)),
	GraphicsCommand(Rectangle,Left(h_6_4),Right(h_6_5),RGB(0,77,255)),
	GraphicsCommand(Rectangle,Left(h_6_5),Right(h_6_6),RGB(117,7,135)),
	GraphicsCommand(Polygon,polygon_taiwan,RGB(255,255,255)),
	GraphicsCommand(Ellipse,Point(160,120),51,51,RGB(25,57,138)),
	GraphicsCommand(Ellipse,Point(160,120),45,45,RGB(255,255,255)),
	GraphicsCommand(EndCommandList)
};

Flag taiwan_rainbow_flag = Flag(
	"taiwan-rainbow",
	"The Taiwan Rainbow Pride Flag",
	NULL,
	"tw-rainbow",
	taiwan_rainbow_flag_commands
);

GraphicsCommand us_rainbow_flag_commands[]={
	GraphicsCommand(Rectangle,Point(0,0),Point(338,240),RGB(60,59,110)),
	GraphicsCommand(Rectangle,Point(338,h_6_0),Right(h_6_1),RGB(228,3,3)),
	GraphicsCommand(Rectangle,Point(338,h_6_1),Right(h_6_2),RGB(255,140,0)),
	GraphicsCommand(Rectangle,Point(338,h_6_2),Right(h_6_3),RGB(255,237,3)),
	GraphicsCommand(Rectangle,Left(h_6_3),Right(h_6_4),RGB(0,128,38)),
	GraphicsCommand(Rectangle,Left(h_6_4),Right(h_6_5),RGB(0,77,255)),
	GraphicsCommand(Rectangle,Left(h_6_5),Right(h_6_6),RGB(117,7,135)),
	// SO MANY STARS
	GraphicsCommand(Star,Point( 28, 23),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point( 85, 23),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(141, 23),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(198, 23),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(254, 23),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(311, 23),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point( 56, 47),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(113, 47),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(169, 47),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(226, 47),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(282, 47),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point( 28, 71),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point( 85, 71),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(141, 71),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(198, 71),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(254, 71),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(311, 71),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point( 56, 95),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(113, 95),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(169, 95),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(226, 95),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(282, 95),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point( 28,119),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point( 85,119),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(141,119),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(198,119),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(254,119),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(311,119),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point( 56,143),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(113,143),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(169,143),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(226,143),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(282,143),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point( 28,167),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point( 85,167),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(141,167),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(198,167),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(254,167),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(311,167),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point( 56,191),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(113,191),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(169,191),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(226,191),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(282,191),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point( 28,215),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point( 85,215),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(141,215),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(198,215),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(254,215),BigStar,RGB(255,255,255)),
	GraphicsCommand(Star,Point(311,215),BigStar,RGB(255,255,255)),
	GraphicsCommand(EndCommandList)
};

Flag us_rainbow_flag = Flag(
	"us-rainbow",
	"The USA Rainbow Pride Flag",
	NULL,
	"usa-rainbow",
	us_rainbow_flag_commands
);

int polygon_colorado[] = {270,240,418,178,450,178,450,302,418,302,-1,-1};

GraphicsCommand colorado_rainbow_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_9_0),Right(h_9_1),RGB(228,3,3)),
	GraphicsCommand(Rectangle,Left(h_9_1),Right(h_9_2),RGB(255,140,0)),
	GraphicsCommand(Rectangle,Left(h_9_2),Right(h_9_3),RGB(255,237,3)),
	GraphicsCommand(Rectangle,Left(h_9_3),Right(h_9_6),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_9_6),Right(h_9_7),RGB(0,128,38)),
	GraphicsCommand(Rectangle,Left(h_9_7),Right(h_9_8),RGB(0,77,255)),
	GraphicsCommand(Rectangle,Left(h_9_8),Right(h_9_9),RGB(117,7,135)),
	GraphicsCommand(Ellipse,Point(270,240),160,160,RGB(191,44,52)),
	GraphicsCommand(Polygon,polygon_colorado,RGB(255,255,255)),
	GraphicsCommand(Ellipse,Point(270,240),80,80,RGB(246,208,71)),
	GraphicsCommand(EndCommandList)
};

Flag colorado_rainbow_flag = Flag(
	"colorado-rainbow",
	"The Colorado Rainbow Pride Flag",
	NULL,
	NULL,
	colorado_rainbow_flag_commands
);

int polygon_tokipona0[] = {0,83,0,0,640,0,640,83,320,268,-1,-1};
int polygon_tokipona1[] = {169,355,320,93,471,355,-1,-1};
int polygon_tokipona2[] = {194,341,320,122,446,341,-1,-1};

GraphicsCommand tokipona_rainbow_flag_commands[]={
	GraphicsCommand(Rectangle,Point(0,0),Point(320,480),RGB(247,84,104)),
	GraphicsCommand(Rectangle,Point(320,0),Point(640,480),RGB(75,218,170)),
	GraphicsCommand(Polygon,polygon_tokipona0,RGB(247,236,106)),
	GraphicsCommand(Polygon,polygon_tokipona1,RGB(0,0,0)),
	GraphicsCommand(Polygon,polygon_tokipona2,RGB(191,120,188)),
	GraphicsCommand(Rectangle,Point(178,253),Point(462,268),RGB(0,0,0)),
	GraphicsCommand(EndCommandList)
};

Flag tokipona_rainbow_flag = Flag(
	"toki-pona-rainbow",
	"The Toki Pona Rainbow Pride Flag",
	"Designed by jan Nijo",
	NULL,
	tokipona_rainbow_flag_commands
);

int polygon_trans[] = {328,362,376,362,376,386,328,386,327,437,304,438,304,387,255,386,255,362,304,362,304,331,272,322,245,303,223,270,216,232,222,196,241,165,222,147,188,182,170,164,205,129,169,93,161,84,161,126,137,126,137,43,221,42,221,67,176,67,222,112,256,78,273,96,239,130,259,149,286,136,317,132,345,136,377,153,462,68,396,68,396,44,503,44,503,152,479,152,479,83,394,169,411,202,416,232,408,270,386,302,359,322,328,331,-1,-1};

GraphicsCommand israel_trans_flag_commands[]={
	GraphicsCommand(Rectangle,Point(0,0),Point(640,480),RGB(105,243,105)),
	GraphicsCommand(Polygon,polygon_trans,RGB(0,0,0)),
	GraphicsCommand(Ellipse,Point(316,231),100,100,RGB(0,0,0)),
	GraphicsCommand(Ellipse,Point(316,231),74,74,RGB(105,243,105)),
	GraphicsCommand(EndCommandList)
};

Flag israel_trans_flag = Flag(
	"israel-trans",
	"The Trans Pride Flag of Israel",
	NULL,
	"trans-il",
	israel_trans_flag_commands
);

GraphicsCommand aceflux_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(198,34, 84)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(194,38,121)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(192,39,155)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(170,40,172)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(139,37,173)),
	GraphicsCommand(EndCommandList)
};

Flag aceflux_flag = Flag(
	"aceflux",
	"The Aceflux Pride Flag",
	NULL,
	NULL,
	aceflux_flag_commands
);

int polygon_achillean10[] = {300,238,306,247,308,254,321,255,325,252,320,250,311,240,312,224,303,228,-1,-1};
int polygon_achillean11[] = {337,223,334,220,332,213,325,209,316,211,312,214,323,217,329,229,328,241,337,234,-1,-1};
int polygon_achillean20[] = {205,289,195,267,199,246,202,241,217,261,244,269,265,283,276,307,276,309,264,304,248,305,231,304,207,292,-1,-1};
int polygon_achillean12[] = {324,277,332,279,346,276,354,269,366,267,365,258,365,249,358,227,346,223,347,226,350,239,346,256,335,267,319,272,-1,-1};
int polygon_achillean21[] = {373,286,361,311,362,310,390,306,392,306,393,306,395,306,419,302,435,290,445,257,443,245,433,260,419,266,394,273,375,284,-1,-1};
int polygon_achillean13[] = {295,260,288,248,286,233,288,221,287,218,274,225,269,240,271,252,271,265,275,268,280,268,288,273,296,277,307,276,313,270,-1,-1};
int polygon_achillean14[] = {309,172,298,177,288,181,272,196,261,215,259,228,256,240,244,226,243,211,246,204,248,195,245,186,251,180,258,180,276,169,300,167,-1,-1};
int polygon_achillean15[] = {350,284,336,291,317,293,306,290,282,279,278,276,276,283,285,296,299,303,306,308,312,314,324,313,331,306,342,302,351,296,357,289,358,279,-1,-1};
int polygon_achillean16[] = {387,244,396,235,398,224,395,213,393,206,397,197,393,189,384,188,381,183,378,177,369,170,355,168,340,172,354,182,366,195,374,211,378,232,373,248,-1,-1};
int polygon_achillean17[] = {352,217,356,213,356,206,353,197,346,191,341,189,333,179,327,178,313,183,308,183,297,188,290,195,288,205,294,214,298,208,303,203,317,197,334,199,345,207,346,213,347,219,-1,-1};

GraphicsCommand achillean_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB(153,198,234)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB(249,253,234)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB(153,198,234)),
	GraphicsCommand(Polygon,polygon_achillean10,RGB(172,221,77)),
	GraphicsCommand(Polygon,polygon_achillean11,RGB(172,221,77)),
	GraphicsCommand(Polygon,polygon_achillean20,RGB(101,149,51)),
	GraphicsCommand(Polygon,polygon_achillean12,RGB(172,221,77)),
	GraphicsCommand(Polygon,polygon_achillean21,RGB(101,149,51)),
	GraphicsCommand(Polygon,polygon_achillean13,RGB(172,221,77)),
	GraphicsCommand(Polygon,polygon_achillean14,RGB(172,221,77)),
	GraphicsCommand(Polygon,polygon_achillean15,RGB(172,221,77)),
	GraphicsCommand(Polygon,polygon_achillean16,RGB(172,221,77)),
	GraphicsCommand(Polygon,polygon_achillean17,RGB(172,221,77)),
	GraphicsCommand(EndCommandList)
};

Flag achillean_flag = Flag(
	"achillean",
	"The Achillean Pride Flag",
	NULL,
	NULL,
	achillean_flag_commands
);

GraphicsCommand androsexual_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB(  0,204,255)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB( 96, 53, 36)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB(184,153,223)),
	GraphicsCommand(EndCommandList)
};

Flag androsexual_flag = Flag(
	"androsexual",
	"The Androsexual Pride Flag",
	NULL,
	"andro",
	androsexual_flag_commands
);

int polygon_apollonian00[] = {376,240,371,219,359,201,342,189,320,185,298,189,281,201,269,219,264,240,247,240,253,212,268,189,292,173,320,167,348,173,372,189,387,212,393,240,-1,-1};
int polygon_apollonian01[] = {393,240,387,269,372,292,348,307,320,313,292,307,268,292,253,269,247,240,264,240,269,262,281,280,298,291,320,296,342,291,359,280,371,262,376,240,393,240,-1,-1};
int polygon_apollonian02[] = {329,144,329,108,320,99,311,108,311,144,320,153,-1,-1};
int polygon_apollonian03[] = {329,372,329,336,320,327,311,336,311,372,320,381,-1,-1};
int polygon_apollonian04[] = {461,240,452,231,416,231,407,240,416,249,452,249,-1,-1};
int polygon_apollonian05[] = {233,240,224,231,188,231,179,240,188,249,224,249,-1,-1};
int polygon_apollonian06[] = {407,200,439,181,442,170,430,166,399,185,395,196,403,201,-1,-1};
int polygon_apollonian07[] = {210,314,241,295,245,283,233,280,201,299,198,310,206,315,-1,-1};
int polygon_apollonian08[] = {375,161,394,130,390,118,379,121,360,153,363,165,368,166,-1,-1};
int polygon_apollonian09[] = {261,359,280,327,277,315,265,319,246,350,250,362,254,363,-1,-1};
int polygon_apollonian10[] = {390,362,394,350,375,319,363,315,360,327,379,359,386,363,-1,-1};
int polygon_apollonian11[] = {276,165,280,153,261,121,250,118,246,130,265,161,272,166,-1,-1};
int polygon_apollonian12[] = {442,310,439,299,407,280,395,283,399,295,430,314,434,315,-1,-1};
int polygon_apollonian13[] = {245,196,241,185,210,166,198,170,201,181,233,200,237,201,-1,-1};

GraphicsCommand apollonian_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(255,92,32)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(255,168,92)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(255,220,117)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(255,220,117)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(255,168,92)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(255,92,32)),
	GraphicsCommand(Polygon,polygon_apollonian00,RGB(223,130,38)),
	GraphicsCommand(Polygon,polygon_apollonian01,RGB(223,130,38)),
	GraphicsCommand(Polygon,polygon_apollonian02,RGB(223,130,38)),
	GraphicsCommand(Polygon,polygon_apollonian03,RGB(223,130,38)),
	GraphicsCommand(Polygon,polygon_apollonian04,RGB(223,130,38)),
	GraphicsCommand(Polygon,polygon_apollonian05,RGB(223,130,38)),
	GraphicsCommand(Polygon,polygon_apollonian06,RGB(223,130,38)),
	GraphicsCommand(Polygon,polygon_apollonian07,RGB(223,130,38)),
	GraphicsCommand(Polygon,polygon_apollonian08,RGB(223,130,38)),
	GraphicsCommand(Polygon,polygon_apollonian09,RGB(223,130,38)),
	GraphicsCommand(Polygon,polygon_apollonian10,RGB(223,130,38)),
	GraphicsCommand(Polygon,polygon_apollonian11,RGB(223,130,38)),
	GraphicsCommand(Polygon,polygon_apollonian12,RGB(223,130,38)),
	GraphicsCommand(Polygon,polygon_apollonian13,RGB(223,130,38)),
	GraphicsCommand(EndCommandList)
};

Flag apollonian_flag = Flag(
	"apollonian",
	"The Apollonian Pride Flag",
	"Designed by emozemo in 2021",
	"apollian|appolonian|appolian|appollonian|appollian",
	apollonian_flag_commands
);

GraphicsCommand aporagender_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(243,124,202)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(225,189,240)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(255,249,130)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(225,189,240)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(123,187,221)),
	GraphicsCommand(EndCommandList)
};

Flag aporagender_flag = Flag(
	"aporagender",
	"The Aporagender Pride Flag",
	"Designed by hyaenahart at an unknown date",
	"aliagender|apora|alia",
	aporagender_flag_commands
);

GraphicsCommand aroflux_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(231, 82,107)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(216,108,101)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(183,165, 93)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(163,201, 90)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(146,229, 85)),
	GraphicsCommand(EndCommandList)
};

Flag aroflux_flag = Flag(
	"aroflux",
	"The Aroflux Pride Flag",
	NULL,
	NULL,
	aroflux_flag_commands
);

int polygon_aspectrum[] = {320,40,352,208,520,240,352,272,320,440,288,272,120,240,288,208,-1,-1};

GraphicsCommand aspectrum_flag_commands[]={
	GraphicsCommand(Rectangle,Point(  0,  0),Point(320,240),RGB(  0,  0,  0)),
	GraphicsCommand(Rectangle,Point(320,  0),Point(640,240),RGB( 60,165, 66)),
	GraphicsCommand(Rectangle,Point(  0,240),Point(320,480),RGB(130,  0,128)),
	GraphicsCommand(Rectangle,Point(320,240),Point(640,480),RGB(153,153,153)),
	GraphicsCommand(Polygon,polygon_aspectrum,RGB(255,255,255)),
	GraphicsCommand(EndCommandList)
};

Flag aspectrum_flag = Flag(
	"aspectum",
	"The A-Spectrum Pride Flag",
	"Designed by themoonisaroace in 2019",
	"aspec|a-spec|a-spectrum",
	aspectrum_flag_commands
);

int polygon_bdsm0[] = {447,313,455,290,453,266,442,245,425,229,401,221,378,223,357,233,340,252,333,274,332,283,321,325,307,343,289,357,249,368,303,386,359,381,409,357,-1,-1};
int polygon_bdsm1[] = {193,313,209,332,231,342,255,344,277,336,295,320,306,299,307,275,300,252,284,234,277,229,246,198,237,178,234,155,245,114,202,153,178,203,175,259,-1,-1};
int polygon_bdsm2[] = {320,93,296,98,276,112,263,132,258,155,263,179,276,198,296,212,320,217,343,212,351,208,393,197,415,200,436,208,467,238,455,181,423,136,377,105,-1,-1};

GraphicsCommand bdsm_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_9_0),Right(h_9_1),RGB(0,0,0)),
	GraphicsCommand(Rectangle,Left(h_9_1),Right(h_9_2),RGB(0,0,255)),
	GraphicsCommand(Rectangle,Left(h_9_2),Right(h_9_3),RGB(0,0,0)),
	GraphicsCommand(Rectangle,Left(h_9_3),Right(h_9_4),RGB(0,0,255)),
	GraphicsCommand(Rectangle,Left(h_9_4),Right(h_9_5),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_9_5),Right(h_9_6),RGB(0,0,255)),
	GraphicsCommand(Rectangle,Left(h_9_6),Right(h_9_7),RGB(0,0,0)),
	GraphicsCommand(Rectangle,Left(h_9_7),Right(h_9_8),RGB(0,0,255)),
	GraphicsCommand(Rectangle,Left(h_9_8),Right(h_9_9),RGB(0,0,0)),
	GraphicsCommand(Ellipse,Point(320,240),168,168,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_bdsm0,RGB(255,0,0)),
	GraphicsCommand(Polygon,polygon_bdsm1,RGB(255,0,0)),
	GraphicsCommand(Polygon,polygon_bdsm2,RGB(255,0,0)),
	GraphicsCommand(Ellipse,Point(320,155),17,17,RGB(255,255,255)),
	GraphicsCommand(Ellipse,Point(246,283),17,17,RGB(255,255,255)),
	GraphicsCommand(Ellipse,Point(394,283),17,17,RGB(255,255,255)),
	GraphicsCommand(EndCommandList)
};

Flag bdsm_flag = Flag(
	"bdsm",
	"The BDSM Pride Flag",
	NULL,
	NULL,
	bdsm_flag_commands
);

GraphicsCommand bigender_alt_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(109,130,209)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(154,199,232)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(213,199,232)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(237,165,205)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(196,121,162)),
	GraphicsCommand(EndCommandList)
};

Flag bigender_alt_flag = Flag(
	"bigender-alt",
	"An alternate Bigender flag",
	"Created by Natalie Phox (@NittrusFox) in 2009",
	NULL,
	bigender_alt_flag_commands
);

GraphicsCommand five_stripe_bigender_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(237,120,171)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(254,245, 77)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(174,109,190)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(113,158,227)),
	GraphicsCommand(EndCommandList)
};

Flag five_stripe_bigender_flag = Flag(
	"five-stripe-bigender",
	"A 5-stripe Bigender Pride Flag",
	NULL,
	"bigender5",
	five_stripe_bigender_flag_commands
);

GraphicsCommand ceterosexual_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_4_0),Right(h_4_1),RGB(252,249,128)),
	GraphicsCommand(Rectangle,Left(h_4_1),Right(h_4_2),RGB( 22,156, 71)),
	GraphicsCommand(Rectangle,Left(h_4_2),Right(h_4_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_4_3),Right(h_4_4),RGB(  0,  0,  0)),
	GraphicsCommand(EndCommandList)
};

Flag ceterosexual_flag = Flag(
	"ceterosexual",
	"The Ceterosexual Pride Flag",
	"Designed by savvyred in 2013",
	"skoliosexual|allotroposexual|cetero|skolio|allotropo",
	ceterosexual_flag_commands
);

int polygon_diamoric0[] = {256,283,266,264,286,254,256,255,245,248,239,237,243,225,253,219,249,208,254,197,267,191,284,196,296,208,290,196,287,181,293,167,305,161,314,163,320,170,326,163,336,161,348,167,353,181,345,207,355,197,370,191,385,195,391,207,387,219,397,225,401,236,395,249,377,256,354,254,374,264,385,283,385,285,377,299,361,300,357,313,346,319,344,319,328,310,320,292,313,310,297,319,295,319,283,313,279,300,263,299,256,285,-1,-1};
int polygon_diamoric1[] = {321,203,324,234,344,217,347,214,346,211,350,206,356,209,354,214,348,215,328,239,356,241,362,237,366,244,361,247,357,243,328,245,348,269,354,270,356,275,349,278,347,271,347,270,344,268,324,250,321,278,325,283,322,288,316,285,320,279,317,250,293,271,291,278,284,275,286,270,292,270,312,245,284,243,277,247,275,240,282,238,284,241,312,239,292,215,290,216,284,211,290,206,293,214,317,234,320,204,316,198,320,193,325,198,-1,-1};
int polygon_diamoric2[] = {317,241,303,242,317,244,308,255,319,246,320,260,322,245,333,255,324,244,338,242,324,241,333,229,322,239,320,224,319,239,307,229,-1,-1};

GraphicsCommand diamoric_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB(145,242,145)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB(145,242,145)),
	GraphicsCommand(Polygon,polygon_diamoric0,RGB(102,2,60)),
	GraphicsCommand(Polygon,polygon_diamoric1,RGB(255,255,0)),
	GraphicsCommand(Polygon,polygon_diamoric2,RGB(102,2,60)),
	GraphicsCommand(EndCommandList)
};

Flag diamoric_flag = Flag(
	"diamoric",
	"The Diamoric Pride Flag",
	NULL,
	NULL,
	diamoric_flag_commands,
	RGB(0,0,0),
	4
);

GraphicsCommand disability_rights_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB(234,191, 63)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB(207,209,208)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB(211,152, 74)),
	GraphicsCommand(EndCommandList)
};

Flag disability_rights_flag = Flag(
	"disability-rights",
	"The Disability Rights Flag",
	"Designed by Eros Recio in 2017",
	"disabled-rights|disability-tricolor|disabled-tricolor|disability-tricolour|disabled-tricolour|overcoming",
	disability_rights_flag_commands
);

int polygon_dollgender0[] = {320,336,268,289,233,243,221,217,216,192,220,173,231,158,248,148,268,144,290,150,307,164,320,192,333,164,350,150,372,144,392,148,409,158,420,173,424,192,419,217,407,243,372,289,-1,-1};
int polygon_dollgender1[] = {0,103,640,103,640,88,639,89,627,82,616,89,604,82,592,89,580,82,569,89,557,82,545,89,534,82,522,89,510,82,498,89,487,82,475,89,463,82,451,89,440,82,428,89,416,82,405,89,393,82,381,89,369,82,358,89,346,82,334,89,322,82,311,89,299,82,287,89,276,82,264,89,252,82,240,89,229,82,217,89,205,82,193,89,182,82,170,89,158,82,147,89,135,82,123,89,111,82,100,89,88,82,76,89,64,82,53,89,41,82,29,89,18,82,6,89,0,83,-1,-1};
int polygon_dollgender2[] = {0,377,0,397,6,391,18,398,29,391,41,398,53,391,65,398,76,391,88,398,100,391,111,398,123,391,135,398,147,391,158,398,170,391,182,398,194,391,205,398,217,391,229,398,240,391,252,398,264,391,276,398,287,391,299,398,311,391,323,398,334,391,346,398,358,391,369,398,381,391,393,398,405,391,416,398,428,391,440,398,452,391,463,398,475,391,487,398,498,391,510,398,522,391,534,398,545,391,557,398,569,391,581,398,592,391,604,398,616,391,627,398,639,391,640,392,640,377,-1,-1};

GraphicsCommand dollgender_flag_commands[]={
	GraphicsCommand(Rectangle,Left(  0),Right(108),RGB(231,193,218)), // tband
	GraphicsCommand(Rectangle,Left(108),Right(133),RGB(238,206,230)), // tlace
	GraphicsCommand(Rectangle,Left(133),Right(347),RGB(253,226,233)), // mband
	GraphicsCommand(Rectangle,Left(347),Right(372),RGB(254,203,220)), // blace
	GraphicsCommand(Rectangle,Left(372),Right(480),RGB(252,193,213)), // bband
	GraphicsCommand(Ellipse,Point(74,240),57,57,RGB(255,255,255)),
	GraphicsCommand(Ellipse,Point(566,240),57,57,RGB(255,255,255)),
	GraphicsCommand(Ellipse,Point(62,227),7,7,RGB(253,226,233)),
	GraphicsCommand(Ellipse,Point(87,227),7,7,RGB(253,226,233)),
	GraphicsCommand(Ellipse,Point(553,227),7,7,RGB(253,226,233)),
	GraphicsCommand(Ellipse,Point(578,227),7,7,RGB(253,226,233)),
	GraphicsCommand(Ellipse,Point(62,253),7,7,RGB(253,226,233)),
	GraphicsCommand(Ellipse,Point(87,253),7,7,RGB(253,226,233)),
	GraphicsCommand(Ellipse,Point(553,253),7,7,RGB(253,226,233)),
	GraphicsCommand(Ellipse,Point(578,253),7,7,RGB(253,226,233)),
	GraphicsCommand(Polygon,polygon_dollgender0,RGB(252,163,193)), // heart
	GraphicsCommand(Polygon,polygon_dollgender1,RGB(238,206,230)), // tlace
	GraphicsCommand(Polygon,polygon_dollgender2,RGB(254,203,220)), // blace
	GraphicsCommand(EndCommandList)
};

Flag dollgender_flag = Flag(
	"dollgender",
	"The Dollgender Pride Flag",
	NULL,
	NULL,
	dollgender_flag_commands,
	RGB(0,0,0),
	4
);

GraphicsCommand gender_neutral_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_4_0),Right(h_4_1),RGB(255,244, 51)),
	GraphicsCommand(Rectangle,Left(h_4_1),Right(h_4_2),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_4_2),Right(h_4_3),RGB(192,246,142)),
	GraphicsCommand(Rectangle,Left(h_4_3),Right(h_4_4),RGB( 33,177, 76)),
	GraphicsCommand(EndCommandList)
};

Flag gender_neutral_flag = Flag(
	"gender-neutral",
	"The Gender-Neutral Pride Flag",
	NULL,
	NULL,
	gender_neutral_flag_commands
);

GraphicsCommand greygender_flag_commands[]={
	GraphicsCommand(Rectangle,Left(  0),Right(137),RGB(191,191,191)),
	GraphicsCommand(Rectangle,Left(137),Right(171),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(171),Right(309),RGB(  7, 35,132)),
	GraphicsCommand(Rectangle,Left(309),Right(343),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(343),Right(480),RGB( 81, 81, 81)),
	GraphicsCommand(EndCommandList)
};

Flag greygender_flag = Flag(
	"greygender",
	"The Greygender Pride Flag",
	NULL,
	"graygender",
	greygender_flag_commands
);

GraphicsCommand gynosexual_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB(245,169,184)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB(143, 63, 43)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB( 91,148, 58)),
	GraphicsCommand(EndCommandList)
};

Flag gynosexual_flag = Flag(
	"gynosexual",
	"The Gynosexual Pride Flag",
	NULL,
	"gynesexual|gyne|gyno",
	gynosexual_flag_commands
);

GraphicsCommand intersex_gradient_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_6_0),Right(h_6_1),RGB(241,167,254)),
	GraphicsCommand(Rectangle,Left(h_6_1),Right(h_6_2),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_6_2),Right(200),RGB(160,206,239)),
	GraphicsCommand(Rectangle,Left(200),Right(213),RGB(166,204,237)),
	GraphicsCommand(Rectangle,Left(213),Right(227),RGB(180,200,234)),
	GraphicsCommand(Rectangle,Left(227),Right(240),RGB(194,197,232)),
	GraphicsCommand(Rectangle,Left(240),Right(253),RGB(208,193,229)),
	GraphicsCommand(Rectangle,Left(253),Right(267),RGB(222,189,226)),
	GraphicsCommand(Rectangle,Left(267),Right(280),RGB(236,186,223)),
	GraphicsCommand(Rectangle,Left(280),Right(h_6_4),RGB(244,184,222)),
	GraphicsCommand(Rectangle,Left(h_6_4),Right(h_6_5),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_6_5),Right(h_6_6),RGB(241,167,254)),
	GraphicsCommand(EndCommandList)
};

Flag intersex_gradient_flag = Flag(
	"intersex-gradient",
	"The Intersex Pride Gradient Flag",
	"Designed by Natalie Phox aka nittrusfox in 2009",
	NULL,
	intersex_gradient_flag_commands,
	RGB(0,0,0),
	4
);

GraphicsCommand maverique_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB(255,244, 51)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB(244,150, 34)),
	GraphicsCommand(EndCommandList)
};

Flag maverique_flag = Flag(
	"maverique",
	"The Maverique Pride Flag",
	"Designed by Vesper H aka queerascat in 2014",
	NULL,
	maverique_flag_commands
);

GraphicsCommand multigender_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB( 63, 71,205)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(  0,164,231)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(249,127, 39)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(  0,164,231)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB( 63, 71,205)),
	GraphicsCommand(EndCommandList)
};

Flag multigender_flag = Flag(
	"multigender",
	"The Multigender Pride Flag",
	NULL,
	NULL,
	multigender_flag_commands
);

GraphicsCommand multisexual_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_4_0),Right(h_4_1),RGB(114, 77,201)),
	GraphicsCommand(Rectangle,Left(h_4_1),Right(h_4_2),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_4_2),Right(h_4_3),RGB(158,239,255)),
	GraphicsCommand(Rectangle,Left(h_4_3),Right(h_4_4),RGB(255, 61,155)),
	GraphicsCommand(EndCommandList)
};

Flag multisexual_flag = Flag(
	"multisexual",
	"The Multisexual Pride Flag",
	NULL,
	NULL,
	multisexual_flag_commands
);

GraphicsCommand neptunic_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_6_0),Right(h_6_1),RGB(  4,153,184)),
	GraphicsCommand(Rectangle,Left(h_6_1),Right(h_6_2),RGB( 57,214,200)),
	GraphicsCommand(Rectangle,Left(h_6_2),Right(h_6_3),RGB(115,234,211)),
	GraphicsCommand(Rectangle,Left(h_6_3),Right(h_6_4),RGB(160,230,238)),
	GraphicsCommand(Rectangle,Left(h_6_4),Right(h_6_5),RGB(154,176,233)),
	GraphicsCommand(Rectangle,Left(h_6_5),Right(h_6_6),RGB(151,152,238)),
	GraphicsCommand(EndCommandList)
};

Flag neptunic_flag = Flag(
	"neptunic",
	"The Neptunic Pride Flag",
	NULL,
	NULL,
	neptunic_flag_commands
);

int polygon_otherkin0[] = {143,290,497,290,539,300,101,300,-1,-1};
int polygon_otherkin1[] = {222,453,320,25,418,453,399,414,320,69,241,414,-1,-1};
int polygon_otherkin2[] = {418,453,144,110,539,300,497,290,178,137,399,414,-1,-1};
int polygon_otherkin3[] = {101,300,496,110,222,453,241,414,462,137,143,290,-1,-1};

GraphicsCommand otherkin_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_4_0),Right(h_4_1),RGB(245,255,168)),
	GraphicsCommand(Rectangle,Left(h_4_1),Right(h_4_2),RGB(154,217,234)),
	GraphicsCommand(Rectangle,Left(h_4_2),Right(h_4_3),RGB(199,191,230)),
	GraphicsCommand(Rectangle,Left(h_4_3),Right(h_4_4),RGB(254,174,201)),
	GraphicsCommand(Polygon,polygon_otherkin0,RGB(0,0,0)),
	GraphicsCommand(Polygon,polygon_otherkin1,RGB(0,0,0)),
	GraphicsCommand(Polygon,polygon_otherkin2,RGB(0,0,0)),
	GraphicsCommand(Polygon,polygon_otherkin3,RGB(0,0,0)),
	GraphicsCommand(EndCommandList)
};

Flag otherkin_flag = Flag(
	"otherkin",
	"The Otherkin Flag",
	NULL,
	NULL,
	otherkin_flag_commands
);

int polygon_infinity_heart0[] = {190,198,207,194,225,195,242,200,262,209,287,223,310,242,332,262,356,278,373,288,386,293,402,278,399,276,384,270,356,254,332,235,318,222,309,214,285,198,254,182,231,175,218,173,206,173,192,175,186,178,187,198,-1,-1};
int polygon_infinity_heart1[] = {298,244,264,266,254,271,238,278,221,282,203,282,185,276,160,260,153,249,152,235,157,221,161,216,156,193,153,195,144,203,135,217,131,244,136,260,151,279,169,292,197,302,230,301,247,296,277,283,296,271,313,259,317,255,302,241,-1,-1};
int polygon_infinity_heart2[] = {358,221,395,202,420,194,437,194,466,205,485,222,490,236,487,251,474,267,445,280,434,286,421,301,421,302,423,303,434,303,447,301,475,291,501,268,511,239,511,235,508,222,487,193,462,180,430,173,423,173,416,174,398,179,362,194,331,215,325,221,339,234,340,234,-1,-1};
int polygon_infinity_heart3[] = {383,332,403,313,418,297,430,285,446,265,464,242,475,219,475,217,471,214,460,207,457,206,451,221,442,237,429,253,417,268,403,283,385,301,372,314,354,331,346,337,343,340,324,356,321,358,315,354,306,347,295,337,293,335,276,320,263,307,255,299,233,305,234,308,237,311,249,323,256,330,263,337,264,337,277,348,305,373,318,383,324,382,334,374,352,360,370,344,379,337,-1,-1};
int polygon_infinity_heart4[] = {168,144,175,132,188,119,202,109,212,105,225,101,248,100,271,106,287,114,302,125,314,137,320,144,322,143,332,132,353,115,372,105,391,100,406,100,421,102,439,109,456,120,466,131,473,142,474,144,476,150,480,163,481,182,480,183,460,173,449,144,445,138,438,132,418,123,407,121,389,122,362,134,350,144,344,149,329,168,322,178,321,180,316,174,305,158,292,144,284,137,264,126,243,121,225,123,209,129,192,144,184,160,181,187,184,203,190,220,195,230,211,252,225,268,230,274,225,276,213,278,206,278,197,268,187,254,173,235,164,210,161,193,160,175,165,152,-1,-1};

GraphicsCommand infinity_heart_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB( 32,132,254)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB(  0,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB(255, 66, 49)),
	GraphicsCommand(Polygon,polygon_infinity_heart0,RGB(255,202,86)),
	GraphicsCommand(Polygon,polygon_infinity_heart1,RGB(255,202,86)),
	GraphicsCommand(Polygon,polygon_infinity_heart2,RGB(255,202,86)),
	GraphicsCommand(Polygon,polygon_infinity_heart3,RGB(255,202,86)),
	GraphicsCommand(Polygon,polygon_infinity_heart4,RGB(255,202,86)),
	GraphicsCommand(EndCommandList)
};

Flag infinity_heart_flag = Flag(
	"infinity-heart",
	"The Infinity Heart Polyamory Pride Flag",
	"Designed by ym in 2020",
	"infinity-heart-poly|infinity-heart-polyamory",
	infinity_heart_flag_commands,
	RGB(255,255,255),
	3
);

GraphicsCommand polygender_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(  0,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(147,147,147)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(237,148,197)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(245,237,129)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(100,187,230)),
	GraphicsCommand(EndCommandList)
};

Flag polygender_flag = Flag(
	"polygender",
	"The Polygender Pride Flag",
	NULL,
	NULL,
	polygender_flag_commands
);

GraphicsCommand pomosexual_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(255,174,201)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(255,198,222)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(232,205,255)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(255,198,222)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(255,174,201)),
	GraphicsCommand(EndCommandList)
};

Flag pomosexual_flag = Flag(
	"pomosexual",
	"The Pomosexual Pride Flag",
	"Designed by pridecolorschemes in 2016",
	"pomo|postmodern",
	pomosexual_flag_commands,
	RGB(0,0,0),
	4
);

GraphicsCommand queer_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_9_0),Right(h_9_1),RGB(  0,  0,  0)),
	GraphicsCommand(Rectangle,Left(h_9_1),Right(h_9_2),RGB(154,217,234)),
	GraphicsCommand(Rectangle,Left(h_9_2),Right(h_9_3),RGB(  0,163,232)),
	GraphicsCommand(Rectangle,Left(h_9_3),Right(h_9_4),RGB(181,229, 29)),
	GraphicsCommand(Rectangle,Left(h_9_4),Right(h_9_5),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_9_5),Right(h_9_6),RGB(255,201, 13)),
	GraphicsCommand(Rectangle,Left(h_9_6),Right(h_9_7),RGB(252,102,103)),
	GraphicsCommand(Rectangle,Left(h_9_7),Right(h_9_8),RGB(254,174,201)),
	GraphicsCommand(Rectangle,Left(h_9_8),Right(h_9_9),RGB(  0,  0,  0)),
	GraphicsCommand(EndCommandList)
};

Flag queer_flag = Flag(
	"queer",
	"The Queer Pride Flag",
	NULL,
	NULL,
	queer_flag_commands
);

int polygon_sapphic0[] = {319,237,329,242,331,248,324,258,312,256,309,248,313,240,-1,-1};
int polygon_sapphic1[] = {320,242,327,248,320,254,314,248,-1,-1};
int polygon_sapphic2[] = {322,264,322,269,327,297,333,308,344,314,366,311,375,294,370,274,353,263,332,256,-1,-1};
int polygon_sapphic3[] = {318,264,311,302,303,311,291,315,274,311,265,294,270,274,287,263,302,258,308,256,313,259,-1,-1};
int polygon_sapphic4[] = {301,170,291,177,286,189,290,204,310,229,320,234,331,229,346,212,353,197,350,179,337,169,317,165,-1,-1};
int polygon_sapphic5[] = {297,222,284,212,266,208,253,214,248,228,249,245,257,255,282,258,294,256,304,253,308,246,309,237,307,234,299,224,-1,-1};
int polygon_sapphic6[] = {341,224,336,230,331,237,332,246,336,253,346,256,358,258,383,255,390,246,392,232,387,215,374,208,356,212,343,222,-1,-1};

GraphicsCommand sapphic_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB(253,139,168)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB(251,242,255)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB(253,139,168)),
	GraphicsCommand(Polygon,polygon_sapphic0,RGB(253,139,168)),
	GraphicsCommand(Polygon,polygon_sapphic1,RGB(255,247, 30)),
	GraphicsCommand(Polygon,polygon_sapphic2,RGB(199,107,197)),
	GraphicsCommand(Polygon,polygon_sapphic3,RGB(199,107,197)),
	GraphicsCommand(Polygon,polygon_sapphic4,RGB(199,107,197)),
	GraphicsCommand(Polygon,polygon_sapphic5,RGB(199,107,197)),
	GraphicsCommand(Polygon,polygon_sapphic6,RGB(199,107,197)),
	GraphicsCommand(EndCommandList)
};

Flag sapphic_flag = Flag(
	"sapphic",
	"The Sapphic Pride Flag",
	NULL,
	NULL,
	sapphic_flag_commands
);

GraphicsCommand transfeminine_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(115,222,255)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(255,225,237)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(255,181,214)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(254,140,191)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(255,181,214)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(255,225,237)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(115,222,255)),
	GraphicsCommand(EndCommandList)
};

Flag transfeminine_flag = Flag(
	"transfeminine",
	"The Transfeminine Pride Flag",
	NULL,
	"transfemme|transfem",
	transfeminine_flag_commands
);

GraphicsCommand transmasculine_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(255,138,189)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(205,245,254)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(154,235,255)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(116,223,255)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(154,235,255)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(205,245,254)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(255,138,189)),
	GraphicsCommand(EndCommandList)
};

Flag transmasculine_flag = Flag(
	"transmasculine",
	"The Transmasculine Pride Flag",
	NULL,
	"transmasc",
	transmasculine_flag_commands
);

GraphicsCommand transneutral_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(255,250,164)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(255,244, 67)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(255,252,204)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(255,244, 67)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(255,250,164)),
	GraphicsCommand(EndCommandList)
};

Flag transneutral_flag = Flag(
	"transneutral",
	"The Transneutral Pride Flag",
	NULL,
	NULL,
	transneutral_flag_commands,
	RGB(0,0,0),
	4
);

GraphicsCommand trigender_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_5_0),Right(h_5_1),RGB(255,149,197)),
	GraphicsCommand(Rectangle,Left(h_5_1),Right(h_5_2),RGB(149,129,255)),
	GraphicsCommand(Rectangle,Left(h_5_2),Right(h_5_3),RGB(103,217,102)),
	GraphicsCommand(Rectangle,Left(h_5_3),Right(h_5_4),RGB(149,129,255)),
	GraphicsCommand(Rectangle,Left(h_5_4),Right(h_5_5),RGB(255,149,197)),
	GraphicsCommand(EndCommandList)
};

Flag trigender_flag = Flag(
	"trigender",
	"The Trigender Pride Flag",
	NULL,
	NULL,
	trigender_flag_commands,
	RGB(0,0,0),
	4
);

int polygon_twink0[] = {345,212,345,219,365,219,348,236,326,228,324,228,318,216,335,199,335,219,343,219,343,186,309,186,309,194,329,194,313,211,290,203,265,213,255,238,265,263,290,273,292,273,301,288,326,298,351,288,361,263,354,241,371,225,371,244,379,244,379,212,-1,-1};
int polygon_twink1[] = {290,265,271,257,263,238,271,219,290,211,310,219,316,229,301,238,290,263,291,265,-1,-1};
int polygon_twink2[] = {345,283,326,291,306,283,300,272,315,263,325,238,325,236,326,236,345,244,353,263,-1,-1};
int polygon_twink3[] = {318,238,310,257,298,264,298,263,306,244,318,237,-1,-1};

GraphicsCommand twink_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_3_0),Right(h_3_1),RGB(255,176,255)),
	GraphicsCommand(Rectangle,Left(h_3_1),Right(h_3_2),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_3_2),Right(h_3_3),RGB(255,255,128)),
	GraphicsCommand(Polygon,polygon_twink0,RGB(0,0,0)),
	GraphicsCommand(Polygon,polygon_twink1,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_twink2,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_twink3,RGB(255,255,255)),
	GraphicsCommand(EndCommandList)
};

Flag twink_flag = Flag(
	"twink",
	"The Twink Pride Flag",
	NULL,
	NULL,
	twink_flag_commands,
	RGB(0,0,0),
	4
);

GraphicsCommand unlabeled_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_4_0),Right(h_4_1),RGB(231,249,228)),
	GraphicsCommand(Rectangle,Left(h_4_1),Right(h_4_2),RGB(255,255,255)),
	GraphicsCommand(Rectangle,Left(h_4_2),Right(h_4_3),RGB(222,240,247)),
	GraphicsCommand(Rectangle,Left(h_4_3),Right(h_4_4),RGB(250,226,195)),
	GraphicsCommand(EndCommandList)
};

Flag unlabeled_flag = Flag(
	"unlabeled",
	"The Unlabeled Pride Flag",
	NULL,
	"unlabelled",
	unlabeled_flag_commands,
	RGB(0,0,0),
	4
);

GraphicsCommand uranic_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_6_0),Right(h_6_1),RGB( 59,123,214)),
	GraphicsCommand(Rectangle,Left(h_6_1),Right(h_6_2),RGB( 79,161,240)),
	GraphicsCommand(Rectangle,Left(h_6_2),Right(h_6_3),RGB(105,201,251)),
	GraphicsCommand(Rectangle,Left(h_6_3),Right(h_6_4),RGB(154,235,252)),
	GraphicsCommand(Rectangle,Left(h_6_4),Right(h_6_5),RGB(255,251,222)),
	GraphicsCommand(Rectangle,Left(h_6_5),Right(h_6_6),RGB(255,242,198)),
	GraphicsCommand(EndCommandList)
};

Flag uranic_flag = Flag(
	"uranic",
	"The Uranic Pride Flag",
	NULL,
	NULL,
	uranic_flag_commands,
	RGB(0,0,0),
	4
);

int polygon_xenogender0[] = {101,323,101,338,539,338,539,323,-1,-1};
int polygon_xenogender1[] = {335,294,367,289,344,267,349,234,320,249,291,234,296,267,273,290,305,294,319,322,321,322,-1,-1};
int polygon_xenogender2[] = {325,211,286,216,242,235,203,269,187,293,177,322,177,330,190,330,190,322,214,276,248,245,287,227,326,222,366,228,406,246,437,278,454,323,454,330,469,330,469,322,460,294,447,270,410,236,367,216,-1,-1};
int polygon_xenogender3[] = {325,191,269,199,216,223,173,264,158,291,148,323,148,330,163,330,163,322,171,293,186,268,230,231,281,209,325,202,370,209,418,231,459,269,472,294,479,322,479,330,493,330,493,322,483,290,468,262,449,239,426,221,375,198,-1,-1};
int polygon_xenogender4[] = {325,168,275,173,213,195,183,215,157,242,137,278,125,322,125,330,137,330,137,323,149,285,166,253,188,229,214,210,270,187,325,180,377,188,432,213,457,233,478,257,493,287,500,322,500,330,514,330,514,322,505,282,488,249,465,222,438,202,378,176,-1,-1};
int polygon_xenogender5[] = {115,330,115,322,123,283,139,248,161,219,189,196,221,177,256,165,325,155,396,168,458,202,484,226,504,254,517,286,523,322,523,330,539,330,533,289,519,253,498,221,471,194,438,172,403,156,364,146,325,142,282,145,241,155,203,170,170,192,142,219,121,251,107,288,101,330,-1,-1};

GraphicsCommand xenogender_flag_commands[]={
	GraphicsCommand(Rectangle,Left(h_7_0),Right(h_7_1),RGB(252,102,146)),
	GraphicsCommand(Rectangle,Left(h_7_1),Right(h_7_2),RGB(253,153,152)),
	GraphicsCommand(Rectangle,Left(h_7_2),Right(h_7_3),RGB(254,183,130)),
	GraphicsCommand(Rectangle,Left(h_7_3),Right(h_7_4),RGB(252,254,166)),
	GraphicsCommand(Rectangle,Left(h_7_4),Right(h_7_5),RGB(132,187,255)),
	GraphicsCommand(Rectangle,Left(h_7_5),Right(h_7_6),RGB(157,133,255)),
	GraphicsCommand(Rectangle,Left(h_7_6),Right(h_7_7),RGB(164, 47,254)),
	GraphicsCommand(Polygon,polygon_xenogender0,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_xenogender1,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_xenogender2,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_xenogender3,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_xenogender4,RGB(255,255,255)),
	GraphicsCommand(Polygon,polygon_xenogender5,RGB(255,255,255)),
	GraphicsCommand(EndCommandList)
};

Flag xenogender_flag = Flag(
	"xenogender",
	"The Xenogender Pride Flag",
	"Designed by Roswell aka pastelmemer in 2017",
	NULL,
	xenogender_flag_commands
);
