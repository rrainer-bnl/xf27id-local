/* luascriptRecord.h generated from luascriptRecord.dbd */

#ifndef INC_luascriptRecord_H
#define INC_luascriptRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

#ifndef luascriptRELO_NUM_CHOICES
typedef enum {
    luascriptRELO_NewFile           /* Every New File */,
    luascriptRELO_NewFunction       /* Every New Change */,
    luascriptRELO_Always            /* Every Processing */
} luascriptRELO;
#define luascriptRELO_NUM_CHOICES 3
#endif

#ifndef luascriptOOPT_NUM_CHOICES
typedef enum {
    luascriptOOPT_Every_Time        /* Every Time */,
    luascriptOOPT_On_Change         /* On Change */,
    luascriptOOPT_When_Zero         /* When Zero */,
    luascriptOOPT_When_Non_zero     /* When Non-zero */,
    luascriptOOPT_Transition_To_Zero /* Transition To Zero */,
    luascriptOOPT_Transition_To_Non_zero /* Transition To Non-zero */,
    luascriptOOPT_Never             /* Never */
} luascriptOOPT;
#define luascriptOOPT_NUM_CHOICES 7
#endif

#ifndef luascriptWAIT_NUM_CHOICES
typedef enum {
    luascriptWAIT_NoWait            /* NoWait */,
    luascriptWAIT_Wait              /* Wait */
} luascriptWAIT;
#define luascriptWAIT_NUM_CHOICES 2
#endif

#ifndef luascriptSYNC_NUM_CHOICES
typedef enum {
    luascriptSYNC_Synchronous       /* Sync */,
    luascriptSYNC_Asynchronous      /* Async */
} luascriptSYNC;
#define luascriptSYNC_NUM_CHOICES 2
#endif

#ifndef luascriptINAV_NUM_CHOICES
typedef enum {
    luascriptINAV_EXT_NC            /* Ext PV NC */,
    luascriptINAV_EXT               /* Ext PV OK */,
    luascriptINAV_LOC               /* Local PV */,
    luascriptINAV_CON               /* Constant */
} luascriptINAV;
#define luascriptINAV_NUM_CHOICES 4
#endif

#ifndef luascriptAVALType_NUM_CHOICES
typedef enum {
    luascriptAVALType_Integer       /* Int */,
    luascriptAVALType_Double        /* Double */,
    luascriptAVALType_Char          /* Char */
} luascriptAVALType;
#define luascriptAVALType_NUM_CHOICES 3
#endif

