/* swaitRecord.h generated from swaitRecord.dbd */

#ifndef INC_swaitRecord_H
#define INC_swaitRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

#ifndef swaitDOPT_NUM_CHOICES
typedef enum {
    swaitDOPT_Use_VAL               /* Use VAL */,
    swaitDOPT_Use_DOL               /* Use DOL */
} swaitDOPT;
#define swaitDOPT_NUM_CHOICES 2
#endif

#ifndef swaitOOPT_NUM_CHOICES
typedef enum {
    swaitOOPT_Every_Time            /* Every Time */,
    swaitOOPT_On_Change             /* On Change */,
    swaitOOPT_When_Zero             /* When Zero */,
    swaitOOPT_When_Non_zero         /* When Non-zero */,
    swaitOOPT_Transition_To_Zero    /* Transition To Zero */,
    swaitOOPT_Transition_To_Non_zero /* Transition To Non-zero */,
    swaitOOPT_Never                 /* Never */
} swaitOOPT;
#define swaitOOPT_NUM_CHOICES 7
#endif

#ifndef swaitINAV_NUM_CHOICES
typedef enum {
    swaitINAV_PV_OK                 /* PV OK */,
    swaitINAV_PV_BAD                /* PV BAD */,
    swaitINAV_No_PV                 /* No PV */
} swaitINAV;
#define swaitINAV_NUM_CHOICES 3
#endif

#ifndef swaitINAP_NUM_CHOICES
typedef enum {
    swaitINAP_No                    /* No */,
    swaitINAP_Yes                   /* Yes */
} swaitINAP;
#define swaitINAP_NUM_CHOICES 2
#endif

typedef struct swaitRecord {
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
    epicsFloat32        vers;       /* Code Version */
    epicsFloat32        hopr;       /* High Operating Range */
    epicsFloat32        lopr;       /* Low Operating Range */
    epicsInt16          init;       /* Initialized? */
    void *         cbst;            /* Pointer to cbStruct */
    char                inan[40];   /* INPA PV Name */
    char                inbn[40];   /* INPB PV Name */
    char                incn[40];   /* INPC PV Name */
    char                indn[40];   /* INPD PV Name */
    char                inen[40];   /* INPE PV Name */
    char                infn[40];   /* INPF PV Name */
    char                ingn[40];   /* INPG PV Name */
    char                inhn[40];   /* INPH PV Name */
    char                inin[40];   /* INPI PV Name */
    char                injn[40];   /* INPJ PV Name */
    char                inkn[40];   /* INPK PV Name */
    char                inln[40];   /* INPL PV Name */
    char                doln[40];   /* DOL  PV Name */
    char                outn[40];   /* OUT  PV Name */
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
    epicsEnum16         inkv;       /* INPK PV Status */
    epicsEnum16         inlv;       /* INPL PV Status */
    epicsEnum16         dolv;       /* DOL  PV Status */
    epicsEnum16         outv;       /* OUT  PV Status */
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
    epicsFloat64        k;          /* Value of Input K */
    epicsFloat64        l;          /* Value of Input L */
    epicsFloat64        la;         /* Last Val of Input A */
    epicsFloat64        lb;         /* Last Val of Input B */
    epicsFloat64        lc;         /* Last Val of Input C */
    epicsFloat64        ld;         /* Last Val of Input D */
    epicsFloat64        le;         /* Last Val of Input E */
    epicsFloat64        lf;         /* Last Val of Input F */
    epicsFloat64        lg;         /* Last Val of Input G */
    epicsFloat64        lh;         /* Last Val of Input H */
    epicsFloat64        li;         /* Last Val of Input I */
    epicsFloat64        lj;         /* Last Val of Input J */
    epicsFloat64        lk;         /* Last Val of Input K */
    epicsFloat64        ll;         /* Last Val of Input L */
    epicsEnum16         inap;       /* INPA causes I/O INTR */
    epicsEnum16         inbp;       /* INPB causes I/O INTR */
    epicsEnum16         incp;       /* INPC causes I/O INTR */
    epicsEnum16         indp;       /* INPD causes I/O INTR */
    epicsEnum16         inep;       /* INPE causes I/O INTR */
    epicsEnum16         infp;       /* INPF causes I/O INTR */
    epicsEnum16         ingp;       /* INPG causes I/O INTR */
    epicsEnum16         inhp;       /* INPH causes I/O INTR */
    epicsEnum16         inip;       /* INPI causes I/O INTR */
    epicsEnum16         injp;       /* INPJ causes I/O INTR */
    epicsEnum16         inkp;       /* INPK causes I/O INTR */
    epicsEnum16         inlp;       /* INPL causes I/O INTR */
    char                calc[36];   /* Calculation */
    char    rpcl[184];              /* Reverse Polish Calc */
    epicsInt32          clcv;       /* CALC Valid */
    epicsFloat64        val;        /* Value Field */
    epicsFloat64        oval;       /* Old Value */
    epicsInt16          prec;       /* Display Precision */
    epicsEnum16         oopt;       /* Output Execute Opt */
    epicsFloat32        odly;       /* Output Execute Delay */
    epicsEnum16         dopt;       /* Output Data Option */
    epicsFloat64        dold;       /* Desired Output Data */
    epicsUInt16         oevt;       /* Event To Issue */
    epicsFloat64        adel;       /* Archive Deadband */
    epicsFloat64        mdel;       /* Monitor Deadband */
    epicsFloat64        alst;       /* Last Value Archived */
    epicsFloat64        mlst;       /* Last Val Monitored */
    DBLINK              siol;       /* Sim Input Specifctn */
    epicsFloat64        sval;       /* Simulation Value */
    DBLINK              siml;       /* Sim Mode Location */
    epicsEnum16         simm;       /* Simulation Mode */
    epicsEnum16         sims;       /* Sim mode Alarm Svrty */
} swaitRecord;

