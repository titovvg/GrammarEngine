#include <lem/unicode.h>

using namespace lem;

static wchar_t ua[256]=
{
    /* 0*/ 0x0000
  , /* 1*/ 0x0001
  , /* 2*/ 0x0002
  , /* 3*/ 0x0003
  , /* 4*/ 0x0004
  , /* 5*/ 0x0005
  , /* 6*/ 0x0006
  , /* 7*/ 0x0007
  , /* 8*/ 0x0008
  , /* 9*/ 0x0009
  , /* a*/ 0x000a
  , /* b*/ 0x000b
  , /* c*/ 0x000c
  , /* d*/ 0x000d
  , /* e*/ 0x000e
  , /* f*/ 0x000f
  , /*10*/ 0x0010
  , /*11*/ 0x0011
  , /*12*/ 0x0012
  , /*13*/ 0x0013
  , /*14*/ 0x0014
  , /*15*/ 0x0015
  , /*16*/ 0x0016
  , /*17*/ 0x0017
  , /*18*/ 0x0018
  , /*19*/ 0x0019
  , /*1a*/ 0x001a
  , /*1b*/ 0x001b
  , /*1c*/ 0x001c
  , /*1d*/ 0x001d
  , /*1e*/ 0x001e
  , /*1f*/ 0x001f
  , /*20*/ 0x0020
  , /*21*/ 0x0021
  , /*22*/ 0x0022
  , /*23*/ 0x0023
  , /*24*/ 0x0024
  , /*25*/ 0x0025
  , /*26*/ 0x0026
  , /*27*/ 0x0027
  , /*28*/ 0x0028
  , /*29*/ 0x0029
  , /*2a*/ 0x002a
  , /*2b*/ 0x002b
  , /*2c*/ 0x002c
  , /*2d*/ 0x002d
  , /*2e*/ 0x002e
  , /*2f*/ 0x002f
  , /*30*/ 0x0030
  , /*31*/ 0x0031
  , /*32*/ 0x0032
  , /*33*/ 0x0033
  , /*34*/ 0x0034
  , /*35*/ 0x0035
  , /*36*/ 0x0036
  , /*37*/ 0x0037
  , /*38*/ 0x0038
  , /*39*/ 0x0039
  , /*3a*/ 0x003a
  , /*3b*/ 0x003b
  , /*3c*/ 0x003c
  , /*3d*/ 0x003d
  , /*3e*/ 0x003e
  , /*3f*/ 0x003f
  , /*40*/ 0x0040
  , /*41*/ 0x0041
  , /*42*/ 0x0042
  , /*43*/ 0x0043
  , /*44*/ 0x0044
  , /*45*/ 0x0045
  , /*46*/ 0x0046
  , /*47*/ 0x0047
  , /*48*/ 0x0048
  , /*49*/ 0x0049
  , /*4a*/ 0x004a
  , /*4b*/ 0x004b
  , /*4c*/ 0x004c
  , /*4d*/ 0x004d
  , /*4e*/ 0x004e
  , /*4f*/ 0x004f
  , /*50*/ 0x0050
  , /*51*/ 0x0051
  , /*52*/ 0x0052
  , /*53*/ 0x0053
  , /*54*/ 0x0054
  , /*55*/ 0x0055
  , /*56*/ 0x0056
  , /*57*/ 0x0057
  , /*58*/ 0x0058
  , /*59*/ 0x0059
  , /*5a*/ 0x005a
  , /*5b*/ 0x005b
  , /*5c*/ 0x005c
  , /*5d*/ 0x005d
  , /*5e*/ 0x005e
  , /*5f*/ 0x005f
  , /*60*/ 0x0060
  , /*61*/ 0x0061
  , /*62*/ 0x0062
  , /*63*/ 0x0063
  , /*64*/ 0x0064
  , /*65*/ 0x0065
  , /*66*/ 0x0066
  , /*67*/ 0x0067
  , /*68*/ 0x0068
  , /*69*/ 0x0069
  , /*6a*/ 0x006a
  , /*6b*/ 0x006b
  , /*6c*/ 0x006c
  , /*6d*/ 0x006d
  , /*6e*/ 0x006e
  , /*6f*/ 0x006f
  , /*70*/ 0x0070
  , /*71*/ 0x0071
  , /*72*/ 0x0072
  , /*73*/ 0x0073
  , /*74*/ 0x0074
  , /*75*/ 0x0075
  , /*76*/ 0x0076
  , /*77*/ 0x0077
  , /*78*/ 0x0078
  , /*79*/ 0x0079
  , /*7a*/ 0x007a
  , /*7b*/ 0x007b
  , /*7c*/ 0x007c
  , /*7d*/ 0x007d
  , /*7e*/ 0x007e
  , /*7f*/ 0x007f
  , /*80*/ 0x0410
  , /*81*/ 0x0411
  , /*82*/ 0x0412
  , /*83*/ 0x0413
  , /*84*/ 0x0414
  , /*85*/ 0x0415
  , /*86*/ 0x0416
  , /*87*/ 0x0417
  , /*88*/ 0x0418
  , /*89*/ 0x0419
  , /*8a*/ 0x041a
  , /*8b*/ 0x041b
  , /*8c*/ 0x041c
  , /*8d*/ 0x041d
  , /*8e*/ 0x041e
  , /*8f*/ 0x041f
  , /*90*/ 0x0420
  , /*91*/ 0x0421
  , /*92*/ 0x0422
  , /*93*/ 0x0423
  , /*94*/ 0x0424
  , /*95*/ 0x0425
  , /*96*/ 0x0426
  , /*97*/ 0x0427
  , /*98*/ 0x0428
  , /*99*/ 0x0429
  , /*9a*/ 0x042a
  , /*9b*/ 0x042b
  , /*9c*/ 0x042c
  , /*9d*/ 0x042d
  , /*9e*/ 0x042e
  , /*9f*/ 0x042f
  , /*a0*/ 0x0430
  , /*a1*/ 0x0431
  , /*a2*/ 0x0432
  , /*a3*/ 0x0433
  , /*a4*/ 0x0434
  , /*a5*/ 0x0435
  , /*a6*/ 0x0436
  , /*a7*/ 0x0437
  , /*a8*/ 0x0438
  , /*a9*/ 0x0439
  , /*aa*/ 0x043a
  , /*ab*/ 0x043b
  , /*ac*/ 0x043c
  , /*ad*/ 0x043d
  , /*ae*/ 0x043e
  , /*af*/ 0x043f
  , /*b0*/ 0x2591
  , /*b1*/ 0x2592
  , /*b2*/ 0x2593
  , /*b3*/ 0x2502
  , /*b4*/ 0x2524
  , /*b5*/ 0x2561
  , /*b6*/ 0x2562
  , /*b7*/ 0x2556
  , /*b8*/ 0x2555
  , /*b9*/ 0x2563
  , /*ba*/ 0x2551
  , /*bb*/ 0x2557
  , /*bc*/ 0x255d
  , /*bd*/ 0x255c
  , /*be*/ 0x255b
  , /*bf*/ 0x2510
  , /*c0*/ 0x2514
  , /*c1*/ 0x2534
  , /*c2*/ 0x252c
  , /*c3*/ 0x251c
  , /*c4*/ 0x2500
  , /*c5*/ 0x253c
  , /*c6*/ 0x255e
  , /*c7*/ 0x255f
  , /*c8*/ 0x255a
  , /*c9*/ 0x2554
  , /*ca*/ 0x2569
  , /*cb*/ 0x2566
  , /*cc*/ 0x2560
  , /*cd*/ 0x2550
  , /*ce*/ 0x256c
  , /*cf*/ 0x2567
  , /*d0*/ 0x2568
  , /*d1*/ 0x2564
  , /*d2*/ 0x2565
  , /*d3*/ 0x2559
  , /*d4*/ 0x2558
  , /*d5*/ 0x2552
  , /*d6*/ 0x2553
  , /*d7*/ 0x256b
  , /*d8*/ 0x256a
  , /*d9*/ 0x2518
  , /*da*/ 0x250c
  , /*db*/ 0x2588
  , /*dc*/ 0x2584
  , /*dd*/ 0x258c
  , /*de*/ 0x2590
  , /*df*/ 0x2580
  , /*e0*/ 0x0440
  , /*e1*/ 0x0441
  , /*e2*/ 0x0442
  , /*e3*/ 0x0443
  , /*e4*/ 0x0444
  , /*e5*/ 0x0445
  , /*e6*/ 0x0446
  , /*e7*/ 0x0447
  , /*e8*/ 0x0448
  , /*e9*/ 0x0449
  , /*ea*/ 0x044a
  , /*eb*/ 0x044b
  , /*ec*/ 0x044c
  , /*ed*/ 0x044d
  , /*ee*/ 0x044e
  , /*ef*/ 0x044f
  , /*f0*/ 0x0401
  , /*f1*/ 0x0451
  , /*f2*/ 0x0404
  , /*f3*/ 0x0454
  , /*f4*/ 0x0407
  , /*f5*/ 0x0457
  , /*f6*/ 0x040e
  , /*f7*/ 0x045e
  , /*f8*/ 0x00b0
  , /*f9*/ 0x2219
  , /*fa*/ 0x00b7
  , /*fb*/ 0x221a
  , /*fc*/ 0x2116
  , /*fd*/ 0x00a4
  , /*fe*/ 0x25a0
  , /*ff*/ 0x00a0
 };

CP_866::CP_866(void) : SBCodeConverter(866,ua)
{}