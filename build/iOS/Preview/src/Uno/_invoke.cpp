// This file was generated based on '/usr/local/share/uno/Packages/UnoCore/0.29.20/Backends/CPlusPlus/Uno/_invoke.cpp'.
// WARNING: Changes might be lost if you edit this file directly.

// Generated by _invoke.py
#include <Uno/ObjectModel.h>
#define CALL ((void(*)
#define ME )func)
#define T void*
#define A args

void uInvoke(const void* func, void** args, size_t count)
{
    switch (count)
    {
    default: U_THROW_IOORE();
    case  0: CALL() ME(); break;
    case  1: CALL(T) ME(A[0]); break;
    case  2: CALL(T,T) ME(A[0],A[1]); break;
    case  3: CALL(T,T,T) ME(A[0],A[1],A[2]); break;
    case  4: CALL(T,T,T,T) ME(A[0],A[1],A[2],A[3]); break;
    case  5: CALL(T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4]); break;
    case  6: CALL(T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5]); break;
    case  7: CALL(T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6]); break;
    case  8: CALL(T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7]); break;
    case  9: CALL(T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8]); break;
    case 10: CALL(T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9]); break;
    case 11: CALL(T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[10])
             ; break;
    case 12: CALL(T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[
             10],A[11]); break;
    case 13: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[
             10],A[11],A[12]); break;
    case 14: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9],
             A[10],A[11],A[12],A[13]); break;
    case 15: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[
             9],A[10],A[11],A[12],A[13],A[14]); break;
    case 16: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],
             A[9],A[10],A[11],A[12],A[13],A[14],A[15]); break;
    case 17: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8]
             ,A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16]); break;
    case 18: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[
             8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16],A[17]); break;
    case 19: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],
             A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16],A[17],A[18]); break;
    case 20: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[
             7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16],A[17],A[18],A[19]); break;
    case 21: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],
             A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16],A[17],A[18],A[19],A[20]);
             break;
    case 22: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6]
             ,A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16],A[17],A[18],A[19],A[20],A[21]
             ); break;
    case 23: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[
             6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16],A[17],A[18],A[19],A[20],A[
             21],A[22]); break;
    case 24: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],
             A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16],A[17],A[18],A[19],A[20],
             A[21],A[22],A[23]); break;
    case 25: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[
             5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16],A[17],A[18],A[19],A[
             20],A[21],A[22],A[23],A[24]); break;
    case 26: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],
             A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16],A[17],A[18],A[19],A[
             20],A[21],A[22],A[23],A[24],A[25]); break;
    case 27: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4]
             ,A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16],A[17],A[18],A[19],
             A[20],A[21],A[22],A[23],A[24],A[25],A[26]); break;
    case 28: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[
             4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16],A[17],A[18],A[19]
             ,A[20],A[21],A[22],A[23],A[24],A[25],A[26],A[27]); break;
    case 29: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],
             A[4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16],A[17],A[18],A[
             19],A[20],A[21],A[22],A[23],A[24],A[25],A[26],A[27],A[28]); break;
    case 30: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[
             3],A[4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16],A[17],A[18],
             A[19],A[20],A[21],A[22],A[23],A[24],A[25],A[26],A[27],A[28],A[29]); break;
    case 31: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2],
             A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16],A[17],A[
             18],A[19],A[20],A[21],A[22],A[23],A[24],A[25],A[26],A[27],A[28],A[29],A[30]); break;
    case 32: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[2]
             ,A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16],A[17],A[
             18],A[19],A[20],A[21],A[22],A[23],A[24],A[25],A[26],A[27],A[28],A[29],A[30],A[31]);
             break;
    case 33: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],A[
             2],A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16],A[17],
             A[18],A[19],A[20],A[21],A[22],A[23],A[24],A[25],A[26],A[27],A[28],A[29],A[30],A[31],A[
             32]); break;
    case 34: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[1],
             A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16],A[17]
             ,A[18],A[19],A[20],A[21],A[22],A[23],A[24],A[25],A[26],A[27],A[28],A[29],A[30],A[31],A[
             32],A[33]); break;
    case 35: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],A[
             1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16],A[
             17],A[18],A[19],A[20],A[21],A[22],A[23],A[24],A[25],A[26],A[27],A[28],A[29],A[30],A[31]
             ,A[32],A[33],A[34]); break;
    case 36: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0],
             A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16],
             A[17],A[18],A[19],A[20],A[21],A[22],A[23],A[24],A[25],A[26],A[27],A[28],A[29],A[30],A[
             31],A[32],A[33],A[34],A[35]); break;
    case 37: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[0]
             ,A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[16]
             ,A[17],A[18],A[19],A[20],A[21],A[22],A[23],A[24],A[25],A[26],A[27],A[28],A[29],A[30],A[
             31],A[32],A[33],A[34],A[35],A[36]); break;
    case 38: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(A[
             0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],A[
             16],A[17],A[18],A[19],A[20],A[21],A[22],A[23],A[24],A[25],A[26],A[27],A[28],A[29],A[30]
             ,A[31],A[32],A[33],A[34],A[35],A[36],A[37]); break;
    case 39: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T) ME(
             A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[15],
             A[16],A[17],A[18],A[19],A[20],A[21],A[22],A[23],A[24],A[25],A[26],A[27],A[28],A[29],A[
             30],A[31],A[32],A[33],A[34],A[35],A[36],A[37],A[38]); break;
    case 40: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T)
             ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[
             15],A[16],A[17],A[18],A[19],A[20],A[21],A[22],A[23],A[24],A[25],A[26],A[27],A[28],A[29]
             ,A[30],A[31],A[32],A[33],A[34],A[35],A[36],A[37],A[38],A[39]); break;
    case 41: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T)
             ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],A[
             15],A[16],A[17],A[18],A[19],A[20],A[21],A[22],A[23],A[24],A[25],A[26],A[27],A[28],A[29]
             ,A[30],A[31],A[32],A[33],A[34],A[35],A[36],A[37],A[38],A[39],A[40]); break;
    case 42: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,
             T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14],
             A[15],A[16],A[17],A[18],A[19],A[20],A[21],A[22],A[23],A[24],A[25],A[26],A[27],A[28],A[
             29],A[30],A[31],A[32],A[33],A[34],A[35],A[36],A[37],A[38],A[39],A[40],A[41]); break;
    case 43: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,
             T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[14]
             ,A[15],A[16],A[17],A[18],A[19],A[20],A[21],A[22],A[23],A[24],A[25],A[26],A[27],A[28],A[
             29],A[30],A[31],A[32],A[33],A[34],A[35],A[36],A[37],A[38],A[39],A[40],A[41],A[42]);
             break;
    case 44: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,
             T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],A[
             14],A[15],A[16],A[17],A[18],A[19],A[20],A[21],A[22],A[23],A[24],A[25],A[26],A[27],A[28]
             ,A[29],A[30],A[31],A[32],A[33],A[34],A[35],A[36],A[37],A[38],A[39],A[40],A[41],A[42],A[
             43]); break;
    case 45: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,
             T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13],
             A[14],A[15],A[16],A[17],A[18],A[19],A[20],A[21],A[22],A[23],A[24],A[25],A[26],A[27],A[
             28],A[29],A[30],A[31],A[32],A[33],A[34],A[35],A[36],A[37],A[38],A[39],A[40],A[41],A[42]
             ,A[43],A[44]); break;
    case 46: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,
             T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[13]
             ,A[14],A[15],A[16],A[17],A[18],A[19],A[20],A[21],A[22],A[23],A[24],A[25],A[26],A[27],A[
             28],A[29],A[30],A[31],A[32],A[33],A[34],A[35],A[36],A[37],A[38],A[39],A[40],A[41],A[42]
             ,A[43],A[44],A[45]); break;
    case 47: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,
             T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],A[
             13],A[14],A[15],A[16],A[17],A[18],A[19],A[20],A[21],A[22],A[23],A[24],A[25],A[26],A[27]
             ,A[28],A[29],A[30],A[31],A[32],A[33],A[34],A[35],A[36],A[37],A[38],A[39],A[40],A[41],A[
             42],A[43],A[44],A[45],A[46]); break;
    case 48: CALL(T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,T,
             T,T,T,T,T,T,T) ME(A[0],A[1],A[2],A[3],A[4],A[5],A[6],A[7],A[8],A[9],A[10],A[11],A[12],
             A[13],A[14],A[15],A[16],A[17],A[18],A[19],A[20],A[21],A[22],A[23],A[24],A[25],A[26],A[
             27],A[28],A[29],A[30],A[31],A[32],A[33],A[34],A[35],A[36],A[37],A[38],A[39],A[40],A[41]
             ,A[42],A[43],A[44],A[45],A[46],A[47]); break;
    }
}