typedef struct luascriptRecord {
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
    void* state;                    /* Lua State */
    void *rpvt;                     /* Record Private */
    epicsEnum16         sync;       /* Sync/Async processing */
    epicsEnum16         relo;       /* When to reload state? */
    epicsInt16          frld;       /* Force Reload */
    char                err[200];   /* Last Error Msg */
    char                code[121];  /* LUA Code */
    char* pcode;                    /* Previous CODE */
    char* call;                     /* Function call subtring */
    epicsEnum16         oopt;       /* Output Execute Opt */
    epicsEnum16         wait;       /* Wait for completion? */
    DBLINK              inpa;       /* Input A */
    DBLINK              inpb;       /* Input B */
    DBLINK              inpc;       /* Input C */
    DBLINK              inpd;       /* Input D */
    DBLINK              inpe;       /* Input E */
    DBLINK              inpf;       /* Input F */
    DBLINK              inpg;       /* Input G */
    DBLINK              inph;       /* Input H */
    DBLINK              inpi;       /* Input I */
    DBLINK              inpj;       /* Input J */
    DBLINK              inaa;       /* String input AA */
    DBLINK              inbb;       /* String input BB */
    DBLINK              incc;       /* String input CC */
    DBLINK              indd;       /* String input DD */
    DBLINK              inee;       /* String input EE */
    DBLINK              inff;       /* String input FF */
    DBLINK              ingg;       /* String input GG */
    DBLINK              inhh;       /* String input HH */
    DBLINK              inii;       /* String input II */
    DBLINK              injj;       /* String input JJ */
    DBLINK              out;        /* Output Link */
    epicsEnum16         inav;       /* INPA PV Status */
    epicsEnum16         inbv;       /* INPB PV Status */
    epicsEnum16         incv;       /* INPC PV Status */
    epicsEnum16         indv;       /* INPD PV Status */
    epicsEnum16         inev;       /* INPE PV Status */
    epicsEnum16         infv;       /* INPF PV Status */
    epicsEnum16         ingv;       /* INPG PV Status */
    epicsEnum16         inhv;       /* INPH PV Status */
    epicsEnum16         iniv;       /* INPI PV Status */
    epicsEnum16         injv;       /* INPJ PV Status */
    epicsEnum16         iaav;       /* INAA PV Status */
    epicsEnum16         ibbv;       /* INBB PV Status */
    epicsEnum16         iccv;       /* INCC PV Status */
    epicsEnum16         iddv;       /* INDD PV Status */
    epicsEnum16         ieev;       /* INEE PV Status */
    epicsEnum16         iffv;       /* INFF PV Status */
    epicsEnum16         iggv;       /* INGG PV Status */
    epicsEnum16         ihhv;       /* INHH PV Status */
    epicsEnum16         iiiv;       /* INII PV Status */
    epicsEnum16         ijjv;       /* INJJ PV Status */
    epicsEnum16         outv;       /* OUT PV Status */
    char                adsc[20];   /* Input A Description */
    char                bdsc[20];   /* Input B Description */
    char                cdsc[20];   /* Input C Description */
    char                ddsc[20];   /* Input D Description */
    char                edsc[20];   /* Input E Description */
    char                fdsc[20];   /* Input F Description */
    char                gdsc[20];   /* Input G Description */
    char                hdsc[20];   /* Input H Description */
    char                idsc[20];   /* Input I Description */
    char                jdsc[20];   /* Input J Description */
    char                aadn[20];   /* Input AA Description */
    char                bbdn[20];   /* Input BB Description */
    char                ccdn[20];   /* Input CC Description */
    char                dddn[20];   /* Input DD Description */
    char                eedn[20];   /* Input EE Description */
    char                ffdn[20];   /* Input FF Description */
    char                ggdn[20];   /* Input GG Description */
    char                hhdn[20];   /* Input HH Description */
    char                iidn[20];   /* Input II Description */
    char                jjdn[20];   /* Input JJ Description */
    epicsFloat64        a;          /* Value of Input A */
    epicsFloat64        b;          /* Value of Input B */
    epicsFloat64        c;          /* Value of Input C */
    epicsFloat64        d;          /* Value of Input D */
    epicsFloat64        e;          /* Value of Input E */
    epicsFloat64        f;          /* Value of Input F */
    epicsFloat64        g;          /* Value of Input G */
    epicsFloat64        h;          /* Value of Input H */
    epicsFloat64        i;          /* Value of Input I */
    epicsFloat64        j;          /* Value of Input J */
    char                aa[40];     /* Value of string input AA */
    char                bb[40];     /* Value of string input BB */
    char                cc[40];     /* Value of string input CC */
    char                dd[40];     /* Value of string input DD */
    char                ee[40];     /* Value of string input EE */
    char                ff[40];     /* Value of string input FF */
    char                gg[40];     /* Value of string input GG */
    char                hh[40];     /* Value of string input HH */
    char                ii[40];     /* Value of string input II */
    char                jj[40];     /* Value of string input JJ */
    epicsFloat64        pa;         /* Prev Value of A */
    epicsFloat64        pb;         /* Prev Value of B */
    epicsFloat64        pc;         /* Prev Value of C */
    epicsFloat64        pd;         /* Prev Value of D */
    epicsFloat64        pe;         /* Prev Value of E */
    epicsFloat64        pf;         /* Prev Value of F */
    epicsFloat64        pg;         /* Prev Value of G */
    epicsFloat64        ph;         /* Prev Value of H */
    epicsFloat64        pi;         /* Prev Value of I */
    epicsFloat64        pj;         /* Prev Value of J */
    char *paa;                      /* Prev Value of AA */
    char *pbb;                      /* Prev Value of BB */
    char *pcc;                      /* Prev Value of CC */
    char *pdd;                      /* Prev Value of DD */
    char *pee;                      /* Prev Value of EE */
    char *pff;                      /* Prev Value of FF */
    char *pgg;                      /* Prev Value of GG */
    char *phh;                      /* Prev Value of HH */
    char *pii;                      /* Prev Value of II */
    char *pjj;                      /* Prev Value of JJ */
    epicsFloat64        val;        /* Result */
    char                sval[40];   /* String result 1 */
    void* aval;                     /* Array output pointer */
    epicsInt32          asiz;       /* Array output size */
    epicsEnum16         atyp;       /* Array output type */
    epicsFloat64        pval;       /* Previous Value */
    char                psvl[40];   /* Previous string result */
    void* pavl;                     /* Previous aval pointer */
    epicsInt32          pasz;       /* Previous aval size */
    epicsEnum16         patp;       /* Previous aval type */
    epicsFloat64        mdel;       /* Monitor Deadband */
    epicsInt16          prec;       /* Display Precision */
} luascriptRecord;

