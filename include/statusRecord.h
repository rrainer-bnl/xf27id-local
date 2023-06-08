/* statusRecord.h generated from statusRecord.dbd */

#ifndef INC_statusRecord_H
#define INC_statusRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

typedef struct statusRecord {
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
    epicsInt32          val;        /* Current value */
    DBLINK              inp;        /* Input Specification */
    char                egu[16];    /* Units name */
    epicsInt32          hopr;       /* High Operating Range */
    epicsInt32          lopr;       /* Low Operating Range */
    epicsInt32          lval;       /* Last value */
    epicsEnum16         bi00;       /* bit 0 Value */
    epicsEnum16         bi01;       /* bit 1 Value */
    epicsEnum16         bi02;       /* bit 2 Value */
    epicsEnum16         bi03;       /* bit 3 Value */
    epicsEnum16         bi04;       /* bit 4 Value */
    epicsEnum16         bi05;       /* bit 5 Value */
    epicsEnum16         bi06;       /* bit 6 Value */
    epicsEnum16         bi07;       /* bit 7 Value */
    epicsEnum16         bi08;       /* bit 8 Value */
    epicsEnum16         bi09;       /* bit 9 Value */
    epicsEnum16         bi10;       /* bit 10 Value */
    epicsEnum16         bi11;       /* bit 11 Value */
    epicsEnum16         bi12;       /* bit 12 Value */
    epicsEnum16         bi13;       /* bit 13 Value */
    epicsEnum16         bi14;       /* bit 14 Value */
    epicsEnum16         bi15;       /* bit 15 Value */
    epicsEnum16         bi16;       /* bit 16 Value */
    epicsEnum16         bi17;       /* bit 17 Value */
    epicsEnum16         bi18;       /* bit 18 Value */
    epicsEnum16         bi19;       /* bit 19 Value */
    epicsEnum16         bi20;       /* bit 20 Value */
    epicsEnum16         bi21;       /* bit 20 Value */
    epicsEnum16         bi22;       /* bit 22 Value */
    epicsEnum16         bi23;       /* bit 23 Value */
    epicsEnum16         bi24;       /* bit 24 Value */
    epicsEnum16         bi25;       /* bit 25 Value */
    epicsEnum16         bi26;       /* bit 26 Value */
    epicsEnum16         bi27;       /* bit 27 Value */
    epicsEnum16         bi28;       /* bit 28 Value */
    epicsEnum16         bi29;       /* bit 29 Value */
    epicsEnum16         bi30;       /* bit 30 Value */
    epicsEnum16         bi31;       /* bit 31 Value */
    DBLINK              lk00;       /* Forward Link 0 */
    DBLINK              lk01;       /* Forward Link 1 */
    DBLINK              lk02;       /* Forward Link 2 */
    DBLINK              lk03;       /* Forward Link 3 */
    DBLINK              lk04;       /* Forward Link 4 */
    DBLINK              lk05;       /* Forward Link 5 */
    DBLINK              lk06;       /* Forward Link 6 */
    DBLINK              lk07;       /* Forward Link 7 */
    DBLINK              lk08;       /* Forward Link 8 */
    DBLINK              lk09;       /* Forward Link 9 */
    DBLINK              lk10;       /* Forward Link 10 */
    DBLINK              lk11;       /* Forward Link 11 */
    DBLINK              lk12;       /* Forward Link 12 */
    DBLINK              lk13;       /* Forward Link 13 */
    DBLINK              lk14;       /* Forward Link 14 */
    DBLINK              lk15;       /* Forward Link 15 */
    DBLINK              lk16;       /* Forward Link 16 */
    DBLINK              lk17;       /* Forward Link 17 */
    DBLINK              lk18;       /* Forward Link 18 */
    DBLINK              lk19;       /* Forward Link 19 */
    DBLINK              lk20;       /* Forward Link 20 */
    DBLINK              lk21;       /* Forward Link 21 */
    DBLINK              lk22;       /* Forward Link 22 */
    DBLINK              lk23;       /* Forward Link 23 */
    DBLINK              lk24;       /* Forward Link 24 */
    DBLINK              lk25;       /* Forward Link 25 */
    DBLINK              lk26;       /* Forward Link 26 */
    DBLINK              lk27;       /* Forward Link 27 */
    DBLINK              lk28;       /* Forward Link 28 */
    DBLINK              lk29;       /* Forward Link 29 */
    DBLINK              lk30;       /* Forward Link 30 */
    DBLINK              lk31;       /* Forward Link 31 */
    epicsInt32          hihi;       /* Hihi Alarm Limit */
    epicsInt32          lolo;       /* Lolo Alarm Limit */
    epicsInt32          high;       /* High Alarm Limit */
    epicsInt32          low;        /* Low Alarm Limit */
    epicsEnum16         hhsv;       /* Hihi Severity */
    epicsEnum16         llsv;       /* Lolo Severity */
    epicsEnum16         hsv;        /* High Severity */
    epicsEnum16         lsv;        /* Low Severity */
    epicsInt32          hyst;       /* Alarm Deadband */
    epicsInt32          adel;       /* Archive Deadband */
    epicsInt32          mdel;       /* Monitor Deadband */
    epicsInt32          lalm;       /* Last Value Alarmed */
    epicsInt32          alst;       /* Last Value Archived */
    epicsInt32          mlst;       /* Last Val Monitored */
    DBLINK              siol;       /* Sim Input Specifctn */
    epicsInt32          sval;       /* Simulation Value */
    DBLINK              siml;       /* Sim Mode Location */
    epicsEnum16         simm;       /* Simulation Mode */
    epicsEnum16         sims;       /* Sim mode Alarm Svrty */
} statusRecord;