typedef enum {
	swaitRecordNAME = 0,
	swaitRecordDESC = 1,
	swaitRecordASG = 2,
	swaitRecordSCAN = 3,
	swaitRecordPINI = 4,
	swaitRecordPHAS = 5,
	swaitRecordEVNT = 6,
	swaitRecordTSE = 7,
	swaitRecordTSEL = 8,
	swaitRecordDTYP = 9,
	swaitRecordDISV = 10,
	swaitRecordDISA = 11,
	swaitRecordSDIS = 12,
	swaitRecordMLOK = 13,
	swaitRecordMLIS = 14,
	swaitRecordBKLNK = 15,
	swaitRecordDISP = 16,
	swaitRecordPROC = 17,
	swaitRecordSTAT = 18,
	swaitRecordSEVR = 19,
	swaitRecordNSTA = 20,
	swaitRecordNSEV = 21,
	swaitRecordACKS = 22,
	swaitRecordACKT = 23,
	swaitRecordDISS = 24,
	swaitRecordLCNT = 25,
	swaitRecordPACT = 26,
	swaitRecordPUTF = 27,
	swaitRecordRPRO = 28,
	swaitRecordASP = 29,
	swaitRecordPPN = 30,
	swaitRecordPPNR = 31,
	swaitRecordSPVT = 32,
	swaitRecordRSET = 33,
	swaitRecordDSET = 34,
	swaitRecordDPVT = 35,
	swaitRecordRDES = 36,
	swaitRecordLSET = 37,
	swaitRecordPRIO = 38,
	swaitRecordTPRO = 39,
	swaitRecordBKPT = 40,
	swaitRecordUDF = 41,
	swaitRecordUDFS = 42,
	swaitRecordTIME = 43,
	swaitRecordFLNK = 44,
	swaitRecordVERS = 45,
	swaitRecordHOPR = 46,
	swaitRecordLOPR = 47,
	swaitRecordINIT = 48,
	swaitRecordCBST = 49,
	swaitRecordINAN = 50,
	swaitRecordINBN = 51,
	swaitRecordINCN = 52,
	swaitRecordINDN = 53,
	swaitRecordINEN = 54,
	swaitRecordINFN = 55,
	swaitRecordINGN = 56,
	swaitRecordINHN = 57,
	swaitRecordININ = 58,
	swaitRecordINJN = 59,
	swaitRecordINKN = 60,
	swaitRecordINLN = 61,
	swaitRecordDOLN = 62,
	swaitRecordOUTN = 63,
	swaitRecordINAV = 64,
	swaitRecordINBV = 65,
	swaitRecordINCV = 66,
	swaitRecordINDV = 67,
	swaitRecordINEV = 68,
	swaitRecordINFV = 69,
	swaitRecordINGV = 70,
	swaitRecordINHV = 71,
	swaitRecordINIV = 72,
	swaitRecordINJV = 73,
	swaitRecordINKV = 74,
	swaitRecordINLV = 75,
	swaitRecordDOLV = 76,
	swaitRecordOUTV = 77,
	swaitRecordA = 78,
	swaitRecordB = 79,
	swaitRecordC = 80,
	swaitRecordD = 81,
	swaitRecordE = 82,
	swaitRecordF = 83,
	swaitRecordG = 84,
	swaitRecordH = 85,
	swaitRecordI = 86,
	swaitRecordJ = 87,
	swaitRecordK = 88,
	swaitRecordL = 89,
	swaitRecordLA = 90,
	swaitRecordLB = 91,
	swaitRecordLC = 92,
	swaitRecordLD = 93,
	swaitRecordLE = 94,
	swaitRecordLF = 95,
	swaitRecordLG = 96,
	swaitRecordLH = 97,
	swaitRecordLI = 98,
	swaitRecordLJ = 99,
	swaitRecordLK = 100,
	swaitRecordLL = 101,
	swaitRecordINAP = 102,
	swaitRecordINBP = 103,
	swaitRecordINCP = 104,
	swaitRecordINDP = 105,
	swaitRecordINEP = 106,
	swaitRecordINFP = 107,
	swaitRecordINGP = 108,
	swaitRecordINHP = 109,
	swaitRecordINIP = 110,
	swaitRecordINJP = 111,
	swaitRecordINKP = 112,
	swaitRecordINLP = 113,
	swaitRecordCALC = 114,
	swaitRecordRPCL = 115,
	swaitRecordCLCV = 116,
	swaitRecordVAL = 117,
	swaitRecordOVAL = 118,
	swaitRecordPREC = 119,
	swaitRecordOOPT = 120,
	swaitRecordODLY = 121,
	swaitRecordDOPT = 122,
	swaitRecordDOLD = 123,
	swaitRecordOEVT = 124,
	swaitRecordADEL = 125,
	swaitRecordMDEL = 126,
	swaitRecordALST = 127,
	swaitRecordMLST = 128,
	swaitRecordSIOL = 129,
	swaitRecordSVAL = 130,
	swaitRecordSIML = 131,
	swaitRecordSIMM = 132,
	swaitRecordSIMS = 133
} swaitFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int swaitRecordSizeOffset(dbRecordType *prt)
{
    swaitRecord *prec = 0;

    if (prt->no_fields != 134) {
        cantProceed("IOC build or installation error:\n"
            "    The swaitRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 134.\n",
            prt->no_fields);
    }
    prt->papFldDes[swaitRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[swaitRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[swaitRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[swaitRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[swaitRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[swaitRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[swaitRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[swaitRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[swaitRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[swaitRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[swaitRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[swaitRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[swaitRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[swaitRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[swaitRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[swaitRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[swaitRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[swaitRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[swaitRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[swaitRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[swaitRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[swaitRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[swaitRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[swaitRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[swaitRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[swaitRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[swaitRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[swaitRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[swaitRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[swaitRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[swaitRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[swaitRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[swaitRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[swaitRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[swaitRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[swaitRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[swaitRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[swaitRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[swaitRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[swaitRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[swaitRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[swaitRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[swaitRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[swaitRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[swaitRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[swaitRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[swaitRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[swaitRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[swaitRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[swaitRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[swaitRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[swaitRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[swaitRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[swaitRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[swaitRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[swaitRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[swaitRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[swaitRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[swaitRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[swaitRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[swaitRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[swaitRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[swaitRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[swaitRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[swaitRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[swaitRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[swaitRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[swaitRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[swaitRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[swaitRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[swaitRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[swaitRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[swaitRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[swaitRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[swaitRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[swaitRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[swaitRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[swaitRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[swaitRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[swaitRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[swaitRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[swaitRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[swaitRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[swaitRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[swaitRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[swaitRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[swaitRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[swaitRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[swaitRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[swaitRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[swaitRecordVERS]->size = sizeof(prec->vers);
    prt->papFldDes[swaitRecordVERS]->offset = (unsigned short)((char *)&prec->vers - (char *)prec);
    prt->papFldDes[swaitRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[swaitRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[swaitRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[swaitRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[swaitRecordINIT]->size = sizeof(prec->init);
    prt->papFldDes[swaitRecordINIT]->offset = (unsigned short)((char *)&prec->init - (char *)prec);
    prt->papFldDes[swaitRecordCBST]->size = sizeof(prec->cbst);
    prt->papFldDes[swaitRecordCBST]->offset = (unsigned short)((char *)&prec->cbst - (char *)prec);
    prt->papFldDes[swaitRecordINAN]->size = sizeof(prec->inan);
    prt->papFldDes[swaitRecordINAN]->offset = (unsigned short)((char *)&prec->inan - (char *)prec);
    prt->papFldDes[swaitRecordINBN]->size = sizeof(prec->inbn);
    prt->papFldDes[swaitRecordINBN]->offset = (unsigned short)((char *)&prec->inbn - (char *)prec);
    prt->papFldDes[swaitRecordINCN]->size = sizeof(prec->incn);
    prt->papFldDes[swaitRecordINCN]->offset = (unsigned short)((char *)&prec->incn - (char *)prec);
    prt->papFldDes[swaitRecordINDN]->size = sizeof(prec->indn);
    prt->papFldDes[swaitRecordINDN]->offset = (unsigned short)((char *)&prec->indn - (char *)prec);
    prt->papFldDes[swaitRecordINEN]->size = sizeof(prec->inen);
    prt->papFldDes[swaitRecordINEN]->offset = (unsigned short)((char *)&prec->inen - (char *)prec);
    prt->papFldDes[swaitRecordINFN]->size = sizeof(prec->infn);
    prt->papFldDes[swaitRecordINFN]->offset = (unsigned short)((char *)&prec->infn - (char *)prec);
    prt->papFldDes[swaitRecordINGN]->size = sizeof(prec->ingn);
    prt->papFldDes[swaitRecordINGN]->offset = (unsigned short)((char *)&prec->ingn - (char *)prec);
    prt->papFldDes[swaitRecordINHN]->size = sizeof(prec->inhn);
    prt->papFldDes[swaitRecordINHN]->offset = (unsigned short)((char *)&prec->inhn - (char *)prec);
    prt->papFldDes[swaitRecordININ]->size = sizeof(prec->inin);
    prt->papFldDes[swaitRecordININ]->offset = (unsigned short)((char *)&prec->inin - (char *)prec);
    prt->papFldDes[swaitRecordINJN]->size = sizeof(prec->injn);
    prt->papFldDes[swaitRecordINJN]->offset = (unsigned short)((char *)&prec->injn - (char *)prec);
    prt->papFldDes[swaitRecordINKN]->size = sizeof(prec->inkn);
    prt->papFldDes[swaitRecordINKN]->offset = (unsigned short)((char *)&prec->inkn - (char *)prec);
    prt->papFldDes[swaitRecordINLN]->size = sizeof(prec->inln);
    prt->papFldDes[swaitRecordINLN]->offset = (unsigned short)((char *)&prec->inln - (char *)prec);
    prt->papFldDes[swaitRecordDOLN]->size = sizeof(prec->doln);
    prt->papFldDes[swaitRecordDOLN]->offset = (unsigned short)((char *)&prec->doln - (char *)prec);
    prt->papFldDes[swaitRecordOUTN]->size = sizeof(prec->outn);
    prt->papFldDes[swaitRecordOUTN]->offset = (unsigned short)((char *)&prec->outn - (char *)prec);
    prt->papFldDes[swaitRecordINAV]->size = sizeof(prec->inav);
    prt->papFldDes[swaitRecordINAV]->offset = (unsigned short)((char *)&prec->inav - (char *)prec);
    prt->papFldDes[swaitRecordINBV]->size = sizeof(prec->inbv);
    prt->papFldDes[swaitRecordINBV]->offset = (unsigned short)((char *)&prec->inbv - (char *)prec);
    prt->papFldDes[swaitRecordINCV]->size = sizeof(prec->incv);
    prt->papFldDes[swaitRecordINCV]->offset = (unsigned short)((char *)&prec->incv - (char *)prec);
    prt->papFldDes[swaitRecordINDV]->size = sizeof(prec->indv);
    prt->papFldDes[swaitRecordINDV]->offset = (unsigned short)((char *)&prec->indv - (char *)prec);
    prt->papFldDes[swaitRecordINEV]->size = sizeof(prec->inev);
    prt->papFldDes[swaitRecordINEV]->offset = (unsigned short)((char *)&prec->inev - (char *)prec);
    prt->papFldDes[swaitRecordINFV]->size = sizeof(prec->infv);
    prt->papFldDes[swaitRecordINFV]->offset = (unsigned short)((char *)&prec->infv - (char *)prec);
    prt->papFldDes[swaitRecordINGV]->size = sizeof(prec->ingv);
    prt->papFldDes[swaitRecordINGV]->offset = (unsigned short)((char *)&prec->ingv - (char *)prec);
    prt->papFldDes[swaitRecordINHV]->size = sizeof(prec->inhv);
    prt->papFldDes[swaitRecordINHV]->offset = (unsigned short)((char *)&prec->inhv - (char *)prec);
    prt->papFldDes[swaitRecordINIV]->size = sizeof(prec->iniv);
    prt->papFldDes[swaitRecordINIV]->offset = (unsigned short)((char *)&prec->iniv - (char *)prec);
    prt->papFldDes[swaitRecordINJV]->size = sizeof(prec->injv);
    prt->papFldDes[swaitRecordINJV]->offset = (unsigned short)((char *)&prec->injv - (char *)prec);
    prt->papFldDes[swaitRecordINKV]->size = sizeof(prec->inkv);
    prt->papFldDes[swaitRecordINKV]->offset = (unsigned short)((char *)&prec->inkv - (char *)prec);
    prt->papFldDes[swaitRecordINLV]->size = sizeof(prec->inlv);
    prt->papFldDes[swaitRecordINLV]->offset = (unsigned short)((char *)&prec->inlv - (char *)prec);
    prt->papFldDes[swaitRecordDOLV]->size = sizeof(prec->dolv);
    prt->papFldDes[swaitRecordDOLV]->offset = (unsigned short)((char *)&prec->dolv - (char *)prec);
    prt->papFldDes[swaitRecordOUTV]->size = sizeof(prec->outv);
    prt->papFldDes[swaitRecordOUTV]->offset = (unsigned short)((char *)&prec->outv - (char *)prec);
    prt->papFldDes[swaitRecordA]->size = sizeof(prec->a);
    prt->papFldDes[swaitRecordA]->offset = (unsigned short)((char *)&prec->a - (char *)prec);
    prt->papFldDes[swaitRecordB]->size = sizeof(prec->b);
    prt->papFldDes[swaitRecordB]->offset = (unsigned short)((char *)&prec->b - (char *)prec);
    prt->papFldDes[swaitRecordC]->size = sizeof(prec->c);
    prt->papFldDes[swaitRecordC]->offset = (unsigned short)((char *)&prec->c - (char *)prec);
    prt->papFldDes[swaitRecordD]->size = sizeof(prec->d);
    prt->papFldDes[swaitRecordD]->offset = (unsigned short)((char *)&prec->d - (char *)prec);
    prt->papFldDes[swaitRecordE]->size = sizeof(prec->e);
    prt->papFldDes[swaitRecordE]->offset = (unsigned short)((char *)&prec->e - (char *)prec);
    prt->papFldDes[swaitRecordF]->size = sizeof(prec->f);
    prt->papFldDes[swaitRecordF]->offset = (unsigned short)((char *)&prec->f - (char *)prec);
    prt->papFldDes[swaitRecordG]->size = sizeof(prec->g);
    prt->papFldDes[swaitRecordG]->offset = (unsigned short)((char *)&prec->g - (char *)prec);
    prt->papFldDes[swaitRecordH]->size = sizeof(prec->h);
    prt->papFldDes[swaitRecordH]->offset = (unsigned short)((char *)&prec->h - (char *)prec);
    prt->papFldDes[swaitRecordI]->size = sizeof(prec->i);
    prt->papFldDes[swaitRecordI]->offset = (unsigned short)((char *)&prec->i - (char *)prec);
    prt->papFldDes[swaitRecordJ]->size = sizeof(prec->j);
    prt->papFldDes[swaitRecordJ]->offset = (unsigned short)((char *)&prec->j - (char *)prec);
    prt->papFldDes[swaitRecordK]->size = sizeof(prec->k);
    prt->papFldDes[swaitRecordK]->offset = (unsigned short)((char *)&prec->k - (char *)prec);
    prt->papFldDes[swaitRecordL]->size = sizeof(prec->l);
    prt->papFldDes[swaitRecordL]->offset = (unsigned short)((char *)&prec->l - (char *)prec);
    prt->papFldDes[swaitRecordLA]->size = sizeof(prec->la);
    prt->papFldDes[swaitRecordLA]->offset = (unsigned short)((char *)&prec->la - (char *)prec);
    prt->papFldDes[swaitRecordLB]->size = sizeof(prec->lb);
    prt->papFldDes[swaitRecordLB]->offset = (unsigned short)((char *)&prec->lb - (char *)prec);
    prt->papFldDes[swaitRecordLC]->size = sizeof(prec->lc);
    prt->papFldDes[swaitRecordLC]->offset = (unsigned short)((char *)&prec->lc - (char *)prec);
    prt->papFldDes[swaitRecordLD]->size = sizeof(prec->ld);
    prt->papFldDes[swaitRecordLD]->offset = (unsigned short)((char *)&prec->ld - (char *)prec);
    prt->papFldDes[swaitRecordLE]->size = sizeof(prec->le);
    prt->papFldDes[swaitRecordLE]->offset = (unsigned short)((char *)&prec->le - (char *)prec);
    prt->papFldDes[swaitRecordLF]->size = sizeof(prec->lf);
    prt->papFldDes[swaitRecordLF]->offset = (unsigned short)((char *)&prec->lf - (char *)prec);
    prt->papFldDes[swaitRecordLG]->size = sizeof(prec->lg);
    prt->papFldDes[swaitRecordLG]->offset = (unsigned short)((char *)&prec->lg - (char *)prec);
    prt->papFldDes[swaitRecordLH]->size = sizeof(prec->lh);
    prt->papFldDes[swaitRecordLH]->offset = (unsigned short)((char *)&prec->lh - (char *)prec);
    prt->papFldDes[swaitRecordLI]->size = sizeof(prec->li);
    prt->papFldDes[swaitRecordLI]->offset = (unsigned short)((char *)&prec->li - (char *)prec);
    prt->papFldDes[swaitRecordLJ]->size = sizeof(prec->lj);
    prt->papFldDes[swaitRecordLJ]->offset = (unsigned short)((char *)&prec->lj - (char *)prec);
    prt->papFldDes[swaitRecordLK]->size = sizeof(prec->lk);
    prt->papFldDes[swaitRecordLK]->offset = (unsigned short)((char *)&prec->lk - (char *)prec);
    prt->papFldDes[swaitRecordLL]->size = sizeof(prec->ll);
    prt->papFldDes[swaitRecordLL]->offset = (unsigned short)((char *)&prec->ll - (char *)prec);
    prt->papFldDes[swaitRecordINAP]->size = sizeof(prec->inap);
    prt->papFldDes[swaitRecordINAP]->offset = (unsigned short)((char *)&prec->inap - (char *)prec);
    prt->papFldDes[swaitRecordINBP]->size = sizeof(prec->inbp);
    prt->papFldDes[swaitRecordINBP]->offset = (unsigned short)((char *)&prec->inbp - (char *)prec);
    prt->papFldDes[swaitRecordINCP]->size = sizeof(prec->incp);
    prt->papFldDes[swaitRecordINCP]->offset = (unsigned short)((char *)&prec->incp - (char *)prec);
    prt->papFldDes[swaitRecordINDP]->size = sizeof(prec->indp);
    prt->papFldDes[swaitRecordINDP]->offset = (unsigned short)((char *)&prec->indp - (char *)prec);
    prt->papFldDes[swaitRecordINEP]->size = sizeof(prec->inep);
    prt->papFldDes[swaitRecordINEP]->offset = (unsigned short)((char *)&prec->inep - (char *)prec);
    prt->papFldDes[swaitRecordINFP]->size = sizeof(prec->infp);
    prt->papFldDes[swaitRecordINFP]->offset = (unsigned short)((char *)&prec->infp - (char *)prec);
    prt->papFldDes[swaitRecordINGP]->size = sizeof(prec->ingp);
    prt->papFldDes[swaitRecordINGP]->offset = (unsigned short)((char *)&prec->ingp - (char *)prec);
    prt->papFldDes[swaitRecordINHP]->size = sizeof(prec->inhp);
    prt->papFldDes[swaitRecordINHP]->offset = (unsigned short)((char *)&prec->inhp - (char *)prec);
    prt->papFldDes[swaitRecordINIP]->size = sizeof(prec->inip);
    prt->papFldDes[swaitRecordINIP]->offset = (unsigned short)((char *)&prec->inip - (char *)prec);
    prt->papFldDes[swaitRecordINJP]->size = sizeof(prec->injp);
    prt->papFldDes[swaitRecordINJP]->offset = (unsigned short)((char *)&prec->injp - (char *)prec);
    prt->papFldDes[swaitRecordINKP]->size = sizeof(prec->inkp);
    prt->papFldDes[swaitRecordINKP]->offset = (unsigned short)((char *)&prec->inkp - (char *)prec);
    prt->papFldDes[swaitRecordINLP]->size = sizeof(prec->inlp);
    prt->papFldDes[swaitRecordINLP]->offset = (unsigned short)((char *)&prec->inlp - (char *)prec);
    prt->papFldDes[swaitRecordCALC]->size = sizeof(prec->calc);
    prt->papFldDes[swaitRecordCALC]->offset = (unsigned short)((char *)&prec->calc - (char *)prec);
    prt->papFldDes[swaitRecordRPCL]->size = sizeof(prec->rpcl);
    prt->papFldDes[swaitRecordRPCL]->offset = (unsigned short)((char *)&prec->rpcl - (char *)prec);
    prt->papFldDes[swaitRecordCLCV]->size = sizeof(prec->clcv);
    prt->papFldDes[swaitRecordCLCV]->offset = (unsigned short)((char *)&prec->clcv - (char *)prec);
    prt->papFldDes[swaitRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[swaitRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[swaitRecordOVAL]->size = sizeof(prec->oval);
    prt->papFldDes[swaitRecordOVAL]->offset = (unsigned short)((char *)&prec->oval - (char *)prec);
    prt->papFldDes[swaitRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[swaitRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->papFldDes[swaitRecordOOPT]->size = sizeof(prec->oopt);
    prt->papFldDes[swaitRecordOOPT]->offset = (unsigned short)((char *)&prec->oopt - (char *)prec);
    prt->papFldDes[swaitRecordODLY]->size = sizeof(prec->odly);
    prt->papFldDes[swaitRecordODLY]->offset = (unsigned short)((char *)&prec->odly - (char *)prec);
    prt->papFldDes[swaitRecordDOPT]->size = sizeof(prec->dopt);
    prt->papFldDes[swaitRecordDOPT]->offset = (unsigned short)((char *)&prec->dopt - (char *)prec);
    prt->papFldDes[swaitRecordDOLD]->size = sizeof(prec->dold);
    prt->papFldDes[swaitRecordDOLD]->offset = (unsigned short)((char *)&prec->dold - (char *)prec);
    prt->papFldDes[swaitRecordOEVT]->size = sizeof(prec->oevt);
    prt->papFldDes[swaitRecordOEVT]->offset = (unsigned short)((char *)&prec->oevt - (char *)prec);
    prt->papFldDes[swaitRecordADEL]->size = sizeof(prec->adel);
    prt->papFldDes[swaitRecordADEL]->offset = (unsigned short)((char *)&prec->adel - (char *)prec);
    prt->papFldDes[swaitRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[swaitRecordMDEL]->offset = (unsigned short)((char *)&prec->mdel - (char *)prec);
    prt->papFldDes[swaitRecordALST]->size = sizeof(prec->alst);
    prt->papFldDes[swaitRecordALST]->offset = (unsigned short)((char *)&prec->alst - (char *)prec);
    prt->papFldDes[swaitRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[swaitRecordMLST]->offset = (unsigned short)((char *)&prec->mlst - (char *)prec);
    prt->papFldDes[swaitRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[swaitRecordSIOL]->offset = (unsigned short)((char *)&prec->siol - (char *)prec);
    prt->papFldDes[swaitRecordSVAL]->size = sizeof(prec->sval);
    prt->papFldDes[swaitRecordSVAL]->offset = (unsigned short)((char *)&prec->sval - (char *)prec);
    prt->papFldDes[swaitRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[swaitRecordSIML]->offset = (unsigned short)((char *)&prec->siml - (char *)prec);
    prt->papFldDes[swaitRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[swaitRecordSIMM]->offset = (unsigned short)((char *)&prec->simm - (char *)prec);
    prt->papFldDes[swaitRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[swaitRecordSIMS]->offset = (unsigned short)((char *)&prec->sims - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(swaitRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_swaitRecord_H */
