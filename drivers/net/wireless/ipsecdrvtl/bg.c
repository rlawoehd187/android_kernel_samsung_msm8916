/*
   'src_compress_pgpCompress.c' Obfuscated by COBF (Version 1.06 2006-01-07 by BB) at Mon Dec 22 18:00:49 2014
*/
#include"cobf.h"
#ifdef _WIN32
#if defined( UNDER_CE) && defined( bb334) || ! defined( bb341)
#define bb357 1
#define bb356 1
#else
#define bb335 bb350
#define bb358 1
#define bb348 1
#endif
#define bb360 1
#include"uncobf.h"
#include<ndis.h>
#include"cobf.h"
#ifdef UNDER_CE
#include"uncobf.h"
#include<ndiswan.h>
#include"cobf.h"
#endif
#include"uncobf.h"
#include<stdio.h>
#include<basetsd.h>
#include"cobf.h"
bba bbt bbl bbf, *bb3;bba bbt bbe bbo, *bb80;bba bb137 bb125, *bb351;
bba bbt bbl bb41, *bb73;bba bbt bb137 bbk, *bb59;bba bbe bbu, *bb134;
bba bbh bbf*bb79;
#ifdef bb307
bba bbd bb61, *bb124;
#endif
#else
#include"uncobf.h"
#include<linux/module.h>
#include<linux/ctype.h>
#include<linux/time.h>
#include<linux/slab.h>
#include"cobf.h"
#ifndef bb118
#define bb118
#ifdef _WIN32
#include"uncobf.h"
#include<wtypes.h>
#include"cobf.h"
#else
#ifdef bb121
#include"uncobf.h"
#include<linux/types.h>
#include"cobf.h"
#else
#include"uncobf.h"
#include<stddef.h>
#include<sys/types.h>
#include"cobf.h"
#endif
#endif
#ifdef _WIN32
#ifdef _MSC_VER
bba bb117 bb224;
#endif
#else
bba bbe bbu, *bb134, *bb216;
#define bb200 1
#define bb202 0
bba bb261 bb249, *bb205, *bb252;bba bbe bb278, *bb255, *bb227;bba bbt
bbo, *bb80, *bb215;bba bb8 bb266, *bb221;bba bbt bb8 bb226, *bb230;
bba bb8 bb119, *bb212;bba bbt bb8 bb63, *bb237;bba bb63 bb228, *bb251
;bba bb63 bb259, *bb220;bba bb119 bb117, *bb217;bba bb244 bb289;bba
bb210 bb125;bba bb262 bb85;bba bb112 bb116;bba bb112 bb235;
#ifdef bb234
bba bb233 bb41, *bb73;bba bb287 bbk, *bb59;bba bb209 bbd, *bb31;bba
bb222 bb57, *bb120;
#else
bba bb231 bb41, *bb73;bba bb253 bbk, *bb59;bba bb245 bbd, *bb31;bba
bb229 bb57, *bb120;
#endif
bba bb41 bbf, *bb3, *bb263;bba bbk bb206, *bb225, *bb286;bba bbk bb282
, *bb246, *bb284;bba bbd bb61, *bb124, *bb269;bba bb85 bb38, *bb241, *
bb223;bba bbd bb239, *bb265, *bb243;bba bb116 bb272, *bb213, *bb281;
bba bb57 bb270, *bb240, *bb208;
#define bb143 bbb
bba bbb*bb247, *bb81;bba bbh bbb*bb271;bba bbl bb218;bba bbl*bb207;
bba bbh bbl*bb62;
#if defined( bb121)
bba bbe bb115;
#endif
bba bb115 bb19;bba bb19*bb273;bba bbh bb19*bb186;
#if defined( bb268) || defined( bb248)
bba bb19 bb37;bba bb19 bb111;
#else
bba bbl bb37;bba bbt bbl bb111;
#endif
bba bbh bb37*bb279;bba bb37*bb277;bba bb61 bb211, *bb219;bba bbb*
bb107;bba bb107*bb257;
#define bb250( bb36) bbj bb36##__ { bbe bb267; }; bba bbj bb36##__  * \
 bb36
