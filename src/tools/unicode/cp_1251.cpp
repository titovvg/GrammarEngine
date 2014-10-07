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
  , /* a*/ 0x000A
  , /* b*/ 0x000B
  , /* c*/ 0x000C
  , /* d*/ 0x000D
  , /* e*/ 0x000E
  , /* f*/ 0x000F
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
  , /*1a*/ 0x001A
  , /*1b*/ 0x001B
  , /*1c*/ 0x001C
  , /*1d*/ 0x001D
  , /*1e*/ 0x001E
  , /*1f*/ 0x001F
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
  , /*2a*/ 0x002A
  , /*2b*/ 0x002B
  , /*2c*/ 0x002C
  , /*2d*/ 0x002D
  , /*2e*/ 0x002E
  , /*2f*/ 0x002F
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
  , /*3a*/ 0x003A
  , /*3b*/ 0x003B
  , /*3c*/ 0x003C
  , /*3d*/ 0x003D
  , /*3e*/ 0x003E
  , /*3f*/ 0x003F
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
  , /*4a*/ 0x004A
  , /*4b*/ 0x004B
  , /*4c*/ 0x004C
  , /*4d*/ 0x004D
  , /*4e*/ 0x004E
  , /*4f*/ 0x004F
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
  , /*5a*/ 0x005A
  , /*5b*/ 0x005B
  , /*5c*/ 0x005C
  , /*5d*/ 0x005D
  , /*5e*/ 0x005E
  , /*5f*/ 0x005F
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
  , /*6a*/ 0x006A
  , /*6b*/ 0x006B
  , /*6c*/ 0x006C
  , /*6d*/ 0x006D
  , /*6e*/ 0x006E
  , /*6f*/ 0x006F
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
  , /*7a*/ 0x007A
  , /*7b*/ 0x007B
  , /*7c*/ 0x007C
  , /*7d*/ 0x007D
  , /*7e*/ 0x007E
  , /*7f*/ 0x007F
  , /*80*/ 0x0402
  , /*81*/ 0x0403
  , /*82*/ 0x201A
  , /*83*/ 0x0453
  , /*84*/ 0x201E
  , /*85*/ 0x2026
  , /*86*/ 0x2020
  , /*87*/ 0x2021
  , /*88*/ 0x20AC
  , /*89*/ 0x2030
  , /*8a*/ 0x0409
  , /*8b*/ 0x2039
  , /*8c*/ 0x040A
  , /*8d*/ 0x040C
  , /*8e*/ 0x040B
  , /*8f*/ 0x040F
  , /*90*/ 0x0452
  , /*91*/ 0x2018
  , /*92*/ 0x2019
  , /*93*/ 0x201C
  , /*94*/ 0x201D
  , /*95*/ 0x2022
  , /*96*/ 0x2013
  , /*97*/ 0x2014
  , /*98*/ 0x0000
  , /*99*/ 0x0000
  , /*9a*/ 0x0459
  , /*9b*/ 0x203A
  , /*9c*/ 0x045A
  , /*9d*/ 0x045C
  , /*9e*/ 0x045B
  , /*9f*/ 0x045F
  , /*a0*/ 0x00A0
  , /*a1*/ 0x040E
  , /*a2*/ 0x045E
  , /*a3*/ 0x0408
  , /*a4*/ 0x00A4
  , /*a5*/ 0x0490
  , /*a6*/ 0x00A6
  , /*a7*/ 0x00A7
  , /*a8*/ 0x0401
  , /*a9*/ 0x00A9
  , /*aa*/ 0x0404
  , /*ab*/ 0x00AB
  , /*ac*/ 0x00AC
  , /*ad*/ 0x00AD
  , /*ae*/ 0x00AE
  , /*af*/ 0x0407
  , /*b0*/ 0x00B0
  , /*b1*/ 0x00B1
  , /*b2*/ 0x0406
  , /*b3*/ 0x0456
  , /*b4*/ 0x0491
  , /*b5*/ 0x00B5
  , /*b6*/ 0x00B6
  , /*b7*/ 0x00B7
  , /*b8*/ 0x0451
  , /*b9*/ 0x2116
  , /*ba*/ 0x0454
  , /*bb*/ 0x00BB
  , /*bc*/ 0x0458
  , /*bd*/ 0x0405
  , /*be*/ 0x0455
  , /*bf*/ 0x0457
  , /*c0*/ 0x0410
  , /*c1*/ 0x0411
  , /*c2*/ 0x0412
  , /*c3*/ 0x0413
  , /*c4*/ 0x0414
  , /*c5*/ 0x0415
  , /*c6*/ 0x0416
  , /*c7*/ 0x0417
  , /*c8*/ 0x0418
  , /*c9*/ 0x0419
  , /*ca*/ 0x041A
  , /*cb*/ 0x041B
  , /*cc*/ 0x041C
  , /*cd*/ 0x041D
  , /*ce*/ 0x041E
  , /*cf*/ 0x041F
  , /*d0*/ 0x0420
  , /*d1*/ 0x0421
  , /*d2*/ 0x0422
  , /*d3*/ 0x0423
  , /*d4*/ 0x0424
  , /*d5*/ 0x0425
  , /*d6*/ 0x0426
  , /*d7*/ 0x0427
  , /*d8*/ 0x0428
  , /*d9*/ 0x0429
  , /*da*/ 0x042A
  , /*db*/ 0x042B
  , /*dc*/ 0x042C
  , /*dd*/ 0x042D
  , /*de*/ 0x042E
  , /*df*/ 0x042F
  , /*e0*/ 0x0430
  , /*e1*/ 0x0431
  , /*e2*/ 0x0432
  , /*e3*/ 0x0433
  , /*e4*/ 0x0434
  , /*e5*/ 0x0435
  , /*e6*/ 0x0436
  , /*e7*/ 0x0437
  , /*e8*/ 0x0438
  , /*e9*/ 0x0439
  , /*ea*/ 0x043A
  , /*eb*/ 0x043B
  , /*ec*/ 0x043C
  , /*ed*/ 0x043D
  , /*ee*/ 0x043E
  , /*ef*/ 0x043F
  , /*f0*/ 0x0440
  , /*f1*/ 0x0441
  , /*f2*/ 0x0442
  , /*f3*/ 0x0443
  , /*f4*/ 0x0444
  , /*f5*/ 0x0445
  , /*f6*/ 0x0446
  , /*f7*/ 0x0447
  , /*f8*/ 0x0448
  , /*f9*/ 0x0449
  , /*fa*/ 0x044A
  , /*fb*/ 0x044B
  , /*fc*/ 0x044C
  , /*fd*/ 0x044D
  , /*fe*/ 0x044E
  , /*ff*/ 0x044F
 };

CP_1251::CP_1251(void) : SBCodeConverter(1251,ua)
{}