typedef enum {
	luascriptRecordNAME = 0,
	luascriptRecordDESC = 1,
	luascriptRecordASG = 2,
	luascriptRecordSCAN = 3,
	luascriptRecordPINI = 4,
	luascriptRecordPHAS = 5,
	luascriptRecordEVNT = 6,
	luascriptRecordTSE = 7,
	luascriptRecordTSEL = 8,
	luascriptRecordDTYP = 9,
	luascriptRecordDISV = 10,
	luascriptRecordDISA = 11,
	luascriptRecordSDIS = 12,
	luascriptRecordMLOK = 13,
	luascriptRecordMLIS = 14,
	luascriptRecordBKLNK = 15,
	luascriptRecordDISP = 16,
	luascriptRecordPROC = 17,
	luascriptRecordSTAT = 18,
	luascriptRecordSEVR = 19,
	luascriptRecordNSTA = 20,
	luascriptRecordNSEV = 21,
	luascriptRecordACKS = 22,
	luascriptRecordACKT = 23,
	luascriptRecordDISS = 24,
	luascriptRecordLCNT = 25,
	luascriptRecordPACT = 26,
	luascriptRecordPUTF = 27,
	luascriptRecordRPRO = 28,
	luascriptRecordASP = 29,
	luascriptRecordPPN = 30,
	luascriptRecordPPNR = 31,
	luascriptRecordSPVT = 32,
	luascriptRecordRSET = 33,
	luascriptRecordDSET = 34,
	luascriptRecordDPVT = 35,
	luascriptRecordRDES = 36,
	luascriptRecordLSET = 37,
	luascriptRecordPRIO = 38,
	luascriptRecordTPRO = 39,
	luascriptRecordBKPT = 40,
	luascriptRecordUDF = 41,
	luascriptRecordUDFS = 42,
	luascriptRecordTIME = 43,
	luascriptRecordFLNK = 44,
	luascriptRecordSTATE = 45,
	luascriptRecordRPVT = 46,
	luascriptRecordSYNC = 47,
	luascriptRecordRELO = 48,
	luascriptRecordFRLD = 49,
	luascriptRecordERR = 50,
	luascriptRecordCODE = 51,
	luascriptRecordPCODE = 52,
	luascriptRecordCALL = 53,
	luascriptRecordOOPT = 54,
	luascriptRecordWAIT = 55,
	luascriptRecordINPA = 56,
	luascriptRecordINPB = 57,
	luascriptRecordINPC = 58,
	luascriptRecordINPD = 59,
	luascriptRecordINPE = 60,
	luascriptRecordINPF = 61,
	luascriptRecordINPG = 62,
	luascriptRecordINPH = 63,
	luascriptRecordINPI = 64,
	luascriptRecordINPJ = 65,
	luascriptRecordINAA = 66,
	luascriptRecordINBB = 67,
	luascriptRecordINCC = 68,
	luascriptRecordINDD = 69,
	luascriptRecordINEE = 70,
	luascriptRecordINFF = 71,
	luascriptRecordINGG = 72,
	luascriptRecordINHH = 73,
	luascriptRecordINII = 74,
	luascriptRecordINJJ = 75,
	luascriptRecordOUT = 76,
	luascriptRecordINAV = 77,
	luascriptRecordINBV = 78,
	luascriptRecordINCV = 79,
	luascriptRecordINDV = 80,
	luascriptRecordINEV = 81,
	luascriptRecordINFV = 82,
	luascriptRecordINGV = 83,
	luascriptRecordINHV = 84,
	luascriptRecordINIV = 85,
	luascriptRecordINJV = 86,
	luascriptRecordIAAV = 87,
	luascriptRecordIBBV = 88,
	luascriptRecordICCV = 89,
	luascriptRecordIDDV = 90,
	luascriptRecordIEEV = 91,
	luascriptRecordIFFV = 92,
	luascriptRecordIGGV = 93,
	luascriptRecordIHHV = 94,
	luascriptRecordIIIV = 95,
	luascriptRecordIJJV = 96,
	luascriptRecordOUTV = 97,
	luascriptRecordADSC = 98,
	luascriptRecordBDSC = 99,
	luascriptRecordCDSC = 100,
	luascriptRecordDDSC = 101,
	luascriptRecordEDSC = 102,
	luascriptRecordFDSC = 103,
	luascriptRecordGDSC = 104,
	luascriptRecordHDSC = 105,
	luascriptRecordIDSC = 106,
	luascriptRecordJDSC = 107,
	luascriptRecordAADN = 108,
	luascriptRecordBBDN = 109,
	luascriptRecordCCDN = 110,
	luascriptRecordDDDN = 111,
	luascriptRecordEEDN = 112,
	luascriptRecordFFDN = 113,
	luascriptRecordGGDN = 114,
	luascriptRecordHHDN = 115,
	luascriptRecordIIDN = 116,
	luascriptRecordJJDN = 117,
	luascriptRecordA = 118,
	luascriptRecordB = 119,
	luascriptRecordC = 120,
	luascriptRecordD = 121,
	luascriptRecordE = 122,
	luascriptRecordF = 123,
	luascriptRecordG = 124,
	luascriptRecordH = 125,
	luascriptRecordI = 126,
	luascriptRecordJ = 127,
	luascriptRecordAA = 128,
	luascriptRecordBB = 129,
	luascriptRecordCC = 130,
	luascriptRecordDD = 131,
	luascriptRecordEE = 132,
	luascriptRecordFF = 133,
	luascriptRecordGG = 134,
	luascriptRecordHH = 135,
	luascriptRecordII = 136,
	luascriptRecordJJ = 137,
	luascriptRecordPA = 138,
	luascriptRecordPB = 139,
	luascriptRecordPC = 140,
	luascriptRecordPD = 141,
	luascriptRecordPE = 142,
	luascriptRecordPF = 143,
	luascriptRecordPG = 144,
	luascriptRecordPH = 145,
	luascriptRecordPI = 146,
	luascriptRecordPJ = 147,
	luascriptRecordPAA = 148,
	luascriptRecordPBB = 149,
	luascriptRecordPCC = 150,
	luascriptRecordPDD = 151,
	luascriptRecordPEE = 152,
	luascriptRecordPFF = 153,
	luascriptRecordPGG = 154,
	luascriptRecordPHH = 155,
	luascriptRecordPII = 156,
	luascriptRecordPJJ = 157,
	luascriptRecordVAL = 158,
	luascriptRecordSVAL = 159,
	luascriptRecordAVAL = 160,
	luascriptRecordASIZ = 161,
	luascriptRecordATYP = 162,
	luascriptRecordPVAL = 163,
	luascriptRecordPSVL = 164,
	luascriptRecordPAVL = 165,
	luascriptRecordPASZ = 166,
	luascriptRecordPATP = 167,
	luascriptRecordMDEL = 168,
	luascriptRecordPREC = 169
} luascriptFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int luascriptRecordSizeOffset(dbRecordType *prt)
{
    luascriptRecord *prec = 0;

    if (prt->no_fields != 170) {
        cantProceed("IOC build or installation error:\n"
            "    The luascriptRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 170.\n",
            prt->no_fields);
    }
    prt->papFldDes[luascriptRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[luascriptRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[luascriptRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[luascriptRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[luascriptRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[luascriptRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[luascriptRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[luascriptRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[luascriptRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[luascriptRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[luascriptRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[luascriptRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[luascriptRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[luascriptRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[luascriptRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[luascriptRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[luascriptRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[luascriptRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[luascriptRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[luascriptRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[luascriptRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[luascriptRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[luascriptRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[luascriptRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[luascriptRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[luascriptRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[luascriptRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[luascriptRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[luascriptRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[luascriptRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[luascriptRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[luascriptRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[luascriptRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[luascriptRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[luascriptRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[luascriptRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[luascriptRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[luascriptRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[luascriptRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[luascriptRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[luascriptRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[luascriptRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[luascriptRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[luascriptRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[luascriptRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[luascriptRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[luascriptRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[luascriptRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[luascriptRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[luascriptRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[luascriptRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[luascriptRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[luascriptRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[luascriptRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[luascriptRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[luascriptRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[luascriptRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[luascriptRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[luascriptRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[luascriptRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[luascriptRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[luascriptRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[luascriptRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[luascriptRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[luascriptRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[luascriptRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[luascriptRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[luascriptRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[luascriptRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[luascriptRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[luascriptRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[luascriptRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[luascriptRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[luascriptRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[luascriptRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[luascriptRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[luascriptRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[luascriptRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[luascriptRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[luascriptRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[luascriptRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[luascriptRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[luascriptRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[luascriptRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[luascriptRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[luascriptRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[luascriptRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[luascriptRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[luascriptRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[luascriptRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[luascriptRecordSTATE]->size = sizeof(prec->state);
    prt->papFldDes[luascriptRecordSTATE]->offset = (unsigned short)((char *)&prec->state - (char *)prec);
    prt->papFldDes[luascriptRecordRPVT]->size = sizeof(prec->rpvt);
    prt->papFldDes[luascriptRecordRPVT]->offset = (unsigned short)((char *)&prec->rpvt - (char *)prec);
    prt->papFldDes[luascriptRecordSYNC]->size = sizeof(prec->sync);
    prt->papFldDes[luascriptRecordSYNC]->offset = (unsigned short)((char *)&prec->sync - (char *)prec);
    prt->papFldDes[luascriptRecordRELO]->size = sizeof(prec->relo);
    prt->papFldDes[luascriptRecordRELO]->offset = (unsigned short)((char *)&prec->relo - (char *)prec);
    prt->papFldDes[luascriptRecordFRLD]->size = sizeof(prec->frld);
    prt->papFldDes[luascriptRecordFRLD]->offset = (unsigned short)((char *)&prec->frld - (char *)prec);
    prt->papFldDes[luascriptRecordERR]->size = sizeof(prec->err);
    prt->papFldDes[luascriptRecordERR]->offset = (unsigned short)((char *)&prec->err - (char *)prec);
    prt->papFldDes[luascriptRecordCODE]->size = sizeof(prec->code);
    prt->papFldDes[luascriptRecordCODE]->offset = (unsigned short)((char *)&prec->code - (char *)prec);
    prt->papFldDes[luascriptRecordPCODE]->size = sizeof(prec->pcode);
    prt->papFldDes[luascriptRecordPCODE]->offset = (unsigned short)((char *)&prec->pcode - (char *)prec);
    prt->papFldDes[luascriptRecordCALL]->size = sizeof(prec->call);
    prt->papFldDes[luascriptRecordCALL]->offset = (unsigned short)((char *)&prec->call - (char *)prec);
    prt->papFldDes[luascriptRecordOOPT]->size = sizeof(prec->oopt);
    prt->papFldDes[luascriptRecordOOPT]->offset = (unsigned short)((char *)&prec->oopt - (char *)prec);
    prt->papFldDes[luascriptRecordWAIT]->size = sizeof(prec->wait);
    prt->papFldDes[luascriptRecordWAIT]->offset = (unsigned short)((char *)&prec->wait - (char *)prec);
    prt->papFldDes[luascriptRecordINPA]->size = sizeof(prec->inpa);
    prt->papFldDes[luascriptRecordINPA]->offset = (unsigned short)((char *)&prec->inpa - (char *)prec);
    prt->papFldDes[luascriptRecordINPB]->size = sizeof(prec->inpb);
    prt->papFldDes[luascriptRecordINPB]->offset = (unsigned short)((char *)&prec->inpb - (char *)prec);
    prt->papFldDes[luascriptRecordINPC]->size = sizeof(prec->inpc);
    prt->papFldDes[luascriptRecordINPC]->offset = (unsigned short)((char *)&prec->inpc - (char *)prec);
    prt->papFldDes[luascriptRecordINPD]->size = sizeof(prec->inpd);
    prt->papFldDes[luascriptRecordINPD]->offset = (unsigned short)((char *)&prec->inpd - (char *)prec);
    prt->papFldDes[luascriptRecordINPE]->size = sizeof(prec->inpe);
    prt->papFldDes[luascriptRecordINPE]->offset = (unsigned short)((char *)&prec->inpe - (char *)prec);
    prt->papFldDes[luascriptRecordINPF]->size = sizeof(prec->inpf);
    prt->papFldDes[luascriptRecordINPF]->offset = (unsigned short)((char *)&prec->inpf - (char *)prec);
    prt->papFldDes[luascriptRecordINPG]->size = sizeof(prec->inpg);
    prt->papFldDes[luascriptRecordINPG]->offset = (unsigned short)((char *)&prec->inpg - (char *)prec);
    prt->papFldDes[luascriptRecordINPH]->size = sizeof(prec->inph);
    prt->papFldDes[luascriptRecordINPH]->offset = (unsigned short)((char *)&prec->inph - (char *)prec);
    prt->papFldDes[luascriptRecordINPI]->size = sizeof(prec->inpi);
    prt->papFldDes[luascriptRecordINPI]->offset = (unsigned short)((char *)&prec->inpi - (char *)prec);
    prt->papFldDes[luascriptRecordINPJ]->size = sizeof(prec->inpj);
    prt->papFldDes[luascriptRecordINPJ]->offset = (unsigned short)((char *)&prec->inpj - (char *)prec);
    prt->papFldDes[luascriptRecordINAA]->size = sizeof(prec->inaa);
    prt->papFldDes[luascriptRecordINAA]->offset = (unsigned short)((char *)&prec->inaa - (char *)prec);
    prt->papFldDes[luascriptRecordINBB]->size = sizeof(prec->inbb);
    prt->papFldDes[luascriptRecordINBB]->offset = (unsigned short)((char *)&prec->inbb - (char *)prec);
    prt->papFldDes[luascriptRecordINCC]->size = sizeof(prec->incc);
    prt->papFldDes[luascriptRecordINCC]->offset = (unsigned short)((char *)&prec->incc - (char *)prec);
    prt->papFldDes[luascriptRecordINDD]->size = sizeof(prec->indd);
    prt->papFldDes[luascriptRecordINDD]->offset = (unsigned short)((char *)&prec->indd - (char *)prec);
    prt->papFldDes[luascriptRecordINEE]->size = sizeof(prec->inee);
    prt->papFldDes[luascriptRecordINEE]->offset = (unsigned short)((char *)&prec->inee - (char *)prec);
    prt->papFldDes[luascriptRecordINFF]->size = sizeof(prec->inff);
    prt->papFldDes[luascriptRecordINFF]->offset = (unsigned short)((char *)&prec->inff - (char *)prec);
    prt->papFldDes[luascriptRecordINGG]->size = sizeof(prec->ingg);
    prt->papFldDes[luascriptRecordINGG]->offset = (unsigned short)((char *)&prec->ingg - (char *)prec);
    prt->papFldDes[luascriptRecordINHH]->size = sizeof(prec->inhh);
    prt->papFldDes[luascriptRecordINHH]->offset = (unsigned short)((char *)&prec->inhh - (char *)prec);
    prt->papFldDes[luascriptRecordINII]->size = sizeof(prec->inii);
    prt->papFldDes[luascriptRecordINII]->offset = (unsigned short)((char *)&prec->inii - (char *)prec);
    prt->papFldDes[luascriptRecordINJJ]->size = sizeof(prec->injj);
    prt->papFldDes[luascriptRecordINJJ]->offset = (unsigned short)((char *)&prec->injj - (char *)prec);
    prt->papFldDes[luascriptRecordOUT]->size = sizeof(prec->out);
    prt->papFldDes[luascriptRecordOUT]->offset = (unsigned short)((char *)&prec->out - (char *)prec);
    prt->papFldDes[luascriptRecordINAV]->size = sizeof(prec->inav);
    prt->papFldDes[luascriptRecordINAV]->offset = (unsigned short)((char *)&prec->inav - (char *)prec);
    prt->papFldDes[luascriptRecordINBV]->size = sizeof(prec->inbv);
    prt->papFldDes[luascriptRecordINBV]->offset = (unsigned short)((char *)&prec->inbv - (char *)prec);
    prt->papFldDes[luascriptRecordINCV]->size = sizeof(prec->incv);
    prt->papFldDes[luascriptRecordINCV]->offset = (unsigned short)((char *)&prec->incv - (char *)prec);
    prt->papFldDes[luascriptRecordINDV]->size = sizeof(prec->indv);
    prt->papFldDes[luascriptRecordINDV]->offset = (unsigned short)((char *)&prec->indv - (char *)prec);
    prt->papFldDes[luascriptRecordINEV]->size = sizeof(prec->inev);
    prt->papFldDes[luascriptRecordINEV]->offset = (unsigned short)((char *)&prec->inev - (char *)prec);
    prt->papFldDes[luascriptRecordINFV]->size = sizeof(prec->infv);
    prt->papFldDes[luascriptRecordINFV]->offset = (unsigned short)((char *)&prec->infv - (char *)prec);
    prt->papFldDes[luascriptRecordINGV]->size = sizeof(prec->ingv);
    prt->papFldDes[luascriptRecordINGV]->offset = (unsigned short)((char *)&prec->ingv - (char *)prec);
    prt->papFldDes[luascriptRecordINHV]->size = sizeof(prec->inhv);
    prt->papFldDes[luascriptRecordINHV]->offset = (unsigned short)((char *)&prec->inhv - (char *)prec);
    prt->papFldDes[luascriptRecordINIV]->size = sizeof(prec->iniv);
    prt->papFldDes[luascriptRecordINIV]->offset = (unsigned short)((char *)&prec->iniv - (char *)prec);
    prt->papFldDes[luascriptRecordINJV]->size = sizeof(prec->injv);
    prt->papFldDes[luascriptRecordINJV]->offset = (unsigned short)((char *)&prec->injv - (char *)prec);
    prt->papFldDes[luascriptRecordIAAV]->size = sizeof(prec->iaav);
    prt->papFldDes[luascriptRecordIAAV]->offset = (unsigned short)((char *)&prec->iaav - (char *)prec);
    prt->papFldDes[luascriptRecordIBBV]->size = sizeof(prec->ibbv);
    prt->papFldDes[luascriptRecordIBBV]->offset = (unsigned short)((char *)&prec->ibbv - (char *)prec);
    prt->papFldDes[luascriptRecordICCV]->size = sizeof(prec->iccv);
    prt->papFldDes[luascriptRecordICCV]->offset = (unsigned short)((char *)&prec->iccv - (char *)prec);
    prt->papFldDes[luascriptRecordIDDV]->size = sizeof(prec->iddv);
    prt->papFldDes[luascriptRecordIDDV]->offset = (unsigned short)((char *)&prec->iddv - (char *)prec);
    prt->papFldDes[luascriptRecordIEEV]->size = sizeof(prec->ieev);
    prt->papFldDes[luascriptRecordIEEV]->offset = (unsigned short)((char *)&prec->ieev - (char *)prec);
    prt->papFldDes[luascriptRecordIFFV]->size = sizeof(prec->iffv);
    prt->papFldDes[luascriptRecordIFFV]->offset = (unsigned short)((char *)&prec->iffv - (char *)prec);
    prt->papFldDes[luascriptRecordIGGV]->size = sizeof(prec->iggv);
    prt->papFldDes[luascriptRecordIGGV]->offset = (unsigned short)((char *)&prec->iggv - (char *)prec);
    prt->papFldDes[luascriptRecordIHHV]->size = sizeof(prec->ihhv);
    prt->papFldDes[luascriptRecordIHHV]->offset = (unsigned short)((char *)&prec->ihhv - (char *)prec);
    prt->papFldDes[luascriptRecordIIIV]->size = sizeof(prec->iiiv);
    prt->papFldDes[luascriptRecordIIIV]->offset = (unsigned short)((char *)&prec->iiiv - (char *)prec);
    prt->papFldDes[luascriptRecordIJJV]->size = sizeof(prec->ijjv);
    prt->papFldDes[luascriptRecordIJJV]->offset = (unsigned short)((char *)&prec->ijjv - (char *)prec);
    prt->papFldDes[luascriptRecordOUTV]->size = sizeof(prec->outv);
    prt->papFldDes[luascriptRecordOUTV]->offset = (unsigned short)((char *)&prec->outv - (char *)prec);
    prt->papFldDes[luascriptRecordADSC]->size = sizeof(prec->adsc);
    prt->papFldDes[luascriptRecordADSC]->offset = (unsigned short)((char *)&prec->adsc - (char *)prec);
    prt->papFldDes[luascriptRecordBDSC]->size = sizeof(prec->bdsc);
    prt->papFldDes[luascriptRecordBDSC]->offset = (unsigned short)((char *)&prec->bdsc - (char *)prec);
    prt->papFldDes[luascriptRecordCDSC]->size = sizeof(prec->cdsc);
    prt->papFldDes[luascriptRecordCDSC]->offset = (unsigned short)((char *)&prec->cdsc - (char *)prec);
    prt->papFldDes[luascriptRecordDDSC]->size = sizeof(prec->ddsc);
    prt->papFldDes[luascriptRecordDDSC]->offset = (unsigned short)((char *)&prec->ddsc - (char *)prec);
    prt->papFldDes[luascriptRecordEDSC]->size = sizeof(prec->edsc);
    prt->papFldDes[luascriptRecordEDSC]->offset = (unsigned short)((char *)&prec->edsc - (char *)prec);
    prt->papFldDes[luascriptRecordFDSC]->size = sizeof(prec->fdsc);
    prt->papFldDes[luascriptRecordFDSC]->offset = (unsigned short)((char *)&prec->fdsc - (char *)prec);
    prt->papFldDes[luascriptRecordGDSC]->size = sizeof(prec->gdsc);
    prt->papFldDes[luascriptRecordGDSC]->offset = (unsigned short)((char *)&prec->gdsc - (char *)prec);
    prt->papFldDes[luascriptRecordHDSC]->size = sizeof(prec->hdsc);
    prt->papFldDes[luascriptRecordHDSC]->offset = (unsigned short)((char *)&prec->hdsc - (char *)prec);
    prt->papFldDes[luascriptRecordIDSC]->size = sizeof(prec->idsc);
    prt->papFldDes[luascriptRecordIDSC]->offset = (unsigned short)((char *)&prec->idsc - (char *)prec);
    prt->papFldDes[luascriptRecordJDSC]->size = sizeof(prec->jdsc);
    prt->papFldDes[luascriptRecordJDSC]->offset = (unsigned short)((char *)&prec->jdsc - (char *)prec);
    prt->papFldDes[luascriptRecordAADN]->size = sizeof(prec->aadn);
    prt->papFldDes[luascriptRecordAADN]->offset = (unsigned short)((char *)&prec->aadn - (char *)prec);
    prt->papFldDes[luascriptRecordBBDN]->size = sizeof(prec->bbdn);
    prt->papFldDes[luascriptRecordBBDN]->offset = (unsigned short)((char *)&prec->bbdn - (char *)prec);
    prt->papFldDes[luascriptRecordCCDN]->size = sizeof(prec->ccdn);
    prt->papFldDes[luascriptRecordCCDN]->offset = (unsigned short)((char *)&prec->ccdn - (char *)prec);
    prt->papFldDes[luascriptRecordDDDN]->size = sizeof(prec->dddn);
    prt->papFldDes[luascriptRecordDDDN]->offset = (unsigned short)((char *)&prec->dddn - (char *)prec);
    prt->papFldDes[luascriptRecordEEDN]->size = sizeof(prec->eedn);
    prt->papFldDes[luascriptRecordEEDN]->offset = (unsigned short)((char *)&prec->eedn - (char *)prec);
    prt->papFldDes[luascriptRecordFFDN]->size = sizeof(prec->ffdn);
    prt->papFldDes[luascriptRecordFFDN]->offset = (unsigned short)((char *)&prec->ffdn - (char *)prec);
    prt->papFldDes[luascriptRecordGGDN]->size = sizeof(prec->ggdn);
    prt->papFldDes[luascriptRecordGGDN]->offset = (unsigned short)((char *)&prec->ggdn - (char *)prec);
    prt->papFldDes[luascriptRecordHHDN]->size = sizeof(prec->hhdn);
    prt->papFldDes[luascriptRecordHHDN]->offset = (unsigned short)((char *)&prec->hhdn - (char *)prec);
    prt->papFldDes[luascriptRecordIIDN]->size = sizeof(prec->iidn);
    prt->papFldDes[luascriptRecordIIDN]->offset = (unsigned short)((char *)&prec->iidn - (char *)prec);
    prt->papFldDes[luascriptRecordJJDN]->size = sizeof(prec->jjdn);
    prt->papFldDes[luascriptRecordJJDN]->offset = (unsigned short)((char *)&prec->jjdn - (char *)prec);
    prt->papFldDes[luascriptRecordA]->size = sizeof(prec->a);
    prt->papFldDes[luascriptRecordA]->offset = (unsigned short)((char *)&prec->a - (char *)prec);
    prt->papFldDes[luascriptRecordB]->size = sizeof(prec->b);
    prt->papFldDes[luascriptRecordB]->offset = (unsigned short)((char *)&prec->b - (char *)prec);
    prt->papFldDes[luascriptRecordC]->size = sizeof(prec->c);
    prt->papFldDes[luascriptRecordC]->offset = (unsigned short)((char *)&prec->c - (char *)prec);
    prt->papFldDes[luascriptRecordD]->size = sizeof(prec->d);
    prt->papFldDes[luascriptRecordD]->offset = (unsigned short)((char *)&prec->d - (char *)prec);
    prt->papFldDes[luascriptRecordE]->size = sizeof(prec->e);
    prt->papFldDes[luascriptRecordE]->offset = (unsigned short)((char *)&prec->e - (char *)prec);
    prt->papFldDes[luascriptRecordF]->size = sizeof(prec->f);
    prt->papFldDes[luascriptRecordF]->offset = (unsigned short)((char *)&prec->f - (char *)prec);
    prt->papFldDes[luascriptRecordG]->size = sizeof(prec->g);
    prt->papFldDes[luascriptRecordG]->offset = (unsigned short)((char *)&prec->g - (char *)prec);
    prt->papFldDes[luascriptRecordH]->size = sizeof(prec->h);
    prt->papFldDes[luascriptRecordH]->offset = (unsigned short)((char *)&prec->h - (char *)prec);
    prt->papFldDes[luascriptRecordI]->size = sizeof(prec->i);
    prt->papFldDes[luascriptRecordI]->offset = (unsigned short)((char *)&prec->i - (char *)prec);
    prt->papFldDes[luascriptRecordJ]->size = sizeof(prec->j);
    prt->papFldDes[luascriptRecordJ]->offset = (unsigned short)((char *)&prec->j - (char *)prec);
    prt->papFldDes[luascriptRecordAA]->size = sizeof(prec->aa);
    prt->papFldDes[luascriptRecordAA]->offset = (unsigned short)((char *)&prec->aa - (char *)prec);
    prt->papFldDes[luascriptRecordBB]->size = sizeof(prec->bb);
    prt->papFldDes[luascriptRecordBB]->offset = (unsigned short)((char *)&prec->bb - (char *)prec);
    prt->papFldDes[luascriptRecordCC]->size = sizeof(prec->cc);
    prt->papFldDes[luascriptRecordCC]->offset = (unsigned short)((char *)&prec->cc - (char *)prec);
    prt->papFldDes[luascriptRecordDD]->size = sizeof(prec->dd);
    prt->papFldDes[luascriptRecordDD]->offset = (unsigned short)((char *)&prec->dd - (char *)prec);
    prt->papFldDes[luascriptRecordEE]->size = sizeof(prec->ee);
    prt->papFldDes[luascriptRecordEE]->offset = (unsigned short)((char *)&prec->ee - (char *)prec);
    prt->papFldDes[luascriptRecordFF]->size = sizeof(prec->ff);
    prt->papFldDes[luascriptRecordFF]->offset = (unsigned short)((char *)&prec->ff - (char *)prec);
    prt->papFldDes[luascriptRecordGG]->size = sizeof(prec->gg);
    prt->papFldDes[luascriptRecordGG]->offset = (unsigned short)((char *)&prec->gg - (char *)prec);
    prt->papFldDes[luascriptRecordHH]->size = sizeof(prec->hh);
    prt->papFldDes[luascriptRecordHH]->offset = (unsigned short)((char *)&prec->hh - (char *)prec);
    prt->papFldDes[luascriptRecordII]->size = sizeof(prec->ii);
    prt->papFldDes[luascriptRecordII]->offset = (unsigned short)((char *)&prec->ii - (char *)prec);
    prt->papFldDes[luascriptRecordJJ]->size = sizeof(prec->jj);
    prt->papFldDes[luascriptRecordJJ]->offset = (unsigned short)((char *)&prec->jj - (char *)prec);
    prt->papFldDes[luascriptRecordPA]->size = sizeof(prec->pa);
    prt->papFldDes[luascriptRecordPA]->offset = (unsigned short)((char *)&prec->pa - (char *)prec);
    prt->papFldDes[luascriptRecordPB]->size = sizeof(prec->pb);
    prt->papFldDes[luascriptRecordPB]->offset = (unsigned short)((char *)&prec->pb - (char *)prec);
    prt->papFldDes[luascriptRecordPC]->size = sizeof(prec->pc);
    prt->papFldDes[luascriptRecordPC]->offset = (unsigned short)((char *)&prec->pc - (char *)prec);
    prt->papFldDes[luascriptRecordPD]->size = sizeof(prec->pd);
    prt->papFldDes[luascriptRecordPD]->offset = (unsigned short)((char *)&prec->pd - (char *)prec);
    prt->papFldDes[luascriptRecordPE]->size = sizeof(prec->pe);
    prt->papFldDes[luascriptRecordPE]->offset = (unsigned short)((char *)&prec->pe - (char *)prec);
    prt->papFldDes[luascriptRecordPF]->size = sizeof(prec->pf);
    prt->papFldDes[luascriptRecordPF]->offset = (unsigned short)((char *)&prec->pf - (char *)prec);
    prt->papFldDes[luascriptRecordPG]->size = sizeof(prec->pg);
    prt->papFldDes[luascriptRecordPG]->offset = (unsigned short)((char *)&prec->pg - (char *)prec);
    prt->papFldDes[luascriptRecordPH]->size = sizeof(prec->ph);
    prt->papFldDes[luascriptRecordPH]->offset = (unsigned short)((char *)&prec->ph - (char *)prec);
    prt->papFldDes[luascriptRecordPI]->size = sizeof(prec->pi);
    prt->papFldDes[luascriptRecordPI]->offset = (unsigned short)((char *)&prec->pi - (char *)prec);
    prt->papFldDes[luascriptRecordPJ]->size = sizeof(prec->pj);
    prt->papFldDes[luascriptRecordPJ]->offset = (unsigned short)((char *)&prec->pj - (char *)prec);
    prt->papFldDes[luascriptRecordPAA]->size = sizeof(prec->paa);
    prt->papFldDes[luascriptRecordPAA]->offset = (unsigned short)((char *)&prec->paa - (char *)prec);
    prt->papFldDes[luascriptRecordPBB]->size = sizeof(prec->pbb);
    prt->papFldDes[luascriptRecordPBB]->offset = (unsigned short)((char *)&prec->pbb - (char *)prec);
    prt->papFldDes[luascriptRecordPCC]->size = sizeof(prec->pcc);
    prt->papFldDes[luascriptRecordPCC]->offset = (unsigned short)((char *)&prec->pcc - (char *)prec);
    prt->papFldDes[luascriptRecordPDD]->size = sizeof(prec->pdd);
    prt->papFldDes[luascriptRecordPDD]->offset = (unsigned short)((char *)&prec->pdd - (char *)prec);
    prt->papFldDes[luascriptRecordPEE]->size = sizeof(prec->pee);
    prt->papFldDes[luascriptRecordPEE]->offset = (unsigned short)((char *)&prec->pee - (char *)prec);
    prt->papFldDes[luascriptRecordPFF]->size = sizeof(prec->pff);
    prt->papFldDes[luascriptRecordPFF]->offset = (unsigned short)((char *)&prec->pff - (char *)prec);
    prt->papFldDes[luascriptRecordPGG]->size = sizeof(prec->pgg);
    prt->papFldDes[luascriptRecordPGG]->offset = (unsigned short)((char *)&prec->pgg - (char *)prec);
    prt->papFldDes[luascriptRecordPHH]->size = sizeof(prec->phh);
    prt->papFldDes[luascriptRecordPHH]->offset = (unsigned short)((char *)&prec->phh - (char *)prec);
    prt->papFldDes[luascriptRecordPII]->size = sizeof(prec->pii);
    prt->papFldDes[luascriptRecordPII]->offset = (unsigned short)((char *)&prec->pii - (char *)prec);
    prt->papFldDes[luascriptRecordPJJ]->size = sizeof(prec->pjj);
    prt->papFldDes[luascriptRecordPJJ]->offset = (unsigned short)((char *)&prec->pjj - (char *)prec);
    prt->papFldDes[luascriptRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[luascriptRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[luascriptRecordSVAL]->size = sizeof(prec->sval);
    prt->papFldDes[luascriptRecordSVAL]->offset = (unsigned short)((char *)&prec->sval - (char *)prec);
    prt->papFldDes[luascriptRecordAVAL]->size = sizeof(prec->aval);
    prt->papFldDes[luascriptRecordAVAL]->offset = (unsigned short)((char *)&prec->aval - (char *)prec);
    prt->papFldDes[luascriptRecordASIZ]->size = sizeof(prec->asiz);
    prt->papFldDes[luascriptRecordASIZ]->offset = (unsigned short)((char *)&prec->asiz - (char *)prec);
    prt->papFldDes[luascriptRecordATYP]->size = sizeof(prec->atyp);
    prt->papFldDes[luascriptRecordATYP]->offset = (unsigned short)((char *)&prec->atyp - (char *)prec);
    prt->papFldDes[luascriptRecordPVAL]->size = sizeof(prec->pval);
    prt->papFldDes[luascriptRecordPVAL]->offset = (unsigned short)((char *)&prec->pval - (char *)prec);
    prt->papFldDes[luascriptRecordPSVL]->size = sizeof(prec->psvl);
    prt->papFldDes[luascriptRecordPSVL]->offset = (unsigned short)((char *)&prec->psvl - (char *)prec);
    prt->papFldDes[luascriptRecordPAVL]->size = sizeof(prec->pavl);
    prt->papFldDes[luascriptRecordPAVL]->offset = (unsigned short)((char *)&prec->pavl - (char *)prec);
    prt->papFldDes[luascriptRecordPASZ]->size = sizeof(prec->pasz);
    prt->papFldDes[luascriptRecordPASZ]->offset = (unsigned short)((char *)&prec->pasz - (char *)prec);
    prt->papFldDes[luascriptRecordPATP]->size = sizeof(prec->patp);
    prt->papFldDes[luascriptRecordPATP]->offset = (unsigned short)((char *)&prec->patp - (char *)prec);
    prt->papFldDes[luascriptRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[luascriptRecordMDEL]->offset = (unsigned short)((char *)&prec->mdel - (char *)prec);
    prt->papFldDes[luascriptRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[luascriptRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(luascriptRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_luascriptRecord_H */
