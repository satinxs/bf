#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int memory[30000];
for(int i=0;i<30000;i++) memory[i]=0;
int mp = 0, start=clock(), end;
memory[mp] += 13;
J1:
if (memory[mp] == 0) goto J12;
memory[mp] -= 1;
mp += 1;
memory[mp] += 2;
mp += 3;
memory[mp] += 5;
mp += 1;
memory[mp] += 2;
mp += 1;
memory[mp] += 1;
mp -= 6;
J12:
if (memory[mp] != 0) goto J1;
mp += 5;
memory[mp] += 6;
mp += 1;
memory[mp] -= 3;
mp += 10;
memory[mp] += 15;
J19:
if (memory[mp] == 0) goto J29;
J20:
if (memory[mp] == 0) goto J22;
mp += 9;
J22:
if (memory[mp] != 0) goto J20;
memory[mp] += 1;
J24:
if (memory[mp] == 0) goto J26;
mp -= 9;
J26:
if (memory[mp] != 0) goto J24;
mp += 9;
memory[mp] -= 1;
J29:
if (memory[mp] != 0) goto J19;
memory[mp] += 1;
J31:
if (memory[mp] == 0) goto J35;
mp += 8;
memory[mp] = 0;
mp += 1;
J35:
if (memory[mp] != 0) goto J31;
mp -= 9;
J37:
if (memory[mp] == 0) goto J39;
mp -= 9;
J39:
if (memory[mp] != 0) goto J37;
mp += 8;
memory[mp] = 0;
memory[mp] += 1;
mp -= 7;
memory[mp] += 5;
J45:
if (memory[mp] == 0) goto J54;
memory[mp] -= 1;
J47:
if (memory[mp] == 0) goto J52;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J52:
if (memory[mp] != 0) goto J47;
mp += 9;
J54:
if (memory[mp] != 0) goto J45;
mp += 7;
memory[mp] += 1;
mp += 27;
memory[mp] += 1;
mp -= 17;
J60:
if (memory[mp] == 0) goto J62;
mp -= 9;
J62:
if (memory[mp] != 0) goto J60;
mp += 3;
memory[mp] = 0;
memory[mp] += 1;
J66:
if (memory[mp] == 0) goto J3866;
mp += 6;
J68:
if (memory[mp] == 0) goto J72;
mp += 7;
memory[mp] = 0;
mp += 2;
J72:
if (memory[mp] != 0) goto J68;
mp -= 9;
J74:
if (memory[mp] == 0) goto J76;
mp -= 9;
J76:
if (memory[mp] != 0) goto J74;
mp += 7;
memory[mp] = 0;
memory[mp] += 1;
mp -= 6;
memory[mp] += 4;
J82:
if (memory[mp] == 0) goto J91;
memory[mp] -= 1;
J84:
if (memory[mp] == 0) goto J89;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J89:
if (memory[mp] != 0) goto J84;
mp += 9;
J91:
if (memory[mp] != 0) goto J82;
mp += 6;
memory[mp] += 1;
mp -= 6;
memory[mp] += 7;
J96:
if (memory[mp] == 0) goto J105;
memory[mp] -= 1;
J98:
if (memory[mp] == 0) goto J103;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J103:
if (memory[mp] != 0) goto J98;
mp += 9;
J105:
if (memory[mp] != 0) goto J96;
mp += 6;
memory[mp] += 1;
mp -= 16;
J109:
if (memory[mp] == 0) goto J111;
mp -= 9;
J111:
if (memory[mp] != 0) goto J109;
mp += 3;
J113:
if (memory[mp] == 0) goto J3481;
memory[mp] = 0;
mp += 6;
J116:
if (memory[mp] == 0) goto J136;
mp += 7;
J118:
if (memory[mp] == 0) goto J123;
memory[mp] -= 1;
mp -= 6;
memory[mp] += 1;
mp += 6;
J123:
if (memory[mp] != 0) goto J118;
mp -= 6;
J125:
if (memory[mp] == 0) goto J134;
memory[mp] -= 1;
mp += 6;
memory[mp] += 1;
mp -= 2;
memory[mp] += 1;
mp -= 3;
memory[mp] += 1;
mp -= 1;
J134:
if (memory[mp] != 0) goto J125;
mp += 8;
J136:
if (memory[mp] != 0) goto J116;
mp -= 9;
J138:
if (memory[mp] == 0) goto J140;
mp -= 9;
J140:
if (memory[mp] != 0) goto J138;
mp += 9;
J142:
if (memory[mp] == 0) goto J162;
mp += 8;
J144:
if (memory[mp] == 0) goto J149;
memory[mp] -= 1;
mp -= 7;
memory[mp] += 1;
mp += 7;
J149:
if (memory[mp] != 0) goto J144;
mp -= 7;
J151:
if (memory[mp] == 0) goto J160;
memory[mp] -= 1;
mp += 7;
memory[mp] += 1;
mp -= 2;
memory[mp] += 1;
mp -= 3;
memory[mp] += 1;
mp -= 2;
J160:
if (memory[mp] != 0) goto J151;
mp += 8;
J162:
if (memory[mp] != 0) goto J142;
mp -= 9;
J164:
if (memory[mp] == 0) goto J166;
mp -= 9;
J166:
if (memory[mp] != 0) goto J164;
mp += 7;
J168:
if (memory[mp] == 0) goto J173;
memory[mp] -= 1;
mp -= 7;
memory[mp] += 1;
mp += 7;
J173:
if (memory[mp] != 0) goto J168;
mp -= 7;
J175:
if (memory[mp] == 0) goto J182;
memory[mp] -= 1;
mp += 7;
memory[mp] += 1;
mp -= 2;
memory[mp] += 1;
mp -= 5;
J182:
if (memory[mp] != 0) goto J175;
mp += 9;
memory[mp] += 15;
J185:
if (memory[mp] == 0) goto J214;
J186:
if (memory[mp] == 0) goto J188;
mp += 9;
J188:
if (memory[mp] != 0) goto J186;
memory[mp] += 1;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp -= 9;
J209:
if (memory[mp] == 0) goto J211;
mp -= 9;
J211:
if (memory[mp] != 0) goto J209;
mp += 9;
memory[mp] -= 1;
J214:
if (memory[mp] != 0) goto J185;
memory[mp] += 1;
J216:
if (memory[mp] == 0) goto J220;
mp += 1;
memory[mp] += 1;
mp += 8;
J220:
if (memory[mp] != 0) goto J216;
mp -= 9;
J222:
if (memory[mp] == 0) goto J224;
mp -= 9;
J224:
if (memory[mp] != 0) goto J222;
mp += 9;
J226:
if (memory[mp] == 0) goto J293;
mp += 1;
memory[mp] -= 1;
mp += 4;
J230:
if (memory[mp] == 0) goto J235;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 4;
J235:
if (memory[mp] != 0) goto J230;
mp -= 4;
J237:
if (memory[mp] == 0) goto J267;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp -= 5;
J242:
if (memory[mp] == 0) goto J262;
memory[mp] -= 1;
mp += 2;
J245:
if (memory[mp] == 0) goto J250;
memory[mp] -= 1;
mp -= 2;
memory[mp] += 1;
mp += 2;
J250:
if (memory[mp] != 0) goto J245;
mp -= 2;
J252:
if (memory[mp] == 0) goto J259;
memory[mp] -= 1;
mp += 2;
memory[mp] += 1;
mp += 2;
memory[mp] += 1;
mp -= 4;
J259:
if (memory[mp] != 0) goto J252;
memory[mp] += 1;
mp += 9;
J262:
if (memory[mp] != 0) goto J242;
mp -= 8;
J264:
if (memory[mp] == 0) goto J266;
mp -= 9;
J266:
if (memory[mp] != 0) goto J264;
J267:
if (memory[mp] != 0) goto J237;
mp += 9;
J269:
if (memory[mp] == 0) goto J271;
mp += 9;
J271:
if (memory[mp] != 0) goto J269;
mp -= 9;
J273:
if (memory[mp] == 0) goto J282;
mp += 1;
J275:
if (memory[mp] == 0) goto J280;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J280:
if (memory[mp] != 0) goto J275;
mp -= 10;
J282:
if (memory[mp] != 0) goto J273;
mp += 1;
J284:
if (memory[mp] == 0) goto J289;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J289:
if (memory[mp] != 0) goto J284;
mp -= 1;
memory[mp] += 1;
mp += 8;
J293:
if (memory[mp] != 0) goto J226;
mp -= 9;
J295:
if (memory[mp] == 0) goto J334;
mp += 1;
memory[mp] = 0;
mp -= 1;
memory[mp] -= 1;
mp += 4;
J301:
if (memory[mp] == 0) goto J323;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 1;
J306:
if (memory[mp] == 0) goto J314;
mp -= 1;
memory[mp] -= 1;
mp += 1;
memory[mp] -= 1;
mp -= 6;
memory[mp] += 1;
mp += 6;
J314:
if (memory[mp] != 0) goto J306;
mp -= 1;
J316:
if (memory[mp] == 0) goto J321;
memory[mp] -= 1;
mp += 1;
memory[mp] += 1;
mp -= 1;
J321:
if (memory[mp] != 0) goto J316;
mp += 4;
J323:
if (memory[mp] != 0) goto J301;
mp -= 3;
J325:
if (memory[mp] == 0) goto J330;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp -= 3;
J330:
if (memory[mp] != 0) goto J325;
mp -= 1;
memory[mp] += 1;
mp -= 9;
J334:
if (memory[mp] != 0) goto J295;
mp += 9;
J336:
if (memory[mp] == 0) goto J340;
mp += 1;
memory[mp] += 1;
mp += 8;
J340:
if (memory[mp] != 0) goto J336;
mp -= 9;
J342:
if (memory[mp] == 0) goto J344;
mp -= 9;
J344:
if (memory[mp] != 0) goto J342;
mp += 9;
J346:
if (memory[mp] == 0) goto J413;
mp += 1;
memory[mp] -= 1;
mp += 5;
J350:
if (memory[mp] == 0) goto J355;
memory[mp] -= 1;
mp -= 5;
memory[mp] += 1;
mp += 5;
J355:
if (memory[mp] != 0) goto J350;
mp -= 5;
J357:
if (memory[mp] == 0) goto J387;
memory[mp] -= 1;
mp += 5;
memory[mp] += 1;
mp -= 6;
J362:
if (memory[mp] == 0) goto J382;
memory[mp] -= 1;
mp += 3;
J365:
if (memory[mp] == 0) goto J370;
memory[mp] -= 1;
mp -= 3;
memory[mp] += 1;
mp += 3;
J370:
if (memory[mp] != 0) goto J365;
mp -= 3;
J372:
if (memory[mp] == 0) goto J379;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp += 1;
memory[mp] += 1;
mp -= 4;
J379:
if (memory[mp] != 0) goto J372;
memory[mp] += 1;
mp += 9;
J382:
if (memory[mp] != 0) goto J362;
mp -= 8;
J384:
if (memory[mp] == 0) goto J386;
mp -= 9;
J386:
if (memory[mp] != 0) goto J384;
J387:
if (memory[mp] != 0) goto J357;
mp += 9;
J389:
if (memory[mp] == 0) goto J391;
mp += 9;
J391:
if (memory[mp] != 0) goto J389;
mp -= 9;
J393:
if (memory[mp] == 0) goto J402;
mp += 2;
J395:
if (memory[mp] == 0) goto J400;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J400:
if (memory[mp] != 0) goto J395;
mp -= 11;
J402:
if (memory[mp] != 0) goto J393;
mp += 2;
J404:
if (memory[mp] == 0) goto J409;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J409:
if (memory[mp] != 0) goto J404;
mp -= 2;
memory[mp] += 1;
mp += 8;
J413:
if (memory[mp] != 0) goto J346;
mp -= 9;
J415:
if (memory[mp] == 0) goto J454;
mp += 1;
memory[mp] = 0;
mp -= 1;
memory[mp] -= 1;
mp += 4;
J421:
if (memory[mp] == 0) goto J443;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 1;
J426:
if (memory[mp] == 0) goto J434;
mp -= 1;
memory[mp] -= 1;
mp += 1;
memory[mp] -= 1;
mp -= 6;
memory[mp] += 1;
mp += 6;
J434:
if (memory[mp] != 0) goto J426;
mp -= 1;
J436:
if (memory[mp] == 0) goto J441;
memory[mp] -= 1;
mp += 1;
memory[mp] += 1;
mp -= 1;
J441:
if (memory[mp] != 0) goto J436;
mp += 4;
J443:
if (memory[mp] != 0) goto J421;
mp -= 3;
J445:
if (memory[mp] == 0) goto J450;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp -= 3;
J450:
if (memory[mp] != 0) goto J445;
mp -= 1;
memory[mp] += 1;
mp -= 9;
J454:
if (memory[mp] != 0) goto J415;
mp += 9;
J456:
if (memory[mp] == 0) goto J465;
mp += 4;
J458:
if (memory[mp] == 0) goto J463;
memory[mp] -= 1;
mp -= 36;
memory[mp] += 1;
mp += 36;
J463:
if (memory[mp] != 0) goto J458;
mp += 5;
J465:
if (memory[mp] != 0) goto J456;
mp -= 9;
J467:
if (memory[mp] == 0) goto J469;
mp -= 9;
J469:
if (memory[mp] != 0) goto J467;
mp += 9;
memory[mp] += 15;
J472:
if (memory[mp] == 0) goto J484;
J473:
if (memory[mp] == 0) goto J475;
mp += 9;
J475:
if (memory[mp] != 0) goto J473;
mp -= 9;
memory[mp] -= 1;
mp -= 9;
J479:
if (memory[mp] == 0) goto J481;
mp -= 9;
J481:
if (memory[mp] != 0) goto J479;
mp += 9;
memory[mp] -= 1;
J484:
if (memory[mp] != 0) goto J472;
memory[mp] += 1;
mp += 21;
memory[mp] += 1;
mp -= 3;
J489:
if (memory[mp] == 0) goto J491;
mp -= 9;
J491:
if (memory[mp] != 0) goto J489;
mp += 9;
J493:
if (memory[mp] == 0) goto J589;
mp += 3;
J495:
if (memory[mp] == 0) goto J500;
memory[mp] -= 1;
mp -= 3;
memory[mp] -= 1;
mp += 3;
J500:
if (memory[mp] != 0) goto J495;
memory[mp] += 1;
mp -= 3;
J503:
if (memory[mp] == 0) goto J534;
memory[mp] -= 1;
mp += 3;
memory[mp] -= 1;
mp += 1;
J508:
if (memory[mp] == 0) goto J513;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 4;
J513:
if (memory[mp] != 0) goto J508;
mp -= 4;
J515:
if (memory[mp] == 0) goto J533;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp -= 13;
J520:
if (memory[mp] == 0) goto J522;
mp -= 9;
J522:
if (memory[mp] != 0) goto J520;
mp += 4;
memory[mp] = 0;
memory[mp] += 1;
mp += 5;
J527:
if (memory[mp] == 0) goto J529;
mp += 9;
J529:
if (memory[mp] != 0) goto J527;
mp += 1;
memory[mp] += 1;
mp -= 1;
J533:
if (memory[mp] != 0) goto J515;
J534:
if (memory[mp] != 0) goto J503;
memory[mp] += 1;
mp += 4;
J537:
if (memory[mp] == 0) goto J542;
memory[mp] -= 1;
mp -= 4;
memory[mp] -= 1;
mp += 4;
J542:
if (memory[mp] != 0) goto J537;
memory[mp] += 1;
mp -= 4;
J545:
if (memory[mp] == 0) goto J577;
memory[mp] -= 1;
mp += 4;
memory[mp] -= 1;
mp -= 1;
J550:
if (memory[mp] == 0) goto J555;
memory[mp] -= 1;
mp -= 3;
memory[mp] += 1;
mp += 3;
J555:
if (memory[mp] != 0) goto J550;
mp -= 3;
J557:
if (memory[mp] == 0) goto J576;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp -= 12;
J562:
if (memory[mp] == 0) goto J564;
mp -= 9;
J564:
if (memory[mp] != 0) goto J562;
mp += 3;
memory[mp] = 0;
memory[mp] += 1;
mp += 6;
J569:
if (memory[mp] == 0) goto J571;
mp += 9;
J571:
if (memory[mp] != 0) goto J569;
mp += 1;
memory[mp] = 0;
memory[mp] += 1;
mp -= 1;
J576:
if (memory[mp] != 0) goto J557;
J577:
if (memory[mp] != 0) goto J545;
memory[mp] += 1;
mp += 1;
J580:
if (memory[mp] == 0) goto J587;
memory[mp] -= 1;
mp -= 1;
J583:
if (memory[mp] == 0) goto J585;
mp += 9;
J585:
if (memory[mp] != 0) goto J583;
mp -= 8;
J587:
if (memory[mp] != 0) goto J580;
mp += 8;
J589:
if (memory[mp] != 0) goto J493;
mp -= 9;
J591:
if (memory[mp] == 0) goto J593;
mp -= 9;
J593:
if (memory[mp] != 0) goto J591;
mp -= 7;
J595:
if (memory[mp] == 0) goto J602;
memory[mp] -= 1;
mp += 1;
memory[mp] += 1;
mp += 3;
memory[mp] -= 1;
mp -= 4;
J602:
if (memory[mp] != 0) goto J595;
mp += 9;
memory[mp] += 26;
mp += 2;
J606:
if (memory[mp] == 0) goto J611;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 4;
J611:
if (memory[mp] != 0) goto J606;
mp -= 4;
J613:
if (memory[mp] == 0) goto J620;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp -= 2;
memory[mp] = 0;
mp -= 2;
J620:
if (memory[mp] != 0) goto J613;
mp += 2;
J622:
if (memory[mp] == 0) goto J3044;
mp -= 7;
memory[mp] += 1;
mp -= 1;
J626:
if (memory[mp] == 0) goto J634;
memory[mp] -= 1;
mp -= 1;
memory[mp] += 1;
mp += 4;
memory[mp] += 1;
mp -= 2;
memory[mp] = 0;
J634:
if (memory[mp] != 0) goto J626;
mp += 1;
J636:
if (memory[mp] == 0) goto J648;
memory[mp] -= 1;
mp -= 2;
J639:
if (memory[mp] == 0) goto J646;
memory[mp] -= 1;
mp += 1;
memory[mp] += 1;
mp += 3;
memory[mp] -= 1;
mp -= 4;
J646:
if (memory[mp] != 0) goto J639;
mp += 3;
J648:
if (memory[mp] != 0) goto J636;
mp += 13;
J650:
if (memory[mp] == 0) goto J658;
mp += 2;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 5;
J658:
if (memory[mp] != 0) goto J650;
mp -= 9;
J660:
if (memory[mp] == 0) goto J662;
mp -= 9;
J662:
if (memory[mp] != 0) goto J660;
mp += 3;
memory[mp] = 0;
mp += 6;
J666:
if (memory[mp] == 0) goto J684;
mp += 5;
J668:
if (memory[mp] == 0) goto J673;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 4;
J673:
if (memory[mp] != 0) goto J668;
mp -= 4;
J675:
if (memory[mp] == 0) goto J682;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp -= 3;
memory[mp] += 1;
mp -= 1;
J682:
if (memory[mp] != 0) goto J675;
mp += 8;
J684:
if (memory[mp] != 0) goto J666;
mp -= 9;
J686:
if (memory[mp] == 0) goto J688;
mp -= 9;
J688:
if (memory[mp] != 0) goto J686;
mp += 9;
J690:
if (memory[mp] == 0) goto J699;
mp += 2;
J692:
if (memory[mp] == 0) goto J697;
memory[mp] -= 1;
mp -= 9;
memory[mp] += 1;
mp += 9;
J697:
if (memory[mp] != 0) goto J692;
mp += 7;
J699:
if (memory[mp] != 0) goto J690;
mp -= 9;
J701:
if (memory[mp] == 0) goto J703;
mp -= 9;
J703:
if (memory[mp] != 0) goto J701;
mp += 9;
memory[mp] += 15;
J706:
if (memory[mp] == 0) goto J735;
J707:
if (memory[mp] == 0) goto J709;
mp += 9;
J709:
if (memory[mp] != 0) goto J707;
memory[mp] += 1;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp -= 9;
J730:
if (memory[mp] == 0) goto J732;
mp -= 9;
J732:
if (memory[mp] != 0) goto J730;
mp += 9;
memory[mp] -= 1;
J735:
if (memory[mp] != 0) goto J706;
memory[mp] += 1;
J737:
if (memory[mp] == 0) goto J741;
mp += 1;
memory[mp] += 1;
mp += 8;
J741:
if (memory[mp] != 0) goto J737;
mp -= 9;
J743:
if (memory[mp] == 0) goto J745;
mp -= 9;
J745:
if (memory[mp] != 0) goto J743;
mp += 9;
J747:
if (memory[mp] == 0) goto J814;
mp += 1;
memory[mp] -= 1;
mp += 5;
J751:
if (memory[mp] == 0) goto J756;
memory[mp] -= 1;
mp -= 5;
memory[mp] += 1;
mp += 5;
J756:
if (memory[mp] != 0) goto J751;
mp -= 5;
J758:
if (memory[mp] == 0) goto J788;
memory[mp] -= 1;
mp += 5;
memory[mp] += 1;
mp -= 6;
J763:
if (memory[mp] == 0) goto J783;
memory[mp] -= 1;
mp += 2;
J766:
if (memory[mp] == 0) goto J771;
memory[mp] -= 1;
mp -= 2;
memory[mp] += 1;
mp += 2;
J771:
if (memory[mp] != 0) goto J766;
mp -= 2;
J773:
if (memory[mp] == 0) goto J780;
memory[mp] -= 1;
mp += 2;
memory[mp] += 1;
mp += 1;
memory[mp] += 1;
mp -= 3;
J780:
if (memory[mp] != 0) goto J773;
memory[mp] += 1;
mp += 9;
J783:
if (memory[mp] != 0) goto J763;
mp -= 8;
J785:
if (memory[mp] == 0) goto J787;
mp -= 9;
J787:
if (memory[mp] != 0) goto J785;
J788:
if (memory[mp] != 0) goto J758;
mp += 9;
J790:
if (memory[mp] == 0) goto J792;
mp += 9;
J792:
if (memory[mp] != 0) goto J790;
mp -= 9;
J794:
if (memory[mp] == 0) goto J803;
mp += 1;
J796:
if (memory[mp] == 0) goto J801;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J801:
if (memory[mp] != 0) goto J796;
mp -= 10;
J803:
if (memory[mp] != 0) goto J794;
mp += 1;
J805:
if (memory[mp] == 0) goto J810;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J810:
if (memory[mp] != 0) goto J805;
mp -= 1;
memory[mp] += 1;
mp += 8;
J814:
if (memory[mp] != 0) goto J747;
mp -= 9;
J816:
if (memory[mp] == 0) goto J855;
mp += 1;
memory[mp] = 0;
mp -= 1;
memory[mp] -= 1;
mp += 3;
J822:
if (memory[mp] == 0) goto J844;
memory[mp] -= 1;
mp -= 3;
memory[mp] += 1;
mp += 1;
J827:
if (memory[mp] == 0) goto J835;
mp -= 1;
memory[mp] -= 1;
mp += 1;
memory[mp] -= 1;
mp -= 7;
memory[mp] += 1;
mp += 7;
J835:
if (memory[mp] != 0) goto J827;
mp -= 1;
J837:
if (memory[mp] == 0) goto J842;
memory[mp] -= 1;
mp += 1;
memory[mp] += 1;
mp -= 1;
J842:
if (memory[mp] != 0) goto J837;
mp += 3;
J844:
if (memory[mp] != 0) goto J822;
mp -= 2;
J846:
if (memory[mp] == 0) goto J851;
memory[mp] -= 1;
mp += 2;
memory[mp] += 1;
mp -= 2;
J851:
if (memory[mp] != 0) goto J846;
mp -= 1;
memory[mp] += 1;
mp -= 9;
J855:
if (memory[mp] != 0) goto J816;
mp += 9;
J857:
if (memory[mp] == 0) goto J875;
mp += 6;
J859:
if (memory[mp] == 0) goto J864;
memory[mp] -= 1;
mp -= 5;
memory[mp] += 1;
mp += 5;
J864:
if (memory[mp] != 0) goto J859;
mp -= 5;
J866:
if (memory[mp] == 0) goto J873;
memory[mp] -= 1;
mp += 5;
memory[mp] += 1;
mp -= 4;
memory[mp] += 1;
mp -= 1;
J873:
if (memory[mp] != 0) goto J866;
mp += 8;
J875:
if (memory[mp] != 0) goto J857;
mp -= 9;
J877:
if (memory[mp] == 0) goto J879;
mp -= 9;
J879:
if (memory[mp] != 0) goto J877;
mp += 9;
J881:
if (memory[mp] == 0) goto J885;
mp += 1;
memory[mp] += 1;
mp += 8;
J885:
if (memory[mp] != 0) goto J881;
mp -= 9;
J887:
if (memory[mp] == 0) goto J889;
mp -= 9;
J889:
if (memory[mp] != 0) goto J887;
mp += 9;
J891:
if (memory[mp] == 0) goto J958;
mp += 1;
memory[mp] -= 1;
mp += 5;
J895:
if (memory[mp] == 0) goto J900;
memory[mp] -= 1;
mp -= 5;
memory[mp] += 1;
mp += 5;
J900:
if (memory[mp] != 0) goto J895;
mp -= 5;
J902:
if (memory[mp] == 0) goto J932;
memory[mp] -= 1;
mp += 5;
memory[mp] += 1;
mp -= 6;
J907:
if (memory[mp] == 0) goto J927;
memory[mp] -= 1;
mp += 2;
J910:
if (memory[mp] == 0) goto J915;
memory[mp] -= 1;
mp -= 2;
memory[mp] += 1;
mp += 2;
J915:
if (memory[mp] != 0) goto J910;
mp -= 2;
J917:
if (memory[mp] == 0) goto J924;
memory[mp] -= 1;
mp += 2;
memory[mp] += 1;
mp += 2;
memory[mp] += 1;
mp -= 4;
J924:
if (memory[mp] != 0) goto J917;
memory[mp] += 1;
mp += 9;
J927:
if (memory[mp] != 0) goto J907;
mp -= 8;
J929:
if (memory[mp] == 0) goto J931;
mp -= 9;
J931:
if (memory[mp] != 0) goto J929;
J932:
if (memory[mp] != 0) goto J902;
mp += 9;
J934:
if (memory[mp] == 0) goto J936;
mp += 9;
J936:
if (memory[mp] != 0) goto J934;
mp -= 9;
J938:
if (memory[mp] == 0) goto J947;
mp += 1;
J940:
if (memory[mp] == 0) goto J945;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J945:
if (memory[mp] != 0) goto J940;
mp -= 10;
J947:
if (memory[mp] != 0) goto J938;
mp += 1;
J949:
if (memory[mp] == 0) goto J954;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J954:
if (memory[mp] != 0) goto J949;
mp -= 1;
memory[mp] += 1;
mp += 8;
J958:
if (memory[mp] != 0) goto J891;
mp -= 9;
J960:
if (memory[mp] == 0) goto J999;
mp += 1;
memory[mp] = 0;
mp -= 1;
memory[mp] -= 1;
mp += 4;
J966:
if (memory[mp] == 0) goto J988;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 1;
J971:
if (memory[mp] == 0) goto J979;
mp -= 1;
memory[mp] -= 1;
mp += 1;
memory[mp] -= 1;
mp -= 6;
memory[mp] += 1;
mp += 6;
J979:
if (memory[mp] != 0) goto J971;
mp -= 1;
J981:
if (memory[mp] == 0) goto J986;
memory[mp] -= 1;
mp += 1;
memory[mp] += 1;
mp -= 1;
J986:
if (memory[mp] != 0) goto J981;
mp += 4;
J988:
if (memory[mp] != 0) goto J966;
mp -= 3;
J990:
if (memory[mp] == 0) goto J995;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp -= 3;
J995:
if (memory[mp] != 0) goto J990;
mp -= 1;
memory[mp] += 1;
mp -= 9;
J999:
if (memory[mp] != 0) goto J960;
mp += 9;
J1001:
if (memory[mp] == 0) goto J1010;
mp += 4;
J1003:
if (memory[mp] == 0) goto J1008;
memory[mp] -= 1;
mp -= 36;
memory[mp] += 1;
mp += 36;
J1008:
if (memory[mp] != 0) goto J1003;
mp += 5;
J1010:
if (memory[mp] != 0) goto J1001;
mp -= 9;
J1012:
if (memory[mp] == 0) goto J1014;
mp -= 9;
J1014:
if (memory[mp] != 0) goto J1012;
mp += 9;
J1016:
if (memory[mp] == 0) goto J1025;
mp += 3;
J1018:
if (memory[mp] == 0) goto J1023;
memory[mp] -= 1;
mp -= 36;
memory[mp] += 1;
mp += 36;
J1023:
if (memory[mp] != 0) goto J1018;
mp += 6;
J1025:
if (memory[mp] != 0) goto J1016;
mp -= 9;
J1027:
if (memory[mp] == 0) goto J1029;
mp -= 9;
J1029:
if (memory[mp] != 0) goto J1027;
mp += 9;
memory[mp] += 15;
J1032:
if (memory[mp] == 0) goto J1044;
J1033:
if (memory[mp] == 0) goto J1035;
mp += 9;
J1035:
if (memory[mp] != 0) goto J1033;
mp -= 9;
memory[mp] -= 1;
mp -= 9;
J1039:
if (memory[mp] == 0) goto J1041;
mp -= 9;
J1041:
if (memory[mp] != 0) goto J1039;
mp += 9;
memory[mp] -= 1;
J1044:
if (memory[mp] != 0) goto J1032;
memory[mp] += 1;
J1046:
if (memory[mp] == 0) goto J1064;
mp += 8;
J1048:
if (memory[mp] == 0) goto J1053;
memory[mp] -= 1;
mp -= 7;
memory[mp] += 1;
mp += 7;
J1053:
if (memory[mp] != 0) goto J1048;
mp -= 7;
J1055:
if (memory[mp] == 0) goto J1062;
memory[mp] -= 1;
mp += 7;
memory[mp] += 1;
mp -= 6;
memory[mp] += 1;
mp -= 1;
J1062:
if (memory[mp] != 0) goto J1055;
mp += 8;
J1064:
if (memory[mp] != 0) goto J1046;
mp -= 9;
J1066:
if (memory[mp] == 0) goto J1068;
mp -= 9;
J1068:
if (memory[mp] != 0) goto J1066;
mp += 9;
J1070:
if (memory[mp] == 0) goto J1074;
mp += 6;
memory[mp] = 0;
mp += 3;
J1074:
if (memory[mp] != 0) goto J1070;
mp -= 9;
J1076:
if (memory[mp] == 0) goto J1078;
mp -= 9;
J1078:
if (memory[mp] != 0) goto J1076;
mp += 4;
memory[mp] += 1;
mp += 1;
J1082:
if (memory[mp] == 0) goto J1089;
memory[mp] -= 1;
mp -= 1;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 5;
J1089:
if (memory[mp] != 0) goto J1082;
mp += 1;
J1091:
if (memory[mp] == 0) goto J1114;
memory[mp] -= 1;
mp -= 6;
J1094:
if (memory[mp] == 0) goto J1101;
memory[mp] -= 1;
mp += 5;
memory[mp] += 1;
mp -= 1;
memory[mp] += 2;
mp -= 4;
J1101:
if (memory[mp] != 0) goto J1094;
mp += 5;
J1103:
if (memory[mp] == 0) goto J1108;
memory[mp] -= 1;
mp -= 5;
memory[mp] += 1;
mp += 5;
J1108:
if (memory[mp] != 0) goto J1103;
mp -= 1;
memory[mp] -= 1;
mp += 1;
memory[mp] += 1;
mp += 1;
J1114:
if (memory[mp] != 0) goto J1091;
mp -= 1;
J1116:
if (memory[mp] == 0) goto J1121;
memory[mp] -= 1;
mp += 1;
memory[mp] += 1;
mp -= 1;
J1121:
if (memory[mp] != 0) goto J1116;
mp -= 5;
J1123:
if (memory[mp] == 0) goto J1128;
memory[mp] -= 1;
mp += 5;
memory[mp] += 1;
mp -= 5;
J1128:
if (memory[mp] != 0) goto J1123;
mp += 6;
memory[mp] = 0;
mp -= 6;
memory[mp] += 1;
mp += 4;
J1134:
if (memory[mp] == 0) goto J1139;
memory[mp] -= 1;
mp -= 4;
memory[mp] -= 1;
mp += 4;
J1139:
if (memory[mp] != 0) goto J1134;
memory[mp] += 1;
mp -= 4;
J1142:
if (memory[mp] == 0) goto J1442;
memory[mp] -= 1;
mp += 4;
memory[mp] -= 1;
mp += 5;
J1147:
if (memory[mp] == 0) goto J1243;
mp += 2;
J1149:
if (memory[mp] == 0) goto J1154;
memory[mp] -= 1;
mp -= 2;
memory[mp] -= 1;
mp += 2;
J1154:
if (memory[mp] != 0) goto J1149;
memory[mp] += 1;
mp -= 2;
J1157:
if (memory[mp] == 0) goto J1188;
memory[mp] -= 1;
mp += 2;
memory[mp] -= 1;
mp += 1;
J1162:
if (memory[mp] == 0) goto J1167;
memory[mp] -= 1;
mp -= 3;
memory[mp] += 1;
mp += 3;
J1167:
if (memory[mp] != 0) goto J1162;
mp -= 3;
J1169:
if (memory[mp] == 0) goto J1187;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp -= 12;
J1174:
if (memory[mp] == 0) goto J1176;
mp -= 9;
J1176:
if (memory[mp] != 0) goto J1174;
mp += 3;
memory[mp] = 0;
memory[mp] += 1;
mp += 6;
J1181:
if (memory[mp] == 0) goto J1183;
mp += 9;
J1183:
if (memory[mp] != 0) goto J1181;
mp += 1;
memory[mp] += 1;
mp -= 1;
J1187:
if (memory[mp] != 0) goto J1169;
J1188:
if (memory[mp] != 0) goto J1157;
memory[mp] += 1;
mp += 3;
J1191:
if (memory[mp] == 0) goto J1196;
memory[mp] -= 1;
mp -= 3;
memory[mp] -= 1;
mp += 3;
J1196:
if (memory[mp] != 0) goto J1191;
memory[mp] += 1;
mp -= 3;
J1199:
if (memory[mp] == 0) goto J1231;
memory[mp] -= 1;
mp += 3;
memory[mp] -= 1;
mp -= 1;
J1204:
if (memory[mp] == 0) goto J1209;
memory[mp] -= 1;
mp -= 2;
memory[mp] += 1;
mp += 2;
J1209:
if (memory[mp] != 0) goto J1204;
mp -= 2;
J1211:
if (memory[mp] == 0) goto J1230;
memory[mp] -= 1;
mp += 2;
memory[mp] += 1;
mp -= 11;
J1216:
if (memory[mp] == 0) goto J1218;
mp -= 9;
J1218:
if (memory[mp] != 0) goto J1216;
mp += 4;
memory[mp] = 0;
memory[mp] += 1;
mp += 5;
J1223:
if (memory[mp] == 0) goto J1225;
mp += 9;
J1225:
if (memory[mp] != 0) goto J1223;
mp += 1;
memory[mp] = 0;
memory[mp] += 1;
mp -= 1;
J1230:
if (memory[mp] != 0) goto J1211;
J1231:
if (memory[mp] != 0) goto J1199;
memory[mp] += 1;
mp += 1;
J1234:
if (memory[mp] == 0) goto J1241;
memory[mp] -= 1;
mp -= 1;
J1237:
if (memory[mp] == 0) goto J1239;
mp += 9;
J1239:
if (memory[mp] != 0) goto J1237;
mp -= 8;
J1241:
if (memory[mp] != 0) goto J1234;
mp += 8;
J1243:
if (memory[mp] != 0) goto J1147;
mp -= 9;
J1245:
if (memory[mp] == 0) goto J1247;
mp -= 9;
J1247:
if (memory[mp] != 0) goto J1245;
mp += 4;
J1249:
if (memory[mp] == 0) goto J1254;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 4;
J1254:
if (memory[mp] != 0) goto J1249;
mp -= 4;
J1256:
if (memory[mp] == 0) goto J1344;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp += 5;
J1261:
if (memory[mp] == 0) goto J1279;
mp += 1;
memory[mp] += 1;
mp += 2;
J1265:
if (memory[mp] == 0) goto J1270;
memory[mp] -= 1;
mp -= 2;
memory[mp] -= 1;
mp += 2;
J1270:
if (memory[mp] != 0) goto J1265;
mp -= 2;
J1272:
if (memory[mp] == 0) goto J1277;
memory[mp] -= 1;
mp += 2;
memory[mp] += 1;
mp -= 2;
J1277:
if (memory[mp] != 0) goto J1272;
mp += 8;
J1279:
if (memory[mp] != 0) goto J1261;
mp -= 8;
memory[mp] += 1;
mp -= 1;
J1283:
if (memory[mp] == 0) goto J1340;
mp += 1;
J1285:
if (memory[mp] == 0) goto J1315;
memory[mp] -= 1;
mp += 5;
memory[mp] += 1;
mp -= 4;
J1290:
if (memory[mp] == 0) goto J1304;
memory[mp] -= 1;
mp += 4;
memory[mp] -= 1;
mp -= 14;
memory[mp] += 1;
mp += 11;
J1297:
if (memory[mp] == 0) goto J1302;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp -= 3;
J1302:
if (memory[mp] != 0) goto J1297;
mp -= 1;
J1304:
if (memory[mp] != 0) goto J1290;
mp += 1;
J1306:
if (memory[mp] == 0) goto J1313;
memory[mp] -= 1;
mp += 3;
memory[mp] -= 1;
mp -= 14;
memory[mp] += 1;
mp += 11;
J1313:
if (memory[mp] != 0) goto J1306;
mp -= 2;
J1315:
if (memory[mp] != 0) goto J1285;
mp += 1;
J1317:
if (memory[mp] == 0) goto J1331;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp -= 3;
J1322:
if (memory[mp] == 0) goto J1329;
memory[mp] -= 1;
mp += 3;
memory[mp] -= 1;
mp -= 14;
memory[mp] += 1;
mp += 11;
J1329:
if (memory[mp] != 0) goto J1322;
mp -= 1;
J1331:
if (memory[mp] != 0) goto J1317;
mp += 1;
J1333:
if (memory[mp] == 0) goto J1338;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp -= 3;
J1338:
if (memory[mp] != 0) goto J1333;
mp -= 12;
J1340:
if (memory[mp] != 0) goto J1283;
mp += 4;
memory[mp] = 0;
mp -= 4;
J1344:
if (memory[mp] != 0) goto J1256;
mp += 3;
J1346:
if (memory[mp] == 0) goto J1351;
memory[mp] -= 1;
mp -= 3;
memory[mp] += 1;
mp += 3;
J1351:
if (memory[mp] != 0) goto J1346;
mp -= 3;
J1353:
if (memory[mp] == 0) goto J1441;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp += 6;
J1358:
if (memory[mp] == 0) goto J1376;
mp += 1;
memory[mp] += 1;
mp += 1;
J1362:
if (memory[mp] == 0) goto J1367;
memory[mp] -= 1;
mp -= 1;
memory[mp] -= 1;
mp += 1;
J1367:
if (memory[mp] != 0) goto J1362;
mp -= 1;
J1369:
if (memory[mp] == 0) goto J1374;
memory[mp] -= 1;
mp += 1;
memory[mp] += 1;
mp -= 1;
J1374:
if (memory[mp] != 0) goto J1369;
mp += 8;
J1376:
if (memory[mp] != 0) goto J1358;
mp -= 8;
memory[mp] += 1;
mp -= 1;
J1380:
if (memory[mp] == 0) goto J1437;
mp += 1;
J1382:
if (memory[mp] == 0) goto J1412;
memory[mp] -= 1;
mp += 5;
memory[mp] += 1;
mp -= 3;
J1387:
if (memory[mp] == 0) goto J1401;
memory[mp] -= 1;
mp += 3;
memory[mp] -= 1;
mp -= 14;
memory[mp] += 1;
mp += 10;
J1394:
if (memory[mp] == 0) goto J1399;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp -= 4;
J1399:
if (memory[mp] != 0) goto J1394;
mp += 1;
J1401:
if (memory[mp] != 0) goto J1387;
mp -= 1;
J1403:
if (memory[mp] == 0) goto J1410;
memory[mp] -= 1;
mp += 4;
memory[mp] -= 1;
mp -= 14;
memory[mp] += 1;
mp += 10;
J1410:
if (memory[mp] != 0) goto J1403;
mp -= 1;
J1412:
if (memory[mp] != 0) goto J1382;
mp += 2;
J1414:
if (memory[mp] == 0) goto J1428;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp -= 4;
J1419:
if (memory[mp] == 0) goto J1426;
memory[mp] -= 1;
mp += 4;
memory[mp] -= 1;
mp -= 14;
memory[mp] += 1;
mp += 10;
J1426:
if (memory[mp] != 0) goto J1419;
mp += 1;
J1428:
if (memory[mp] != 0) goto J1414;
mp -= 1;
J1430:
if (memory[mp] == 0) goto J1435;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp -= 4;
J1435:
if (memory[mp] != 0) goto J1430;
mp -= 11;
J1437:
if (memory[mp] != 0) goto J1380;
mp += 6;
memory[mp] += 1;
mp -= 6;
J1441:
if (memory[mp] != 0) goto J1353;
J1442:
if (memory[mp] != 0) goto J1142;
mp += 4;
J1444:
if (memory[mp] == 0) goto J1449;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 4;
J1449:
if (memory[mp] != 0) goto J1444;
mp -= 4;
J1451:
if (memory[mp] == 0) goto J1518;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp += 5;
J1456:
if (memory[mp] == 0) goto J1458;
mp += 9;
J1458:
if (memory[mp] != 0) goto J1456;
mp -= 9;
J1460:
if (memory[mp] == 0) goto J1517;
mp += 1;
J1462:
if (memory[mp] == 0) goto J1492;
memory[mp] -= 1;
mp += 5;
memory[mp] += 1;
mp -= 4;
J1467:
if (memory[mp] == 0) goto J1481;
memory[mp] -= 1;
mp += 4;
memory[mp] -= 1;
mp -= 14;
memory[mp] += 1;
mp += 11;
J1474:
if (memory[mp] == 0) goto J1479;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp -= 3;
J1479:
if (memory[mp] != 0) goto J1474;
mp -= 1;
J1481:
if (memory[mp] != 0) goto J1467;
mp += 1;
J1483:
if (memory[mp] == 0) goto J1490;
memory[mp] -= 1;
mp += 3;
memory[mp] -= 1;
mp -= 14;
memory[mp] += 1;
mp += 11;
J1490:
if (memory[mp] != 0) goto J1483;
mp -= 2;
J1492:
if (memory[mp] != 0) goto J1462;
mp += 1;
J1494:
if (memory[mp] == 0) goto J1508;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp -= 3;
J1499:
if (memory[mp] == 0) goto J1506;
memory[mp] -= 1;
mp += 3;
memory[mp] -= 1;
mp -= 14;
memory[mp] += 1;
mp += 11;
J1506:
if (memory[mp] != 0) goto J1499;
mp -= 1;
J1508:
if (memory[mp] != 0) goto J1494;
mp += 1;
J1510:
if (memory[mp] == 0) goto J1515;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp -= 3;
J1515:
if (memory[mp] != 0) goto J1510;
mp -= 12;
J1517:
if (memory[mp] != 0) goto J1460;
J1518:
if (memory[mp] != 0) goto J1451;
mp += 1;
memory[mp] = 0;
mp += 2;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 5;
J1526:
if (memory[mp] == 0) goto J1532;
mp += 2;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 6;
J1532:
if (memory[mp] != 0) goto J1526;
mp -= 9;
J1534:
if (memory[mp] == 0) goto J1536;
mp -= 9;
J1536:
if (memory[mp] != 0) goto J1534;
mp += 9;
J1538:
if (memory[mp] == 0) goto J1556;
mp += 5;
J1540:
if (memory[mp] == 0) goto J1545;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 4;
J1545:
if (memory[mp] != 0) goto J1540;
mp -= 4;
J1547:
if (memory[mp] == 0) goto J1554;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp -= 3;
memory[mp] += 1;
mp -= 1;
J1554:
if (memory[mp] != 0) goto J1547;
mp += 8;
J1556:
if (memory[mp] != 0) goto J1538;
mp -= 9;
J1558:
if (memory[mp] == 0) goto J1560;
mp -= 9;
J1560:
if (memory[mp] != 0) goto J1558;
mp += 9;
memory[mp] += 15;
J1563:
if (memory[mp] == 0) goto J1592;
J1564:
if (memory[mp] == 0) goto J1566;
mp += 9;
J1566:
if (memory[mp] != 0) goto J1564;
memory[mp] += 1;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp -= 9;
J1587:
if (memory[mp] == 0) goto J1589;
mp -= 9;
J1589:
if (memory[mp] != 0) goto J1587;
mp += 9;
memory[mp] -= 1;
J1592:
if (memory[mp] != 0) goto J1563;
memory[mp] += 1;
J1594:
if (memory[mp] == 0) goto J1598;
mp += 1;
memory[mp] += 1;
mp += 8;
J1598:
if (memory[mp] != 0) goto J1594;
mp -= 9;
J1600:
if (memory[mp] == 0) goto J1602;
mp -= 9;
J1602:
if (memory[mp] != 0) goto J1600;
mp += 9;
J1604:
if (memory[mp] == 0) goto J1671;
mp += 1;
memory[mp] -= 1;
mp += 4;
J1608:
if (memory[mp] == 0) goto J1613;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 4;
J1613:
if (memory[mp] != 0) goto J1608;
mp -= 4;
J1615:
if (memory[mp] == 0) goto J1645;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp -= 5;
J1620:
if (memory[mp] == 0) goto J1640;
memory[mp] -= 1;
mp += 2;
J1623:
if (memory[mp] == 0) goto J1628;
memory[mp] -= 1;
mp -= 2;
memory[mp] += 1;
mp += 2;
J1628:
if (memory[mp] != 0) goto J1623;
mp -= 2;
J1630:
if (memory[mp] == 0) goto J1637;
memory[mp] -= 1;
mp += 2;
memory[mp] += 1;
mp += 1;
memory[mp] += 1;
mp -= 3;
J1637:
if (memory[mp] != 0) goto J1630;
memory[mp] += 1;
mp += 9;
J1640:
if (memory[mp] != 0) goto J1620;
mp -= 8;
J1642:
if (memory[mp] == 0) goto J1644;
mp -= 9;
J1644:
if (memory[mp] != 0) goto J1642;
J1645:
if (memory[mp] != 0) goto J1615;
mp += 9;
J1647:
if (memory[mp] == 0) goto J1649;
mp += 9;
J1649:
if (memory[mp] != 0) goto J1647;
mp -= 9;
J1651:
if (memory[mp] == 0) goto J1660;
mp += 1;
J1653:
if (memory[mp] == 0) goto J1658;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J1658:
if (memory[mp] != 0) goto J1653;
mp -= 10;
J1660:
if (memory[mp] != 0) goto J1651;
mp += 1;
J1662:
if (memory[mp] == 0) goto J1667;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J1667:
if (memory[mp] != 0) goto J1662;
mp -= 1;
memory[mp] += 1;
mp += 8;
J1671:
if (memory[mp] != 0) goto J1604;
mp -= 9;
J1673:
if (memory[mp] == 0) goto J1712;
mp += 1;
memory[mp] = 0;
mp -= 1;
memory[mp] -= 1;
mp += 3;
J1679:
if (memory[mp] == 0) goto J1701;
memory[mp] -= 1;
mp -= 3;
memory[mp] += 1;
mp += 1;
J1684:
if (memory[mp] == 0) goto J1692;
mp -= 1;
memory[mp] -= 1;
mp += 1;
memory[mp] -= 1;
mp -= 7;
memory[mp] += 1;
mp += 7;
J1692:
if (memory[mp] != 0) goto J1684;
mp -= 1;
J1694:
if (memory[mp] == 0) goto J1699;
memory[mp] -= 1;
mp += 1;
memory[mp] += 1;
mp -= 1;
J1699:
if (memory[mp] != 0) goto J1694;
mp += 3;
J1701:
if (memory[mp] != 0) goto J1679;
mp -= 2;
J1703:
if (memory[mp] == 0) goto J1708;
memory[mp] -= 1;
mp += 2;
memory[mp] += 1;
mp -= 2;
J1708:
if (memory[mp] != 0) goto J1703;
mp -= 1;
memory[mp] += 1;
mp -= 9;
J1712:
if (memory[mp] != 0) goto J1673;
mp += 9;
J1714:
if (memory[mp] == 0) goto J1723;
mp += 3;
J1716:
if (memory[mp] == 0) goto J1721;
memory[mp] -= 1;
mp -= 36;
memory[mp] += 1;
mp += 36;
J1721:
if (memory[mp] != 0) goto J1716;
mp += 6;
J1723:
if (memory[mp] != 0) goto J1714;
mp -= 9;
J1725:
if (memory[mp] == 0) goto J1727;
mp -= 9;
J1727:
if (memory[mp] != 0) goto J1725;
mp += 5;
memory[mp] = 0;
mp += 4;
memory[mp] += 15;
J1732:
if (memory[mp] == 0) goto J1744;
J1733:
if (memory[mp] == 0) goto J1735;
mp += 9;
J1735:
if (memory[mp] != 0) goto J1733;
mp -= 9;
memory[mp] -= 1;
mp -= 9;
J1739:
if (memory[mp] == 0) goto J1741;
mp -= 9;
J1741:
if (memory[mp] != 0) goto J1739;
mp += 9;
memory[mp] -= 1;
J1744:
if (memory[mp] != 0) goto J1732;
memory[mp] += 1;
J1746:
if (memory[mp] == 0) goto J1842;
mp += 3;
J1748:
if (memory[mp] == 0) goto J1753;
memory[mp] -= 1;
mp -= 3;
memory[mp] -= 1;
mp += 3;
J1753:
if (memory[mp] != 0) goto J1748;
memory[mp] += 1;
mp -= 3;
J1756:
if (memory[mp] == 0) goto J1787;
memory[mp] -= 1;
mp += 3;
memory[mp] -= 1;
mp += 1;
J1761:
if (memory[mp] == 0) goto J1766;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 4;
J1766:
if (memory[mp] != 0) goto J1761;
mp -= 4;
J1768:
if (memory[mp] == 0) goto J1786;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp -= 13;
J1773:
if (memory[mp] == 0) goto J1775;
mp -= 9;
J1775:
if (memory[mp] != 0) goto J1773;
mp += 4;
memory[mp] = 0;
memory[mp] += 1;
mp += 5;
J1780:
if (memory[mp] == 0) goto J1782;
mp += 9;
J1782:
if (memory[mp] != 0) goto J1780;
mp += 1;
memory[mp] += 1;
mp -= 1;
J1786:
if (memory[mp] != 0) goto J1768;
J1787:
if (memory[mp] != 0) goto J1756;
memory[mp] += 1;
mp += 4;
J1790:
if (memory[mp] == 0) goto J1795;
memory[mp] -= 1;
mp -= 4;
memory[mp] -= 1;
mp += 4;
J1795:
if (memory[mp] != 0) goto J1790;
memory[mp] += 1;
mp -= 4;
J1798:
if (memory[mp] == 0) goto J1830;
memory[mp] -= 1;
mp += 4;
memory[mp] -= 1;
mp -= 1;
J1803:
if (memory[mp] == 0) goto J1808;
memory[mp] -= 1;
mp -= 3;
memory[mp] += 1;
mp += 3;
J1808:
if (memory[mp] != 0) goto J1803;
mp -= 3;
J1810:
if (memory[mp] == 0) goto J1829;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp -= 12;
J1815:
if (memory[mp] == 0) goto J1817;
mp -= 9;
J1817:
if (memory[mp] != 0) goto J1815;
mp += 3;
memory[mp] = 0;
memory[mp] += 1;
mp += 6;
J1822:
if (memory[mp] == 0) goto J1824;
mp += 9;
J1824:
if (memory[mp] != 0) goto J1822;
mp += 1;
memory[mp] = 0;
memory[mp] += 1;
mp -= 1;
J1829:
if (memory[mp] != 0) goto J1810;
J1830:
if (memory[mp] != 0) goto J1798;
memory[mp] += 1;
mp += 1;
J1833:
if (memory[mp] == 0) goto J1840;
memory[mp] -= 1;
mp -= 1;
J1836:
if (memory[mp] == 0) goto J1838;
mp += 9;
J1838:
if (memory[mp] != 0) goto J1836;
mp -= 8;
J1840:
if (memory[mp] != 0) goto J1833;
mp += 8;
J1842:
if (memory[mp] != 0) goto J1746;
mp -= 9;
J1844:
if (memory[mp] == 0) goto J1846;
mp -= 9;
J1846:
if (memory[mp] != 0) goto J1844;
mp += 3;
J1848:
if (memory[mp] == 0) goto J1853;
memory[mp] -= 1;
mp -= 3;
memory[mp] += 1;
mp += 3;
J1853:
if (memory[mp] != 0) goto J1848;
mp -= 3;
J1855:
if (memory[mp] == 0) goto J1940;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp += 6;
J1860:
if (memory[mp] == 0) goto J1878;
mp += 1;
memory[mp] += 1;
mp += 3;
J1864:
if (memory[mp] == 0) goto J1869;
memory[mp] -= 1;
mp -= 3;
memory[mp] -= 1;
mp += 3;
J1869:
if (memory[mp] != 0) goto J1864;
mp -= 3;
J1871:
if (memory[mp] == 0) goto J1876;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp -= 3;
J1876:
if (memory[mp] != 0) goto J1871;
mp += 8;
J1878:
if (memory[mp] != 0) goto J1860;
mp -= 8;
memory[mp] += 1;
mp -= 1;
J1882:
if (memory[mp] == 0) goto J1939;
mp += 1;
J1884:
if (memory[mp] == 0) goto J1914;
memory[mp] -= 1;
mp += 1;
memory[mp] += 1;
mp += 1;
J1889:
if (memory[mp] == 0) goto J1903;
memory[mp] -= 1;
mp -= 1;
memory[mp] -= 1;
mp -= 10;
memory[mp] += 1;
mp += 12;
J1896:
if (memory[mp] == 0) goto J1901;
memory[mp] -= 1;
mp -= 2;
memory[mp] += 1;
mp += 2;
J1901:
if (memory[mp] != 0) goto J1896;
mp -= 1;
J1903:
if (memory[mp] != 0) goto J1889;
mp += 1;
J1905:
if (memory[mp] == 0) goto J1912;
memory[mp] -= 1;
mp -= 2;
memory[mp] -= 1;
mp -= 10;
memory[mp] += 1;
mp += 12;
J1912:
if (memory[mp] != 0) goto J1905;
mp -= 3;
J1914:
if (memory[mp] != 0) goto J1884;
mp += 2;
J1916:
if (memory[mp] == 0) goto J1930;
memory[mp] -= 1;
mp -= 1;
memory[mp] += 1;
mp += 2;
J1921:
if (memory[mp] == 0) goto J1928;
memory[mp] -= 1;
mp -= 2;
memory[mp] -= 1;
mp -= 10;
memory[mp] += 1;
mp += 12;
J1928:
if (memory[mp] != 0) goto J1921;
mp -= 1;
J1930:
if (memory[mp] != 0) goto J1916;
mp += 1;
J1932:
if (memory[mp] == 0) goto J1937;
memory[mp] -= 1;
mp -= 2;
memory[mp] += 1;
mp += 2;
J1937:
if (memory[mp] != 0) goto J1932;
mp -= 13;
J1939:
if (memory[mp] != 0) goto J1882;
J1940:
if (memory[mp] != 0) goto J1855;
mp += 4;
J1942:
if (memory[mp] == 0) goto J1947;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 4;
J1947:
if (memory[mp] != 0) goto J1942;
mp -= 4;
J1949:
if (memory[mp] == 0) goto J2037;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp += 5;
J1954:
if (memory[mp] == 0) goto J1972;
mp += 1;
memory[mp] += 1;
mp += 2;
J1958:
if (memory[mp] == 0) goto J1963;
memory[mp] -= 1;
mp -= 2;
memory[mp] -= 1;
mp += 2;
J1963:
if (memory[mp] != 0) goto J1958;
mp -= 2;
J1965:
if (memory[mp] == 0) goto J1970;
memory[mp] -= 1;
mp += 2;
memory[mp] += 1;
mp -= 2;
J1970:
if (memory[mp] != 0) goto J1965;
mp += 8;
J1972:
if (memory[mp] != 0) goto J1954;
mp -= 8;
memory[mp] += 1;
mp -= 1;
J1976:
if (memory[mp] == 0) goto J2033;
mp += 1;
J1978:
if (memory[mp] == 0) goto J2008;
memory[mp] -= 1;
mp += 1;
memory[mp] += 1;
mp += 2;
J1983:
if (memory[mp] == 0) goto J1997;
memory[mp] -= 1;
mp -= 2;
memory[mp] -= 1;
mp -= 10;
memory[mp] += 1;
mp += 11;
J1990:
if (memory[mp] == 0) goto J1995;
memory[mp] -= 1;
mp -= 1;
memory[mp] += 1;
mp += 1;
J1995:
if (memory[mp] != 0) goto J1990;
mp += 1;
J1997:
if (memory[mp] != 0) goto J1983;
mp -= 1;
J1999:
if (memory[mp] == 0) goto J2006;
memory[mp] -= 1;
mp -= 1;
memory[mp] -= 1;
mp -= 10;
memory[mp] += 1;
mp += 11;
J2006:
if (memory[mp] != 0) goto J1999;
mp -= 2;
J2008:
if (memory[mp] != 0) goto J1978;
mp += 3;
J2010:
if (memory[mp] == 0) goto J2024;
memory[mp] -= 1;
mp -= 2;
memory[mp] += 1;
mp += 1;
J2015:
if (memory[mp] == 0) goto J2022;
memory[mp] -= 1;
mp -= 1;
memory[mp] -= 1;
mp -= 10;
memory[mp] += 1;
mp += 11;
J2022:
if (memory[mp] != 0) goto J2015;
mp += 1;
J2024:
if (memory[mp] != 0) goto J2010;
mp -= 1;
J2026:
if (memory[mp] == 0) goto J2031;
memory[mp] -= 1;
mp -= 1;
memory[mp] += 1;
mp += 1;
J2031:
if (memory[mp] != 0) goto J2026;
mp -= 12;
J2033:
if (memory[mp] != 0) goto J1976;
mp += 5;
memory[mp] += 1;
mp -= 5;
J2037:
if (memory[mp] != 0) goto J1949;
mp += 9;
J2039:
if (memory[mp] == 0) goto J2047;
mp += 3;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 4;
J2047:
if (memory[mp] != 0) goto J2039;
mp -= 9;
J2049:
if (memory[mp] == 0) goto J2051;
mp -= 9;
J2051:
if (memory[mp] != 0) goto J2049;
mp += 3;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 5;
J2057:
if (memory[mp] == 0) goto J2075;
mp += 7;
J2059:
if (memory[mp] == 0) goto J2064;
memory[mp] -= 1;
mp -= 6;
memory[mp] += 1;
mp += 6;
J2064:
if (memory[mp] != 0) goto J2059;
mp -= 6;
J2066:
if (memory[mp] == 0) goto J2073;
memory[mp] -= 1;
mp += 6;
memory[mp] += 1;
mp -= 4;
memory[mp] += 1;
mp -= 2;
J2073:
if (memory[mp] != 0) goto J2066;
mp += 8;
J2075:
if (memory[mp] != 0) goto J2057;
mp -= 9;
J2077:
if (memory[mp] == 0) goto J2079;
mp -= 9;
J2079:
if (memory[mp] != 0) goto J2077;
mp += 4;
memory[mp] += 1;
mp += 1;
J2083:
if (memory[mp] == 0) goto J2090;
memory[mp] -= 1;
mp -= 1;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 5;
J2090:
if (memory[mp] != 0) goto J2083;
mp += 2;
J2092:
if (memory[mp] == 0) goto J2115;
memory[mp] -= 1;
mp -= 7;
J2095:
if (memory[mp] == 0) goto J2102;
memory[mp] -= 1;
mp += 5;
memory[mp] += 1;
mp -= 1;
memory[mp] += 2;
mp -= 4;
J2102:
if (memory[mp] != 0) goto J2095;
mp += 5;
J2104:
if (memory[mp] == 0) goto J2109;
memory[mp] -= 1;
mp -= 5;
memory[mp] += 1;
mp += 5;
J2109:
if (memory[mp] != 0) goto J2104;
mp -= 1;
memory[mp] -= 1;
mp += 1;
memory[mp] += 1;
mp += 2;
J2115:
if (memory[mp] != 0) goto J2092;
mp -= 2;
J2117:
if (memory[mp] == 0) goto J2122;
memory[mp] -= 1;
mp += 2;
memory[mp] += 1;
mp -= 2;
J2122:
if (memory[mp] != 0) goto J2117;
mp -= 5;
J2124:
if (memory[mp] == 0) goto J2129;
memory[mp] -= 1;
mp += 5;
memory[mp] += 1;
mp -= 5;
J2129:
if (memory[mp] != 0) goto J2124;
memory[mp] += 1;
mp += 4;
J2132:
if (memory[mp] == 0) goto J2137;
memory[mp] -= 1;
mp -= 4;
memory[mp] -= 1;
mp += 4;
J2137:
if (memory[mp] != 0) goto J2132;
memory[mp] += 1;
mp -= 4;
J2140:
if (memory[mp] == 0) goto J2455;
memory[mp] -= 1;
mp += 4;
memory[mp] -= 1;
mp += 5;
J2145:
if (memory[mp] == 0) goto J2241;
mp += 3;
J2147:
if (memory[mp] == 0) goto J2152;
memory[mp] -= 1;
mp -= 3;
memory[mp] -= 1;
mp += 3;
J2152:
if (memory[mp] != 0) goto J2147;
memory[mp] += 1;
mp -= 3;
J2155:
if (memory[mp] == 0) goto J2186;
memory[mp] -= 1;
mp += 3;
memory[mp] -= 1;
mp -= 1;
J2160:
if (memory[mp] == 0) goto J2165;
memory[mp] -= 1;
mp -= 2;
memory[mp] += 1;
mp += 2;
J2165:
if (memory[mp] != 0) goto J2160;
mp -= 2;
J2167:
if (memory[mp] == 0) goto J2185;
memory[mp] -= 1;
mp += 2;
memory[mp] += 1;
mp -= 11;
J2172:
if (memory[mp] == 0) goto J2174;
mp -= 9;
J2174:
if (memory[mp] != 0) goto J2172;
mp += 4;
memory[mp] = 0;
memory[mp] += 1;
mp += 5;
J2179:
if (memory[mp] == 0) goto J2181;
mp += 9;
J2181:
if (memory[mp] != 0) goto J2179;
mp += 1;
memory[mp] += 1;
mp -= 1;
J2185:
if (memory[mp] != 0) goto J2167;
J2186:
if (memory[mp] != 0) goto J2155;
memory[mp] += 1;
mp += 2;
J2189:
if (memory[mp] == 0) goto J2194;
memory[mp] -= 1;
mp -= 2;
memory[mp] -= 1;
mp += 2;
J2194:
if (memory[mp] != 0) goto J2189;
memory[mp] += 1;
mp -= 2;
J2197:
if (memory[mp] == 0) goto J2229;
memory[mp] -= 1;
mp += 2;
memory[mp] -= 1;
mp += 1;
J2202:
if (memory[mp] == 0) goto J2207;
memory[mp] -= 1;
mp -= 3;
memory[mp] += 1;
mp += 3;
J2207:
if (memory[mp] != 0) goto J2202;
mp -= 3;
J2209:
if (memory[mp] == 0) goto J2228;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp -= 12;
J2214:
if (memory[mp] == 0) goto J2216;
mp -= 9;
J2216:
if (memory[mp] != 0) goto J2214;
mp += 3;
memory[mp] = 0;
memory[mp] += 1;
mp += 6;
J2221:
if (memory[mp] == 0) goto J2223;
mp += 9;
J2223:
if (memory[mp] != 0) goto J2221;
mp += 1;
memory[mp] = 0;
memory[mp] += 1;
mp -= 1;
J2228:
if (memory[mp] != 0) goto J2209;
J2229:
if (memory[mp] != 0) goto J2197;
memory[mp] += 1;
mp += 1;
J2232:
if (memory[mp] == 0) goto J2239;
memory[mp] -= 1;
mp -= 1;
J2235:
if (memory[mp] == 0) goto J2237;
mp += 9;
J2237:
if (memory[mp] != 0) goto J2235;
mp -= 8;
J2239:
if (memory[mp] != 0) goto J2232;
mp += 8;
J2241:
if (memory[mp] != 0) goto J2145;
mp -= 9;
J2243:
if (memory[mp] == 0) goto J2245;
mp -= 9;
J2245:
if (memory[mp] != 0) goto J2243;
mp += 3;
J2247:
if (memory[mp] == 0) goto J2252;
memory[mp] -= 1;
mp -= 3;
memory[mp] += 1;
mp += 3;
J2252:
if (memory[mp] != 0) goto J2247;
mp -= 3;
J2254:
if (memory[mp] == 0) goto J2357;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp += 6;
J2259:
if (memory[mp] == 0) goto J2277;
mp += 1;
memory[mp] += 1;
mp += 1;
J2263:
if (memory[mp] == 0) goto J2268;
memory[mp] -= 1;
mp -= 1;
memory[mp] -= 1;
mp += 1;
J2268:
if (memory[mp] != 0) goto J2263;
mp -= 1;
J2270:
if (memory[mp] == 0) goto J2275;
memory[mp] -= 1;
mp += 1;
memory[mp] += 1;
mp -= 1;
J2275:
if (memory[mp] != 0) goto J2270;
mp += 8;
J2277:
if (memory[mp] != 0) goto J2259;
mp -= 8;
memory[mp] += 1;
mp -= 1;
J2281:
if (memory[mp] == 0) goto J2338;
mp += 1;
J2283:
if (memory[mp] == 0) goto J2313;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp -= 2;
J2288:
if (memory[mp] == 0) goto J2302;
memory[mp] -= 1;
mp += 2;
memory[mp] -= 1;
mp -= 13;
memory[mp] += 1;
mp += 10;
J2295:
if (memory[mp] == 0) goto J2300;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp -= 3;
J2300:
if (memory[mp] != 0) goto J2295;
mp += 1;
J2302:
if (memory[mp] != 0) goto J2288;
mp -= 1;
J2304:
if (memory[mp] == 0) goto J2311;
memory[mp] -= 1;
mp += 3;
memory[mp] -= 1;
mp -= 13;
memory[mp] += 1;
mp += 10;
J2311:
if (memory[mp] != 0) goto J2304;
mp -= 1;
J2313:
if (memory[mp] != 0) goto J2283;
mp += 2;
J2315:
if (memory[mp] == 0) goto J2329;
memory[mp] -= 1;
mp += 2;
memory[mp] += 1;
mp -= 3;
J2320:
if (memory[mp] == 0) goto J2327;
memory[mp] -= 1;
mp += 3;
memory[mp] -= 1;
mp -= 13;
memory[mp] += 1;
mp += 10;
J2327:
if (memory[mp] != 0) goto J2320;
mp += 1;
J2329:
if (memory[mp] != 0) goto J2315;
mp -= 1;
J2331:
if (memory[mp] == 0) goto J2336;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp -= 3;
J2336:
if (memory[mp] != 0) goto J2331;
mp -= 11;
J2338:
if (memory[mp] != 0) goto J2281;
mp += 5;
memory[mp] = 0;
mp += 2;
J2342:
if (memory[mp] == 0) goto J2347;
memory[mp] -= 1;
mp -= 7;
memory[mp] += 1;
mp += 7;
J2347:
if (memory[mp] != 0) goto J2342;
mp -= 7;
J2349:
if (memory[mp] == 0) goto J2356;
memory[mp] -= 1;
mp += 7;
memory[mp] += 1;
mp -= 2;
memory[mp] += 1;
mp -= 5;
J2356:
if (memory[mp] != 0) goto J2349;
J2357:
if (memory[mp] != 0) goto J2254;
mp += 4;
J2359:
if (memory[mp] == 0) goto J2364;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 4;
J2364:
if (memory[mp] != 0) goto J2359;
mp -= 4;
J2366:
if (memory[mp] == 0) goto J2451;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp += 5;
J2371:
if (memory[mp] == 0) goto J2389;
mp += 1;
memory[mp] += 1;
mp += 2;
J2375:
if (memory[mp] == 0) goto J2380;
memory[mp] -= 1;
mp -= 2;
memory[mp] -= 1;
mp += 2;
J2380:
if (memory[mp] != 0) goto J2375;
mp -= 2;
J2382:
if (memory[mp] == 0) goto J2387;
memory[mp] -= 1;
mp += 2;
memory[mp] += 1;
mp -= 2;
J2387:
if (memory[mp] != 0) goto J2382;
mp += 8;
J2389:
if (memory[mp] != 0) goto J2371;
mp -= 8;
memory[mp] += 1;
mp -= 1;
J2393:
if (memory[mp] == 0) goto J2450;
mp += 1;
J2395:
if (memory[mp] == 0) goto J2425;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp -= 3;
J2400:
if (memory[mp] == 0) goto J2414;
memory[mp] -= 1;
mp += 3;
memory[mp] -= 1;
mp -= 13;
memory[mp] += 1;
mp += 11;
J2407:
if (memory[mp] == 0) goto J2412;
memory[mp] -= 1;
mp += 2;
memory[mp] += 1;
mp -= 2;
J2412:
if (memory[mp] != 0) goto J2407;
mp -= 1;
J2414:
if (memory[mp] != 0) goto J2400;
mp += 1;
J2416:
if (memory[mp] == 0) goto J2423;
memory[mp] -= 1;
mp += 2;
memory[mp] -= 1;
mp -= 13;
memory[mp] += 1;
mp += 11;
J2423:
if (memory[mp] != 0) goto J2416;
mp -= 2;
J2425:
if (memory[mp] != 0) goto J2395;
mp += 1;
J2427:
if (memory[mp] == 0) goto J2441;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp -= 2;
J2432:
if (memory[mp] == 0) goto J2439;
memory[mp] -= 1;
mp += 2;
memory[mp] -= 1;
mp -= 13;
memory[mp] += 1;
mp += 11;
J2439:
if (memory[mp] != 0) goto J2432;
mp -= 1;
J2441:
if (memory[mp] != 0) goto J2427;
mp += 1;
J2443:
if (memory[mp] == 0) goto J2448;
memory[mp] -= 1;
mp += 2;
memory[mp] += 1;
mp -= 2;
J2448:
if (memory[mp] != 0) goto J2443;
mp -= 12;
J2450:
if (memory[mp] != 0) goto J2393;
J2451:
if (memory[mp] != 0) goto J2366;
mp += 4;
memory[mp] = 0;
mp -= 4;
J2455:
if (memory[mp] != 0) goto J2140;
mp += 4;
J2457:
if (memory[mp] == 0) goto J2462;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 4;
J2462:
if (memory[mp] != 0) goto J2457;
mp -= 4;
J2464:
if (memory[mp] == 0) goto J2549;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp += 1;
memory[mp] = 0;
mp += 2;
J2471:
if (memory[mp] == 0) goto J2476;
memory[mp] -= 1;
mp -= 7;
memory[mp] += 1;
mp += 7;
J2476:
if (memory[mp] != 0) goto J2471;
mp -= 7;
J2478:
if (memory[mp] == 0) goto J2485;
memory[mp] -= 1;
mp += 7;
memory[mp] += 1;
mp -= 2;
memory[mp] += 1;
mp -= 5;
J2485:
if (memory[mp] != 0) goto J2478;
mp += 9;
J2487:
if (memory[mp] == 0) goto J2489;
mp += 9;
J2489:
if (memory[mp] != 0) goto J2487;
mp -= 9;
J2491:
if (memory[mp] == 0) goto J2548;
mp += 1;
J2493:
if (memory[mp] == 0) goto J2523;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp -= 3;
J2498:
if (memory[mp] == 0) goto J2512;
memory[mp] -= 1;
mp += 3;
memory[mp] -= 1;
mp -= 13;
memory[mp] += 1;
mp += 11;
J2505:
if (memory[mp] == 0) goto J2510;
memory[mp] -= 1;
mp += 2;
memory[mp] += 1;
mp -= 2;
J2510:
if (memory[mp] != 0) goto J2505;
mp -= 1;
J2512:
if (memory[mp] != 0) goto J2498;
mp += 1;
J2514:
if (memory[mp] == 0) goto J2521;
memory[mp] -= 1;
mp += 2;
memory[mp] -= 1;
mp -= 13;
memory[mp] += 1;
mp += 11;
J2521:
if (memory[mp] != 0) goto J2514;
mp -= 2;
J2523:
if (memory[mp] != 0) goto J2493;
mp += 1;
J2525:
if (memory[mp] == 0) goto J2539;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp -= 2;
J2530:
if (memory[mp] == 0) goto J2537;
memory[mp] -= 1;
mp += 2;
memory[mp] -= 1;
mp -= 13;
memory[mp] += 1;
mp += 11;
J2537:
if (memory[mp] != 0) goto J2530;
mp -= 1;
J2539:
if (memory[mp] != 0) goto J2525;
mp += 1;
J2541:
if (memory[mp] == 0) goto J2546;
memory[mp] -= 1;
mp += 2;
memory[mp] += 1;
mp -= 2;
J2546:
if (memory[mp] != 0) goto J2541;
mp -= 12;
J2548:
if (memory[mp] != 0) goto J2491;
J2549:
if (memory[mp] != 0) goto J2464;
mp += 9;
J2551:
if (memory[mp] == 0) goto J2557;
mp += 2;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 6;
J2557:
if (memory[mp] != 0) goto J2551;
mp -= 9;
J2559:
if (memory[mp] == 0) goto J2561;
mp -= 9;
J2561:
if (memory[mp] != 0) goto J2559;
mp += 3;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 5;
J2567:
if (memory[mp] == 0) goto J2585;
mp += 5;
J2569:
if (memory[mp] == 0) goto J2574;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 4;
J2574:
if (memory[mp] != 0) goto J2569;
mp -= 4;
J2576:
if (memory[mp] == 0) goto J2583;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp -= 3;
memory[mp] += 1;
mp -= 1;
J2583:
if (memory[mp] != 0) goto J2576;
mp += 8;
J2585:
if (memory[mp] != 0) goto J2567;
mp -= 9;
J2587:
if (memory[mp] == 0) goto J2589;
mp -= 9;
J2589:
if (memory[mp] != 0) goto J2587;
mp += 9;
J2591:
if (memory[mp] == 0) goto J2609;
mp += 6;
J2593:
if (memory[mp] == 0) goto J2598;
memory[mp] -= 1;
mp -= 5;
memory[mp] += 1;
mp += 5;
J2598:
if (memory[mp] != 0) goto J2593;
mp -= 5;
J2600:
if (memory[mp] == 0) goto J2607;
memory[mp] -= 1;
mp += 5;
memory[mp] += 1;
mp -= 3;
memory[mp] += 1;
mp -= 2;
J2607:
if (memory[mp] != 0) goto J2600;
mp += 8;
J2609:
if (memory[mp] != 0) goto J2591;
mp -= 9;
J2611:
if (memory[mp] == 0) goto J2613;
mp -= 9;
J2613:
if (memory[mp] != 0) goto J2611;
mp += 9;
memory[mp] += 15;
J2616:
if (memory[mp] == 0) goto J2645;
J2617:
if (memory[mp] == 0) goto J2619;
mp += 9;
J2619:
if (memory[mp] != 0) goto J2617;
memory[mp] += 1;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp -= 9;
J2640:
if (memory[mp] == 0) goto J2642;
mp -= 9;
J2642:
if (memory[mp] != 0) goto J2640;
mp += 9;
memory[mp] -= 1;
J2645:
if (memory[mp] != 0) goto J2616;
memory[mp] += 1;
J2647:
if (memory[mp] == 0) goto J2651;
mp += 1;
memory[mp] += 1;
mp += 8;
J2651:
if (memory[mp] != 0) goto J2647;
mp -= 9;
J2653:
if (memory[mp] == 0) goto J2655;
mp -= 9;
J2655:
if (memory[mp] != 0) goto J2653;
mp += 9;
J2657:
if (memory[mp] == 0) goto J2724;
mp += 1;
memory[mp] -= 1;
mp += 4;
J2661:
if (memory[mp] == 0) goto J2666;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 4;
J2666:
if (memory[mp] != 0) goto J2661;
mp -= 4;
J2668:
if (memory[mp] == 0) goto J2698;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp -= 5;
J2673:
if (memory[mp] == 0) goto J2693;
memory[mp] -= 1;
mp += 2;
J2676:
if (memory[mp] == 0) goto J2681;
memory[mp] -= 1;
mp -= 2;
memory[mp] += 1;
mp += 2;
J2681:
if (memory[mp] != 0) goto J2676;
mp -= 2;
J2683:
if (memory[mp] == 0) goto J2690;
memory[mp] -= 1;
mp += 2;
memory[mp] += 1;
mp += 2;
memory[mp] += 1;
mp -= 4;
J2690:
if (memory[mp] != 0) goto J2683;
memory[mp] += 1;
mp += 9;
J2693:
if (memory[mp] != 0) goto J2673;
mp -= 8;
J2695:
if (memory[mp] == 0) goto J2697;
mp -= 9;
J2697:
if (memory[mp] != 0) goto J2695;
J2698:
if (memory[mp] != 0) goto J2668;
mp += 9;
J2700:
if (memory[mp] == 0) goto J2702;
mp += 9;
J2702:
if (memory[mp] != 0) goto J2700;
mp -= 9;
J2704:
if (memory[mp] == 0) goto J2713;
mp += 1;
J2706:
if (memory[mp] == 0) goto J2711;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J2711:
if (memory[mp] != 0) goto J2706;
mp -= 10;
J2713:
if (memory[mp] != 0) goto J2704;
mp += 1;
J2715:
if (memory[mp] == 0) goto J2720;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J2720:
if (memory[mp] != 0) goto J2715;
mp -= 1;
memory[mp] += 1;
mp += 8;
J2724:
if (memory[mp] != 0) goto J2657;
mp -= 9;
J2726:
if (memory[mp] == 0) goto J2765;
mp += 1;
memory[mp] = 0;
mp -= 1;
memory[mp] -= 1;
mp += 4;
J2732:
if (memory[mp] == 0) goto J2754;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 1;
J2737:
if (memory[mp] == 0) goto J2745;
mp -= 1;
memory[mp] -= 1;
mp += 1;
memory[mp] -= 1;
mp -= 6;
memory[mp] += 1;
mp += 6;
J2745:
if (memory[mp] != 0) goto J2737;
mp -= 1;
J2747:
if (memory[mp] == 0) goto J2752;
memory[mp] -= 1;
mp += 1;
memory[mp] += 1;
mp -= 1;
J2752:
if (memory[mp] != 0) goto J2747;
mp += 4;
J2754:
if (memory[mp] != 0) goto J2732;
mp -= 3;
J2756:
if (memory[mp] == 0) goto J2761;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp -= 3;
J2761:
if (memory[mp] != 0) goto J2756;
mp -= 1;
memory[mp] += 1;
mp -= 9;
J2765:
if (memory[mp] != 0) goto J2726;
mp += 9;
J2767:
if (memory[mp] == 0) goto J2771;
mp += 1;
memory[mp] += 1;
mp += 8;
J2771:
if (memory[mp] != 0) goto J2767;
mp -= 9;
J2773:
if (memory[mp] == 0) goto J2775;
mp -= 9;
J2775:
if (memory[mp] != 0) goto J2773;
mp += 9;
J2777:
if (memory[mp] == 0) goto J2844;
mp += 1;
memory[mp] -= 1;
mp += 5;
J2781:
if (memory[mp] == 0) goto J2786;
memory[mp] -= 1;
mp -= 5;
memory[mp] += 1;
mp += 5;
J2786:
if (memory[mp] != 0) goto J2781;
mp -= 5;
J2788:
if (memory[mp] == 0) goto J2818;
memory[mp] -= 1;
mp += 5;
memory[mp] += 1;
mp -= 6;
J2793:
if (memory[mp] == 0) goto J2813;
memory[mp] -= 1;
mp += 3;
J2796:
if (memory[mp] == 0) goto J2801;
memory[mp] -= 1;
mp -= 3;
memory[mp] += 1;
mp += 3;
J2801:
if (memory[mp] != 0) goto J2796;
mp -= 3;
J2803:
if (memory[mp] == 0) goto J2810;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp += 1;
memory[mp] += 1;
mp -= 4;
J2810:
if (memory[mp] != 0) goto J2803;
memory[mp] += 1;
mp += 9;
J2813:
if (memory[mp] != 0) goto J2793;
mp -= 8;
J2815:
if (memory[mp] == 0) goto J2817;
mp -= 9;
J2817:
if (memory[mp] != 0) goto J2815;
J2818:
if (memory[mp] != 0) goto J2788;
mp += 9;
J2820:
if (memory[mp] == 0) goto J2822;
mp += 9;
J2822:
if (memory[mp] != 0) goto J2820;
mp -= 9;
J2824:
if (memory[mp] == 0) goto J2833;
mp += 2;
J2826:
if (memory[mp] == 0) goto J2831;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J2831:
if (memory[mp] != 0) goto J2826;
mp -= 11;
J2833:
if (memory[mp] != 0) goto J2824;
mp += 2;
J2835:
if (memory[mp] == 0) goto J2840;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J2840:
if (memory[mp] != 0) goto J2835;
mp -= 2;
memory[mp] += 1;
mp += 8;
J2844:
if (memory[mp] != 0) goto J2777;
mp -= 9;
J2846:
if (memory[mp] == 0) goto J2885;
mp += 1;
memory[mp] = 0;
mp -= 1;
memory[mp] -= 1;
mp += 4;
J2852:
if (memory[mp] == 0) goto J2874;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 1;
J2857:
if (memory[mp] == 0) goto J2865;
mp -= 1;
memory[mp] -= 1;
mp += 1;
memory[mp] -= 1;
mp -= 6;
memory[mp] += 1;
mp += 6;
J2865:
if (memory[mp] != 0) goto J2857;
mp -= 1;
J2867:
if (memory[mp] == 0) goto J2872;
memory[mp] -= 1;
mp += 1;
memory[mp] += 1;
mp -= 1;
J2872:
if (memory[mp] != 0) goto J2867;
mp += 4;
J2874:
if (memory[mp] != 0) goto J2852;
mp -= 3;
J2876:
if (memory[mp] == 0) goto J2881;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp -= 3;
J2881:
if (memory[mp] != 0) goto J2876;
mp -= 1;
memory[mp] += 1;
mp -= 9;
J2885:
if (memory[mp] != 0) goto J2846;
mp += 9;
J2887:
if (memory[mp] == 0) goto J2896;
mp += 4;
J2889:
if (memory[mp] == 0) goto J2894;
memory[mp] -= 1;
mp -= 36;
memory[mp] += 1;
mp += 36;
J2894:
if (memory[mp] != 0) goto J2889;
mp += 5;
J2896:
if (memory[mp] != 0) goto J2887;
mp -= 9;
J2898:
if (memory[mp] == 0) goto J2900;
mp -= 9;
J2900:
if (memory[mp] != 0) goto J2898;
mp += 9;
memory[mp] += 15;
J2903:
if (memory[mp] == 0) goto J2915;
J2904:
if (memory[mp] == 0) goto J2906;
mp += 9;
J2906:
if (memory[mp] != 0) goto J2904;
mp -= 9;
memory[mp] -= 1;
mp -= 9;
J2910:
if (memory[mp] == 0) goto J2912;
mp -= 9;
J2912:
if (memory[mp] != 0) goto J2910;
mp += 9;
memory[mp] -= 1;
J2915:
if (memory[mp] != 0) goto J2903;
memory[mp] += 1;
mp += 21;
memory[mp] += 1;
mp -= 3;
J2920:
if (memory[mp] == 0) goto J2922;
mp -= 9;
J2922:
if (memory[mp] != 0) goto J2920;
mp += 9;
J2924:
if (memory[mp] == 0) goto J3020;
mp += 3;
J2926:
if (memory[mp] == 0) goto J2931;
memory[mp] -= 1;
mp -= 3;
memory[mp] -= 1;
mp += 3;
J2931:
if (memory[mp] != 0) goto J2926;
memory[mp] += 1;
mp -= 3;
J2934:
if (memory[mp] == 0) goto J2965;
memory[mp] -= 1;
mp += 3;
memory[mp] -= 1;
mp += 1;
J2939:
if (memory[mp] == 0) goto J2944;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 4;
J2944:
if (memory[mp] != 0) goto J2939;
mp -= 4;
J2946:
if (memory[mp] == 0) goto J2964;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp -= 13;
J2951:
if (memory[mp] == 0) goto J2953;
mp -= 9;
J2953:
if (memory[mp] != 0) goto J2951;
mp += 4;
memory[mp] = 0;
memory[mp] += 1;
mp += 5;
J2958:
if (memory[mp] == 0) goto J2960;
mp += 9;
J2960:
if (memory[mp] != 0) goto J2958;
mp += 1;
memory[mp] += 1;
mp -= 1;
J2964:
if (memory[mp] != 0) goto J2946;
J2965:
if (memory[mp] != 0) goto J2934;
memory[mp] += 1;
mp += 4;
J2968:
if (memory[mp] == 0) goto J2973;
memory[mp] -= 1;
mp -= 4;
memory[mp] -= 1;
mp += 4;
J2973:
if (memory[mp] != 0) goto J2968;
memory[mp] += 1;
mp -= 4;
J2976:
if (memory[mp] == 0) goto J3008;
memory[mp] -= 1;
mp += 4;
memory[mp] -= 1;
mp -= 1;
J2981:
if (memory[mp] == 0) goto J2986;
memory[mp] -= 1;
mp -= 3;
memory[mp] += 1;
mp += 3;
J2986:
if (memory[mp] != 0) goto J2981;
mp -= 3;
J2988:
if (memory[mp] == 0) goto J3007;
memory[mp] -= 1;
mp += 3;
memory[mp] += 1;
mp -= 12;
J2993:
if (memory[mp] == 0) goto J2995;
mp -= 9;
J2995:
if (memory[mp] != 0) goto J2993;
mp += 3;
memory[mp] = 0;
memory[mp] += 1;
mp += 6;
J3000:
if (memory[mp] == 0) goto J3002;
mp += 9;
J3002:
if (memory[mp] != 0) goto J3000;
mp += 1;
memory[mp] = 0;
memory[mp] += 1;
mp -= 1;
J3007:
if (memory[mp] != 0) goto J2988;
J3008:
if (memory[mp] != 0) goto J2976;
memory[mp] += 1;
mp += 1;
J3011:
if (memory[mp] == 0) goto J3018;
memory[mp] -= 1;
mp -= 1;
J3014:
if (memory[mp] == 0) goto J3016;
mp += 9;
J3016:
if (memory[mp] != 0) goto J3014;
mp -= 8;
J3018:
if (memory[mp] != 0) goto J3011;
mp += 8;
J3020:
if (memory[mp] != 0) goto J2924;
mp -= 9;
J3022:
if (memory[mp] == 0) goto J3024;
mp -= 9;
J3024:
if (memory[mp] != 0) goto J3022;
mp += 2;
memory[mp] -= 1;
mp += 2;
J3028:
if (memory[mp] == 0) goto J3033;
memory[mp] -= 1;
mp -= 4;
memory[mp] += 1;
mp += 4;
J3033:
if (memory[mp] != 0) goto J3028;
mp -= 4;
J3035:
if (memory[mp] == 0) goto J3042;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp -= 2;
memory[mp] = 0;
mp -= 2;
J3042:
if (memory[mp] != 0) goto J3035;
mp += 2;
J3044:
if (memory[mp] != 0) goto J622;
mp -= 2;
memory[mp] += 1;
mp += 4;
J3048:
if (memory[mp] == 0) goto J3053;
memory[mp] -= 1;
mp -= 4;
memory[mp] -= 1;
mp += 4;
J3053:
if (memory[mp] != 0) goto J3048;
memory[mp] += 1;
mp -= 4;
J3056:
if (memory[mp] == 0) goto J3063;
memory[mp] -= 1;
mp += 4;
memory[mp] -= 1;
mp -= 6;
putchar(memory[mp]);
mp += 2;
J3063:
if (memory[mp] != 0) goto J3056;
mp += 4;
J3065:
if (memory[mp] == 0) goto J3070;
memory[mp] -= 1;
mp -= 7;
putchar(memory[mp]);
mp += 7;
J3070:
if (memory[mp] != 0) goto J3065;
mp -= 3;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 3;
J3084:
if (memory[mp] == 0) goto J3098;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 1;
memory[mp] = 0;
mp += 3;
J3098:
if (memory[mp] != 0) goto J3084;
mp -= 9;
J3100:
if (memory[mp] == 0) goto J3102;
mp -= 9;
J3102:
if (memory[mp] != 0) goto J3100;
mp += 9;
J3104:
if (memory[mp] == 0) goto J3108;
mp += 5;
memory[mp] = 0;
mp += 4;
J3108:
if (memory[mp] != 0) goto J3104;
mp -= 9;
J3110:
if (memory[mp] == 0) goto J3112;
mp -= 9;
J3112:
if (memory[mp] != 0) goto J3110;
mp += 1;
memory[mp] += 11;
J3115:
if (memory[mp] == 0) goto J3124;
memory[mp] -= 1;
J3117:
if (memory[mp] == 0) goto J3122;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J3122:
if (memory[mp] != 0) goto J3117;
mp += 9;
J3124:
if (memory[mp] != 0) goto J3115;
mp += 4;
memory[mp] += 1;
mp += 9;
memory[mp] += 1;
mp -= 14;
J3130:
if (memory[mp] == 0) goto J3132;
mp -= 9;
J3132:
if (memory[mp] != 0) goto J3130;
mp += 7;
J3134:
if (memory[mp] == 0) goto J3139;
memory[mp] -= 1;
mp -= 7;
memory[mp] += 1;
mp += 7;
J3139:
if (memory[mp] != 0) goto J3134;
mp -= 7;
J3141:
if (memory[mp] == 0) goto J3175;
memory[mp] -= 1;
mp += 7;
memory[mp] += 1;
memory[mp] = 0;
mp += 2;
J3147:
if (memory[mp] == 0) goto J3149;
mp += 9;
J3149:
if (memory[mp] != 0) goto J3147;
mp -= 9;
J3151:
if (memory[mp] == 0) goto J3174;
mp += 7;
J3153:
if (memory[mp] == 0) goto J3158;
memory[mp] -= 1;
mp -= 6;
memory[mp] += 1;
mp += 6;
J3158:
if (memory[mp] != 0) goto J3153;
mp -= 6;
J3160:
if (memory[mp] == 0) goto J3172;
memory[mp] -= 1;
mp += 6;
memory[mp] += 1;
mp -= 7;
J3165:
if (memory[mp] == 0) goto J3167;
mp -= 9;
J3167:
if (memory[mp] != 0) goto J3165;
mp += 7;
memory[mp] = 0;
memory[mp] += 1;
mp += 3;
J3172:
if (memory[mp] != 0) goto J3160;
mp -= 10;
J3174:
if (memory[mp] != 0) goto J3151;
J3175:
if (memory[mp] != 0) goto J3141;
mp += 7;
J3177:
if (memory[mp] == 0) goto J3182;
memory[mp] -= 1;
mp -= 7;
memory[mp] += 1;
mp += 7;
J3182:
if (memory[mp] != 0) goto J3177;
mp -= 7;
J3184:
if (memory[mp] == 0) goto J3272;
memory[mp] -= 1;
mp += 7;
memory[mp] += 1;
mp += 2;
J3189:
if (memory[mp] == 0) goto J3207;
mp += 1;
memory[mp] += 1;
mp += 4;
J3193:
if (memory[mp] == 0) goto J3198;
memory[mp] -= 1;
mp -= 4;
memory[mp] -= 1;
mp += 4;
J3198:
if (memory[mp] != 0) goto J3193;
mp -= 4;
J3200:
if (memory[mp] == 0) goto J3205;
memory[mp] -= 1;
mp += 4;
memory[mp] += 1;
mp -= 4;
J3205:
if (memory[mp] != 0) goto J3200;
mp += 8;
J3207:
if (memory[mp] != 0) goto J3189;
mp -= 2;
memory[mp] += 1;
mp -= 7;
J3211:
if (memory[mp] == 0) goto J3220;
mp += 5;
J3213:
if (memory[mp] == 0) goto J3218;
memory[mp] -= 1;
mp += 2;
memory[mp] += 1;
mp -= 2;
J3218:
if (memory[mp] != 0) goto J3213;
mp -= 14;
J3220:
if (memory[mp] != 0) goto J3211;
mp += 9;
J3222:
if (memory[mp] == 0) goto J3224;
mp += 9;
J3224:
if (memory[mp] != 0) goto J3222;
mp -= 9;
J3226:
if (memory[mp] == 0) goto J3265;
mp += 1;
memory[mp] = 0;
mp -= 1;
memory[mp] -= 1;
mp += 7;
J3232:
if (memory[mp] == 0) goto J3254;
memory[mp] -= 1;
mp -= 7;
memory[mp] += 1;
mp += 1;
J3237:
if (memory[mp] == 0) goto J3245;
mp -= 1;
memory[mp] -= 1;
mp += 1;
memory[mp] -= 1;
mp -= 3;
memory[mp] += 1;
mp += 3;
J3245:
if (memory[mp] != 0) goto J3237;
mp -= 1;
J3247:
if (memory[mp] == 0) goto J3252;
memory[mp] -= 1;
mp += 1;
memory[mp] += 1;
mp -= 1;
J3252:
if (memory[mp] != 0) goto J3247;
mp += 7;
J3254:
if (memory[mp] != 0) goto J3232;
mp -= 6;
J3256:
if (memory[mp] == 0) goto J3261;
memory[mp] -= 1;
mp += 6;
memory[mp] += 1;
mp -= 6;
J3261:
if (memory[mp] != 0) goto J3256;
mp -= 1;
memory[mp] += 1;
mp -= 9;
J3265:
if (memory[mp] != 0) goto J3226;
mp += 7;
memory[mp] -= 1;
mp -= 4;
memory[mp] = 0;
memory[mp] += 1;
mp -= 3;
J3272:
if (memory[mp] != 0) goto J3184;
memory[mp] += 1;
mp += 7;
J3275:
if (memory[mp] == 0) goto J3280;
memory[mp] -= 1;
mp -= 7;
memory[mp] -= 1;
mp += 7;
J3280:
if (memory[mp] != 0) goto J3275;
memory[mp] += 1;
mp -= 7;
J3283:
if (memory[mp] == 0) goto J3479;
memory[mp] -= 1;
mp += 7;
memory[mp] -= 1;
mp += 2;
J3288:
if (memory[mp] == 0) goto J3297;
mp += 5;
J3290:
if (memory[mp] == 0) goto J3295;
memory[mp] -= 1;
mp += 2;
memory[mp] += 1;
mp -= 2;
J3295:
if (memory[mp] != 0) goto J3290;
mp += 4;
J3297:
if (memory[mp] != 0) goto J3288;
mp -= 9;
J3299:
if (memory[mp] == 0) goto J3338;
mp += 1;
memory[mp] = 0;
mp -= 1;
memory[mp] -= 1;
mp += 7;
J3305:
if (memory[mp] == 0) goto J3327;
memory[mp] -= 1;
mp -= 7;
memory[mp] += 1;
mp += 1;
J3310:
if (memory[mp] == 0) goto J3318;
mp -= 1;
memory[mp] -= 1;
mp += 1;
memory[mp] -= 1;
mp -= 3;
memory[mp] += 1;
mp += 3;
J3318:
if (memory[mp] != 0) goto J3310;
mp -= 1;
J3320:
if (memory[mp] == 0) goto J3325;
memory[mp] -= 1;
mp += 1;
memory[mp] += 1;
mp -= 1;
J3325:
if (memory[mp] != 0) goto J3320;
mp += 7;
J3327:
if (memory[mp] != 0) goto J3305;
mp -= 6;
J3329:
if (memory[mp] == 0) goto J3334;
memory[mp] -= 1;
mp += 6;
memory[mp] += 1;
mp -= 6;
J3334:
if (memory[mp] != 0) goto J3329;
mp -= 1;
memory[mp] += 1;
mp -= 9;
J3338:
if (memory[mp] != 0) goto J3299;
mp += 1;
memory[mp] += 5;
J3341:
if (memory[mp] == 0) goto J3350;
memory[mp] -= 1;
J3343:
if (memory[mp] == 0) goto J3348;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J3348:
if (memory[mp] != 0) goto J3343;
mp += 9;
J3350:
if (memory[mp] != 0) goto J3341;
mp += 4;
memory[mp] += 1;
mp -= 5;
J3354:
if (memory[mp] == 0) goto J3356;
mp -= 9;
J3356:
if (memory[mp] != 0) goto J3354;
mp += 9;
J3358:
if (memory[mp] == 0) goto J3454;
mp += 5;
J3360:
if (memory[mp] == 0) goto J3365;
memory[mp] -= 1;
mp -= 5;
memory[mp] -= 1;
mp += 5;
J3365:
if (memory[mp] != 0) goto J3360;
memory[mp] += 1;
mp -= 5;
J3368:
if (memory[mp] == 0) goto J3399;
memory[mp] -= 1;
mp += 5;
memory[mp] -= 1;
mp += 2;
J3373:
if (memory[mp] == 0) goto J3378;
memory[mp] -= 1;
mp -= 7;
memory[mp] += 1;
mp += 7;
J3378:
if (memory[mp] != 0) goto J3373;
mp -= 7;
J3380:
if (memory[mp] == 0) goto J3398;
memory[mp] -= 1;
mp += 7;
memory[mp] += 1;
mp -= 16;
J3385:
if (memory[mp] == 0) goto J3387;
mp -= 9;
J3387:
if (memory[mp] != 0) goto J3385;
mp += 4;
memory[mp] = 0;
memory[mp] += 1;
mp += 5;
J3392:
if (memory[mp] == 0) goto J3394;
mp += 9;
J3394:
if (memory[mp] != 0) goto J3392;
mp += 1;
memory[mp] += 1;
mp -= 1;
J3398:
if (memory[mp] != 0) goto J3380;
J3399:
if (memory[mp] != 0) goto J3368;
memory[mp] += 1;
mp += 7;
J3402:
if (memory[mp] == 0) goto J3407;
memory[mp] -= 1;
mp -= 7;
memory[mp] -= 1;
mp += 7;
J3407:
if (memory[mp] != 0) goto J3402;
memory[mp] += 1;
mp -= 7;
J3410:
if (memory[mp] == 0) goto J3442;
memory[mp] -= 1;
mp += 7;
memory[mp] -= 1;
mp -= 2;
J3415:
if (memory[mp] == 0) goto J3420;
memory[mp] -= 1;
mp -= 5;
memory[mp] += 1;
mp += 5;
J3420:
if (memory[mp] != 0) goto J3415;
mp -= 5;
J3422:
if (memory[mp] == 0) goto J3441;
memory[mp] -= 1;
mp += 5;
memory[mp] += 1;
mp -= 14;
J3427:
if (memory[mp] == 0) goto J3429;
mp -= 9;
J3429:
if (memory[mp] != 0) goto J3427;
mp += 3;
memory[mp] = 0;
memory[mp] += 1;
mp += 6;
J3434:
if (memory[mp] == 0) goto J3436;
mp += 9;
J3436:
if (memory[mp] != 0) goto J3434;
mp += 1;
memory[mp] = 0;
memory[mp] += 1;
mp -= 1;
J3441:
if (memory[mp] != 0) goto J3422;
J3442:
if (memory[mp] != 0) goto J3410;
memory[mp] += 1;
mp += 1;
J3445:
if (memory[mp] == 0) goto J3452;
memory[mp] -= 1;
mp -= 1;
J3448:
if (memory[mp] == 0) goto J3450;
mp += 9;
J3450:
if (memory[mp] != 0) goto J3448;
mp -= 8;
J3452:
if (memory[mp] != 0) goto J3445;
mp += 8;
J3454:
if (memory[mp] != 0) goto J3358;
mp -= 9;
J3456:
if (memory[mp] == 0) goto J3458;
mp -= 9;
J3458:
if (memory[mp] != 0) goto J3456;
mp += 4;
memory[mp] = 0;
mp -= 3;
memory[mp] += 5;
J3463:
if (memory[mp] == 0) goto J3472;
memory[mp] -= 1;
J3465:
if (memory[mp] == 0) goto J3470;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J3470:
if (memory[mp] != 0) goto J3465;
mp += 9;
J3472:
if (memory[mp] != 0) goto J3463;
mp += 4;
memory[mp] -= 1;
mp -= 5;
J3476:
if (memory[mp] == 0) goto J3478;
mp -= 9;
J3478:
if (memory[mp] != 0) goto J3476;
J3479:
if (memory[mp] != 0) goto J3283;
mp += 3;
J3481:
if (memory[mp] != 0) goto J113;
mp -= 4;
putchar(memory[mp]);
mp += 10;
J3485:
if (memory[mp] == 0) goto J3489;
mp += 6;
memory[mp] = 0;
mp += 3;
J3489:
if (memory[mp] != 0) goto J3485;
mp -= 9;
J3491:
if (memory[mp] == 0) goto J3493;
mp -= 9;
J3493:
if (memory[mp] != 0) goto J3491;
mp += 1;
memory[mp] += 10;
J3496:
if (memory[mp] == 0) goto J3505;
memory[mp] -= 1;
J3498:
if (memory[mp] == 0) goto J3503;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J3503:
if (memory[mp] != 0) goto J3498;
mp += 9;
J3505:
if (memory[mp] != 0) goto J3496;
mp += 5;
memory[mp] += 1;
mp += 9;
memory[mp] += 1;
mp -= 15;
J3511:
if (memory[mp] == 0) goto J3513;
mp -= 9;
J3513:
if (memory[mp] != 0) goto J3511;
mp += 8;
J3515:
if (memory[mp] == 0) goto J3520;
memory[mp] -= 1;
mp -= 8;
memory[mp] += 1;
mp += 8;
J3520:
if (memory[mp] != 0) goto J3515;
mp -= 8;
J3522:
if (memory[mp] == 0) goto J3556;
memory[mp] -= 1;
mp += 8;
memory[mp] += 1;
memory[mp] = 0;
mp += 1;
J3528:
if (memory[mp] == 0) goto J3530;
mp += 9;
J3530:
if (memory[mp] != 0) goto J3528;
mp -= 9;
J3532:
if (memory[mp] == 0) goto J3555;
mp += 8;
J3534:
if (memory[mp] == 0) goto J3539;
memory[mp] -= 1;
mp -= 7;
memory[mp] += 1;
mp += 7;
J3539:
if (memory[mp] != 0) goto J3534;
mp -= 7;
J3541:
if (memory[mp] == 0) goto J3553;
memory[mp] -= 1;
mp += 7;
memory[mp] += 1;
mp -= 8;
J3546:
if (memory[mp] == 0) goto J3548;
mp -= 9;
J3548:
if (memory[mp] != 0) goto J3546;
mp += 8;
memory[mp] = 0;
memory[mp] += 1;
mp += 2;
J3553:
if (memory[mp] != 0) goto J3541;
mp -= 10;
J3555:
if (memory[mp] != 0) goto J3532;
J3556:
if (memory[mp] != 0) goto J3522;
mp += 8;
J3558:
if (memory[mp] == 0) goto J3563;
memory[mp] -= 1;
mp -= 8;
memory[mp] += 1;
mp += 8;
J3563:
if (memory[mp] != 0) goto J3558;
mp -= 8;
J3565:
if (memory[mp] == 0) goto J3653;
memory[mp] -= 1;
mp += 8;
memory[mp] += 1;
mp += 1;
J3570:
if (memory[mp] == 0) goto J3588;
mp += 1;
memory[mp] += 1;
mp += 5;
J3574:
if (memory[mp] == 0) goto J3579;
memory[mp] -= 1;
mp -= 5;
memory[mp] -= 1;
mp += 5;
J3579:
if (memory[mp] != 0) goto J3574;
mp -= 5;
J3581:
if (memory[mp] == 0) goto J3586;
memory[mp] -= 1;
mp += 5;
memory[mp] += 1;
mp -= 5;
J3586:
if (memory[mp] != 0) goto J3581;
mp += 8;
J3588:
if (memory[mp] != 0) goto J3570;
mp -= 1;
memory[mp] += 1;
mp -= 8;
J3592:
if (memory[mp] == 0) goto J3601;
mp += 6;
J3594:
if (memory[mp] == 0) goto J3599;
memory[mp] -= 1;
mp += 2;
memory[mp] += 1;
mp -= 2;
J3599:
if (memory[mp] != 0) goto J3594;
mp -= 15;
J3601:
if (memory[mp] != 0) goto J3592;
mp += 9;
J3603:
if (memory[mp] == 0) goto J3605;
mp += 9;
J3605:
if (memory[mp] != 0) goto J3603;
mp -= 9;
J3607:
if (memory[mp] == 0) goto J3646;
mp += 1;
memory[mp] = 0;
mp -= 1;
memory[mp] -= 1;
mp += 8;
J3613:
if (memory[mp] == 0) goto J3635;
memory[mp] -= 1;
mp -= 8;
memory[mp] += 1;
mp += 1;
J3618:
if (memory[mp] == 0) goto J3626;
mp -= 1;
memory[mp] -= 1;
mp += 1;
memory[mp] -= 1;
mp -= 2;
memory[mp] += 1;
mp += 2;
J3626:
if (memory[mp] != 0) goto J3618;
mp -= 1;
J3628:
if (memory[mp] == 0) goto J3633;
memory[mp] -= 1;
mp += 1;
memory[mp] += 1;
mp -= 1;
J3633:
if (memory[mp] != 0) goto J3628;
mp += 8;
J3635:
if (memory[mp] != 0) goto J3613;
mp -= 7;
J3637:
if (memory[mp] == 0) goto J3642;
memory[mp] -= 1;
mp += 7;
memory[mp] += 1;
mp -= 7;
J3642:
if (memory[mp] != 0) goto J3637;
mp -= 1;
memory[mp] += 1;
mp -= 9;
J3646:
if (memory[mp] != 0) goto J3607;
mp += 8;
memory[mp] -= 1;
mp -= 5;
memory[mp] = 0;
memory[mp] += 1;
mp -= 3;
J3653:
if (memory[mp] != 0) goto J3565;
memory[mp] += 1;
mp += 8;
J3656:
if (memory[mp] == 0) goto J3661;
memory[mp] -= 1;
mp -= 8;
memory[mp] -= 1;
mp += 8;
J3661:
if (memory[mp] != 0) goto J3656;
memory[mp] += 1;
mp -= 8;
J3664:
if (memory[mp] == 0) goto J3864;
memory[mp] -= 1;
mp += 8;
memory[mp] -= 1;
mp += 1;
J3669:
if (memory[mp] == 0) goto J3678;
mp += 6;
J3671:
if (memory[mp] == 0) goto J3676;
memory[mp] -= 1;
mp += 2;
memory[mp] += 1;
mp -= 2;
J3676:
if (memory[mp] != 0) goto J3671;
mp += 3;
J3678:
if (memory[mp] != 0) goto J3669;
mp -= 9;
J3680:
if (memory[mp] == 0) goto J3719;
mp += 1;
memory[mp] = 0;
mp -= 1;
memory[mp] -= 1;
mp += 8;
J3686:
if (memory[mp] == 0) goto J3708;
memory[mp] -= 1;
mp -= 8;
memory[mp] += 1;
mp += 1;
J3691:
if (memory[mp] == 0) goto J3699;
mp -= 1;
memory[mp] -= 1;
mp += 1;
memory[mp] -= 1;
mp -= 2;
memory[mp] += 1;
mp += 2;
J3699:
if (memory[mp] != 0) goto J3691;
mp -= 1;
J3701:
if (memory[mp] == 0) goto J3706;
memory[mp] -= 1;
mp += 1;
memory[mp] += 1;
mp -= 1;
J3706:
if (memory[mp] != 0) goto J3701;
mp += 8;
J3708:
if (memory[mp] != 0) goto J3686;
mp -= 7;
J3710:
if (memory[mp] == 0) goto J3715;
memory[mp] -= 1;
mp += 7;
memory[mp] += 1;
mp -= 7;
J3715:
if (memory[mp] != 0) goto J3710;
mp -= 1;
memory[mp] += 1;
mp -= 9;
J3719:
if (memory[mp] != 0) goto J3680;
mp += 1;
memory[mp] += 5;
J3722:
if (memory[mp] == 0) goto J3731;
memory[mp] -= 1;
J3724:
if (memory[mp] == 0) goto J3729;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J3729:
if (memory[mp] != 0) goto J3724;
mp += 9;
J3731:
if (memory[mp] != 0) goto J3722;
mp += 5;
memory[mp] += 1;
mp += 27;
memory[mp] += 1;
mp -= 6;
J3737:
if (memory[mp] == 0) goto J3739;
mp -= 9;
J3739:
if (memory[mp] != 0) goto J3737;
mp += 9;
J3741:
if (memory[mp] == 0) goto J3837;
mp += 6;
J3743:
if (memory[mp] == 0) goto J3748;
memory[mp] -= 1;
mp -= 6;
memory[mp] -= 1;
mp += 6;
J3748:
if (memory[mp] != 0) goto J3743;
memory[mp] += 1;
mp -= 6;
J3751:
if (memory[mp] == 0) goto J3782;
memory[mp] -= 1;
mp += 6;
memory[mp] -= 1;
mp += 2;
J3756:
if (memory[mp] == 0) goto J3761;
memory[mp] -= 1;
mp -= 8;
memory[mp] += 1;
mp += 8;
J3761:
if (memory[mp] != 0) goto J3756;
mp -= 8;
J3763:
if (memory[mp] == 0) goto J3781;
memory[mp] -= 1;
mp += 8;
memory[mp] += 1;
mp -= 17;
J3768:
if (memory[mp] == 0) goto J3770;
mp -= 9;
J3770:
if (memory[mp] != 0) goto J3768;
mp += 4;
memory[mp] = 0;
memory[mp] += 1;
mp += 5;
J3775:
if (memory[mp] == 0) goto J3777;
mp += 9;
J3777:
if (memory[mp] != 0) goto J3775;
mp += 1;
memory[mp] += 1;
mp -= 1;
J3781:
if (memory[mp] != 0) goto J3763;
J3782:
if (memory[mp] != 0) goto J3751;
memory[mp] += 1;
mp += 8;
J3785:
if (memory[mp] == 0) goto J3790;
memory[mp] -= 1;
mp -= 8;
memory[mp] -= 1;
mp += 8;
J3790:
if (memory[mp] != 0) goto J3785;
memory[mp] += 1;
mp -= 8;
J3793:
if (memory[mp] == 0) goto J3825;
memory[mp] -= 1;
mp += 8;
memory[mp] -= 1;
mp -= 2;
J3798:
if (memory[mp] == 0) goto J3803;
memory[mp] -= 1;
mp -= 6;
memory[mp] += 1;
mp += 6;
J3803:
if (memory[mp] != 0) goto J3798;
mp -= 6;
J3805:
if (memory[mp] == 0) goto J3824;
memory[mp] -= 1;
mp += 6;
memory[mp] += 1;
mp -= 15;
J3810:
if (memory[mp] == 0) goto J3812;
mp -= 9;
J3812:
if (memory[mp] != 0) goto J3810;
mp += 3;
memory[mp] = 0;
memory[mp] += 1;
mp += 6;
J3817:
if (memory[mp] == 0) goto J3819;
mp += 9;
J3819:
if (memory[mp] != 0) goto J3817;
mp += 1;
memory[mp] = 0;
memory[mp] += 1;
mp -= 1;
J3824:
if (memory[mp] != 0) goto J3805;
J3825:
if (memory[mp] != 0) goto J3793;
memory[mp] += 1;
mp += 1;
J3828:
if (memory[mp] == 0) goto J3835;
memory[mp] -= 1;
mp -= 1;
J3831:
if (memory[mp] == 0) goto J3833;
mp += 9;
J3833:
if (memory[mp] != 0) goto J3831;
mp -= 8;
J3835:
if (memory[mp] != 0) goto J3828;
mp += 8;
J3837:
if (memory[mp] != 0) goto J3741;
mp -= 9;
J3839:
if (memory[mp] == 0) goto J3841;
mp -= 9;
J3841:
if (memory[mp] != 0) goto J3839;
mp += 4;
memory[mp] = 0;
mp -= 3;
memory[mp] += 5;
J3846:
if (memory[mp] == 0) goto J3855;
memory[mp] -= 1;
J3848:
if (memory[mp] == 0) goto J3853;
memory[mp] -= 1;
mp += 9;
memory[mp] += 1;
mp -= 9;
J3853:
if (memory[mp] != 0) goto J3848;
mp += 9;
J3855:
if (memory[mp] != 0) goto J3846;
mp += 5;
memory[mp] -= 1;
mp += 27;
memory[mp] -= 1;
mp -= 6;
J3861:
if (memory[mp] == 0) goto J3863;
mp -= 9;
J3863:
if (memory[mp] != 0) goto J3861;
J3864:
if (memory[mp] != 0) goto J3664;
mp += 3;
J3866:
if (memory[mp] != 0) goto J66;
end = clock();
printf("Elapsed: %dms\n", end - start);
return 0;
}
