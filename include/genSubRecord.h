/* genSubRecord.h generated from genSubRecord.dbd */

#ifndef INC_genSubRecord_H
#define INC_genSubRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

#ifndef genSubEFLG_NUM_CHOICES
typedef enum {
    genSubEFLG_NEVER                /* NEVER */,
    genSubEFLG_ON_CHANGE            /* ON CHANGE */,
    genSubEFLG_ALWAYS               /* ALWAYS */
} genSubEFLG;
#define genSubEFLG_NUM_CHOICES 3
#endif

#ifndef genSubLFLG_NUM_CHOICES
typedef enum {
    genSubLFLG_IGNORE               /* IGNORE */,
    genSubLFLG_READ                 /* READ */
} genSubLFLG;
#define genSubLFLG_NUM_CHOICES 2
#endif

typedef struct genSubRecord {
    char                name[61];   /* Record Name */
    char                desc[41];   /* Descriptor */
    char                asg[29];    /* Access Security Group */
    epicsEnum16         scan;       /* Scan Mechanism */
    epicsEnum16         pini;       /* Process at iocInit */
    epicsInt16          phas;       /* Scan Phase */
    char                evnt[40];   /* Event Name */
    epicsInt16          tse;        /* Time Stamp Event */
    DBLINK              tsel;       /* Time Stamp Link */
    epicsEnum16         dtyp;       /* Device Type */
    epicsInt16          disv;       /* Disable Value */
    epicsInt16          disa;       /* Disable */
    DBLINK              sdis;       /* Scanning Disable */
    epicsMutexId        mlok;       /* Monitor lock */
    ELLLIST             mlis;       /* Monitor List */
    ELLLIST             bklnk;      /* Backwards link tracking */
    epicsUInt8          disp;       /* Disable putField */
    epicsUInt8          proc;       /* Force Processing */
    epicsEnum16         stat;       /* Alarm Status */
    epicsEnum16         sevr;       /* Alarm Severity */
    epicsEnum16         nsta;       /* New Alarm Status */
    epicsEnum16         nsev;       /* New Alarm Severity */
    epicsEnum16         acks;       /* Alarm Ack Severity */
    epicsEnum16         ackt;       /* Alarm Ack Transient */
    epicsEnum16         diss;       /* Disable Alarm Sevrty */
    epicsUInt8          lcnt;       /* Lock Count */
    epicsUInt8          pact;       /* Record active */
    epicsUInt8          putf;       /* dbPutField process */
    epicsUInt8          rpro;       /* Reprocess  */
    struct asgMember    *asp;       /* Access Security Pvt */
    struct processNotify *ppn;      /* pprocessNotify */
    struct processNotifyRecord *ppnr; /* pprocessNotifyRecord */
    struct scan_element *spvt;      /* Scan Private */
    struct typed_rset   *rset;      /* Address of RSET */
    unambiguous_dset    *dset;      /* DSET address */
    void                *dpvt;      /* Device Private */
    struct dbRecordType *rdes;      /* Address of dbRecordType */
    struct lockRecord   *lset;      /* Lock Set */
    epicsEnum16         prio;       /* Scheduling Priority */
    epicsUInt8          tpro;       /* Trace Processing */
    epicsUInt8          bkpt;       /* Break Point */
    epicsUInt8          udf;        /* Undefined */
    epicsEnum16         udfs;       /* Undefined Alarm Sevrty */
    epicsTimeStamp      time;       /* Time */
    DBLINK              flnk;       /* Forward Process Link */
    epicsFloat64        vers;       /* Version Number */
    epicsInt32          val;        /* Subr. return value */
    epicsInt32          oval;       /* Old return value */
    long (*sadr)(struct genSubRecord *); /* Subroutine Address */
    long (*osad)(struct genSubRecord *); /* Old Subr. Address */
    epicsEnum16         lflg;       /* Link Flag */
    epicsEnum16         eflg;       /* Event Flag */
    DBLINK              subl;       /* Subroutine Input Link */
    char                inam[40];   /* Init Routine Name */
    char                snam[40];   /* Process Subr. Name */
    char                onam[40];   /* Old Subroutine Name */
    epicsEnum16         brsv;       /* Bad Return Severity */
    epicsInt16          prec;       /* Display Precision */
    DBLINK              inpa;       /* Input Link A */
    DBLINK              inpb;       /* Input Link B */
    DBLINK              inpc;       /* Input Link C */
    DBLINK              inpd;       /* Input Link D */
    DBLINK              inpe;       /* Input Link E */
    DBLINK              inpf;       /* Input Link F */
    DBLINK              inpg;       /* Input Link G */
    DBLINK              inph;       /* Input Link H */
    DBLINK              inpi;       /* Input Link I */
    DBLINK              inpj;       /* Input Link J */
    DBLINK              inpk;       /* Input Link K */
    DBLINK              inpl;       /* Input Link L */
    DBLINK              inpm;       /* Input Link M */
    DBLINK              inpn;       /* Input Link N */
    DBLINK              inpo;       /* Input Link O */
    DBLINK              inpp;       /* Input Link P */
    DBLINK              inpq;       /* Input Link Q */
    DBLINK              inpr;       /* Input Link R */
    DBLINK              inps;       /* Input Link S */
    DBLINK              inpt;       /* Input Link T */
    DBLINK              inpu;       /* Input Link U */
    char                ufa[40];    /* Input Structure A */
    char                ufb[40];    /* Input Structure B */
    char                ufc[40];    /* Input Structure C */
    char                ufd[40];    /* Input Structure D */
    char                ufe[40];    /* Input Structure E */
    char                uff[40];    /* Input Structure F */
    char                ufg[40];    /* Input Structure G */
    char                ufh[40];    /* Input Structure H */
    char                ufi[40];    /* Input Structure I */
    char                ufj[40];    /* Input Structure J */
    char                ufk[40];    /* Input Structure K */
    char                ufl[40];    /* Input Structure L */
    char                ufm[40];    /* Input Structure M */
    char                ufn[40];    /* Input Structure N */
    char                ufo[40];    /* Input Structure O */
    char                ufp[40];    /* Input Structure P */
    char                ufq[40];    /* Input Structure Q */
    char                ufr[40];    /* Input Structure R */
    char                ufs[40];    /* Input Structure S */
    char                uft[40];    /* Input Structure T */
    char                ufu[40];    /* Input Structure U */
    void *a;                        /* Value of Input A */
    void *b;                        /* Value of Input B */
    void *c;                        /* Value of Input C */
    void *d;                        /* Value of Input D */
    void *e;                        /* Value of Input E */
    void *f;                        /* Value of Input F */
    void *g;                        /* Value of Input G */
    void *h;                        /* Value of Input H */
    void *i;                        /* Value of Input I */
    void *j;                        /* Value of Input J */
    void *k;                        /* Value of Input K */
    void *l;                        /* Value of Input L */
    void *m;                        /* Value of Input M */
    void *n;                        /* Value of Input N */
    void *o;                        /* Value of Input O */
    void *p;                        /* Value of Input P */
    void *q;                        /* Value of Input Q */
    void *r;                        /* Value of Input R */
    void *s;                        /* Value of Input S */
    void *t;                        /* Value of Input T */
    void *u;                        /* Value of Input U */
    epicsEnum16         fta;        /* Type of A */
    epicsEnum16         ftb;        /* Type of B */
    epicsEnum16         ftc;        /* Type of C */
    epicsEnum16         ftd;        /* Type of D */
    epicsEnum16         fte;        /* Type of E */
    epicsEnum16         ftf;        /* Type of F */
    epicsEnum16         ftg;        /* Type of G */
    epicsEnum16         fth;        /* Type of H */
    epicsEnum16         fti;        /* Type of I */
    epicsEnum16         ftj;        /* Type of J */
    epicsEnum16         ftk;        /* Type of K */
    epicsEnum16         ftl;        /* Type of L */
    epicsEnum16         ftm;        /* Type of M */
    epicsEnum16         ftn;        /* Type of N */
    epicsEnum16         fto;        /* Type of O */
    epicsEnum16         ftp;        /* Type of P */
    epicsEnum16         ftq;        /* Type of Q */
    epicsEnum16         ftr;        /* Type of R */
    epicsEnum16         fts;        /* Type of S */
    epicsEnum16         ftt;        /* Type of T */
    epicsEnum16         ftu;        /* Type of U */
    epicsUInt32         noa;        /* No. in A */
    epicsUInt32         nob;        /* No. in B */
    epicsUInt32         noc;        /* No. in C */
    epicsUInt32         nod;        /* No. in D */
    epicsUInt32         noe;        /* No. in E */
    epicsUInt32         nof;        /* No. in F */
    epicsUInt32         nog;        /* No. in G */
    epicsUInt32         noh;        /* No. in H */
    epicsUInt32         noi;        /* No. in I */
    epicsUInt32         noj;        /* No. in J */
    epicsUInt32         nok;        /* No. in K */
    epicsUInt32         nol;        /* No. in L */
    epicsUInt32         nom;        /* No. in M */
    epicsUInt32         non;        /* No. in N */
    epicsUInt32         noo;        /* No. in O */
    epicsUInt32         nop;        /* No. in P */
    epicsUInt32         noq;        /* No. in Q */
    epicsUInt32         nor;        /* No. in R */
    epicsUInt32         nos;        /* No. in S */
    epicsUInt32         NOT;        /* No. in T */
    epicsUInt32         nou;        /* No. in U */
    DBLINK              outa;       /* Output Link A */
    DBLINK              outb;       /* Output Link B */
    DBLINK              outc;       /* Output Link C */
    DBLINK              outd;       /* Output Link D */
    DBLINK              oute;       /* Output Link E */
    DBLINK              outf;       /* Output Link F */
    DBLINK              outg;       /* Output Link G */
    DBLINK              outh;       /* Output Link H */
    DBLINK              outi;       /* Output Link I */
    DBLINK              outj;       /* Output Link J */
    DBLINK              outk;       /* Output Link K */
    DBLINK              outl;       /* Output Link L */
    DBLINK              outm;       /* Output Link M */
    DBLINK              outn;       /* Output Link N */
    DBLINK              outo;       /* Output Link O */
    DBLINK              outp;       /* Output Link P */
    DBLINK              outq;       /* Output Link Q */
    DBLINK              outr;       /* Output Link R */
    DBLINK              outs;       /* Output Link S */
    DBLINK              outt;       /* Output Link T */
    DBLINK              outu;       /* Output Link U */
    char                ufva[40];   /* Output Structure A */
    char                ufvb[40];   /* Output Structure B */
    char                ufvc[40];   /* Output Structure C */
    char                ufvd[40];   /* Output Structure D */
    char                ufve[40];   /* Output Structure E */
    char                ufvf[40];   /* Output Structure F */
    char                ufvg[40];   /* Output Structure G */
    char                ufvh[40];   /* Output Structure H */
    char                ufvi[40];   /* Output Structure I */
    char                ufvj[40];   /* Output Structure J */
    char                ufvk[40];   /* Output Structure K */
    char                ufvl[40];   /* Output Structure L */
    char                ufvm[40];   /* Output Structure M */
    char                ufvn[40];   /* Output Structure N */
    char                ufvo[40];   /* Output Structure O */
    char                ufvp[40];   /* Output Structure P */
    char                ufvq[40];   /* Output Structure Q */
    char                ufvr[40];   /* Output Structure R */
    char                ufvs[40];   /* Output Structure S */
    char                ufvt[40];   /* Output Structure T */
    char                ufvu[40];   /* Output Structure U */
    void *vala;                     /* Value of Output A */
    void *valb;                     /* Value of Output B */
    void *valc;                     /* Value of Output C */
    void *vald;                     /* Value of Output D */
    void *vale;                     /* Value of Output E */
    void *valf;                     /* Value of Output F */
    void *valg;                     /* Value of Output G */
    void *valh;                     /* Value of Output H */
    void *vali;                     /* Value of Output I */
    void *valj;                     /* Value of Output J */
    void *valk;                     /* Value of Output K */
    void *vall;                     /* Value of Output L */
    void *valm;                     /* Value of Output M */
    void *valn;                     /* Value of Output N */
    void *valo;                     /* Value of Output O */
    void *valp;                     /* Value of Output P */
    void *valq;                     /* Value of Output Q */
    void *valr;                     /* Value of Output R */
    void *vals;                     /* Value of Output S */
    void *valt;                     /* Value of Output T */
    void *valu;                     /* Value of Output U */
    void *ovla;                     /* Old Output A */
    void *ovlb;                     /* Old Output B */
    void *ovlc;                     /* Old Output C */
    void *ovld;                     /* Old Output D */
    void *ovle;                     /* Old Output E */
    void *ovlf;                     /* Old Output F */
    void *ovlg;                     /* Old Output G */
    void *ovlh;                     /* Old Output H */
    void *ovli;                     /* Old Output I */
    void *ovlj;                     /* Old Output J */
    void *ovlk;                     /* Old Output K */
    void *ovll;                     /* Old Output L */
    void *ovlm;                     /* Old Output M */
    void *ovln;                     /* Old Output N */
    void *ovlo;                     /* Old Output O */
    void *ovlp;                     /* Old Output P */
    void *ovlq;                     /* Old Output Q */
    void *ovlr;                     /* Old Output R */
    void *ovls;                     /* Old Output S */
    void *ovlt;                     /* Old Output T */
    void *ovlu;                     /* Old Output U */
    epicsEnum16         ftva;       /* Type of VALA */
    epicsEnum16         ftvb;       /* Type of VALB */
    epicsEnum16         ftvc;       /* Type of VALC */
    epicsEnum16         ftvd;       /* Type of VALD */
    epicsEnum16         ftve;       /* Type of VALE */
    epicsEnum16         ftvf;       /* Type of VALF */
    epicsEnum16         ftvg;       /* Type of VALG */
    epicsEnum16         ftvh;       /* Type of VALH */
    epicsEnum16         ftvi;       /* Type of VALI */
    epicsEnum16         ftvj;       /* Type of VALJ */
    epicsEnum16         ftvk;       /* Type of VALK */
    epicsEnum16         ftvl;       /* Type of VALL */
    epicsEnum16         ftvm;       /* Type of VALM */
    epicsEnum16         ftvn;       /* Type of VALN */
    epicsEnum16         ftvo;       /* Type of VALO */
    epicsEnum16         ftvp;       /* Type of VALP */
    epicsEnum16         ftvq;       /* Type of VALQ */
    epicsEnum16         ftvr;       /* Type of VALR */
    epicsEnum16         ftvs;       /* Type of VALS */
    epicsEnum16         ftvt;       /* Type of VALT */
    epicsEnum16         ftvu;       /* Type of VALU */
    epicsUInt32         nova;       /* No. in VALA */
    epicsUInt32         novb;       /* No. in VALB */
    epicsUInt32         novc;       /* No. in VALC */
    epicsUInt32         novd;       /* No. in VALD */
    epicsUInt32         nove;       /* No. in VALE */
    epicsUInt32         novf;       /* No. in VALF */
    epicsUInt32         novg;       /* No. in VALG */
    epicsUInt32         novh;       /* No. in VAlH */
    epicsUInt32         novi;       /* No. in VALI */
    epicsUInt32         novj;       /* No. in VALJ */
    epicsUInt32         novk;       /* No. in VALK */
    epicsUInt32         novl;       /* No. in VALL */
    epicsUInt32         novm;       /* No. in VALM */
    epicsUInt32         novn;       /* No. in VALN */
    epicsUInt32         novo;       /* No. in VALO */
    epicsUInt32         novp;       /* No. in VALP */
    epicsUInt32         novq;       /* No. in VALQ */
    epicsUInt32         novr;       /* No. in VALR */
    epicsUInt32         novs;       /* No. in VALS */
    epicsUInt32         novt;       /* No. in VALT */
    epicsUInt32         novu;       /* No. in VALU */
    epicsUInt32         tova;       /* Total bytes for VALA */
    epicsUInt32         tovb;       /* Total bytes for VALB */
    epicsUInt32         tovc;       /* Total bytes for VALC */
    epicsUInt32         tovd;       /* Total bytes for VALD */
    epicsUInt32         tove;       /* Total bytes for VALE */
    epicsUInt32         tovf;       /* Total bytes for VALF */
    epicsUInt32         tovg;       /* Total bytes for VALG */
    epicsUInt32         tovh;       /* Total bytes for VAlH */
    epicsUInt32         tovi;       /* Total bytes for VALI */
    epicsUInt32         tovj;       /* Total bytes for VALJ */
    epicsUInt32         tovk;       /* Total bytes for VALK */
    epicsUInt32         tovl;       /* Total bytes for VALL */
    epicsUInt32         tovm;       /* Total bytes for VALM */
    epicsUInt32         tovn;       /* Total bytes for VALN */
    epicsUInt32         tovo;       /* Total bytes for VALO */
    epicsUInt32         tovp;       /* Total bytes for VALP */
    epicsUInt32         tovq;       /* Total bytes for VALQ */
    epicsUInt32         tovr;       /* Total bytes for VALR */
    epicsUInt32         tovs;       /* Total bytes for VALS */
    epicsUInt32         tovt;       /* Total bytes for VALT */
    epicsUInt32         tovu;       /* Total bytes for VALU */
} genSubRecord;

