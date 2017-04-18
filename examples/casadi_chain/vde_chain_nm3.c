/* This function was automatically generated by CasADi */
#ifdef __cplusplus
extern "C" {
#endif

#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else /* CODEGEN_PREFIX */
  #define CASADI_PREFIX(ID) vde_chain_nm3_ ## ID
#endif /* CODEGEN_PREFIX */

#include <math.h>

#ifndef real_t
#define real_t double
#endif /* real_t */

#define to_double(x) (double) x
#define to_int(x) (int) x
/* Pre-c99 compatibility */
#if __STDC_VERSION__ < 199901L
real_t CASADI_PREFIX(fmin)(real_t x, real_t y) { return x<y ? x : y;}
#define fmin(x,y) CASADI_PREFIX(fmin)(x,y)
real_t CASADI_PREFIX(fmax)(real_t x, real_t y) { return x>y ? x : y;}
#define fmax(x,y) CASADI_PREFIX(fmax)(x,y)
#endif

#define PRINTF printf
real_t CASADI_PREFIX(sq)(real_t x) { return x*x;}
#define sq(x) CASADI_PREFIX(sq)(x)

real_t CASADI_PREFIX(sign)(real_t x) { return x<0 ? -1 : x>0 ? 1 : x;}
#define sign(x) CASADI_PREFIX(sign)(x)

static const int CASADI_PREFIX(s0)[16] = {12, 1, 0, 12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
#define s0 CASADI_PREFIX(s0)
static const int CASADI_PREFIX(s1)[159] = {12, 12, 0, 12, 24, 36, 48, 60, 72, 84, 96, 108, 120, 132, 144, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
#define s1 CASADI_PREFIX(s1)
static const int CASADI_PREFIX(s2)[42] = {12, 3, 0, 12, 24, 36, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
#define s2 CASADI_PREFIX(s2)
static const int CASADI_PREFIX(s3)[7] = {3, 1, 0, 3, 0, 1, 2};
#define s3 CASADI_PREFIX(s3)
/* vde_chain_nm3 */
int vde_chain_nm3(const real_t** arg, real_t** res, int* iw, real_t* w, int mem) {
  mem = 0; mem += 0; w = 0; w += 0; iw = 0; iw += 0;
  real_t a0=arg[0] ? arg[0][3] : 0;
  if (res[0]!=0) res[0][0]=a0;
  a0=arg[0] ? arg[0][4] : 0;
  if (res[0]!=0) res[0][1]=a0;
  a0=arg[0] ? arg[0][5] : 0;
  if (res[0]!=0) res[0][2]=a0;
  a0=arg[0] ? arg[0][6] : 0;
  real_t a1=arg[0] ? arg[0][0] : 0;
  a0=(a0-a1);
  real_t a2=sq(a0);
  real_t a3=arg[0] ? arg[0][7] : 0;
  real_t a4=arg[0] ? arg[0][1] : 0;
  a3=(a3-a4);
  real_t a5=sq(a3);
  a2=(a2+a5);
  a5=arg[0] ? arg[0][8] : 0;
  real_t a6=arg[0] ? arg[0][2] : 0;
  a5=(a5-a6);
  real_t a7=sq(a5);
  a2=(a2+a7);
  a2=sqrt(a2);
  a7=3.3000000000000002e-02;
  real_t a8=(a7/a2);
  real_t a9=1.;
  real_t a10=(a9-a8);
  real_t a11=(a10*a0);
  real_t a12=sq(a1);
  real_t a13=sq(a4);
  a12=(a12+a13);
  a13=sq(a6);
  a12=(a12+a13);
  a12=sqrt(a12);
  a7=(a7/a12);
  a13=(a9-a7);
  real_t a14=(a13*a1);
  a11=(a11-a14);
  a14=3.3333333333333336e+01;
  a11=(a14*a11);
  if (res[0]!=0) res[0][3]=a11;
  a11=(a10*a3);
  real_t a15=(a13*a4);
  a11=(a11-a15);
  a11=(a14*a11);
  if (res[0]!=0) res[0][4]=a11;
  a11=(a10*a5);
  a15=(a13*a6);
  a11=(a11-a15);
  a11=(a14*a11);
  a15=9.8100000000000005e+00;
  a11=(a11-a15);
  if (res[0]!=0) res[0][5]=a11;
  a11=arg[0] ? arg[0][9] : 0;
  if (res[0]!=0) res[0][6]=a11;
  a11=arg[0] ? arg[0][10] : 0;
  if (res[0]!=0) res[0][7]=a11;
  a11=arg[0] ? arg[0][11] : 0;
  if (res[0]!=0) res[0][8]=a11;
  a11=arg[3] ? arg[3][0] : 0;
  if (res[0]!=0) res[0][9]=a11;
  a11=arg[3] ? arg[3][1] : 0;
  if (res[0]!=0) res[0][10]=a11;
  a11=arg[3] ? arg[3][2] : 0;
  if (res[0]!=0) res[0][11]=a11;
  a11=arg[1] ? arg[1][3] : 0;
  if (res[1]!=0) res[1][0]=a11;
  a11=arg[1] ? arg[1][4] : 0;
  if (res[1]!=0) res[1][1]=a11;
  a11=arg[1] ? arg[1][5] : 0;
  if (res[1]!=0) res[1][2]=a11;
  a11=(a8/a2);
  a15=(a0+a0);
  real_t a16=arg[1] ? arg[1][6] : 0;
  real_t a17=arg[1] ? arg[1][0] : 0;
  a16=(a16-a17);
  real_t a18=(a15*a16);
  real_t a19=(a3+a3);
  real_t a20=arg[1] ? arg[1][7] : 0;
  real_t a21=arg[1] ? arg[1][1] : 0;
  a20=(a20-a21);
  real_t a22=(a19*a20);
  a18=(a18+a22);
  a22=(a5+a5);
  real_t a23=arg[1] ? arg[1][8] : 0;
  real_t a24=arg[1] ? arg[1][2] : 0;
  a23=(a23-a24);
  real_t a25=(a22*a23);
  a18=(a18+a25);
  a25=(a2+a2);
  a18=(a18/a25);
  a18=(a11*a18);
  real_t a26=(a0*a18);
  a16=(a10*a16);
  a26=(a26+a16);
  a16=(a7/a12);
  real_t a27=(a1+a1);
  real_t a28=(a27*a17);
  real_t a29=(a4+a4);
  real_t a30=(a29*a21);
  a28=(a28+a30);
  a30=(a6+a6);
  real_t a31=(a30*a24);
  a28=(a28+a31);
  a31=(a12+a12);
  a28=(a28/a31);
  a28=(a16*a28);
  real_t a32=(a1*a28);
  a17=(a13*a17);
  a32=(a32+a17);
  a26=(a26-a32);
  a26=(a14*a26);
  if (res[1]!=0) res[1][3]=a26;
  a26=(a3*a18);
  a20=(a10*a20);
  a26=(a26+a20);
  a20=(a4*a28);
  a21=(a13*a21);
  a20=(a20+a21);
  a26=(a26-a20);
  a26=(a14*a26);
  if (res[1]!=0) res[1][4]=a26;
  a18=(a5*a18);
  a23=(a10*a23);
  a18=(a18+a23);
  a28=(a6*a28);
  a24=(a13*a24);
  a28=(a28+a24);
  a18=(a18-a28);
  a18=(a14*a18);
  if (res[1]!=0) res[1][5]=a18;
  a18=arg[1] ? arg[1][9] : 0;
  if (res[1]!=0) res[1][6]=a18;
  a18=arg[1] ? arg[1][10] : 0;
  if (res[1]!=0) res[1][7]=a18;
  a18=arg[1] ? arg[1][11] : 0;
  if (res[1]!=0) res[1][8]=a18;
  a18=0.;
  if (res[1]!=0) res[1][9]=a18;
  if (res[1]!=0) res[1][10]=a18;
  if (res[1]!=0) res[1][11]=a18;
  a28=arg[1] ? arg[1][15] : 0;
  if (res[1]!=0) res[1][12]=a28;
  a28=arg[1] ? arg[1][16] : 0;
  if (res[1]!=0) res[1][13]=a28;
  a28=arg[1] ? arg[1][17] : 0;
  if (res[1]!=0) res[1][14]=a28;
  a28=arg[1] ? arg[1][18] : 0;
  a24=arg[1] ? arg[1][12] : 0;
  a28=(a28-a24);
  a23=(a15*a28);
  a26=arg[1] ? arg[1][19] : 0;
  a20=arg[1] ? arg[1][13] : 0;
  a26=(a26-a20);
  a21=(a19*a26);
  a23=(a23+a21);
  a21=arg[1] ? arg[1][20] : 0;
  a32=arg[1] ? arg[1][14] : 0;
  a21=(a21-a32);
  a17=(a22*a21);
  a23=(a23+a17);
  a23=(a23/a25);
  a23=(a11*a23);
  a17=(a0*a23);
  a28=(a10*a28);
  a17=(a17+a28);
  a28=(a27*a24);
  real_t a33=(a29*a20);
  a28=(a28+a33);
  a33=(a30*a32);
  a28=(a28+a33);
  a28=(a28/a31);
  a28=(a16*a28);
  a33=(a1*a28);
  a24=(a13*a24);
  a33=(a33+a24);
  a17=(a17-a33);
  a17=(a14*a17);
  if (res[1]!=0) res[1][15]=a17;
  a17=(a3*a23);
  a26=(a10*a26);
  a17=(a17+a26);
  a26=(a4*a28);
  a20=(a13*a20);
  a26=(a26+a20);
  a17=(a17-a26);
  a17=(a14*a17);
  if (res[1]!=0) res[1][16]=a17;
  a23=(a5*a23);
  a21=(a10*a21);
  a23=(a23+a21);
  a28=(a6*a28);
  a32=(a13*a32);
  a28=(a28+a32);
  a23=(a23-a28);
  a23=(a14*a23);
  if (res[1]!=0) res[1][17]=a23;
  a23=arg[1] ? arg[1][21] : 0;
  if (res[1]!=0) res[1][18]=a23;
  a23=arg[1] ? arg[1][22] : 0;
  if (res[1]!=0) res[1][19]=a23;
  a23=arg[1] ? arg[1][23] : 0;
  if (res[1]!=0) res[1][20]=a23;
  if (res[1]!=0) res[1][21]=a18;
  if (res[1]!=0) res[1][22]=a18;
  if (res[1]!=0) res[1][23]=a18;
  a23=arg[1] ? arg[1][27] : 0;
  if (res[1]!=0) res[1][24]=a23;
  a23=arg[1] ? arg[1][28] : 0;
  if (res[1]!=0) res[1][25]=a23;
  a23=arg[1] ? arg[1][29] : 0;
  if (res[1]!=0) res[1][26]=a23;
  a23=arg[1] ? arg[1][30] : 0;
  a28=arg[1] ? arg[1][24] : 0;
  a23=(a23-a28);
  a32=(a15*a23);
  a21=arg[1] ? arg[1][31] : 0;
  a17=arg[1] ? arg[1][25] : 0;
  a21=(a21-a17);
  a26=(a19*a21);
  a32=(a32+a26);
  a26=arg[1] ? arg[1][32] : 0;
  a20=arg[1] ? arg[1][26] : 0;
  a26=(a26-a20);
  a33=(a22*a26);
  a32=(a32+a33);
  a32=(a32/a25);
  a32=(a11*a32);
  a33=(a0*a32);
  a23=(a10*a23);
  a33=(a33+a23);
  a23=(a27*a28);
  a24=(a29*a17);
  a23=(a23+a24);
  a24=(a30*a20);
  a23=(a23+a24);
  a23=(a23/a31);
  a23=(a16*a23);
  a24=(a1*a23);
  a28=(a13*a28);
  a24=(a24+a28);
  a33=(a33-a24);
  a33=(a14*a33);
  if (res[1]!=0) res[1][27]=a33;
  a33=(a3*a32);
  a21=(a10*a21);
  a33=(a33+a21);
  a21=(a4*a23);
  a17=(a13*a17);
  a21=(a21+a17);
  a33=(a33-a21);
  a33=(a14*a33);
  if (res[1]!=0) res[1][28]=a33;
  a32=(a5*a32);
  a26=(a10*a26);
  a32=(a32+a26);
  a23=(a6*a23);
  a20=(a13*a20);
  a23=(a23+a20);
  a32=(a32-a23);
  a32=(a14*a32);
  if (res[1]!=0) res[1][29]=a32;
  a32=arg[1] ? arg[1][33] : 0;
  if (res[1]!=0) res[1][30]=a32;
  a32=arg[1] ? arg[1][34] : 0;
  if (res[1]!=0) res[1][31]=a32;
  a32=arg[1] ? arg[1][35] : 0;
  if (res[1]!=0) res[1][32]=a32;
  if (res[1]!=0) res[1][33]=a18;
  if (res[1]!=0) res[1][34]=a18;
  if (res[1]!=0) res[1][35]=a18;
  a32=arg[1] ? arg[1][39] : 0;
  if (res[1]!=0) res[1][36]=a32;
  a32=arg[1] ? arg[1][40] : 0;
  if (res[1]!=0) res[1][37]=a32;
  a32=arg[1] ? arg[1][41] : 0;
  if (res[1]!=0) res[1][38]=a32;
  a32=arg[1] ? arg[1][42] : 0;
  a23=arg[1] ? arg[1][36] : 0;
  a32=(a32-a23);
  a20=(a15*a32);
  a26=arg[1] ? arg[1][43] : 0;
  a33=arg[1] ? arg[1][37] : 0;
  a26=(a26-a33);
  a21=(a19*a26);
  a20=(a20+a21);
  a21=arg[1] ? arg[1][44] : 0;
  a17=arg[1] ? arg[1][38] : 0;
  a21=(a21-a17);
  a24=(a22*a21);
  a20=(a20+a24);
  a20=(a20/a25);
  a20=(a11*a20);
  a24=(a0*a20);
  a32=(a10*a32);
  a24=(a24+a32);
  a32=(a27*a23);
  a28=(a29*a33);
  a32=(a32+a28);
  a28=(a30*a17);
  a32=(a32+a28);
  a32=(a32/a31);
  a32=(a16*a32);
  a28=(a1*a32);
  a23=(a13*a23);
  a28=(a28+a23);
  a24=(a24-a28);
  a24=(a14*a24);
  if (res[1]!=0) res[1][39]=a24;
  a24=(a3*a20);
  a26=(a10*a26);
  a24=(a24+a26);
  a26=(a4*a32);
  a33=(a13*a33);
  a26=(a26+a33);
  a24=(a24-a26);
  a24=(a14*a24);
  if (res[1]!=0) res[1][40]=a24;
  a20=(a5*a20);
  a21=(a10*a21);
  a20=(a20+a21);
  a32=(a6*a32);
  a17=(a13*a17);
  a32=(a32+a17);
  a20=(a20-a32);
  a20=(a14*a20);
  if (res[1]!=0) res[1][41]=a20;
  a20=arg[1] ? arg[1][45] : 0;
  if (res[1]!=0) res[1][42]=a20;
  a20=arg[1] ? arg[1][46] : 0;
  if (res[1]!=0) res[1][43]=a20;
  a20=arg[1] ? arg[1][47] : 0;
  if (res[1]!=0) res[1][44]=a20;
  if (res[1]!=0) res[1][45]=a18;
  if (res[1]!=0) res[1][46]=a18;
  if (res[1]!=0) res[1][47]=a18;
  a20=arg[1] ? arg[1][51] : 0;
  if (res[1]!=0) res[1][48]=a20;
  a20=arg[1] ? arg[1][52] : 0;
  if (res[1]!=0) res[1][49]=a20;
  a20=arg[1] ? arg[1][53] : 0;
  if (res[1]!=0) res[1][50]=a20;
  a20=arg[1] ? arg[1][54] : 0;
  a32=arg[1] ? arg[1][48] : 0;
  a20=(a20-a32);
  a17=(a15*a20);
  a21=arg[1] ? arg[1][55] : 0;
  a24=arg[1] ? arg[1][49] : 0;
  a21=(a21-a24);
  a26=(a19*a21);
  a17=(a17+a26);
  a26=arg[1] ? arg[1][56] : 0;
  a33=arg[1] ? arg[1][50] : 0;
  a26=(a26-a33);
  a28=(a22*a26);
  a17=(a17+a28);
  a17=(a17/a25);
  a17=(a11*a17);
  a28=(a0*a17);
  a20=(a10*a20);
  a28=(a28+a20);
  a20=(a27*a32);
  a23=(a29*a24);
  a20=(a20+a23);
  a23=(a30*a33);
  a20=(a20+a23);
  a20=(a20/a31);
  a20=(a16*a20);
  a23=(a1*a20);
  a32=(a13*a32);
  a23=(a23+a32);
  a28=(a28-a23);
  a28=(a14*a28);
  if (res[1]!=0) res[1][51]=a28;
  a28=(a3*a17);
  a21=(a10*a21);
  a28=(a28+a21);
  a21=(a4*a20);
  a24=(a13*a24);
  a21=(a21+a24);
  a28=(a28-a21);
  a28=(a14*a28);
  if (res[1]!=0) res[1][52]=a28;
  a17=(a5*a17);
  a26=(a10*a26);
  a17=(a17+a26);
  a20=(a6*a20);
  a33=(a13*a33);
  a20=(a20+a33);
  a17=(a17-a20);
  a17=(a14*a17);
  if (res[1]!=0) res[1][53]=a17;
  a17=arg[1] ? arg[1][57] : 0;
  if (res[1]!=0) res[1][54]=a17;
  a17=arg[1] ? arg[1][58] : 0;
  if (res[1]!=0) res[1][55]=a17;
  a17=arg[1] ? arg[1][59] : 0;
  if (res[1]!=0) res[1][56]=a17;
  if (res[1]!=0) res[1][57]=a18;
  if (res[1]!=0) res[1][58]=a18;
  if (res[1]!=0) res[1][59]=a18;
  a17=arg[1] ? arg[1][63] : 0;
  if (res[1]!=0) res[1][60]=a17;
  a17=arg[1] ? arg[1][64] : 0;
  if (res[1]!=0) res[1][61]=a17;
  a17=arg[1] ? arg[1][65] : 0;
  if (res[1]!=0) res[1][62]=a17;
  a17=arg[1] ? arg[1][66] : 0;
  a20=arg[1] ? arg[1][60] : 0;
  a17=(a17-a20);
  a33=(a15*a17);
  a26=arg[1] ? arg[1][67] : 0;
  a28=arg[1] ? arg[1][61] : 0;
  a26=(a26-a28);
  a21=(a19*a26);
  a33=(a33+a21);
  a21=arg[1] ? arg[1][68] : 0;
  a24=arg[1] ? arg[1][62] : 0;
  a21=(a21-a24);
  a23=(a22*a21);
  a33=(a33+a23);
  a33=(a33/a25);
  a33=(a11*a33);
  a23=(a0*a33);
  a17=(a10*a17);
  a23=(a23+a17);
  a17=(a27*a20);
  a32=(a29*a28);
  a17=(a17+a32);
  a32=(a30*a24);
  a17=(a17+a32);
  a17=(a17/a31);
  a17=(a16*a17);
  a32=(a1*a17);
  a20=(a13*a20);
  a32=(a32+a20);
  a23=(a23-a32);
  a23=(a14*a23);
  if (res[1]!=0) res[1][63]=a23;
  a23=(a3*a33);
  a26=(a10*a26);
  a23=(a23+a26);
  a26=(a4*a17);
  a28=(a13*a28);
  a26=(a26+a28);
  a23=(a23-a26);
  a23=(a14*a23);
  if (res[1]!=0) res[1][64]=a23;
  a33=(a5*a33);
  a21=(a10*a21);
  a33=(a33+a21);
  a17=(a6*a17);
  a24=(a13*a24);
  a17=(a17+a24);
  a33=(a33-a17);
  a33=(a14*a33);
  if (res[1]!=0) res[1][65]=a33;
  a33=arg[1] ? arg[1][69] : 0;
  if (res[1]!=0) res[1][66]=a33;
  a33=arg[1] ? arg[1][70] : 0;
  if (res[1]!=0) res[1][67]=a33;
  a33=arg[1] ? arg[1][71] : 0;
  if (res[1]!=0) res[1][68]=a33;
  if (res[1]!=0) res[1][69]=a18;
  if (res[1]!=0) res[1][70]=a18;
  if (res[1]!=0) res[1][71]=a18;
  a33=arg[1] ? arg[1][75] : 0;
  if (res[1]!=0) res[1][72]=a33;
  a33=arg[1] ? arg[1][76] : 0;
  if (res[1]!=0) res[1][73]=a33;
  a33=arg[1] ? arg[1][77] : 0;
  if (res[1]!=0) res[1][74]=a33;
  a33=arg[1] ? arg[1][78] : 0;
  a17=arg[1] ? arg[1][72] : 0;
  a33=(a33-a17);
  a24=(a15*a33);
  a21=arg[1] ? arg[1][79] : 0;
  a23=arg[1] ? arg[1][73] : 0;
  a21=(a21-a23);
  a26=(a19*a21);
  a24=(a24+a26);
  a26=arg[1] ? arg[1][80] : 0;
  a28=arg[1] ? arg[1][74] : 0;
  a26=(a26-a28);
  a32=(a22*a26);
  a24=(a24+a32);
  a24=(a24/a25);
  a24=(a11*a24);
  a32=(a0*a24);
  a33=(a10*a33);
  a32=(a32+a33);
  a33=(a27*a17);
  a20=(a29*a23);
  a33=(a33+a20);
  a20=(a30*a28);
  a33=(a33+a20);
  a33=(a33/a31);
  a33=(a16*a33);
  a20=(a1*a33);
  a17=(a13*a17);
  a20=(a20+a17);
  a32=(a32-a20);
  a32=(a14*a32);
  if (res[1]!=0) res[1][75]=a32;
  a32=(a3*a24);
  a21=(a10*a21);
  a32=(a32+a21);
  a21=(a4*a33);
  a23=(a13*a23);
  a21=(a21+a23);
  a32=(a32-a21);
  a32=(a14*a32);
  if (res[1]!=0) res[1][76]=a32;
  a24=(a5*a24);
  a26=(a10*a26);
  a24=(a24+a26);
  a33=(a6*a33);
  a28=(a13*a28);
  a33=(a33+a28);
  a24=(a24-a33);
  a24=(a14*a24);
  if (res[1]!=0) res[1][77]=a24;
  a24=arg[1] ? arg[1][81] : 0;
  if (res[1]!=0) res[1][78]=a24;
  a24=arg[1] ? arg[1][82] : 0;
  if (res[1]!=0) res[1][79]=a24;
  a24=arg[1] ? arg[1][83] : 0;
  if (res[1]!=0) res[1][80]=a24;
  if (res[1]!=0) res[1][81]=a18;
  if (res[1]!=0) res[1][82]=a18;
  if (res[1]!=0) res[1][83]=a18;
  a24=arg[1] ? arg[1][87] : 0;
  if (res[1]!=0) res[1][84]=a24;
  a24=arg[1] ? arg[1][88] : 0;
  if (res[1]!=0) res[1][85]=a24;
  a24=arg[1] ? arg[1][89] : 0;
  if (res[1]!=0) res[1][86]=a24;
  a24=arg[1] ? arg[1][90] : 0;
  a33=arg[1] ? arg[1][84] : 0;
  a24=(a24-a33);
  a28=(a15*a24);
  a26=arg[1] ? arg[1][91] : 0;
  a32=arg[1] ? arg[1][85] : 0;
  a26=(a26-a32);
  a21=(a19*a26);
  a28=(a28+a21);
  a21=arg[1] ? arg[1][92] : 0;
  a23=arg[1] ? arg[1][86] : 0;
  a21=(a21-a23);
  a20=(a22*a21);
  a28=(a28+a20);
  a28=(a28/a25);
  a28=(a11*a28);
  a20=(a0*a28);
  a24=(a10*a24);
  a20=(a20+a24);
  a24=(a27*a33);
  a17=(a29*a32);
  a24=(a24+a17);
  a17=(a30*a23);
  a24=(a24+a17);
  a24=(a24/a31);
  a24=(a16*a24);
  a17=(a1*a24);
  a33=(a13*a33);
  a17=(a17+a33);
  a20=(a20-a17);
  a20=(a14*a20);
  if (res[1]!=0) res[1][87]=a20;
  a20=(a3*a28);
  a26=(a10*a26);
  a20=(a20+a26);
  a26=(a4*a24);
  a32=(a13*a32);
  a26=(a26+a32);
  a20=(a20-a26);
  a20=(a14*a20);
  if (res[1]!=0) res[1][88]=a20;
  a28=(a5*a28);
  a21=(a10*a21);
  a28=(a28+a21);
  a24=(a6*a24);
  a23=(a13*a23);
  a24=(a24+a23);
  a28=(a28-a24);
  a28=(a14*a28);
  if (res[1]!=0) res[1][89]=a28;
  a28=arg[1] ? arg[1][93] : 0;
  if (res[1]!=0) res[1][90]=a28;
  a28=arg[1] ? arg[1][94] : 0;
  if (res[1]!=0) res[1][91]=a28;
  a28=arg[1] ? arg[1][95] : 0;
  if (res[1]!=0) res[1][92]=a28;
  if (res[1]!=0) res[1][93]=a18;
  if (res[1]!=0) res[1][94]=a18;
  if (res[1]!=0) res[1][95]=a18;
  a28=arg[1] ? arg[1][99] : 0;
  if (res[1]!=0) res[1][96]=a28;
  a28=arg[1] ? arg[1][100] : 0;
  if (res[1]!=0) res[1][97]=a28;
  a28=arg[1] ? arg[1][101] : 0;
  if (res[1]!=0) res[1][98]=a28;
  a28=arg[1] ? arg[1][102] : 0;
  a24=arg[1] ? arg[1][96] : 0;
  a28=(a28-a24);
  a23=(a15*a28);
  a21=arg[1] ? arg[1][103] : 0;
  a20=arg[1] ? arg[1][97] : 0;
  a21=(a21-a20);
  a26=(a19*a21);
  a23=(a23+a26);
  a26=arg[1] ? arg[1][104] : 0;
  a32=arg[1] ? arg[1][98] : 0;
  a26=(a26-a32);
  a17=(a22*a26);
  a23=(a23+a17);
  a23=(a23/a25);
  a23=(a11*a23);
  a17=(a0*a23);
  a28=(a10*a28);
  a17=(a17+a28);
  a28=(a27*a24);
  a33=(a29*a20);
  a28=(a28+a33);
  a33=(a30*a32);
  a28=(a28+a33);
  a28=(a28/a31);
  a28=(a16*a28);
  a33=(a1*a28);
  a24=(a13*a24);
  a33=(a33+a24);
  a17=(a17-a33);
  a17=(a14*a17);
  if (res[1]!=0) res[1][99]=a17;
  a17=(a3*a23);
  a21=(a10*a21);
  a17=(a17+a21);
  a21=(a4*a28);
  a20=(a13*a20);
  a21=(a21+a20);
  a17=(a17-a21);
  a17=(a14*a17);
  if (res[1]!=0) res[1][100]=a17;
  a23=(a5*a23);
  a26=(a10*a26);
  a23=(a23+a26);
  a28=(a6*a28);
  a32=(a13*a32);
  a28=(a28+a32);
  a23=(a23-a28);
  a23=(a14*a23);
  if (res[1]!=0) res[1][101]=a23;
  a23=arg[1] ? arg[1][105] : 0;
  if (res[1]!=0) res[1][102]=a23;
  a23=arg[1] ? arg[1][106] : 0;
  if (res[1]!=0) res[1][103]=a23;
  a23=arg[1] ? arg[1][107] : 0;
  if (res[1]!=0) res[1][104]=a23;
  if (res[1]!=0) res[1][105]=a18;
  if (res[1]!=0) res[1][106]=a18;
  if (res[1]!=0) res[1][107]=a18;
  a23=arg[1] ? arg[1][111] : 0;
  if (res[1]!=0) res[1][108]=a23;
  a23=arg[1] ? arg[1][112] : 0;
  if (res[1]!=0) res[1][109]=a23;
  a23=arg[1] ? arg[1][113] : 0;
  if (res[1]!=0) res[1][110]=a23;
  a23=arg[1] ? arg[1][114] : 0;
  a28=arg[1] ? arg[1][108] : 0;
  a23=(a23-a28);
  a32=(a15*a23);
  a26=arg[1] ? arg[1][115] : 0;
  a17=arg[1] ? arg[1][109] : 0;
  a26=(a26-a17);
  a21=(a19*a26);
  a32=(a32+a21);
  a21=arg[1] ? arg[1][116] : 0;
  a20=arg[1] ? arg[1][110] : 0;
  a21=(a21-a20);
  a33=(a22*a21);
  a32=(a32+a33);
  a32=(a32/a25);
  a32=(a11*a32);
  a33=(a0*a32);
  a23=(a10*a23);
  a33=(a33+a23);
  a23=(a27*a28);
  a24=(a29*a17);
  a23=(a23+a24);
  a24=(a30*a20);
  a23=(a23+a24);
  a23=(a23/a31);
  a23=(a16*a23);
  a24=(a1*a23);
  a28=(a13*a28);
  a24=(a24+a28);
  a33=(a33-a24);
  a33=(a14*a33);
  if (res[1]!=0) res[1][111]=a33;
  a33=(a3*a32);
  a26=(a10*a26);
  a33=(a33+a26);
  a26=(a4*a23);
  a17=(a13*a17);
  a26=(a26+a17);
  a33=(a33-a26);
  a33=(a14*a33);
  if (res[1]!=0) res[1][112]=a33;
  a32=(a5*a32);
  a21=(a10*a21);
  a32=(a32+a21);
  a23=(a6*a23);
  a20=(a13*a20);
  a23=(a23+a20);
  a32=(a32-a23);
  a32=(a14*a32);
  if (res[1]!=0) res[1][113]=a32;
  a32=arg[1] ? arg[1][117] : 0;
  if (res[1]!=0) res[1][114]=a32;
  a32=arg[1] ? arg[1][118] : 0;
  if (res[1]!=0) res[1][115]=a32;
  a32=arg[1] ? arg[1][119] : 0;
  if (res[1]!=0) res[1][116]=a32;
  if (res[1]!=0) res[1][117]=a18;
  if (res[1]!=0) res[1][118]=a18;
  if (res[1]!=0) res[1][119]=a18;
  a32=arg[1] ? arg[1][123] : 0;
  if (res[1]!=0) res[1][120]=a32;
  a32=arg[1] ? arg[1][124] : 0;
  if (res[1]!=0) res[1][121]=a32;
  a32=arg[1] ? arg[1][125] : 0;
  if (res[1]!=0) res[1][122]=a32;
  a32=arg[1] ? arg[1][126] : 0;
  a23=arg[1] ? arg[1][120] : 0;
  a32=(a32-a23);
  a20=(a15*a32);
  a21=arg[1] ? arg[1][127] : 0;
  a33=arg[1] ? arg[1][121] : 0;
  a21=(a21-a33);
  a26=(a19*a21);
  a20=(a20+a26);
  a26=arg[1] ? arg[1][128] : 0;
  a17=arg[1] ? arg[1][122] : 0;
  a26=(a26-a17);
  a24=(a22*a26);
  a20=(a20+a24);
  a20=(a20/a25);
  a20=(a11*a20);
  a24=(a0*a20);
  a32=(a10*a32);
  a24=(a24+a32);
  a32=(a27*a23);
  a28=(a29*a33);
  a32=(a32+a28);
  a28=(a30*a17);
  a32=(a32+a28);
  a32=(a32/a31);
  a32=(a16*a32);
  a28=(a1*a32);
  a23=(a13*a23);
  a28=(a28+a23);
  a24=(a24-a28);
  a24=(a14*a24);
  if (res[1]!=0) res[1][123]=a24;
  a24=(a3*a20);
  a21=(a10*a21);
  a24=(a24+a21);
  a21=(a4*a32);
  a33=(a13*a33);
  a21=(a21+a33);
  a24=(a24-a21);
  a24=(a14*a24);
  if (res[1]!=0) res[1][124]=a24;
  a20=(a5*a20);
  a26=(a10*a26);
  a20=(a20+a26);
  a32=(a6*a32);
  a17=(a13*a17);
  a32=(a32+a17);
  a20=(a20-a32);
  a20=(a14*a20);
  if (res[1]!=0) res[1][125]=a20;
  a20=arg[1] ? arg[1][129] : 0;
  if (res[1]!=0) res[1][126]=a20;
  a20=arg[1] ? arg[1][130] : 0;
  if (res[1]!=0) res[1][127]=a20;
  a20=arg[1] ? arg[1][131] : 0;
  if (res[1]!=0) res[1][128]=a20;
  if (res[1]!=0) res[1][129]=a18;
  if (res[1]!=0) res[1][130]=a18;
  if (res[1]!=0) res[1][131]=a18;
  a20=arg[1] ? arg[1][135] : 0;
  if (res[1]!=0) res[1][132]=a20;
  a20=arg[1] ? arg[1][136] : 0;
  if (res[1]!=0) res[1][133]=a20;
  a20=arg[1] ? arg[1][137] : 0;
  if (res[1]!=0) res[1][134]=a20;
  a20=arg[1] ? arg[1][138] : 0;
  a32=arg[1] ? arg[1][132] : 0;
  a20=(a20-a32);
  a15=(a15*a20);
  a17=arg[1] ? arg[1][139] : 0;
  a26=arg[1] ? arg[1][133] : 0;
  a17=(a17-a26);
  a19=(a19*a17);
  a15=(a15+a19);
  a19=arg[1] ? arg[1][140] : 0;
  a24=arg[1] ? arg[1][134] : 0;
  a19=(a19-a24);
  a22=(a22*a19);
  a15=(a15+a22);
  a15=(a15/a25);
  a11=(a11*a15);
  a15=(a0*a11);
  a20=(a10*a20);
  a15=(a15+a20);
  a27=(a27*a32);
  a29=(a29*a26);
  a27=(a27+a29);
  a30=(a30*a24);
  a27=(a27+a30);
  a27=(a27/a31);
  a16=(a16*a27);
  a27=(a1*a16);
  a32=(a13*a32);
  a27=(a27+a32);
  a15=(a15-a27);
  a15=(a14*a15);
  if (res[1]!=0) res[1][135]=a15;
  a15=(a3*a11);
  a17=(a10*a17);
  a15=(a15+a17);
  a17=(a4*a16);
  a26=(a13*a26);
  a17=(a17+a26);
  a15=(a15-a17);
  a15=(a14*a15);
  if (res[1]!=0) res[1][136]=a15;
  a11=(a5*a11);
  a19=(a10*a19);
  a11=(a11+a19);
  a16=(a6*a16);
  a24=(a13*a24);
  a16=(a16+a24);
  a11=(a11-a16);
  a11=(a14*a11);
  if (res[1]!=0) res[1][137]=a11;
  a11=arg[1] ? arg[1][141] : 0;
  if (res[1]!=0) res[1][138]=a11;
  a11=arg[1] ? arg[1][142] : 0;
  if (res[1]!=0) res[1][139]=a11;
  a11=arg[1] ? arg[1][143] : 0;
  if (res[1]!=0) res[1][140]=a11;
  if (res[1]!=0) res[1][141]=a18;
  if (res[1]!=0) res[1][142]=a18;
  if (res[1]!=0) res[1][143]=a18;
  a11=arg[2] ? arg[2][3] : 0;
  if (res[2]!=0) res[2][0]=a11;
  a11=arg[2] ? arg[2][4] : 0;
  if (res[2]!=0) res[2][1]=a11;
  a11=arg[2] ? arg[2][5] : 0;
  if (res[2]!=0) res[2][2]=a11;
  a8=(a8/a2);
  a11=(a0+a0);
  a16=arg[2] ? arg[2][6] : 0;
  a24=arg[2] ? arg[2][0] : 0;
  a16=(a16-a24);
  a19=(a11*a16);
  a15=(a3+a3);
  a17=arg[2] ? arg[2][7] : 0;
  a26=arg[2] ? arg[2][1] : 0;
  a17=(a17-a26);
  a27=(a15*a17);
  a19=(a19+a27);
  a27=(a5+a5);
  a32=arg[2] ? arg[2][8] : 0;
  a31=arg[2] ? arg[2][2] : 0;
  a32=(a32-a31);
  a30=(a27*a32);
  a19=(a19+a30);
  a2=(a2+a2);
  a19=(a19/a2);
  a19=(a8*a19);
  a30=(a0*a19);
  a16=(a10*a16);
  a30=(a30+a16);
  a7=(a7/a12);
  a16=(a1+a1);
  a29=(a16*a24);
  a20=(a4+a4);
  a25=(a20*a26);
  a29=(a29+a25);
  a25=(a6+a6);
  a22=(a25*a31);
  a29=(a29+a22);
  a12=(a12+a12);
  a29=(a29/a12);
  a29=(a7*a29);
  a22=(a1*a29);
  a24=(a13*a24);
  a22=(a22+a24);
  a30=(a30-a22);
  a30=(a14*a30);
  if (res[2]!=0) res[2][3]=a30;
  a30=(a3*a19);
  a17=(a10*a17);
  a30=(a30+a17);
  a17=(a4*a29);
  a26=(a13*a26);
  a17=(a17+a26);
  a30=(a30-a17);
  a30=(a14*a30);
  if (res[2]!=0) res[2][4]=a30;
  a19=(a5*a19);
  a32=(a10*a32);
  a19=(a19+a32);
  a29=(a6*a29);
  a31=(a13*a31);
  a29=(a29+a31);
  a19=(a19-a29);
  a19=(a14*a19);
  if (res[2]!=0) res[2][5]=a19;
  a19=arg[2] ? arg[2][9] : 0;
  if (res[2]!=0) res[2][6]=a19;
  a19=arg[2] ? arg[2][10] : 0;
  if (res[2]!=0) res[2][7]=a19;
  a19=arg[2] ? arg[2][11] : 0;
  if (res[2]!=0) res[2][8]=a19;
  if (res[2]!=0) res[2][9]=a9;
  if (res[2]!=0) res[2][10]=a18;
  if (res[2]!=0) res[2][11]=a18;
  a19=arg[2] ? arg[2][15] : 0;
  if (res[2]!=0) res[2][12]=a19;
  a19=arg[2] ? arg[2][16] : 0;
  if (res[2]!=0) res[2][13]=a19;
  a19=arg[2] ? arg[2][17] : 0;
  if (res[2]!=0) res[2][14]=a19;
  a19=arg[2] ? arg[2][18] : 0;
  a29=arg[2] ? arg[2][12] : 0;
  a19=(a19-a29);
  a31=(a11*a19);
  a32=arg[2] ? arg[2][19] : 0;
  a30=arg[2] ? arg[2][13] : 0;
  a32=(a32-a30);
  a17=(a15*a32);
  a31=(a31+a17);
  a17=arg[2] ? arg[2][20] : 0;
  a26=arg[2] ? arg[2][14] : 0;
  a17=(a17-a26);
  a22=(a27*a17);
  a31=(a31+a22);
  a31=(a31/a2);
  a31=(a8*a31);
  a22=(a0*a31);
  a19=(a10*a19);
  a22=(a22+a19);
  a19=(a16*a29);
  a24=(a20*a30);
  a19=(a19+a24);
  a24=(a25*a26);
  a19=(a19+a24);
  a19=(a19/a12);
  a19=(a7*a19);
  a24=(a1*a19);
  a29=(a13*a29);
  a24=(a24+a29);
  a22=(a22-a24);
  a22=(a14*a22);
  if (res[2]!=0) res[2][15]=a22;
  a22=(a3*a31);
  a32=(a10*a32);
  a22=(a22+a32);
  a32=(a4*a19);
  a30=(a13*a30);
  a32=(a32+a30);
  a22=(a22-a32);
  a22=(a14*a22);
  if (res[2]!=0) res[2][16]=a22;
  a31=(a5*a31);
  a17=(a10*a17);
  a31=(a31+a17);
  a19=(a6*a19);
  a26=(a13*a26);
  a19=(a19+a26);
  a31=(a31-a19);
  a31=(a14*a31);
  if (res[2]!=0) res[2][17]=a31;
  a31=arg[2] ? arg[2][21] : 0;
  if (res[2]!=0) res[2][18]=a31;
  a31=arg[2] ? arg[2][22] : 0;
  if (res[2]!=0) res[2][19]=a31;
  a31=arg[2] ? arg[2][23] : 0;
  if (res[2]!=0) res[2][20]=a31;
  if (res[2]!=0) res[2][21]=a18;
  if (res[2]!=0) res[2][22]=a9;
  if (res[2]!=0) res[2][23]=a18;
  a31=arg[2] ? arg[2][27] : 0;
  if (res[2]!=0) res[2][24]=a31;
  a31=arg[2] ? arg[2][28] : 0;
  if (res[2]!=0) res[2][25]=a31;
  a31=arg[2] ? arg[2][29] : 0;
  if (res[2]!=0) res[2][26]=a31;
  a31=arg[2] ? arg[2][30] : 0;
  a19=arg[2] ? arg[2][24] : 0;
  a31=(a31-a19);
  a11=(a11*a31);
  a26=arg[2] ? arg[2][31] : 0;
  a17=arg[2] ? arg[2][25] : 0;
  a26=(a26-a17);
  a15=(a15*a26);
  a11=(a11+a15);
  a15=arg[2] ? arg[2][32] : 0;
  a22=arg[2] ? arg[2][26] : 0;
  a15=(a15-a22);
  a27=(a27*a15);
  a11=(a11+a27);
  a11=(a11/a2);
  a8=(a8*a11);
  a0=(a0*a8);
  a31=(a10*a31);
  a0=(a0+a31);
  a16=(a16*a19);
  a20=(a20*a17);
  a16=(a16+a20);
  a25=(a25*a22);
  a16=(a16+a25);
  a16=(a16/a12);
  a7=(a7*a16);
  a1=(a1*a7);
  a19=(a13*a19);
  a1=(a1+a19);
  a0=(a0-a1);
  a0=(a14*a0);
  if (res[2]!=0) res[2][27]=a0;
  a3=(a3*a8);
  a26=(a10*a26);
  a3=(a3+a26);
  a4=(a4*a7);
  a17=(a13*a17);
  a4=(a4+a17);
  a3=(a3-a4);
  a3=(a14*a3);
  if (res[2]!=0) res[2][28]=a3;
  a5=(a5*a8);
  a10=(a10*a15);
  a5=(a5+a10);
  a6=(a6*a7);
  a13=(a13*a22);
  a6=(a6+a13);
  a5=(a5-a6);
  a14=(a14*a5);
  if (res[2]!=0) res[2][29]=a14;
  a14=arg[2] ? arg[2][33] : 0;
  if (res[2]!=0) res[2][30]=a14;
  a14=arg[2] ? arg[2][34] : 0;
  if (res[2]!=0) res[2][31]=a14;
  a14=arg[2] ? arg[2][35] : 0;
  if (res[2]!=0) res[2][32]=a14;
  if (res[2]!=0) res[2][33]=a18;
  if (res[2]!=0) res[2][34]=a18;
  if (res[2]!=0) res[2][35]=a9;
  return 0;
}

void vde_chain_nm3_incref(void) {
}

void vde_chain_nm3_decref(void) {
}

int vde_chain_nm3_n_in(void) { return 4;}

int vde_chain_nm3_n_out(void) { return 3;}

const char* vde_chain_nm3_name_in(int i){
  switch (i) {
  case 0: return "i0";
  case 1: return "i1";
  case 2: return "i2";
  case 3: return "i3";
  default: return 0;
  }
}

const char* vde_chain_nm3_name_out(int i){
  switch (i) {
  case 0: return "o0";
  case 1: return "o1";
  case 2: return "o2";
  default: return 0;
  }
}

const int* vde_chain_nm3_sparsity_in(int i) {
  switch (i) {
  case 0: return s0;
  case 1: return s1;
  case 2: return s2;
  case 3: return s3;
  default: return 0;
  }
}

const int* vde_chain_nm3_sparsity_out(int i) {
  switch (i) {
  case 0: return s0;
  case 1: return s1;
  case 2: return s2;
  default: return 0;
  }
}

int vde_chain_nm3_work(int *sz_arg, int* sz_res, int *sz_iw, int *sz_w) {
  if (sz_arg) *sz_arg = 4;
  if (sz_res) *sz_res = 3;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 34;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