bba bbj{bb38 bb190,bb260,bb214,bb285;}bb232, *bb238, *bb283;bba bbj{
bb38 bb10,bb177;}bb254, *bb280, *bb242;bba bbj{bb38 bb264,bb275;}
bb274, *bb288, *bb276;
#endif
bba bbh bbf*bb79;
#endif
bba bbf bb103;
#define IN
#define OUT
#ifdef _DEBUG
#define bb147( bbc) bb27( bbc)
#else
#define bb147( bbc) ( bbb)( bbc)
#endif
bba bbe bb160, *bb172;
#define bb293 0
#define bb313 1
#define bb297 2
#define bb325 3
#define bb354 4
bba bbe bb361;bba bbb*bb123;
#endif
#ifdef _WIN32
#ifndef UNDER_CE
#define bb32 bb346
#define bb43 bb347
bba bbt bb8 bb32;bba bb8 bb43;
#endif
#else
#endif
#ifdef _WIN32
bbb*bb127(bb32 bb48);bbb bb108(bbb* );bbb*bb138(bb32 bb158,bb32 bb48);
#else
#define bb127( bbc) bb146(1, bbc, bb141)
#define bb108( bbc) bb340( bbc)
#define bb138( bbc, bbp) bb146( bbc, bbp, bb141)
#endif
#ifdef _WIN32
#define bb27( bbc) bb339( bbc)
#else
#ifdef _DEBUG
bbe bb145(bbh bbl*bb98,bbh bbl*bb26,bbt bb258);
#define bb27( bbc) ( bbb)(( bbc) || ( bb145(# bbc, __FILE__, __LINE__ \
)))
#else
#define bb27( bbc) (( bbb)0)
#endif
#endif
bb43 bb301(bb43*bb319);
#ifndef _WIN32
bbe bb331(bbh bbl*bbg);bbe bb320(bbh bbl*bb20,...);
#endif
#ifdef _WIN32
bba bb355 bb95;
#define bb142( bbc) bb353( bbc)
#define bb144( bbc) bb336( bbc)
#define bb135( bbc) bb359( bbc)
#define bb133( bbc) bb342( bbc)
#else
bba bb343 bb95;
#define bb142( bbc) ( bbb)(  *  bbc = bb337( bbc))
#define bb144( bbc) (( bbb)0)
#define bb135( bbc) bb352( bbc)
#define bb133( bbc) bb344( bbc)
#endif
bba bbj bb1025*bb1023;bba bbj bb1027*bb1064;bba bbj bb1026*bb1059;bba
bbj bb1067*bb1048;bba bbj bb1049*bb1033;bba bbj bb1024*bb1063;bba bb13
{bb579=0 ,bb607=1 ,bb609=2 ,bb814=3 ,bb612=4 ,bb601=5 ,bb586=6 ,bb593=7 ,
bb604=9 ,}bb438;bba bb13{bb630=0 ,bb1028,bb623,bb1046,bb955,bb941,bb947
,bb936,bb949,bb945,bb940,}bb537;bba bb85 bb7;bb13{bb101=0 ,bb372=-
12000 ,bb365=-11999 ,bb392=-11998 ,bb689=-11997 ,bb727=-11996 ,bb767=-
11995 ,bb911=-11994 ,bb793=-11992 ,bb804=-11991 ,bb896=-11990 ,bb761=-
11989 ,bb825=-11988 ,bb657=-11987 ,bb685=-11986 ,bb902=-11985 ,bb885=-
11984 ,bb644=-11983 ,bb665=-11982 ,bb796=-11981 ,bb910=-11980 ,bb737=-
11979 ,bb858=-11978 ,bb862=-11977 ,bb610=-11976 ,bb870=-11975 ,bb678=-
11960 ,bb930=-11959 ,bb912=-11500 ,bb748=-11499 ,bb868=-11498 ,bb808=-
11497 ,bb709=-11496 ,bb770=-11495 ,bb802=-11494 ,bb783=-11493 ,bb882=-
11492 ,bb893=-11491 ,bb779=-11490 ,bb866=-11489 ,bb692=-11488 ,bb859=-
11487 ,bb884=-11486 ,bb645=-11485 ,bb656=-11484 ,bb713=-11483 ,bb845=-
11482 ,bb690=-11481 ,bb717=-11480 ,bb712=-11479 ,bb720=-11478 ,bb735=-
11477 ,bb853=-11476 ,bb843=-11475 ,bb873=-11474 ,bb835=-11473 ,bb874=-
11472 ,bb806=-11460 ,bb854=-11450 ,bb738=-11449 ,bb722=-11448 ,bb747=-
11447 ,bb871=-11446 ,bb676=-11445 ,bb723=-11444 ,bb819=-11443 ,bb721=-
11440 ,bb817=-11439 ,bb842=-11438 ,bb803=-11437 ,bb691=-11436 ,bb684=-
11435 ,bb903=-11420 ,bb548=-11419 ,bb588=-11418 ,bb700=-11417 ,bb914=-
11416 ,bb680=-11415 ,bb805=-11414 ,bb742=-11413 ,bb888=-11412 ,bb865=-
11411 ,bb693=-11410 ,bb927=-11409 ,bb905=-11408 ,bb714=-11407 ,bb739=-
11406 ,bb900=-11405 ,bb894=-11404 ,bb683=-11403 ,bb766=-11402 ,bb774=-
11401 ,bb773=-11400 ,bb890=-11399 ,bb716=-11398 ,bb771=-11397 ,bb699=-
11396 ,bb799=-11395 ,bb758=-11394 ,bb919=-11393 ,bb834=-11392 ,bb920=-
11391 ,bb895=-11390 ,bb741=-11389 ,bb667=-11388 ,bb876=-11387 ,bb908=-
11386 ,bb759=-11385 ,bb883=-11384 ,bb904=-11383 ,bb846=-11382 ,bb658=-
11381 ,bb838=-11380 ,bb790=-11379 ,bb928=-11378 ,bb762=-11377 ,bb831=-
11376 ,bb801=-11375 ,bb849=-11374 ,bb855=-11373 ,bb702=-11372 ,bb906=-
11371 ,bb653=-11370 ,bb784=-11369 ,bb867=-11368 ,bb768=-11367 ,bb812=-
11366 ,bb679=-11365 ,bb869=-11364 ,bb659=-11363 ,bb401=-11350 ,bb892=bb401
,bb729=-11349 ,bb701=-11348 ,bb787=-11347 ,bb740=-11346 ,bb837=-11345 ,
bb705=-11344 ,bb852=-11343 ,bb840=-11342 ,bb731=-11341 ,bb734=-11340 ,
bb907=-11339 ,bb406=-11338 ,bb821=-11337 ,bb688=bb406,bb822=-11330 ,bb844
=-11329 ,bb832=-11328 ,bb776=-11327 ,bb733=-11326 ,bb661=-11325 ,bb918=-
11324 ,bb725=-11320 ,bb931=-11319 ,bb763=-11318 ,bb788=-11317 ,bb652=-
11316 ,bb922=-11315 ,bb792=-11314 ,bb769=-11313 ,bb782=-11312 ,bb789=-
11300 ,bb778=-11299 ,bb807=-11298 ,bb719=-11297 ,bb743=-11296 ,bb673=-
11295 ,bb861=-11294 ,bb646=-11293 ,bb797=-11292 ,bb901=-11291 ,bb857=-
11290 ,bb649=-11289 ,bb785=-11288 ,bb879=-11287 ,bb824=-11286 ,bb647=-
11285 ,bb851=-11284 ,bb764=-11283 ,bb750=-11282 ,bb695=-11281 ,bb833=-
11280 ,bb829=-11279 ,bb751=-11250 ,bb798=-11249 ,bb899=-11248 ,bb755=-
11247 ,bb791=-11246 ,bb711=-11245 ,bb823=-11244 ,bb715=-11243 ,bb925=-
11242 ,bb860=-11240 ,bb662=-11239 ,bb745=-11238 ,bb795=-11237 ,bb863=-
11150 ,bb728=-11100 ,bb756=-11099 ,bb781=-11098 ,bb726=-11097 ,bb730=-
11096 ,bb800=-11095 ,bb923=-11094 ,bb875=-11093 ,bb827=-11092 ,bb698=-
11091 ,bb655=-11090 ,bb706=-11089 ,bb651=-11088 ,bb926=-11087 ,bb878=-
11086 ,bb836=-11085 ,bb696=-11050 ,bb753=-11049 ,bb708=-10999 ,bb809=-
10998 ,bb677=-10997 ,bb718=-10996 ,bb666=-10995 ,bb697=-10994 ,bb710=-
10993 ,bb650=-10992 ,bb777=-10991 ,bb668=-10990 ,bb786=-10989 ,bb913=-
10988 ,bb841=-10979 ,bb664=-10978 ,bb932=-10977 ,bb887=-10976 ,bb760=-
10975 ,bb724=-10974 ,};bb13{bb571=1 ,};bbb*bb518(bbd bb1264,bbd bb387);
bb7 bb474(bbb*bb1004);bba bbj bb2049 bb2031, *bb396;bba bb13{bb2058=0
,bb1790=1 ,bb1807=2 }bb898;bb7 bb1859(bb898 bb1923,bb396*bb369);bb7
bb2002(bb396 bb369,bbf*bb450,bbd bb434,bbf*bb314,bbd bb295,bbd*bb453,
bbd*bb310);bb7 bb1996(bb396 bb369,bbf*bb314,bbd bb295,bbd*bb310,bbu*
bb1007);bb7 bb2005(bb396 bb369,bbf*bb450,bbd bb434,bbf*bb314,bbd bb295
,bbd*bb453,bbd*bb310,bbu*bb997);bb7 bb1869(bb396 bb369);bb7 bb2285(
bb81*bb162);bb7 bb2309(bb81 bb162,bbf*bb450,bbd bb434,bbf*bb314,bbd
bb295,bbd*bb453,bbd*bb310);bb7 bb2360(bb81 bb162,bbf*bb314,bbd bb295,
bbd*bb310,bbu*bb1007);bb7 bb2321(bb81*bb162);bb7 bb2324(bb81*bb162);
bb7 bb2357(bb81 bb162,bbf*bb450,bbd bb434,bbf*bb314,bbd bb295,bbd*
bb453,bbd*bb310,bbu*bb997);bb7 bb2316(bb81*bb162);bb7 bb2277(bb81*
bb162);bb7 bb2361(bb81 bb162,bbf*bb450,bbd bb434,bbf*bb314,bbd bb295,
bbd*bb453,bbd*bb310);bb7 bb2359(bb81 bb162,bbf*bb314,bbd bb295,bbd*
bb310,bbu*bb1007);bb7 bb2314(bb81*bb162);bb7 bb2373(bb81*bb162);bb7
bb2276(bb81 bb162,bbf*bb450,bbd bb434,bbf*bb314,bbd bb295,bbd*bb453,
bbd*bb310,bbu*bb997);bb7 bb2354(bb81*bb162);bba bb7( *bb2628)(bb81*
bb162);bba bb7( *bb2664)(bb81 bb162,bbf*bb450,bbd bb434,bbf* *bb314,
bbd*bb295,bbd*bb2572);bba bb7( *bb2562)(bb81 bb162,bbf*bb450,bbd bb434
,bbf*bb314,bbd bb295,bbd*bb453,bbd*bb310);bba bb7( *bb2564)(bb81 bb162
,bbf*bb314,bbd bb295,bbd*bb310,bbu*bb1007);bba bb7( *bb2541)(bb81*
bb162);bba bb7( *bb2567)(bb81*bb162);bba bb7( *bb2691)(bb81 bb162,bbf
 *bb450,bbd bb434,bbf* *bb314,bbd*bb295,bbd*bb2572);bba bb7( *bb2585)(
bb81 bb162,bbf*bb450,bbd bb434,bbf*bb314,bbd bb295,bbd*bb453,bbd*
bb310,bbu*bb997);bba bb7( *bb2536)(bb81*bb162);bbj bb2049{bb2628
bb2350;bb2562 bb2328;bb2564 bb2345;bb2541 bb2275;bb2567 bb2288;bb2585
bb2351;bb2536 bb2307;bb81 bb2245;bb81 bb2282;};bb7 bb1859(bb898 bb1923
,bb396*bb369){bb396 bb615;bb7 bb18=bb101;bbm(!bb369)bb4 bb372; *bb369
=bb93;bb615=(bb396)bb518(bb12(bb2031),bb571);bbm(!bb615)bb4 bb365;
bb338(bb1923){bb17 bb1790:bb615->bb2350=bb2285;bb615->bb2328=bb2309;
bb615->bb2345=bb2360;bb615->bb2275=bb2321;bb615->bb2288=bb2324;bb615
->bb2351=bb2357;bb615->bb2307=bb2316;bb21;bb17 bb1807:bb615->bb2350=
bb2277;bb615->bb2328=bb2361;bb615->bb2345=bb2359;bb615->bb2275=bb2314
;bb615->bb2288=bb2373;bb615->bb2351=bb2276;bb615->bb2307=bb2354;bb21;
bb477:bb474(bb615);bb615=bb93;bb18=bb372;bb21;}bbm(((bb18)==bb101))bb18
=bb615->bb2350(&bb615->bb2245);bbm(((bb18)==bb101))bb18=bb615->bb2288
(&bb615->bb2282);bbm(((bb18)==bb101)) *bb369=bb615;bb4 bb18;}bb7
bb2002(bb396 bb369,bbf*bb450,bbd bb434,bbf*bb314,bbd bb295,bbd*bb453,
bbd*bb310){bb7 bb18=bb101;bbm(!bb453||!bb310)bb4 bb372; *bb310=0 ; *
bb453=0 ;bbm(!bb450||!bb314)bb4 bb372;bb18=bb369->bb2328(bb369->bb2245
,bb450,bb434,bb314,bb295,bb453,bb310);bb4 bb18;}bb7 bb1996(bb396 bb369
,bbf*bb314,bbd bb295,bbd*bb310,bbu*bb1007){bb7 bb18=bb101;bbm(!bb1007
||!bb310)bb4 bb372; *bb310=0 ; *bb1007=0 ;bbm(!bb314)bb4 bb372;bb18=
bb369->bb2345(bb369->bb2245,bb314,bb295,bb310,bb1007);bb4 bb18;}bb7
bb2005(bb396 bb369,bbf*bb450,bbd bb434,bbf*bb314,bbd bb295,bbd*bb453,
bbd*bb310,bbu*bb997){bb7 bb18=bb101;bbm(!bb453||!bb310||!bb997)bb4
bb372; *bb310=0 ; *bb453=0 ; *bb997=0 ;bbm(!bb450||!bb314)bb4 bb372;bb18
=bb369->bb2351(bb369->bb2282,bb450,bb434,bb314,bb295,bb453,bb310,
bb997);bb4 bb18;}bb7 bb1869(bb396 bb369){bb7 bb18=bb101;bbm(!bb369)bb4
bb372;bb369->bb2275(&(bb369->bb2245));bb369->bb2307(&(bb369->bb2282));
bb474(bb369);bb4 bb18;}
