#include <iostream>
#include "testlib.h"
using namespace std;
typedef long long ll;

ll primes[]={
10007,10009,10037,10039,10061,10067,10069,10079,10091,10093,
10099,10103,10111,10133,10139,10141,10151,10159,10163,10169,
10177,10181,10193,10211,10223,10243,10247,10253,10259,10267,
10271,10273,10289,10301,10303,10313,10321,10331,10333,10337,
10343,10357,10369,10391,10399,10427,10429,10433,10453,10457,
10459,10463,10477,10487,10499,10501,10513,10529,10531,10559,
10567,10589,10597,10601,10607,10613,10627,10631,10639,10651,
10657,10663,10667,10687,10691,10709,10711,10723,10729,10733,
10739,10753,10771,10781,10789,10799,10831,10837,10847,10853,
10859,10861,10867,10883,10889,10891,10903,10909,10937,10939,
10949,10957,10973,10979,10987,10993,11003,11027,11047,11057,
11059,11069,11071,11083,11087,11093,11113,11117,11119,11131,
11149,11159,11161,11171,11173,11177,11197,11213,11239,11243,
11251,11257,11261,11273,11279,11287,11299,11311,11317,11321,
11329,11351,11353,11369,11383,11393,11399,11411,11423,11437,
11443,11447,11467,11471,11483,11489,11491,11497,11503,11519,
11587,11593,11597,11617,11621,11633,11657,11677,11681,11689,
11699,11701,11717,11719,11731,11743,11777,11779,11783,11789,
11801,11807,11813,11821,11827,11831,11833,11839,11863,11867,
11887,11897,11903,11909,11923,11927,11933,11939,11941,11953,
11959,11969,11971,11981,11987,12007,12011,12037,12041,12043,
12049,12071,12073,12097,12101,12107,12109,12113,12119,12143,
12149,12157,12161,12163,12197,12203,12211,12227,12239,12241,
12251,12253,12263,12269,12277,12281,12289,12301,12323,12329,
12343,12347,12373,12377,12379,12391,12401,12409,12413,12421,
12433,12437,12451,12457,12473,12479,12487,12491,12497,12503,
12511,12517,12527,12539,12541,12547,12553,12569,12577,12583,
12589,12601,12611,12613,12619,12637,12641,12647,12653,12659,
12671,12689,12697,12703,12713,12721,12739,12743,12757,12763,
12781,12791,12799,12809,12821,12823,12829,12841,12853,12889,
12893,12899,12907,12911,12917,12919,12923,12941,12953,12959,
12967,12973,12979,12983,13001,13003,13007,13009,13033,13037,
13043,13049,13063,13093,13099,13103,13109,13121,13127,13147,
13151,13159,13163,13171,13177,13183,13187,13217,13219,13229,
13241,13249,13259,13267,13291,13297,13309,13313,13327,13331,
13337,13339,13367,13381,13397,13399,13411,13417,13421,13441,
13441,13451,13457,13463,13469,13477,13487,13499,13513,13523,
13537,13553,13567,13577,13591,13597,13613,13619,13627,13633,
13649,13669,13679,13681,13687,13691,13693,13697,13709,13711,
13721,13723,13729,13751,13757,13759,13763,13781,13789,13799,
13807,13829,13831,13841,13859,13873,13877,13879,13883,13901,
13903,13907,13913,13921,13931,13933,13963,13967,13997,13999,
14009,14011,14029,14033,14051,14057,14071,14081,14083,14087,
14107,14143,14149,14153,14159,14173,14177,14197,14207,14221,
14243,14249,14251,14281,14293,14303,14321,14323,14327,14341,
14347,14369,14387,14389,14401,14407,14411,14419,14423,14431,
14437,14447,14449,14461,14479,14489,14503,14519,14533,14537,
14543,14549,14551,14557,14561,14563,14591,14593,14621,14627,
14629,14633,14639,14653,14657,14669,14683,14699,14713,14717,
14723,14731,14737,14741,14747,14753,14759,14767,14771,14779,
14783,14797,14813,14821,14827,14831,14843,14851,14867,14869,
14879,14887,14891,14897,14923,14929,14939,14947,14951,14957,
14969,14983,15013,15017,15031,15053,15061,15073,15077,15083,
15091,15101,15107,15121,15131,15137,15139,15149,15161,15173,
15187,15193,15199,15217,15227,15233,15241,15259,15263,15269,
15271,15277,15287,15289,15299,15307,15313,15319,15329,15331,
15331,15349,15359,15361,15373,15377,15383,15391,15401,15413,
15427,15439,15443,15451,15461,15467,15473,15493,15497,15511,
15527,15541,15551,15559,15569,15581,15583,15601,15607,15619,
15629,15641,15643,15647,15649,15661,15667,15671,15679,15683,
15727,15731,15733,15737,15739,15749,15761,15767,15773,15787,
15791,15797,15803,15809,15817,15823,15859,15877,15881,15887,
15889,15901,15907,15913,15919,15923,15937,15959,15971,15973,
15991,16001,16007,16033,16057,16061,16063,16067,16069,16073,
16087,16091,16097,16103,16111,16127,16139,16141,16183,16187,
16189,16193,16217,16223,16229,16231,16249,16253,16267,16273,
16301,16319,16333,16339,16349,16361,16363,16369,16381,16411,
16417,16421,16427,16433,16447,16451,16453,16477,16481,16487,
16493,16519,16529,16547,16553,16561,16567,16573,16603,16607,
16619,16631,16633,16649,16651,16657,16661,16673,16691,16693,
16699,16703,16729,16741,16747,16759,16763,16787,16811,16823,
16829,16831,16843,16871,16879,16883,16889,16901,16903,16921,
16927,16931,16937,16943,16963,16979,16981,16987,16993,17011,
17021,17027,17029,17033,17041,17047,17053,17077,17093,17099,
17107,17117,17123,17137,17159,17167,17183,17189,17191,17203,
17207,17209,17231,17239,17257,17291,17293,17299,17317,17321,
17321,17327,17333,17341,17351,17359,17377,17383,17387,17389,
17393,17401,17417,17419,17431,17443,17449,17467,17471,17477,
17483,17489,17491,17497,17509,17519,17539,17551,17569,17573,
17579,17581,17597,17599,17609,17623,17627,17657,17659,17669,
17681,17683,17707,17713,17729,17737,17747,17749,17761,17783,
17789,17791,17807,17827,17837,17839,17851,17863,17881,17891,
17903,17909,17911,17921,17923,17929,17939,17957,17959,17971,
17977,17981,17987,17989,18013,18041,18043,18047,18049,18059,
18061,18077,18089,18097,18119,18121,18127,18131,18133,18143,
18149,18169,18181,18191,18199,18211,18217,18223,18229,18233,
18251,18253,18257,18269,18287,18289,18301,18307,18311,18313,
18329,18341,18353,18367,18371,18379,18397,18401,18413,18427,
18433,18439,18443,18451,18457,18461,18481,18493,18503,18517,
18521,18523,18539,18541,18553,18583,18587,18593,18617,18637,
18661,18671,18679,18691,18701,18713,18719,18731,18743,18749,
18757,18773,18787,18793,18797,18803,18839,18859,18869,18899,
18911,18913,18917,18919,18947,18959,18973,18979,19001,19009,
19013,19031,19037,19051,19069,19073,19079,19081,19087,19121,
19139,19141,19157,19163,19181,19183,19207,19211,19213,19219,
19231,19237,19249,19259,19267,19273,19289,19301,19309,19319,
19319,19333,19373,19379,19381,19387,19391,19403,19417,19421,
19423,19427,19429,19433,19441,19447,19457,19463,19469,19471,
19477,19483,19489,19501,19507,19531,19541,19543,19553,19559,
19571,19577,19583,19597,19603,19609,19661,19681,19687,19697,
19699,19709,19717,19727,19739,19751,19753,19759,19763,19777,
19793,19801,19813,19819,19841,19843,19853,19861,19867,19889,
19891,19913,19919,19927,19937,19949,19961,19963,19973,19979,
19991,19993,19997,20011,20021,20023,20029,20047,20051,20063,
20071,20089,20101,20107,20113,20117,20123,20129,20143,20147,
20149,20161,20173,20177,20183,20201,20219,20231,20233,20249,
20261,20269,20287,20297,20323,20327,20333,20341,20347,20353,
20357,20359,20369,20389,20393,20399,20407,20411,20431,20441,
20443,20477,20479,20483,20507,20509,20521,20533,20543,20549,
20551,20563,20593,20599,20611,20627,20639,20641,20663,20681,
20693,20707,20717,20719,20731,20743,20747,20749,20753,20759,
20771,20773,20789,20807,20809,20849,20857,20873,20879,20887,
20897,20899,20903,20921,20929,20939,20947,20959,20963,20981,
20983,21001,21011,21013,21017,21019,21023,21031,21059,21061,
21067,21089,21101,21107,21121,21139,21143,21149,21157,21163,
21169,21179,21187,21191,21193,21211,21221,21227,21247,21269 
};

int main(int argc, char* argv[]) {
  registerGen(argc, argv, 1);
  int n = atoi(argv[1]);
  ll p=primes[n];
  cout<<p<<' '<<100<<endl;
  for(int i=0;i<100;i++) {
    if(i) cout<<' ';
    ll f=(i+1)*(ll)p+1;
    cout<<f;
  }
  cout<<endl;
  return 0;
}