typedef enum {
	genSubRecordNAME = 0,
	genSubRecordDESC = 1,
	genSubRecordASG = 2,
	genSubRecordSCAN = 3,
	genSubRecordPINI = 4,
	genSubRecordPHAS = 5,
	genSubRecordEVNT = 6,
	genSubRecordTSE = 7,
	genSubRecordTSEL = 8,
	genSubRecordDTYP = 9,
	genSubRecordDISV = 10,
	genSubRecordDISA = 11,
	genSubRecordSDIS = 12,
	genSubRecordMLOK = 13,
	genSubRecordMLIS = 14,
	genSubRecordBKLNK = 15,
	genSubRecordDISP = 16,
	genSubRecordPROC = 17,
	genSubRecordSTAT = 18,
	genSubRecordSEVR = 19,
	genSubRecordNSTA = 20,
	genSubRecordNSEV = 21,
	genSubRecordACKS = 22,
	genSubRecordACKT = 23,
	genSubRecordDISS = 24,
	genSubRecordLCNT = 25,
	genSubRecordPACT = 26,
	genSubRecordPUTF = 27,
	genSubRecordRPRO = 28,
	genSubRecordASP = 29,
	genSubRecordPPN = 30,
	genSubRecordPPNR = 31,
	genSubRecordSPVT = 32,
	genSubRecordRSET = 33,
	genSubRecordDSET = 34,
	genSubRecordDPVT = 35,
	genSubRecordRDES = 36,
	genSubRecordLSET = 37,
	genSubRecordPRIO = 38,
	genSubRecordTPRO = 39,
	genSubRecordBKPT = 40,
	genSubRecordUDF = 41,
	genSubRecordUDFS = 42,
	genSubRecordTIME = 43,
	genSubRecordFLNK = 44,
	genSubRecordVERS = 45,
	genSubRecordVAL = 46,
	genSubRecordOVAL = 47,
	genSubRecordSADR = 48,
	genSubRecordOSAD = 49,
	genSubRecordLFLG = 50,
	genSubRecordEFLG = 51,
	genSubRecordSUBL = 52,
	genSubRecordINAM = 53,
	genSubRecordSNAM = 54,
	genSubRecordONAM = 55,
	genSubRecordBRSV = 56,
	genSubRecordPREC = 57,
	genSubRecordINPA = 58,
	genSubRecordINPB = 59,
	genSubRecordINPC = 60,
	genSubRecordINPD = 61,
	genSubRecordINPE = 62,
	genSubRecordINPF = 63,
	genSubRecordINPG = 64,
	genSubRecordINPH = 65,
	genSubRecordINPI = 66,
	genSubRecordINPJ = 67,
	genSubRecordINPK = 68,
	genSubRecordINPL = 69,
	genSubRecordINPM = 70,
	genSubRecordINPN = 71,
	genSubRecordINPO = 72,
	genSubRecordINPP = 73,
	genSubRecordINPQ = 74,
	genSubRecordINPR = 75,
	genSubRecordINPS = 76,
	genSubRecordINPT = 77,
	genSubRecordINPU = 78,
	genSubRecordUFA = 79,
	genSubRecordUFB = 80,
	genSubRecordUFC = 81,
	genSubRecordUFD = 82,
	genSubRecordUFE = 83,
	genSubRecordUFF = 84,
	genSubRecordUFG = 85,
	genSubRecordUFH = 86,
	genSubRecordUFI = 87,
	genSubRecordUFJ = 88,
	genSubRecordUFK = 89,
	genSubRecordUFL = 90,
	genSubRecordUFM = 91,
	genSubRecordUFN = 92,
	genSubRecordUFO = 93,
	genSubRecordUFP = 94,
	genSubRecordUFQ = 95,
	genSubRecordUFR = 96,
	genSubRecordUFS = 97,
	genSubRecordUFT = 98,
	genSubRecordUFU = 99,
	genSubRecordA = 100,
	genSubRecordB = 101,
	genSubRecordC = 102,
	genSubRecordD = 103,
	genSubRecordE = 104,
	genSubRecordF = 105,
	genSubRecordG = 106,
	genSubRecordH = 107,
	genSubRecordI = 108,
	genSubRecordJ = 109,
	genSubRecordK = 110,
	genSubRecordL = 111,
	genSubRecordM = 112,
	genSubRecordN = 113,
	genSubRecordO = 114,
	genSubRecordP = 115,
	genSubRecordQ = 116,
	genSubRecordR = 117,
	genSubRecordS = 118,
	genSubRecordT = 119,
	genSubRecordU = 120,
	genSubRecordFTA = 121,
	genSubRecordFTB = 122,
	genSubRecordFTC = 123,
	genSubRecordFTD = 124,
	genSubRecordFTE = 125,
	genSubRecordFTF = 126,
	genSubRecordFTG = 127,
	genSubRecordFTH = 128,
	genSubRecordFTI = 129,
	genSubRecordFTJ = 130,
	genSubRecordFTK = 131,
	genSubRecordFTL = 132,
	genSubRecordFTM = 133,
	genSubRecordFTN = 134,
	genSubRecordFTO = 135,
	genSubRecordFTP = 136,
	genSubRecordFTQ = 137,
	genSubRecordFTR = 138,
	genSubRecordFTS = 139,
	genSubRecordFTT = 140,
	genSubRecordFTU = 141,
	genSubRecordNOA = 142,
	genSubRecordNOB = 143,
	genSubRecordNOC = 144,
	genSubRecordNOD = 145,
	genSubRecordNOE = 146,
	genSubRecordNOF = 147,
	genSubRecordNOG = 148,
	genSubRecordNOH = 149,
	genSubRecordNOI = 150,
	genSubRecordNOJ = 151,
	genSubRecordNOK = 152,
	genSubRecordNOL = 153,
	genSubRecordNOM = 154,
	genSubRecordNON = 155,
	genSubRecordNOO = 156,
	genSubRecordNOP = 157,
	genSubRecordNOQ = 158,
	genSubRecordNOR = 159,
	genSubRecordNOS = 160,
	genSubRecordNOT = 161,
	genSubRecordNOU = 162,
	genSubRecordOUTA = 163,
	genSubRecordOUTB = 164,
	genSubRecordOUTC = 165,
	genSubRecordOUTD = 166,
	genSubRecordOUTE = 167,
	genSubRecordOUTF = 168,
	genSubRecordOUTG = 169,
	genSubRecordOUTH = 170,
	genSubRecordOUTI = 171,
	genSubRecordOUTJ = 172,
	genSubRecordOUTK = 173,
	genSubRecordOUTL = 174,
	genSubRecordOUTM = 175,
	genSubRecordOUTN = 176,
	genSubRecordOUTO = 177,
	genSubRecordOUTP = 178,
	genSubRecordOUTQ = 179,
	genSubRecordOUTR = 180,
	genSubRecordOUTS = 181,
	genSubRecordOUTT = 182,
	genSubRecordOUTU = 183,
	genSubRecordUFVA = 184,
	genSubRecordUFVB = 185,
	genSubRecordUFVC = 186,
	genSubRecordUFVD = 187,
	genSubRecordUFVE = 188,
	genSubRecordUFVF = 189,
	genSubRecordUFVG = 190,
	genSubRecordUFVH = 191,
	genSubRecordUFVI = 192,
	genSubRecordUFVJ = 193,
	genSubRecordUFVK = 194,
	genSubRecordUFVL = 195,
	genSubRecordUFVM = 196,
	genSubRecordUFVN = 197,
	genSubRecordUFVO = 198,
	genSubRecordUFVP = 199,
	genSubRecordUFVQ = 200,
	genSubRecordUFVR = 201,
	genSubRecordUFVS = 202,
	genSubRecordUFVT = 203,
	genSubRecordUFVU = 204,
	genSubRecordVALA = 205,
	genSubRecordVALB = 206,
	genSubRecordVALC = 207,
	genSubRecordVALD = 208,
	genSubRecordVALE = 209,
	genSubRecordVALF = 210,
	genSubRecordVALG = 211,
	genSubRecordVALH = 212,
	genSubRecordVALI = 213,
	genSubRecordVALJ = 214,
	genSubRecordVALK = 215,
	genSubRecordVALL = 216,
	genSubRecordVALM = 217,
	genSubRecordVALN = 218,
	genSubRecordVALO = 219,
	genSubRecordVALP = 220,
	genSubRecordVALQ = 221,
	genSubRecordVALR = 222,
	genSubRecordVALS = 223,
	genSubRecordVALT = 224,
	genSubRecordVALU = 225,
	genSubRecordOVLA = 226,
	genSubRecordOVLB = 227,
	genSubRecordOVLC = 228,
	genSubRecordOVLD = 229,
	genSubRecordOVLE = 230,
	genSubRecordOVLF = 231,
	genSubRecordOVLG = 232,
	genSubRecordOVLH = 233,
	genSubRecordOVLI = 234,
	genSubRecordOVLJ = 235,
	genSubRecordOVLK = 236,
	genSubRecordOVLL = 237,
	genSubRecordOVLM = 238,
	genSubRecordOVLN = 239,
	genSubRecordOVLO = 240,
	genSubRecordOVLP = 241,
	genSubRecordOVLQ = 242,
	genSubRecordOVLR = 243,
	genSubRecordOVLS = 244,
	genSubRecordOVLT = 245,
	genSubRecordOVLU = 246,
	genSubRecordFTVA = 247,
	genSubRecordFTVB = 248,
	genSubRecordFTVC = 249,
	genSubRecordFTVD = 250,
	genSubRecordFTVE = 251,
	genSubRecordFTVF = 252,
	genSubRecordFTVG = 253,
	genSubRecordFTVH = 254,
	genSubRecordFTVI = 255,
	genSubRecordFTVJ = 256,
	genSubRecordFTVK = 257,
	genSubRecordFTVL = 258,
	genSubRecordFTVM = 259,
	genSubRecordFTVN = 260,
	genSubRecordFTVO = 261,
	genSubRecordFTVP = 262,
	genSubRecordFTVQ = 263,
	genSubRecordFTVR = 264,
	genSubRecordFTVS = 265,
	genSubRecordFTVT = 266,
	genSubRecordFTVU = 267,
	genSubRecordNOVA = 268,
	genSubRecordNOVB = 269,
	genSubRecordNOVC = 270,
	genSubRecordNOVD = 271,
	genSubRecordNOVE = 272,
	genSubRecordNOVF = 273,
	genSubRecordNOVG = 274,
	genSubRecordNOVH = 275,
	genSubRecordNOVI = 276,
	genSubRecordNOVJ = 277,
	genSubRecordNOVK = 278,
	genSubRecordNOVL = 279,
	genSubRecordNOVM = 280,
	genSubRecordNOVN = 281,
	genSubRecordNOVO = 282,
	genSubRecordNOVP = 283,
	genSubRecordNOVQ = 284,
	genSubRecordNOVR = 285,
	genSubRecordNOVS = 286,
	genSubRecordNOVT = 287,
	genSubRecordNOVU = 288,
	genSubRecordTOVA = 289,
	genSubRecordTOVB = 290,
	genSubRecordTOVC = 291,
	genSubRecordTOVD = 292,
	genSubRecordTOVE = 293,
	genSubRecordTOVF = 294,
	genSubRecordTOVG = 295,
	genSubRecordTOVH = 296,
	genSubRecordTOVI = 297,
	genSubRecordTOVJ = 298,
	genSubRecordTOVK = 299,
	genSubRecordTOVL = 300,
	genSubRecordTOVM = 301,
	genSubRecordTOVN = 302,
	genSubRecordTOVO = 303,
	genSubRecordTOVP = 304,
	genSubRecordTOVQ = 305,
	genSubRecordTOVR = 306,
	genSubRecordTOVS = 307,
	genSubRecordTOVT = 308,
	genSubRecordTOVU = 309
} genSubFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int genSubRecordSizeOffset(dbRecordType *prt)
{
    genSubRecord *prec = 0;

    if (prt->no_fields != 310) {
        cantProceed("IOC build or installation error:\n"
            "    The genSubRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 310.\n",
            prt->no_fields);
    }
    prt->papFldDes[genSubRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[genSubRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[genSubRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[genSubRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[genSubRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[genSubRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[genSubRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[genSubRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[genSubRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[genSubRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[genSubRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[genSubRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[genSubRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[genSubRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[genSubRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[genSubRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[genSubRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[genSubRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[genSubRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[genSubRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[genSubRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[genSubRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[genSubRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[genSubRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[genSubRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[genSubRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[genSubRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[genSubRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[genSubRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[genSubRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[genSubRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[genSubRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[genSubRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[genSubRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[genSubRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[genSubRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[genSubRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[genSubRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[genSubRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[genSubRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[genSubRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[genSubRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[genSubRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[genSubRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[genSubRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[genSubRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[genSubRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[genSubRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[genSubRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[genSubRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[genSubRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[genSubRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[genSubRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[genSubRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[genSubRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[genSubRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[genSubRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[genSubRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[genSubRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[genSubRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[genSubRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[genSubRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[genSubRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[genSubRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[genSubRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[genSubRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[genSubRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[genSubRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[genSubRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[genSubRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[genSubRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[genSubRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[genSubRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[genSubRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[genSubRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[genSubRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[genSubRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[genSubRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[genSubRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[genSubRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[genSubRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[genSubRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[genSubRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[genSubRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[genSubRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[genSubRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[genSubRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[genSubRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[genSubRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[genSubRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[genSubRecordVERS]->size = sizeof(prec->vers);
    prt->papFldDes[genSubRecordVERS]->offset = (unsigned short)((char *)&prec->vers - (char *)prec);
    prt->papFldDes[genSubRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[genSubRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[genSubRecordOVAL]->size = sizeof(prec->oval);
    prt->papFldDes[genSubRecordOVAL]->offset = (unsigned short)((char *)&prec->oval - (char *)prec);
    prt->papFldDes[genSubRecordSADR]->size = sizeof(prec->sadr);
    prt->papFldDes[genSubRecordSADR]->offset = (unsigned short)((char *)&prec->sadr - (char *)prec);
    prt->papFldDes[genSubRecordOSAD]->size = sizeof(prec->osad);
    prt->papFldDes[genSubRecordOSAD]->offset = (unsigned short)((char *)&prec->osad - (char *)prec);
    prt->papFldDes[genSubRecordLFLG]->size = sizeof(prec->lflg);
    prt->papFldDes[genSubRecordLFLG]->offset = (unsigned short)((char *)&prec->lflg - (char *)prec);
    prt->papFldDes[genSubRecordEFLG]->size = sizeof(prec->eflg);
    prt->papFldDes[genSubRecordEFLG]->offset = (unsigned short)((char *)&prec->eflg - (char *)prec);
    prt->papFldDes[genSubRecordSUBL]->size = sizeof(prec->subl);
    prt->papFldDes[genSubRecordSUBL]->offset = (unsigned short)((char *)&prec->subl - (char *)prec);
    prt->papFldDes[genSubRecordINAM]->size = sizeof(prec->inam);
    prt->papFldDes[genSubRecordINAM]->offset = (unsigned short)((char *)&prec->inam - (char *)prec);
    prt->papFldDes[genSubRecordSNAM]->size = sizeof(prec->snam);
    prt->papFldDes[genSubRecordSNAM]->offset = (unsigned short)((char *)&prec->snam - (char *)prec);
    prt->papFldDes[genSubRecordONAM]->size = sizeof(prec->onam);
    prt->papFldDes[genSubRecordONAM]->offset = (unsigned short)((char *)&prec->onam - (char *)prec);
    prt->papFldDes[genSubRecordBRSV]->size = sizeof(prec->brsv);
    prt->papFldDes[genSubRecordBRSV]->offset = (unsigned short)((char *)&prec->brsv - (char *)prec);
    prt->papFldDes[genSubRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[genSubRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->papFldDes[genSubRecordINPA]->size = sizeof(prec->inpa);
    prt->papFldDes[genSubRecordINPA]->offset = (unsigned short)((char *)&prec->inpa - (char *)prec);
    prt->papFldDes[genSubRecordINPB]->size = sizeof(prec->inpb);
    prt->papFldDes[genSubRecordINPB]->offset = (unsigned short)((char *)&prec->inpb - (char *)prec);
    prt->papFldDes[genSubRecordINPC]->size = sizeof(prec->inpc);
    prt->papFldDes[genSubRecordINPC]->offset = (unsigned short)((char *)&prec->inpc - (char *)prec);
    prt->papFldDes[genSubRecordINPD]->size = sizeof(prec->inpd);
    prt->papFldDes[genSubRecordINPD]->offset = (unsigned short)((char *)&prec->inpd - (char *)prec);
    prt->papFldDes[genSubRecordINPE]->size = sizeof(prec->inpe);
    prt->papFldDes[genSubRecordINPE]->offset = (unsigned short)((char *)&prec->inpe - (char *)prec);
    prt->papFldDes[genSubRecordINPF]->size = sizeof(prec->inpf);
    prt->papFldDes[genSubRecordINPF]->offset = (unsigned short)((char *)&prec->inpf - (char *)prec);
    prt->papFldDes[genSubRecordINPG]->size = sizeof(prec->inpg);
    prt->papFldDes[genSubRecordINPG]->offset = (unsigned short)((char *)&prec->inpg - (char *)prec);
    prt->papFldDes[genSubRecordINPH]->size = sizeof(prec->inph);
    prt->papFldDes[genSubRecordINPH]->offset = (unsigned short)((char *)&prec->inph - (char *)prec);
    prt->papFldDes[genSubRecordINPI]->size = sizeof(prec->inpi);
    prt->papFldDes[genSubRecordINPI]->offset = (unsigned short)((char *)&prec->inpi - (char *)prec);
    prt->papFldDes[genSubRecordINPJ]->size = sizeof(prec->inpj);
    prt->papFldDes[genSubRecordINPJ]->offset = (unsigned short)((char *)&prec->inpj - (char *)prec);
    prt->papFldDes[genSubRecordINPK]->size = sizeof(prec->inpk);
    prt->papFldDes[genSubRecordINPK]->offset = (unsigned short)((char *)&prec->inpk - (char *)prec);
    prt->papFldDes[genSubRecordINPL]->size = sizeof(prec->inpl);
    prt->papFldDes[genSubRecordINPL]->offset = (unsigned short)((char *)&prec->inpl - (char *)prec);
    prt->papFldDes[genSubRecordINPM]->size = sizeof(prec->inpm);
    prt->papFldDes[genSubRecordINPM]->offset = (unsigned short)((char *)&prec->inpm - (char *)prec);
    prt->papFldDes[genSubRecordINPN]->size = sizeof(prec->inpn);
    prt->papFldDes[genSubRecordINPN]->offset = (unsigned short)((char *)&prec->inpn - (char *)prec);
    prt->papFldDes[genSubRecordINPO]->size = sizeof(prec->inpo);
    prt->papFldDes[genSubRecordINPO]->offset = (unsigned short)((char *)&prec->inpo - (char *)prec);
    prt->papFldDes[genSubRecordINPP]->size = sizeof(prec->inpp);
    prt->papFldDes[genSubRecordINPP]->offset = (unsigned short)((char *)&prec->inpp - (char *)prec);
    prt->papFldDes[genSubRecordINPQ]->size = sizeof(prec->inpq);
    prt->papFldDes[genSubRecordINPQ]->offset = (unsigned short)((char *)&prec->inpq - (char *)prec);
    prt->papFldDes[genSubRecordINPR]->size = sizeof(prec->inpr);
    prt->papFldDes[genSubRecordINPR]->offset = (unsigned short)((char *)&prec->inpr - (char *)prec);
    prt->papFldDes[genSubRecordINPS]->size = sizeof(prec->inps);
    prt->papFldDes[genSubRecordINPS]->offset = (unsigned short)((char *)&prec->inps - (char *)prec);
    prt->papFldDes[genSubRecordINPT]->size = sizeof(prec->inpt);
    prt->papFldDes[genSubRecordINPT]->offset = (unsigned short)((char *)&prec->inpt - (char *)prec);
    prt->papFldDes[genSubRecordINPU]->size = sizeof(prec->inpu);
    prt->papFldDes[genSubRecordINPU]->offset = (unsigned short)((char *)&prec->inpu - (char *)prec);
    prt->papFldDes[genSubRecordUFA]->size = sizeof(prec->ufa);
    prt->papFldDes[genSubRecordUFA]->offset = (unsigned short)((char *)&prec->ufa - (char *)prec);
    prt->papFldDes[genSubRecordUFB]->size = sizeof(prec->ufb);
    prt->papFldDes[genSubRecordUFB]->offset = (unsigned short)((char *)&prec->ufb - (char *)prec);
    prt->papFldDes[genSubRecordUFC]->size = sizeof(prec->ufc);
    prt->papFldDes[genSubRecordUFC]->offset = (unsigned short)((char *)&prec->ufc - (char *)prec);
    prt->papFldDes[genSubRecordUFD]->size = sizeof(prec->ufd);
    prt->papFldDes[genSubRecordUFD]->offset = (unsigned short)((char *)&prec->ufd - (char *)prec);
    prt->papFldDes[genSubRecordUFE]->size = sizeof(prec->ufe);
    prt->papFldDes[genSubRecordUFE]->offset = (unsigned short)((char *)&prec->ufe - (char *)prec);
    prt->papFldDes[genSubRecordUFF]->size = sizeof(prec->uff);
    prt->papFldDes[genSubRecordUFF]->offset = (unsigned short)((char *)&prec->uff - (char *)prec);
    prt->papFldDes[genSubRecordUFG]->size = sizeof(prec->ufg);
    prt->papFldDes[genSubRecordUFG]->offset = (unsigned short)((char *)&prec->ufg - (char *)prec);
    prt->papFldDes[genSubRecordUFH]->size = sizeof(prec->ufh);
    prt->papFldDes[genSubRecordUFH]->offset = (unsigned short)((char *)&prec->ufh - (char *)prec);
    prt->papFldDes[genSubRecordUFI]->size = sizeof(prec->ufi);
    prt->papFldDes[genSubRecordUFI]->offset = (unsigned short)((char *)&prec->ufi - (char *)prec);
    prt->papFldDes[genSubRecordUFJ]->size = sizeof(prec->ufj);
    prt->papFldDes[genSubRecordUFJ]->offset = (unsigned short)((char *)&prec->ufj - (char *)prec);
    prt->papFldDes[genSubRecordUFK]->size = sizeof(prec->ufk);
    prt->papFldDes[genSubRecordUFK]->offset = (unsigned short)((char *)&prec->ufk - (char *)prec);
    prt->papFldDes[genSubRecordUFL]->size = sizeof(prec->ufl);
    prt->papFldDes[genSubRecordUFL]->offset = (unsigned short)((char *)&prec->ufl - (char *)prec);
    prt->papFldDes[genSubRecordUFM]->size = sizeof(prec->ufm);
    prt->papFldDes[genSubRecordUFM]->offset = (unsigned short)((char *)&prec->ufm - (char *)prec);
    prt->papFldDes[genSubRecordUFN]->size = sizeof(prec->ufn);
    prt->papFldDes[genSubRecordUFN]->offset = (unsigned short)((char *)&prec->ufn - (char *)prec);
    prt->papFldDes[genSubRecordUFO]->size = sizeof(prec->ufo);
    prt->papFldDes[genSubRecordUFO]->offset = (unsigned short)((char *)&prec->ufo - (char *)prec);
    prt->papFldDes[genSubRecordUFP]->size = sizeof(prec->ufp);
    prt->papFldDes[genSubRecordUFP]->offset = (unsigned short)((char *)&prec->ufp - (char *)prec);
    prt->papFldDes[genSubRecordUFQ]->size = sizeof(prec->ufq);
    prt->papFldDes[genSubRecordUFQ]->offset = (unsigned short)((char *)&prec->ufq - (char *)prec);
    prt->papFldDes[genSubRecordUFR]->size = sizeof(prec->ufr);
    prt->papFldDes[genSubRecordUFR]->offset = (unsigned short)((char *)&prec->ufr - (char *)prec);
    prt->papFldDes[genSubRecordUFS]->size = sizeof(prec->ufs);
    prt->papFldDes[genSubRecordUFS]->offset = (unsigned short)((char *)&prec->ufs - (char *)prec);
    prt->papFldDes[genSubRecordUFT]->size = sizeof(prec->uft);
    prt->papFldDes[genSubRecordUFT]->offset = (unsigned short)((char *)&prec->uft - (char *)prec);
    prt->papFldDes[genSubRecordUFU]->size = sizeof(prec->ufu);
    prt->papFldDes[genSubRecordUFU]->offset = (unsigned short)((char *)&prec->ufu - (char *)prec);
    prt->papFldDes[genSubRecordA]->size = sizeof(prec->a);
    prt->papFldDes[genSubRecordA]->offset = (unsigned short)((char *)&prec->a - (char *)prec);
    prt->papFldDes[genSubRecordB]->size = sizeof(prec->b);
    prt->papFldDes[genSubRecordB]->offset = (unsigned short)((char *)&prec->b - (char *)prec);
    prt->papFldDes[genSubRecordC]->size = sizeof(prec->c);
    prt->papFldDes[genSubRecordC]->offset = (unsigned short)((char *)&prec->c - (char *)prec);
    prt->papFldDes[genSubRecordD]->size = sizeof(prec->d);
    prt->papFldDes[genSubRecordD]->offset = (unsigned short)((char *)&prec->d - (char *)prec);
    prt->papFldDes[genSubRecordE]->size = sizeof(prec->e);
    prt->papFldDes[genSubRecordE]->offset = (unsigned short)((char *)&prec->e - (char *)prec);
    prt->papFldDes[genSubRecordF]->size = sizeof(prec->f);
    prt->papFldDes[genSubRecordF]->offset = (unsigned short)((char *)&prec->f - (char *)prec);
    prt->papFldDes[genSubRecordG]->size = sizeof(prec->g);
    prt->papFldDes[genSubRecordG]->offset = (unsigned short)((char *)&prec->g - (char *)prec);
    prt->papFldDes[genSubRecordH]->size = sizeof(prec->h);
    prt->papFldDes[genSubRecordH]->offset = (unsigned short)((char *)&prec->h - (char *)prec);
    prt->papFldDes[genSubRecordI]->size = sizeof(prec->i);
    prt->papFldDes[genSubRecordI]->offset = (unsigned short)((char *)&prec->i - (char *)prec);
    prt->papFldDes[genSubRecordJ]->size = sizeof(prec->j);
    prt->papFldDes[genSubRecordJ]->offset = (unsigned short)((char *)&prec->j - (char *)prec);
    prt->papFldDes[genSubRecordK]->size = sizeof(prec->k);
    prt->papFldDes[genSubRecordK]->offset = (unsigned short)((char *)&prec->k - (char *)prec);
    prt->papFldDes[genSubRecordL]->size = sizeof(prec->l);
    prt->papFldDes[genSubRecordL]->offset = (unsigned short)((char *)&prec->l - (char *)prec);
    prt->papFldDes[genSubRecordM]->size = sizeof(prec->m);
    prt->papFldDes[genSubRecordM]->offset = (unsigned short)((char *)&prec->m - (char *)prec);
    prt->papFldDes[genSubRecordN]->size = sizeof(prec->n);
    prt->papFldDes[genSubRecordN]->offset = (unsigned short)((char *)&prec->n - (char *)prec);
    prt->papFldDes[genSubRecordO]->size = sizeof(prec->o);
    prt->papFldDes[genSubRecordO]->offset = (unsigned short)((char *)&prec->o - (char *)prec);
    prt->papFldDes[genSubRecordP]->size = sizeof(prec->p);
    prt->papFldDes[genSubRecordP]->offset = (unsigned short)((char *)&prec->p - (char *)prec);
    prt->papFldDes[genSubRecordQ]->size = sizeof(prec->q);
    prt->papFldDes[genSubRecordQ]->offset = (unsigned short)((char *)&prec->q - (char *)prec);
    prt->papFldDes[genSubRecordR]->size = sizeof(prec->r);
    prt->papFldDes[genSubRecordR]->offset = (unsigned short)((char *)&prec->r - (char *)prec);
    prt->papFldDes[genSubRecordS]->size = sizeof(prec->s);
    prt->papFldDes[genSubRecordS]->offset = (unsigned short)((char *)&prec->s - (char *)prec);
    prt->papFldDes[genSubRecordT]->size = sizeof(prec->t);
    prt->papFldDes[genSubRecordT]->offset = (unsigned short)((char *)&prec->t - (char *)prec);
    prt->papFldDes[genSubRecordU]->size = sizeof(prec->u);
    prt->papFldDes[genSubRecordU]->offset = (unsigned short)((char *)&prec->u - (char *)prec);
    prt->papFldDes[genSubRecordFTA]->size = sizeof(prec->fta);
    prt->papFldDes[genSubRecordFTA]->offset = (unsigned short)((char *)&prec->fta - (char *)prec);
    prt->papFldDes[genSubRecordFTB]->size = sizeof(prec->ftb);
    prt->papFldDes[genSubRecordFTB]->offset = (unsigned short)((char *)&prec->ftb - (char *)prec);
    prt->papFldDes[genSubRecordFTC]->size = sizeof(prec->ftc);
    prt->papFldDes[genSubRecordFTC]->offset = (unsigned short)((char *)&prec->ftc - (char *)prec);
    prt->papFldDes[genSubRecordFTD]->size = sizeof(prec->ftd);
    prt->papFldDes[genSubRecordFTD]->offset = (unsigned short)((char *)&prec->ftd - (char *)prec);
    prt->papFldDes[genSubRecordFTE]->size = sizeof(prec->fte);
    prt->papFldDes[genSubRecordFTE]->offset = (unsigned short)((char *)&prec->fte - (char *)prec);
    prt->papFldDes[genSubRecordFTF]->size = sizeof(prec->ftf);
    prt->papFldDes[genSubRecordFTF]->offset = (unsigned short)((char *)&prec->ftf - (char *)prec);
    prt->papFldDes[genSubRecordFTG]->size = sizeof(prec->ftg);
    prt->papFldDes[genSubRecordFTG]->offset = (unsigned short)((char *)&prec->ftg - (char *)prec);
    prt->papFldDes[genSubRecordFTH]->size = sizeof(prec->fth);
    prt->papFldDes[genSubRecordFTH]->offset = (unsigned short)((char *)&prec->fth - (char *)prec);
    prt->papFldDes[genSubRecordFTI]->size = sizeof(prec->fti);
    prt->papFldDes[genSubRecordFTI]->offset = (unsigned short)((char *)&prec->fti - (char *)prec);
    prt->papFldDes[genSubRecordFTJ]->size = sizeof(prec->ftj);
    prt->papFldDes[genSubRecordFTJ]->offset = (unsigned short)((char *)&prec->ftj - (char *)prec);
    prt->papFldDes[genSubRecordFTK]->size = sizeof(prec->ftk);
    prt->papFldDes[genSubRecordFTK]->offset = (unsigned short)((char *)&prec->ftk - (char *)prec);
    prt->papFldDes[genSubRecordFTL]->size = sizeof(prec->ftl);
    prt->papFldDes[genSubRecordFTL]->offset = (unsigned short)((char *)&prec->ftl - (char *)prec);
    prt->papFldDes[genSubRecordFTM]->size = sizeof(prec->ftm);
    prt->papFldDes[genSubRecordFTM]->offset = (unsigned short)((char *)&prec->ftm - (char *)prec);
    prt->papFldDes[genSubRecordFTN]->size = sizeof(prec->ftn);
    prt->papFldDes[genSubRecordFTN]->offset = (unsigned short)((char *)&prec->ftn - (char *)prec);
    prt->papFldDes[genSubRecordFTO]->size = sizeof(prec->fto);
    prt->papFldDes[genSubRecordFTO]->offset = (unsigned short)((char *)&prec->fto - (char *)prec);
    prt->papFldDes[genSubRecordFTP]->size = sizeof(prec->ftp);
    prt->papFldDes[genSubRecordFTP]->offset = (unsigned short)((char *)&prec->ftp - (char *)prec);
    prt->papFldDes[genSubRecordFTQ]->size = sizeof(prec->ftq);
    prt->papFldDes[genSubRecordFTQ]->offset = (unsigned short)((char *)&prec->ftq - (char *)prec);
    prt->papFldDes[genSubRecordFTR]->size = sizeof(prec->ftr);
    prt->papFldDes[genSubRecordFTR]->offset = (unsigned short)((char *)&prec->ftr - (char *)prec);
    prt->papFldDes[genSubRecordFTS]->size = sizeof(prec->fts);
    prt->papFldDes[genSubRecordFTS]->offset = (unsigned short)((char *)&prec->fts - (char *)prec);
    prt->papFldDes[genSubRecordFTT]->size = sizeof(prec->ftt);
    prt->papFldDes[genSubRecordFTT]->offset = (unsigned short)((char *)&prec->ftt - (char *)prec);
    prt->papFldDes[genSubRecordFTU]->size = sizeof(prec->ftu);
    prt->papFldDes[genSubRecordFTU]->offset = (unsigned short)((char *)&prec->ftu - (char *)prec);
    prt->papFldDes[genSubRecordNOA]->size = sizeof(prec->noa);
    prt->papFldDes[genSubRecordNOA]->offset = (unsigned short)((char *)&prec->noa - (char *)prec);
    prt->papFldDes[genSubRecordNOB]->size = sizeof(prec->nob);
    prt->papFldDes[genSubRecordNOB]->offset = (unsigned short)((char *)&prec->nob - (char *)prec);
    prt->papFldDes[genSubRecordNOC]->size = sizeof(prec->noc);
    prt->papFldDes[genSubRecordNOC]->offset = (unsigned short)((char *)&prec->noc - (char *)prec);
    prt->papFldDes[genSubRecordNOD]->size = sizeof(prec->nod);
    prt->papFldDes[genSubRecordNOD]->offset = (unsigned short)((char *)&prec->nod - (char *)prec);
    prt->papFldDes[genSubRecordNOE]->size = sizeof(prec->noe);
    prt->papFldDes[genSubRecordNOE]->offset = (unsigned short)((char *)&prec->noe - (char *)prec);
    prt->papFldDes[genSubRecordNOF]->size = sizeof(prec->nof);
    prt->papFldDes[genSubRecordNOF]->offset = (unsigned short)((char *)&prec->nof - (char *)prec);
    prt->papFldDes[genSubRecordNOG]->size = sizeof(prec->nog);
    prt->papFldDes[genSubRecordNOG]->offset = (unsigned short)((char *)&prec->nog - (char *)prec);
    prt->papFldDes[genSubRecordNOH]->size = sizeof(prec->noh);
    prt->papFldDes[genSubRecordNOH]->offset = (unsigned short)((char *)&prec->noh - (char *)prec);
    prt->papFldDes[genSubRecordNOI]->size = sizeof(prec->noi);
    prt->papFldDes[genSubRecordNOI]->offset = (unsigned short)((char *)&prec->noi - (char *)prec);
    prt->papFldDes[genSubRecordNOJ]->size = sizeof(prec->noj);
    prt->papFldDes[genSubRecordNOJ]->offset = (unsigned short)((char *)&prec->noj - (char *)prec);
    prt->papFldDes[genSubRecordNOK]->size = sizeof(prec->nok);
    prt->papFldDes[genSubRecordNOK]->offset = (unsigned short)((char *)&prec->nok - (char *)prec);
    prt->papFldDes[genSubRecordNOL]->size = sizeof(prec->nol);
    prt->papFldDes[genSubRecordNOL]->offset = (unsigned short)((char *)&prec->nol - (char *)prec);
    prt->papFldDes[genSubRecordNOM]->size = sizeof(prec->nom);
    prt->papFldDes[genSubRecordNOM]->offset = (unsigned short)((char *)&prec->nom - (char *)prec);
    prt->papFldDes[genSubRecordNON]->size = sizeof(prec->non);
    prt->papFldDes[genSubRecordNON]->offset = (unsigned short)((char *)&prec->non - (char *)prec);
    prt->papFldDes[genSubRecordNOO]->size = sizeof(prec->noo);
    prt->papFldDes[genSubRecordNOO]->offset = (unsigned short)((char *)&prec->noo - (char *)prec);
    prt->papFldDes[genSubRecordNOP]->size = sizeof(prec->nop);
    prt->papFldDes[genSubRecordNOP]->offset = (unsigned short)((char *)&prec->nop - (char *)prec);
    prt->papFldDes[genSubRecordNOQ]->size = sizeof(prec->noq);
    prt->papFldDes[genSubRecordNOQ]->offset = (unsigned short)((char *)&prec->noq - (char *)prec);
    prt->papFldDes[genSubRecordNOR]->size = sizeof(prec->nor);
    prt->papFldDes[genSubRecordNOR]->offset = (unsigned short)((char *)&prec->nor - (char *)prec);
    prt->papFldDes[genSubRecordNOS]->size = sizeof(prec->nos);
    prt->papFldDes[genSubRecordNOS]->offset = (unsigned short)((char *)&prec->nos - (char *)prec);
    prt->papFldDes[genSubRecordNOT]->size = sizeof(prec->NOT);
    prt->papFldDes[genSubRecordNOT]->offset = (unsigned short)((char *)&prec->NOT - (char *)prec);
    prt->papFldDes[genSubRecordNOU]->size = sizeof(prec->nou);
    prt->papFldDes[genSubRecordNOU]->offset = (unsigned short)((char *)&prec->nou - (char *)prec);
    prt->papFldDes[genSubRecordOUTA]->size = sizeof(prec->outa);
    prt->papFldDes[genSubRecordOUTA]->offset = (unsigned short)((char *)&prec->outa - (char *)prec);
    prt->papFldDes[genSubRecordOUTB]->size = sizeof(prec->outb);
    prt->papFldDes[genSubRecordOUTB]->offset = (unsigned short)((char *)&prec->outb - (char *)prec);
    prt->papFldDes[genSubRecordOUTC]->size = sizeof(prec->outc);
    prt->papFldDes[genSubRecordOUTC]->offset = (unsigned short)((char *)&prec->outc - (char *)prec);
    prt->papFldDes[genSubRecordOUTD]->size = sizeof(prec->outd);
    prt->papFldDes[genSubRecordOUTD]->offset = (unsigned short)((char *)&prec->outd - (char *)prec);
    prt->papFldDes[genSubRecordOUTE]->size = sizeof(prec->oute);
    prt->papFldDes[genSubRecordOUTE]->offset = (unsigned short)((char *)&prec->oute - (char *)prec);
    prt->papFldDes[genSubRecordOUTF]->size = sizeof(prec->outf);
    prt->papFldDes[genSubRecordOUTF]->offset = (unsigned short)((char *)&prec->outf - (char *)prec);
    prt->papFldDes[genSubRecordOUTG]->size = sizeof(prec->outg);
    prt->papFldDes[genSubRecordOUTG]->offset = (unsigned short)((char *)&prec->outg - (char *)prec);
    prt->papFldDes[genSubRecordOUTH]->size = sizeof(prec->outh);
    prt->papFldDes[genSubRecordOUTH]->offset = (unsigned short)((char *)&prec->outh - (char *)prec);
    prt->papFldDes[genSubRecordOUTI]->size = sizeof(prec->outi);
    prt->papFldDes[genSubRecordOUTI]->offset = (unsigned short)((char *)&prec->outi - (char *)prec);
    prt->papFldDes[genSubRecordOUTJ]->size = sizeof(prec->outj);
    prt->papFldDes[genSubRecordOUTJ]->offset = (unsigned short)((char *)&prec->outj - (char *)prec);
    prt->papFldDes[genSubRecordOUTK]->size = sizeof(prec->outk);
    prt->papFldDes[genSubRecordOUTK]->offset = (unsigned short)((char *)&prec->outk - (char *)prec);
    prt->papFldDes[genSubRecordOUTL]->size = sizeof(prec->outl);
    prt->papFldDes[genSubRecordOUTL]->offset = (unsigned short)((char *)&prec->outl - (char *)prec);
    prt->papFldDes[genSubRecordOUTM]->size = sizeof(prec->outm);
    prt->papFldDes[genSubRecordOUTM]->offset = (unsigned short)((char *)&prec->outm - (char *)prec);
    prt->papFldDes[genSubRecordOUTN]->size = sizeof(prec->outn);
    prt->papFldDes[genSubRecordOUTN]->offset = (unsigned short)((char *)&prec->outn - (char *)prec);
    prt->papFldDes[genSubRecordOUTO]->size = sizeof(prec->outo);
    prt->papFldDes[genSubRecordOUTO]->offset = (unsigned short)((char *)&prec->outo - (char *)prec);
    prt->papFldDes[genSubRecordOUTP]->size = sizeof(prec->outp);
    prt->papFldDes[genSubRecordOUTP]->offset = (unsigned short)((char *)&prec->outp - (char *)prec);
    prt->papFldDes[genSubRecordOUTQ]->size = sizeof(prec->outq);
    prt->papFldDes[genSubRecordOUTQ]->offset = (unsigned short)((char *)&prec->outq - (char *)prec);
    prt->papFldDes[genSubRecordOUTR]->size = sizeof(prec->outr);
    prt->papFldDes[genSubRecordOUTR]->offset = (unsigned short)((char *)&prec->outr - (char *)prec);
    prt->papFldDes[genSubRecordOUTS]->size = sizeof(prec->outs);
    prt->papFldDes[genSubRecordOUTS]->offset = (unsigned short)((char *)&prec->outs - (char *)prec);
    prt->papFldDes[genSubRecordOUTT]->size = sizeof(prec->outt);
    prt->papFldDes[genSubRecordOUTT]->offset = (unsigned short)((char *)&prec->outt - (char *)prec);
    prt->papFldDes[genSubRecordOUTU]->size = sizeof(prec->outu);
    prt->papFldDes[genSubRecordOUTU]->offset = (unsigned short)((char *)&prec->outu - (char *)prec);
    prt->papFldDes[genSubRecordUFVA]->size = sizeof(prec->ufva);
    prt->papFldDes[genSubRecordUFVA]->offset = (unsigned short)((char *)&prec->ufva - (char *)prec);
    prt->papFldDes[genSubRecordUFVB]->size = sizeof(prec->ufvb);
    prt->papFldDes[genSubRecordUFVB]->offset = (unsigned short)((char *)&prec->ufvb - (char *)prec);
    prt->papFldDes[genSubRecordUFVC]->size = sizeof(prec->ufvc);
    prt->papFldDes[genSubRecordUFVC]->offset = (unsigned short)((char *)&prec->ufvc - (char *)prec);
    prt->papFldDes[genSubRecordUFVD]->size = sizeof(prec->ufvd);
    prt->papFldDes[genSubRecordUFVD]->offset = (unsigned short)((char *)&prec->ufvd - (char *)prec);
    prt->papFldDes[genSubRecordUFVE]->size = sizeof(prec->ufve);
    prt->papFldDes[genSubRecordUFVE]->offset = (unsigned short)((char *)&prec->ufve - (char *)prec);
    prt->papFldDes[genSubRecordUFVF]->size = sizeof(prec->ufvf);
    prt->papFldDes[genSubRecordUFVF]->offset = (unsigned short)((char *)&prec->ufvf - (char *)prec);
    prt->papFldDes[genSubRecordUFVG]->size = sizeof(prec->ufvg);
    prt->papFldDes[genSubRecordUFVG]->offset = (unsigned short)((char *)&prec->ufvg - (char *)prec);
    prt->papFldDes[genSubRecordUFVH]->size = sizeof(prec->ufvh);
    prt->papFldDes[genSubRecordUFVH]->offset = (unsigned short)((char *)&prec->ufvh - (char *)prec);
    prt->papFldDes[genSubRecordUFVI]->size = sizeof(prec->ufvi);
    prt->papFldDes[genSubRecordUFVI]->offset = (unsigned short)((char *)&prec->ufvi - (char *)prec);
    prt->papFldDes[genSubRecordUFVJ]->size = sizeof(prec->ufvj);
    prt->papFldDes[genSubRecordUFVJ]->offset = (unsigned short)((char *)&prec->ufvj - (char *)prec);
    prt->papFldDes[genSubRecordUFVK]->size = sizeof(prec->ufvk);
    prt->papFldDes[genSubRecordUFVK]->offset = (unsigned short)((char *)&prec->ufvk - (char *)prec);
    prt->papFldDes[genSubRecordUFVL]->size = sizeof(prec->ufvl);
    prt->papFldDes[genSubRecordUFVL]->offset = (unsigned short)((char *)&prec->ufvl - (char *)prec);
    prt->papFldDes[genSubRecordUFVM]->size = sizeof(prec->ufvm);
    prt->papFldDes[genSubRecordUFVM]->offset = (unsigned short)((char *)&prec->ufvm - (char *)prec);
    prt->papFldDes[genSubRecordUFVN]->size = sizeof(prec->ufvn);
    prt->papFldDes[genSubRecordUFVN]->offset = (unsigned short)((char *)&prec->ufvn - (char *)prec);
    prt->papFldDes[genSubRecordUFVO]->size = sizeof(prec->ufvo);
    prt->papFldDes[genSubRecordUFVO]->offset = (unsigned short)((char *)&prec->ufvo - (char *)prec);
    prt->papFldDes[genSubRecordUFVP]->size = sizeof(prec->ufvp);
    prt->papFldDes[genSubRecordUFVP]->offset = (unsigned short)((char *)&prec->ufvp - (char *)prec);
    prt->papFldDes[genSubRecordUFVQ]->size = sizeof(prec->ufvq);
    prt->papFldDes[genSubRecordUFVQ]->offset = (unsigned short)((char *)&prec->ufvq - (char *)prec);
    prt->papFldDes[genSubRecordUFVR]->size = sizeof(prec->ufvr);
    prt->papFldDes[genSubRecordUFVR]->offset = (unsigned short)((char *)&prec->ufvr - (char *)prec);
    prt->papFldDes[genSubRecordUFVS]->size = sizeof(prec->ufvs);
    prt->papFldDes[genSubRecordUFVS]->offset = (unsigned short)((char *)&prec->ufvs - (char *)prec);
    prt->papFldDes[genSubRecordUFVT]->size = sizeof(prec->ufvt);
    prt->papFldDes[genSubRecordUFVT]->offset = (unsigned short)((char *)&prec->ufvt - (char *)prec);
    prt->papFldDes[genSubRecordUFVU]->size = sizeof(prec->ufvu);
    prt->papFldDes[genSubRecordUFVU]->offset = (unsigned short)((char *)&prec->ufvu - (char *)prec);
    prt->papFldDes[genSubRecordVALA]->size = sizeof(prec->vala);
    prt->papFldDes[genSubRecordVALA]->offset = (unsigned short)((char *)&prec->vala - (char *)prec);
    prt->papFldDes[genSubRecordVALB]->size = sizeof(prec->valb);
    prt->papFldDes[genSubRecordVALB]->offset = (unsigned short)((char *)&prec->valb - (char *)prec);
    prt->papFldDes[genSubRecordVALC]->size = sizeof(prec->valc);
    prt->papFldDes[genSubRecordVALC]->offset = (unsigned short)((char *)&prec->valc - (char *)prec);
    prt->papFldDes[genSubRecordVALD]->size = sizeof(prec->vald);
    prt->papFldDes[genSubRecordVALD]->offset = (unsigned short)((char *)&prec->vald - (char *)prec);
    prt->papFldDes[genSubRecordVALE]->size = sizeof(prec->vale);
    prt->papFldDes[genSubRecordVALE]->offset = (unsigned short)((char *)&prec->vale - (char *)prec);
    prt->papFldDes[genSubRecordVALF]->size = sizeof(prec->valf);
    prt->papFldDes[genSubRecordVALF]->offset = (unsigned short)((char *)&prec->valf - (char *)prec);
    prt->papFldDes[genSubRecordVALG]->size = sizeof(prec->valg);
    prt->papFldDes[genSubRecordVALG]->offset = (unsigned short)((char *)&prec->valg - (char *)prec);
    prt->papFldDes[genSubRecordVALH]->size = sizeof(prec->valh);
    prt->papFldDes[genSubRecordVALH]->offset = (unsigned short)((char *)&prec->valh - (char *)prec);
    prt->papFldDes[genSubRecordVALI]->size = sizeof(prec->vali);
    prt->papFldDes[genSubRecordVALI]->offset = (unsigned short)((char *)&prec->vali - (char *)prec);
    prt->papFldDes[genSubRecordVALJ]->size = sizeof(prec->valj);
    prt->papFldDes[genSubRecordVALJ]->offset = (unsigned short)((char *)&prec->valj - (char *)prec);
    prt->papFldDes[genSubRecordVALK]->size = sizeof(prec->valk);
    prt->papFldDes[genSubRecordVALK]->offset = (unsigned short)((char *)&prec->valk - (char *)prec);
    prt->papFldDes[genSubRecordVALL]->size = sizeof(prec->vall);
    prt->papFldDes[genSubRecordVALL]->offset = (unsigned short)((char *)&prec->vall - (char *)prec);
    prt->papFldDes[genSubRecordVALM]->size = sizeof(prec->valm);
    prt->papFldDes[genSubRecordVALM]->offset = (unsigned short)((char *)&prec->valm - (char *)prec);
    prt->papFldDes[genSubRecordVALN]->size = sizeof(prec->valn);
    prt->papFldDes[genSubRecordVALN]->offset = (unsigned short)((char *)&prec->valn - (char *)prec);
    prt->papFldDes[genSubRecordVALO]->size = sizeof(prec->valo);
    prt->papFldDes[genSubRecordVALO]->offset = (unsigned short)((char *)&prec->valo - (char *)prec);
    prt->papFldDes[genSubRecordVALP]->size = sizeof(prec->valp);
    prt->papFldDes[genSubRecordVALP]->offset = (unsigned short)((char *)&prec->valp - (char *)prec);
    prt->papFldDes[genSubRecordVALQ]->size = sizeof(prec->valq);
    prt->papFldDes[genSubRecordVALQ]->offset = (unsigned short)((char *)&prec->valq - (char *)prec);
    prt->papFldDes[genSubRecordVALR]->size = sizeof(prec->valr);
    prt->papFldDes[genSubRecordVALR]->offset = (unsigned short)((char *)&prec->valr - (char *)prec);
    prt->papFldDes[genSubRecordVALS]->size = sizeof(prec->vals);
    prt->papFldDes[genSubRecordVALS]->offset = (unsigned short)((char *)&prec->vals - (char *)prec);
    prt->papFldDes[genSubRecordVALT]->size = sizeof(prec->valt);
    prt->papFldDes[genSubRecordVALT]->offset = (unsigned short)((char *)&prec->valt - (char *)prec);
    prt->papFldDes[genSubRecordVALU]->size = sizeof(prec->valu);
    prt->papFldDes[genSubRecordVALU]->offset = (unsigned short)((char *)&prec->valu - (char *)prec);
    prt->papFldDes[genSubRecordOVLA]->size = sizeof(prec->ovla);
    prt->papFldDes[genSubRecordOVLA]->offset = (unsigned short)((char *)&prec->ovla - (char *)prec);
    prt->papFldDes[genSubRecordOVLB]->size = sizeof(prec->ovlb);
    prt->papFldDes[genSubRecordOVLB]->offset = (unsigned short)((char *)&prec->ovlb - (char *)prec);
    prt->papFldDes[genSubRecordOVLC]->size = sizeof(prec->ovlc);
    prt->papFldDes[genSubRecordOVLC]->offset = (unsigned short)((char *)&prec->ovlc - (char *)prec);
    prt->papFldDes[genSubRecordOVLD]->size = sizeof(prec->ovld);
    prt->papFldDes[genSubRecordOVLD]->offset = (unsigned short)((char *)&prec->ovld - (char *)prec);
    prt->papFldDes[genSubRecordOVLE]->size = sizeof(prec->ovle);
    prt->papFldDes[genSubRecordOVLE]->offset = (unsigned short)((char *)&prec->ovle - (char *)prec);
    prt->papFldDes[genSubRecordOVLF]->size = sizeof(prec->ovlf);
    prt->papFldDes[genSubRecordOVLF]->offset = (unsigned short)((char *)&prec->ovlf - (char *)prec);
    prt->papFldDes[genSubRecordOVLG]->size = sizeof(prec->ovlg);
    prt->papFldDes[genSubRecordOVLG]->offset = (unsigned short)((char *)&prec->ovlg - (char *)prec);
    prt->papFldDes[genSubRecordOVLH]->size = sizeof(prec->ovlh);
    prt->papFldDes[genSubRecordOVLH]->offset = (unsigned short)((char *)&prec->ovlh - (char *)prec);
    prt->papFldDes[genSubRecordOVLI]->size = sizeof(prec->ovli);
    prt->papFldDes[genSubRecordOVLI]->offset = (unsigned short)((char *)&prec->ovli - (char *)prec);
    prt->papFldDes[genSubRecordOVLJ]->size = sizeof(prec->ovlj);
    prt->papFldDes[genSubRecordOVLJ]->offset = (unsigned short)((char *)&prec->ovlj - (char *)prec);
    prt->papFldDes[genSubRecordOVLK]->size = sizeof(prec->ovlk);
    prt->papFldDes[genSubRecordOVLK]->offset = (unsigned short)((char *)&prec->ovlk - (char *)prec);
    prt->papFldDes[genSubRecordOVLL]->size = sizeof(prec->ovll);
    prt->papFldDes[genSubRecordOVLL]->offset = (unsigned short)((char *)&prec->ovll - (char *)prec);
    prt->papFldDes[genSubRecordOVLM]->size = sizeof(prec->ovlm);
    prt->papFldDes[genSubRecordOVLM]->offset = (unsigned short)((char *)&prec->ovlm - (char *)prec);
    prt->papFldDes[genSubRecordOVLN]->size = sizeof(prec->ovln);
    prt->papFldDes[genSubRecordOVLN]->offset = (unsigned short)((char *)&prec->ovln - (char *)prec);
    prt->papFldDes[genSubRecordOVLO]->size = sizeof(prec->ovlo);
    prt->papFldDes[genSubRecordOVLO]->offset = (unsigned short)((char *)&prec->ovlo - (char *)prec);
    prt->papFldDes[genSubRecordOVLP]->size = sizeof(prec->ovlp);
    prt->papFldDes[genSubRecordOVLP]->offset = (unsigned short)((char *)&prec->ovlp - (char *)prec);
    prt->papFldDes[genSubRecordOVLQ]->size = sizeof(prec->ovlq);
    prt->papFldDes[genSubRecordOVLQ]->offset = (unsigned short)((char *)&prec->ovlq - (char *)prec);
    prt->papFldDes[genSubRecordOVLR]->size = sizeof(prec->ovlr);
    prt->papFldDes[genSubRecordOVLR]->offset = (unsigned short)((char *)&prec->ovlr - (char *)prec);
    prt->papFldDes[genSubRecordOVLS]->size = sizeof(prec->ovls);
    prt->papFldDes[genSubRecordOVLS]->offset = (unsigned short)((char *)&prec->ovls - (char *)prec);
    prt->papFldDes[genSubRecordOVLT]->size = sizeof(prec->ovlt);
    prt->papFldDes[genSubRecordOVLT]->offset = (unsigned short)((char *)&prec->ovlt - (char *)prec);
    prt->papFldDes[genSubRecordOVLU]->size = sizeof(prec->ovlu);
    prt->papFldDes[genSubRecordOVLU]->offset = (unsigned short)((char *)&prec->ovlu - (char *)prec);
    prt->papFldDes[genSubRecordFTVA]->size = sizeof(prec->ftva);
    prt->papFldDes[genSubRecordFTVA]->offset = (unsigned short)((char *)&prec->ftva - (char *)prec);
    prt->papFldDes[genSubRecordFTVB]->size = sizeof(prec->ftvb);
    prt->papFldDes[genSubRecordFTVB]->offset = (unsigned short)((char *)&prec->ftvb - (char *)prec);
    prt->papFldDes[genSubRecordFTVC]->size = sizeof(prec->ftvc);
    prt->papFldDes[genSubRecordFTVC]->offset = (unsigned short)((char *)&prec->ftvc - (char *)prec);
    prt->papFldDes[genSubRecordFTVD]->size = sizeof(prec->ftvd);
    prt->papFldDes[genSubRecordFTVD]->offset = (unsigned short)((char *)&prec->ftvd - (char *)prec);
    prt->papFldDes[genSubRecordFTVE]->size = sizeof(prec->ftve);
    prt->papFldDes[genSubRecordFTVE]->offset = (unsigned short)((char *)&prec->ftve - (char *)prec);
    prt->papFldDes[genSubRecordFTVF]->size = sizeof(prec->ftvf);
    prt->papFldDes[genSubRecordFTVF]->offset = (unsigned short)((char *)&prec->ftvf - (char *)prec);
    prt->papFldDes[genSubRecordFTVG]->size = sizeof(prec->ftvg);
    prt->papFldDes[genSubRecordFTVG]->offset = (unsigned short)((char *)&prec->ftvg - (char *)prec);
    prt->papFldDes[genSubRecordFTVH]->size = sizeof(prec->ftvh);
    prt->papFldDes[genSubRecordFTVH]->offset = (unsigned short)((char *)&prec->ftvh - (char *)prec);
    prt->papFldDes[genSubRecordFTVI]->size = sizeof(prec->ftvi);
    prt->papFldDes[genSubRecordFTVI]->offset = (unsigned short)((char *)&prec->ftvi - (char *)prec);
    prt->papFldDes[genSubRecordFTVJ]->size = sizeof(prec->ftvj);
    prt->papFldDes[genSubRecordFTVJ]->offset = (unsigned short)((char *)&prec->ftvj - (char *)prec);
    prt->papFldDes[genSubRecordFTVK]->size = sizeof(prec->ftvk);
    prt->papFldDes[genSubRecordFTVK]->offset = (unsigned short)((char *)&prec->ftvk - (char *)prec);
    prt->papFldDes[genSubRecordFTVL]->size = sizeof(prec->ftvl);
    prt->papFldDes[genSubRecordFTVL]->offset = (unsigned short)((char *)&prec->ftvl - (char *)prec);
    prt->papFldDes[genSubRecordFTVM]->size = sizeof(prec->ftvm);
    prt->papFldDes[genSubRecordFTVM]->offset = (unsigned short)((char *)&prec->ftvm - (char *)prec);
    prt->papFldDes[genSubRecordFTVN]->size = sizeof(prec->ftvn);
    prt->papFldDes[genSubRecordFTVN]->offset = (unsigned short)((char *)&prec->ftvn - (char *)prec);
    prt->papFldDes[genSubRecordFTVO]->size = sizeof(prec->ftvo);
    prt->papFldDes[genSubRecordFTVO]->offset = (unsigned short)((char *)&prec->ftvo - (char *)prec);
    prt->papFldDes[genSubRecordFTVP]->size = sizeof(prec->ftvp);
    prt->papFldDes[genSubRecordFTVP]->offset = (unsigned short)((char *)&prec->ftvp - (char *)prec);
    prt->papFldDes[genSubRecordFTVQ]->size = sizeof(prec->ftvq);
    prt->papFldDes[genSubRecordFTVQ]->offset = (unsigned short)((char *)&prec->ftvq - (char *)prec);
    prt->papFldDes[genSubRecordFTVR]->size = sizeof(prec->ftvr);
    prt->papFldDes[genSubRecordFTVR]->offset = (unsigned short)((char *)&prec->ftvr - (char *)prec);
    prt->papFldDes[genSubRecordFTVS]->size = sizeof(prec->ftvs);
    prt->papFldDes[genSubRecordFTVS]->offset = (unsigned short)((char *)&prec->ftvs - (char *)prec);
    prt->papFldDes[genSubRecordFTVT]->size = sizeof(prec->ftvt);
    prt->papFldDes[genSubRecordFTVT]->offset = (unsigned short)((char *)&prec->ftvt - (char *)prec);
    prt->papFldDes[genSubRecordFTVU]->size = sizeof(prec->ftvu);
    prt->papFldDes[genSubRecordFTVU]->offset = (unsigned short)((char *)&prec->ftvu - (char *)prec);
    prt->papFldDes[genSubRecordNOVA]->size = sizeof(prec->nova);
    prt->papFldDes[genSubRecordNOVA]->offset = (unsigned short)((char *)&prec->nova - (char *)prec);
    prt->papFldDes[genSubRecordNOVB]->size = sizeof(prec->novb);
    prt->papFldDes[genSubRecordNOVB]->offset = (unsigned short)((char *)&prec->novb - (char *)prec);
    prt->papFldDes[genSubRecordNOVC]->size = sizeof(prec->novc);
    prt->papFldDes[genSubRecordNOVC]->offset = (unsigned short)((char *)&prec->novc - (char *)prec);
    prt->papFldDes[genSubRecordNOVD]->size = sizeof(prec->novd);
    prt->papFldDes[genSubRecordNOVD]->offset = (unsigned short)((char *)&prec->novd - (char *)prec);
    prt->papFldDes[genSubRecordNOVE]->size = sizeof(prec->nove);
    prt->papFldDes[genSubRecordNOVE]->offset = (unsigned short)((char *)&prec->nove - (char *)prec);
    prt->papFldDes[genSubRecordNOVF]->size = sizeof(prec->novf);
    prt->papFldDes[genSubRecordNOVF]->offset = (unsigned short)((char *)&prec->novf - (char *)prec);
    prt->papFldDes[genSubRecordNOVG]->size = sizeof(prec->novg);
    prt->papFldDes[genSubRecordNOVG]->offset = (unsigned short)((char *)&prec->novg - (char *)prec);
    prt->papFldDes[genSubRecordNOVH]->size = sizeof(prec->novh);
    prt->papFldDes[genSubRecordNOVH]->offset = (unsigned short)((char *)&prec->novh - (char *)prec);
    prt->papFldDes[genSubRecordNOVI]->size = sizeof(prec->novi);
    prt->papFldDes[genSubRecordNOVI]->offset = (unsigned short)((char *)&prec->novi - (char *)prec);
    prt->papFldDes[genSubRecordNOVJ]->size = sizeof(prec->novj);
    prt->papFldDes[genSubRecordNOVJ]->offset = (unsigned short)((char *)&prec->novj - (char *)prec);
    prt->papFldDes[genSubRecordNOVK]->size = sizeof(prec->novk);
    prt->papFldDes[genSubRecordNOVK]->offset = (unsigned short)((char *)&prec->novk - (char *)prec);
    prt->papFldDes[genSubRecordNOVL]->size = sizeof(prec->novl);
    prt->papFldDes[genSubRecordNOVL]->offset = (unsigned short)((char *)&prec->novl - (char *)prec);
    prt->papFldDes[genSubRecordNOVM]->size = sizeof(prec->novm);
    prt->papFldDes[genSubRecordNOVM]->offset = (unsigned short)((char *)&prec->novm - (char *)prec);
    prt->papFldDes[genSubRecordNOVN]->size = sizeof(prec->novn);
    prt->papFldDes[genSubRecordNOVN]->offset = (unsigned short)((char *)&prec->novn - (char *)prec);
    prt->papFldDes[genSubRecordNOVO]->size = sizeof(prec->novo);
    prt->papFldDes[genSubRecordNOVO]->offset = (unsigned short)((char *)&prec->novo - (char *)prec);
    prt->papFldDes[genSubRecordNOVP]->size = sizeof(prec->novp);
    prt->papFldDes[genSubRecordNOVP]->offset = (unsigned short)((char *)&prec->novp - (char *)prec);
    prt->papFldDes[genSubRecordNOVQ]->size = sizeof(prec->novq);
    prt->papFldDes[genSubRecordNOVQ]->offset = (unsigned short)((char *)&prec->novq - (char *)prec);
    prt->papFldDes[genSubRecordNOVR]->size = sizeof(prec->novr);
    prt->papFldDes[genSubRecordNOVR]->offset = (unsigned short)((char *)&prec->novr - (char *)prec);
    prt->papFldDes[genSubRecordNOVS]->size = sizeof(prec->novs);
    prt->papFldDes[genSubRecordNOVS]->offset = (unsigned short)((char *)&prec->novs - (char *)prec);
    prt->papFldDes[genSubRecordNOVT]->size = sizeof(prec->novt);
    prt->papFldDes[genSubRecordNOVT]->offset = (unsigned short)((char *)&prec->novt - (char *)prec);
    prt->papFldDes[genSubRecordNOVU]->size = sizeof(prec->novu);
    prt->papFldDes[genSubRecordNOVU]->offset = (unsigned short)((char *)&prec->novu - (char *)prec);
    prt->papFldDes[genSubRecordTOVA]->size = sizeof(prec->tova);
    prt->papFldDes[genSubRecordTOVA]->offset = (unsigned short)((char *)&prec->tova - (char *)prec);
    prt->papFldDes[genSubRecordTOVB]->size = sizeof(prec->tovb);
    prt->papFldDes[genSubRecordTOVB]->offset = (unsigned short)((char *)&prec->tovb - (char *)prec);
    prt->papFldDes[genSubRecordTOVC]->size = sizeof(prec->tovc);
    prt->papFldDes[genSubRecordTOVC]->offset = (unsigned short)((char *)&prec->tovc - (char *)prec);
    prt->papFldDes[genSubRecordTOVD]->size = sizeof(prec->tovd);
    prt->papFldDes[genSubRecordTOVD]->offset = (unsigned short)((char *)&prec->tovd - (char *)prec);
    prt->papFldDes[genSubRecordTOVE]->size = sizeof(prec->tove);
    prt->papFldDes[genSubRecordTOVE]->offset = (unsigned short)((char *)&prec->tove - (char *)prec);
    prt->papFldDes[genSubRecordTOVF]->size = sizeof(prec->tovf);
    prt->papFldDes[genSubRecordTOVF]->offset = (unsigned short)((char *)&prec->tovf - (char *)prec);
    prt->papFldDes[genSubRecordTOVG]->size = sizeof(prec->tovg);
    prt->papFldDes[genSubRecordTOVG]->offset = (unsigned short)((char *)&prec->tovg - (char *)prec);
    prt->papFldDes[genSubRecordTOVH]->size = sizeof(prec->tovh);
    prt->papFldDes[genSubRecordTOVH]->offset = (unsigned short)((char *)&prec->tovh - (char *)prec);
    prt->papFldDes[genSubRecordTOVI]->size = sizeof(prec->tovi);
    prt->papFldDes[genSubRecordTOVI]->offset = (unsigned short)((char *)&prec->tovi - (char *)prec);
    prt->papFldDes[genSubRecordTOVJ]->size = sizeof(prec->tovj);
    prt->papFldDes[genSubRecordTOVJ]->offset = (unsigned short)((char *)&prec->tovj - (char *)prec);
    prt->papFldDes[genSubRecordTOVK]->size = sizeof(prec->tovk);
    prt->papFldDes[genSubRecordTOVK]->offset = (unsigned short)((char *)&prec->tovk - (char *)prec);
    prt->papFldDes[genSubRecordTOVL]->size = sizeof(prec->tovl);
    prt->papFldDes[genSubRecordTOVL]->offset = (unsigned short)((char *)&prec->tovl - (char *)prec);
    prt->papFldDes[genSubRecordTOVM]->size = sizeof(prec->tovm);
    prt->papFldDes[genSubRecordTOVM]->offset = (unsigned short)((char *)&prec->tovm - (char *)prec);
    prt->papFldDes[genSubRecordTOVN]->size = sizeof(prec->tovn);
    prt->papFldDes[genSubRecordTOVN]->offset = (unsigned short)((char *)&prec->tovn - (char *)prec);
    prt->papFldDes[genSubRecordTOVO]->size = sizeof(prec->tovo);
    prt->papFldDes[genSubRecordTOVO]->offset = (unsigned short)((char *)&prec->tovo - (char *)prec);
    prt->papFldDes[genSubRecordTOVP]->size = sizeof(prec->tovp);
    prt->papFldDes[genSubRecordTOVP]->offset = (unsigned short)((char *)&prec->tovp - (char *)prec);
    prt->papFldDes[genSubRecordTOVQ]->size = sizeof(prec->tovq);
    prt->papFldDes[genSubRecordTOVQ]->offset = (unsigned short)((char *)&prec->tovq - (char *)prec);
    prt->papFldDes[genSubRecordTOVR]->size = sizeof(prec->tovr);
    prt->papFldDes[genSubRecordTOVR]->offset = (unsigned short)((char *)&prec->tovr - (char *)prec);
    prt->papFldDes[genSubRecordTOVS]->size = sizeof(prec->tovs);
    prt->papFldDes[genSubRecordTOVS]->offset = (unsigned short)((char *)&prec->tovs - (char *)prec);
    prt->papFldDes[genSubRecordTOVT]->size = sizeof(prec->tovt);
    prt->papFldDes[genSubRecordTOVT]->offset = (unsigned short)((char *)&prec->tovt - (char *)prec);
    prt->papFldDes[genSubRecordTOVU]->size = sizeof(prec->tovu);
    prt->papFldDes[genSubRecordTOVU]->offset = (unsigned short)((char *)&prec->tovu - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(genSubRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_genSubRecord_H */