typedef enum {
	statusRecordNAME = 0,
	statusRecordDESC = 1,
	statusRecordASG = 2,
	statusRecordSCAN = 3,
	statusRecordPINI = 4,
	statusRecordPHAS = 5,
	statusRecordEVNT = 6,
	statusRecordTSE = 7,
	statusRecordTSEL = 8,
	statusRecordDTYP = 9,
	statusRecordDISV = 10,
	statusRecordDISA = 11,
	statusRecordSDIS = 12,
	statusRecordMLOK = 13,
	statusRecordMLIS = 14,
	statusRecordBKLNK = 15,
	statusRecordDISP = 16,
	statusRecordPROC = 17,
	statusRecordSTAT = 18,
	statusRecordSEVR = 19,
	statusRecordNSTA = 20,
	statusRecordNSEV = 21,
	statusRecordACKS = 22,
	statusRecordACKT = 23,
	statusRecordDISS = 24,
	statusRecordLCNT = 25,
	statusRecordPACT = 26,
	statusRecordPUTF = 27,
	statusRecordRPRO = 28,
	statusRecordASP = 29,
	statusRecordPPN = 30,
	statusRecordPPNR = 31,
	statusRecordSPVT = 32,
	statusRecordRSET = 33,
	statusRecordDSET = 34,
	statusRecordDPVT = 35,
	statusRecordRDES = 36,
	statusRecordLSET = 37,
	statusRecordPRIO = 38,
	statusRecordTPRO = 39,
	statusRecordBKPT = 40,
	statusRecordUDF = 41,
	statusRecordUDFS = 42,
	statusRecordTIME = 43,
	statusRecordFLNK = 44,
	statusRecordVERS = 45,
	statusRecordVAL = 46,
	statusRecordINP = 47,
	statusRecordEGU = 48,
	statusRecordHOPR = 49,
	statusRecordLOPR = 50,
	statusRecordLVAL = 51,
	statusRecordBI00 = 52,
	statusRecordBI01 = 53,
	statusRecordBI02 = 54,
	statusRecordBI03 = 55,
	statusRecordBI04 = 56,
	statusRecordBI05 = 57,
	statusRecordBI06 = 58,
	statusRecordBI07 = 59,
	statusRecordBI08 = 60,
	statusRecordBI09 = 61,
	statusRecordBI10 = 62,
	statusRecordBI11 = 63,
	statusRecordBI12 = 64,
	statusRecordBI13 = 65,
	statusRecordBI14 = 66,
	statusRecordBI15 = 67,
	statusRecordBI16 = 68,
	statusRecordBI17 = 69,
	statusRecordBI18 = 70,
	statusRecordBI19 = 71,
	statusRecordBI20 = 72,
	statusRecordBI21 = 73,
	statusRecordBI22 = 74,
	statusRecordBI23 = 75,
	statusRecordBI24 = 76,
	statusRecordBI25 = 77,
	statusRecordBI26 = 78,
	statusRecordBI27 = 79,
	statusRecordBI28 = 80,
	statusRecordBI29 = 81,
	statusRecordBI30 = 82,
	statusRecordBI31 = 83,
	statusRecordLK00 = 84,
	statusRecordLK01 = 85,
	statusRecordLK02 = 86,
	statusRecordLK03 = 87,
	statusRecordLK04 = 88,
	statusRecordLK05 = 89,
	statusRecordLK06 = 90,
	statusRecordLK07 = 91,
	statusRecordLK08 = 92,
	statusRecordLK09 = 93,
	statusRecordLK10 = 94,
	statusRecordLK11 = 95,
	statusRecordLK12 = 96,
	statusRecordLK13 = 97,
	statusRecordLK14 = 98,
	statusRecordLK15 = 99,
	statusRecordLK16 = 100,
	statusRecordLK17 = 101,
	statusRecordLK18 = 102,
	statusRecordLK19 = 103,
	statusRecordLK20 = 104,
	statusRecordLK21 = 105,
	statusRecordLK22 = 106,
	statusRecordLK23 = 107,
	statusRecordLK24 = 108,
	statusRecordLK25 = 109,
	statusRecordLK26 = 110,
	statusRecordLK27 = 111,
	statusRecordLK28 = 112,
	statusRecordLK29 = 113,
	statusRecordLK30 = 114,
	statusRecordLK31 = 115,
	statusRecordHIHI = 116,
	statusRecordLOLO = 117,
	statusRecordHIGH = 118,
	statusRecordLOW = 119,
	statusRecordHHSV = 120,
	statusRecordLLSV = 121,
	statusRecordHSV = 122,
	statusRecordLSV = 123,
	statusRecordHYST = 124,
	statusRecordADEL = 125,
	statusRecordMDEL = 126,
	statusRecordLALM = 127,
	statusRecordALST = 128,
	statusRecordMLST = 129,
	statusRecordSIOL = 130,
	statusRecordSVAL = 131,
	statusRecordSIML = 132,
	statusRecordSIMM = 133,
	statusRecordSIMS = 134
} statusFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int statusRecordSizeOffset(dbRecordType *prt)
{
    statusRecord *prec = 0;

    if (prt->no_fields != 135) {
        cantProceed("IOC build or installation error:\n"
            "    The statusRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 135.\n",
            prt->no_fields);
    }
    prt->papFldDes[statusRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[statusRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[statusRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[statusRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[statusRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[statusRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[statusRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[statusRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[statusRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[statusRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[statusRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[statusRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[statusRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[statusRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[statusRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[statusRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[statusRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[statusRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[statusRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[statusRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[statusRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[statusRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[statusRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[statusRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[statusRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[statusRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[statusRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[statusRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[statusRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[statusRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[statusRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[statusRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[statusRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[statusRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[statusRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[statusRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[statusRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[statusRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[statusRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[statusRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[statusRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[statusRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[statusRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[statusRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[statusRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[statusRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[statusRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[statusRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[statusRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[statusRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[statusRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[statusRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[statusRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[statusRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[statusRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[statusRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[statusRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[statusRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[statusRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[statusRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[statusRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[statusRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[statusRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[statusRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[statusRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[statusRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[statusRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[statusRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[statusRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[statusRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[statusRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[statusRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[statusRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[statusRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[statusRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[statusRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[statusRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[statusRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[statusRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[statusRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[statusRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[statusRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[statusRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[statusRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[statusRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[statusRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[statusRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[statusRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[statusRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[statusRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[statusRecordVERS]->size = sizeof(prec->vers);
    prt->papFldDes[statusRecordVERS]->offset = (unsigned short)((char *)&prec->vers - (char *)prec);
    prt->papFldDes[statusRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[statusRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[statusRecordINP]->size = sizeof(prec->inp);
    prt->papFldDes[statusRecordINP]->offset = (unsigned short)((char *)&prec->inp - (char *)prec);
    prt->papFldDes[statusRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[statusRecordEGU]->offset = (unsigned short)((char *)&prec->egu - (char *)prec);
    prt->papFldDes[statusRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[statusRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[statusRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[statusRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[statusRecordLVAL]->size = sizeof(prec->lval);
    prt->papFldDes[statusRecordLVAL]->offset = (unsigned short)((char *)&prec->lval - (char *)prec);
    prt->papFldDes[statusRecordBI00]->size = sizeof(prec->bi00);
    prt->papFldDes[statusRecordBI00]->offset = (unsigned short)((char *)&prec->bi00 - (char *)prec);
    prt->papFldDes[statusRecordBI01]->size = sizeof(prec->bi01);
    prt->papFldDes[statusRecordBI01]->offset = (unsigned short)((char *)&prec->bi01 - (char *)prec);
    prt->papFldDes[statusRecordBI02]->size = sizeof(prec->bi02);
    prt->papFldDes[statusRecordBI02]->offset = (unsigned short)((char *)&prec->bi02 - (char *)prec);
    prt->papFldDes[statusRecordBI03]->size = sizeof(prec->bi03);
    prt->papFldDes[statusRecordBI03]->offset = (unsigned short)((char *)&prec->bi03 - (char *)prec);
    prt->papFldDes[statusRecordBI04]->size = sizeof(prec->bi04);
    prt->papFldDes[statusRecordBI04]->offset = (unsigned short)((char *)&prec->bi04 - (char *)prec);
    prt->papFldDes[statusRecordBI05]->size = sizeof(prec->bi05);
    prt->papFldDes[statusRecordBI05]->offset = (unsigned short)((char *)&prec->bi05 - (char *)prec);
    prt->papFldDes[statusRecordBI06]->size = sizeof(prec->bi06);
    prt->papFldDes[statusRecordBI06]->offset = (unsigned short)((char *)&prec->bi06 - (char *)prec);
    prt->papFldDes[statusRecordBI07]->size = sizeof(prec->bi07);
    prt->papFldDes[statusRecordBI07]->offset = (unsigned short)((char *)&prec->bi07 - (char *)prec);
    prt->papFldDes[statusRecordBI08]->size = sizeof(prec->bi08);
    prt->papFldDes[statusRecordBI08]->offset = (unsigned short)((char *)&prec->bi08 - (char *)prec);
    prt->papFldDes[statusRecordBI09]->size = sizeof(prec->bi09);
    prt->papFldDes[statusRecordBI09]->offset = (unsigned short)((char *)&prec->bi09 - (char *)prec);
    prt->papFldDes[statusRecordBI10]->size = sizeof(prec->bi10);
    prt->papFldDes[statusRecordBI10]->offset = (unsigned short)((char *)&prec->bi10 - (char *)prec);
    prt->papFldDes[statusRecordBI11]->size = sizeof(prec->bi11);
    prt->papFldDes[statusRecordBI11]->offset = (unsigned short)((char *)&prec->bi11 - (char *)prec);
    prt->papFldDes[statusRecordBI12]->size = sizeof(prec->bi12);
    prt->papFldDes[statusRecordBI12]->offset = (unsigned short)((char *)&prec->bi12 - (char *)prec);
    prt->papFldDes[statusRecordBI13]->size = sizeof(prec->bi13);
    prt->papFldDes[statusRecordBI13]->offset = (unsigned short)((char *)&prec->bi13 - (char *)prec);
    prt->papFldDes[statusRecordBI14]->size = sizeof(prec->bi14);
    prt->papFldDes[statusRecordBI14]->offset = (unsigned short)((char *)&prec->bi14 - (char *)prec);
    prt->papFldDes[statusRecordBI15]->size = sizeof(prec->bi15);
    prt->papFldDes[statusRecordBI15]->offset = (unsigned short)((char *)&prec->bi15 - (char *)prec);
    prt->papFldDes[statusRecordBI16]->size = sizeof(prec->bi16);
    prt->papFldDes[statusRecordBI16]->offset = (unsigned short)((char *)&prec->bi16 - (char *)prec);
    prt->papFldDes[statusRecordBI17]->size = sizeof(prec->bi17);
    prt->papFldDes[statusRecordBI17]->offset = (unsigned short)((char *)&prec->bi17 - (char *)prec);
    prt->papFldDes[statusRecordBI18]->size = sizeof(prec->bi18);
    prt->papFldDes[statusRecordBI18]->offset = (unsigned short)((char *)&prec->bi18 - (char *)prec);
    prt->papFldDes[statusRecordBI19]->size = sizeof(prec->bi19);
    prt->papFldDes[statusRecordBI19]->offset = (unsigned short)((char *)&prec->bi19 - (char *)prec);
    prt->papFldDes[statusRecordBI20]->size = sizeof(prec->bi20);
    prt->papFldDes[statusRecordBI20]->offset = (unsigned short)((char *)&prec->bi20 - (char *)prec);
    prt->papFldDes[statusRecordBI21]->size = sizeof(prec->bi21);
    prt->papFldDes[statusRecordBI21]->offset = (unsigned short)((char *)&prec->bi21 - (char *)prec);
    prt->papFldDes[statusRecordBI22]->size = sizeof(prec->bi22);
    prt->papFldDes[statusRecordBI22]->offset = (unsigned short)((char *)&prec->bi22 - (char *)prec);
    prt->papFldDes[statusRecordBI23]->size = sizeof(prec->bi23);
    prt->papFldDes[statusRecordBI23]->offset = (unsigned short)((char *)&prec->bi23 - (char *)prec);
    prt->papFldDes[statusRecordBI24]->size = sizeof(prec->bi24);
    prt->papFldDes[statusRecordBI24]->offset = (unsigned short)((char *)&prec->bi24 - (char *)prec);
    prt->papFldDes[statusRecordBI25]->size = sizeof(prec->bi25);
    prt->papFldDes[statusRecordBI25]->offset = (unsigned short)((char *)&prec->bi25 - (char *)prec);
    prt->papFldDes[statusRecordBI26]->size = sizeof(prec->bi26);
    prt->papFldDes[statusRecordBI26]->offset = (unsigned short)((char *)&prec->bi26 - (char *)prec);
    prt->papFldDes[statusRecordBI27]->size = sizeof(prec->bi27);
    prt->papFldDes[statusRecordBI27]->offset = (unsigned short)((char *)&prec->bi27 - (char *)prec);
    prt->papFldDes[statusRecordBI28]->size = sizeof(prec->bi28);
    prt->papFldDes[statusRecordBI28]->offset = (unsigned short)((char *)&prec->bi28 - (char *)prec);
    prt->papFldDes[statusRecordBI29]->size = sizeof(prec->bi29);
    prt->papFldDes[statusRecordBI29]->offset = (unsigned short)((char *)&prec->bi29 - (char *)prec);
    prt->papFldDes[statusRecordBI30]->size = sizeof(prec->bi30);
    prt->papFldDes[statusRecordBI30]->offset = (unsigned short)((char *)&prec->bi30 - (char *)prec);
    prt->papFldDes[statusRecordBI31]->size = sizeof(prec->bi31);
    prt->papFldDes[statusRecordBI31]->offset = (unsigned short)((char *)&prec->bi31 - (char *)prec);
    prt->papFldDes[statusRecordLK00]->size = sizeof(prec->lk00);
    prt->papFldDes[statusRecordLK00]->offset = (unsigned short)((char *)&prec->lk00 - (char *)prec);
    prt->papFldDes[statusRecordLK01]->size = sizeof(prec->lk01);
    prt->papFldDes[statusRecordLK01]->offset = (unsigned short)((char *)&prec->lk01 - (char *)prec);
    prt->papFldDes[statusRecordLK02]->size = sizeof(prec->lk02);
    prt->papFldDes[statusRecordLK02]->offset = (unsigned short)((char *)&prec->lk02 - (char *)prec);
    prt->papFldDes[statusRecordLK03]->size = sizeof(prec->lk03);
    prt->papFldDes[statusRecordLK03]->offset = (unsigned short)((char *)&prec->lk03 - (char *)prec);
    prt->papFldDes[statusRecordLK04]->size = sizeof(prec->lk04);
    prt->papFldDes[statusRecordLK04]->offset = (unsigned short)((char *)&prec->lk04 - (char *)prec);
    prt->papFldDes[statusRecordLK05]->size = sizeof(prec->lk05);
    prt->papFldDes[statusRecordLK05]->offset = (unsigned short)((char *)&prec->lk05 - (char *)prec);
    prt->papFldDes[statusRecordLK06]->size = sizeof(prec->lk06);
    prt->papFldDes[statusRecordLK06]->offset = (unsigned short)((char *)&prec->lk06 - (char *)prec);
    prt->papFldDes[statusRecordLK07]->size = sizeof(prec->lk07);
    prt->papFldDes[statusRecordLK07]->offset = (unsigned short)((char *)&prec->lk07 - (char *)prec);
    prt->papFldDes[statusRecordLK08]->size = sizeof(prec->lk08);
    prt->papFldDes[statusRecordLK08]->offset = (unsigned short)((char *)&prec->lk08 - (char *)prec);
    prt->papFldDes[statusRecordLK09]->size = sizeof(prec->lk09);
    prt->papFldDes[statusRecordLK09]->offset = (unsigned short)((char *)&prec->lk09 - (char *)prec);
    prt->papFldDes[statusRecordLK10]->size = sizeof(prec->lk10);
    prt->papFldDes[statusRecordLK10]->offset = (unsigned short)((char *)&prec->lk10 - (char *)prec);
    prt->papFldDes[statusRecordLK11]->size = sizeof(prec->lk11);
    prt->papFldDes[statusRecordLK11]->offset = (unsigned short)((char *)&prec->lk11 - (char *)prec);
    prt->papFldDes[statusRecordLK12]->size = sizeof(prec->lk12);
    prt->papFldDes[statusRecordLK12]->offset = (unsigned short)((char *)&prec->lk12 - (char *)prec);
    prt->papFldDes[statusRecordLK13]->size = sizeof(prec->lk13);
    prt->papFldDes[statusRecordLK13]->offset = (unsigned short)((char *)&prec->lk13 - (char *)prec);
    prt->papFldDes[statusRecordLK14]->size = sizeof(prec->lk14);
    prt->papFldDes[statusRecordLK14]->offset = (unsigned short)((char *)&prec->lk14 - (char *)prec);
    prt->papFldDes[statusRecordLK15]->size = sizeof(prec->lk15);
    prt->papFldDes[statusRecordLK15]->offset = (unsigned short)((char *)&prec->lk15 - (char *)prec);
    prt->papFldDes[statusRecordLK16]->size = sizeof(prec->lk16);
    prt->papFldDes[statusRecordLK16]->offset = (unsigned short)((char *)&prec->lk16 - (char *)prec);
    prt->papFldDes[statusRecordLK17]->size = sizeof(prec->lk17);
    prt->papFldDes[statusRecordLK17]->offset = (unsigned short)((char *)&prec->lk17 - (char *)prec);
    prt->papFldDes[statusRecordLK18]->size = sizeof(prec->lk18);
    prt->papFldDes[statusRecordLK18]->offset = (unsigned short)((char *)&prec->lk18 - (char *)prec);
    prt->papFldDes[statusRecordLK19]->size = sizeof(prec->lk19);
    prt->papFldDes[statusRecordLK19]->offset = (unsigned short)((char *)&prec->lk19 - (char *)prec);
    prt->papFldDes[statusRecordLK20]->size = sizeof(prec->lk20);
    prt->papFldDes[statusRecordLK20]->offset = (unsigned short)((char *)&prec->lk20 - (char *)prec);
    prt->papFldDes[statusRecordLK21]->size = sizeof(prec->lk21);
    prt->papFldDes[statusRecordLK21]->offset = (unsigned short)((char *)&prec->lk21 - (char *)prec);
    prt->papFldDes[statusRecordLK22]->size = sizeof(prec->lk22);
    prt->papFldDes[statusRecordLK22]->offset = (unsigned short)((char *)&prec->lk22 - (char *)prec);
    prt->papFldDes[statusRecordLK23]->size = sizeof(prec->lk23);
    prt->papFldDes[statusRecordLK23]->offset = (unsigned short)((char *)&prec->lk23 - (char *)prec);
    prt->papFldDes[statusRecordLK24]->size = sizeof(prec->lk24);
    prt->papFldDes[statusRecordLK24]->offset = (unsigned short)((char *)&prec->lk24 - (char *)prec);
    prt->papFldDes[statusRecordLK25]->size = sizeof(prec->lk25);
    prt->papFldDes[statusRecordLK25]->offset = (unsigned short)((char *)&prec->lk25 - (char *)prec);
    prt->papFldDes[statusRecordLK26]->size = sizeof(prec->lk26);
    prt->papFldDes[statusRecordLK26]->offset = (unsigned short)((char *)&prec->lk26 - (char *)prec);
    prt->papFldDes[statusRecordLK27]->size = sizeof(prec->lk27);
    prt->papFldDes[statusRecordLK27]->offset = (unsigned short)((char *)&prec->lk27 - (char *)prec);
    prt->papFldDes[statusRecordLK28]->size = sizeof(prec->lk28);
    prt->papFldDes[statusRecordLK28]->offset = (unsigned short)((char *)&prec->lk28 - (char *)prec);
    prt->papFldDes[statusRecordLK29]->size = sizeof(prec->lk29);
    prt->papFldDes[statusRecordLK29]->offset = (unsigned short)((char *)&prec->lk29 - (char *)prec);
    prt->papFldDes[statusRecordLK30]->size = sizeof(prec->lk30);
    prt->papFldDes[statusRecordLK30]->offset = (unsigned short)((char *)&prec->lk30 - (char *)prec);
    prt->papFldDes[statusRecordLK31]->size = sizeof(prec->lk31);
    prt->papFldDes[statusRecordLK31]->offset = (unsigned short)((char *)&prec->lk31 - (char *)prec);
    prt->papFldDes[statusRecordHIHI]->size = sizeof(prec->hihi);
    prt->papFldDes[statusRecordHIHI]->offset = (unsigned short)((char *)&prec->hihi - (char *)prec);
    prt->papFldDes[statusRecordLOLO]->size = sizeof(prec->lolo);
    prt->papFldDes[statusRecordLOLO]->offset = (unsigned short)((char *)&prec->lolo - (char *)prec);
    prt->papFldDes[statusRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[statusRecordHIGH]->offset = (unsigned short)((char *)&prec->high - (char *)prec);
    prt->papFldDes[statusRecordLOW]->size = sizeof(prec->low);
    prt->papFldDes[statusRecordLOW]->offset = (unsigned short)((char *)&prec->low - (char *)prec);
    prt->papFldDes[statusRecordHHSV]->size = sizeof(prec->hhsv);
    prt->papFldDes[statusRecordHHSV]->offset = (unsigned short)((char *)&prec->hhsv - (char *)prec);
    prt->papFldDes[statusRecordLLSV]->size = sizeof(prec->llsv);
    prt->papFldDes[statusRecordLLSV]->offset = (unsigned short)((char *)&prec->llsv - (char *)prec);
    prt->papFldDes[statusRecordHSV]->size = sizeof(prec->hsv);
    prt->papFldDes[statusRecordHSV]->offset = (unsigned short)((char *)&prec->hsv - (char *)prec);
    prt->papFldDes[statusRecordLSV]->size = sizeof(prec->lsv);
    prt->papFldDes[statusRecordLSV]->offset = (unsigned short)((char *)&prec->lsv - (char *)prec);
    prt->papFldDes[statusRecordHYST]->size = sizeof(prec->hyst);
    prt->papFldDes[statusRecordHYST]->offset = (unsigned short)((char *)&prec->hyst - (char *)prec);
    prt->papFldDes[statusRecordADEL]->size = sizeof(prec->adel);
    prt->papFldDes[statusRecordADEL]->offset = (unsigned short)((char *)&prec->adel - (char *)prec);
    prt->papFldDes[statusRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[statusRecordMDEL]->offset = (unsigned short)((char *)&prec->mdel - (char *)prec);
    prt->papFldDes[statusRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[statusRecordLALM]->offset = (unsigned short)((char *)&prec->lalm - (char *)prec);
    prt->papFldDes[statusRecordALST]->size = sizeof(prec->alst);
    prt->papFldDes[statusRecordALST]->offset = (unsigned short)((char *)&prec->alst - (char *)prec);
    prt->papFldDes[statusRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[statusRecordMLST]->offset = (unsigned short)((char *)&prec->mlst - (char *)prec);
    prt->papFldDes[statusRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[statusRecordSIOL]->offset = (unsigned short)((char *)&prec->siol - (char *)prec);
    prt->papFldDes[statusRecordSVAL]->size = sizeof(prec->sval);
    prt->papFldDes[statusRecordSVAL]->offset = (unsigned short)((char *)&prec->sval - (char *)prec);
    prt->papFldDes[statusRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[statusRecordSIML]->offset = (unsigned short)((char *)&prec->siml - (char *)prec);
    prt->papFldDes[statusRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[statusRecordSIMM]->offset = (unsigned short)((char *)&prec->simm - (char *)prec);
    prt->papFldDes[statusRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[statusRecordSIMS]->offset = (unsigned short)((char *)&prec->sims - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(statusRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_statusRecord_H */
