/* throttleRecord.h generated from throttleRecord.dbd */

#ifndef INC_throttleRecord_H
#define INC_throttleRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

#ifndef throttleDRVLS_NUM_CHOICES
typedef enum {
    throttleDRVLS_NORM              /* Normal */,
    throttleDRVLS_LOW               /* Low Limit */,
    throttleDRVLS_HIGH              /* High Limit */
} throttleDRVLS;
#define throttleDRVLS_NUM_CHOICES 3
#endif

#ifndef throttleDRVLC_NUM_CHOICES
typedef enum {
    throttleDRVLC_OFF               /* Off */,
    throttleDRVLC_ON                /* On */
} throttleDRVLC;
#define throttleDRVLC_NUM_CHOICES 2
#endif

#ifndef throttleWAIT_NUM_CHOICES
typedef enum {
    throttleWAIT_FALSE              /* False */,
    throttleWAIT_TRUE               /* True */
} throttleWAIT;
#define throttleWAIT_NUM_CHOICES 2
#endif

#ifndef throttleOV_NUM_CHOICES
typedef enum {
    throttleOV_EXT_NC               /* Ext PV NC */,
    throttleOV_EXT                  /* Ext PV OK */,
    throttleOV_LOC                  /* Local PV */,
    throttleOV_CON                  /* Constant */
} throttleOV;
#define throttleOV_NUM_CHOICES 4
#endif

#ifndef throttleSYNC_NUM_CHOICES
typedef enum {
    throttleSYNC_IDLE               /* Idle */,
    throttleSYNC_PROC               /* Process */
} throttleSYNC;
#define throttleSYNC_NUM_CHOICES 2
#endif

#ifndef throttleSTS_NUM_CHOICES
typedef enum {
    throttleSTS_UNK                 /* Unknown */,
    throttleSTS_ERR                 /* Error */,
    throttleSTS_SUC                 /* Success */
} throttleSTS;
#define throttleSTS_NUM_CHOICES 3
#endif

typedef struct throttleRecord {
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
    epicsFloat64        val;        /* Set Value */
    epicsFloat64        oval;       /* Previous Set Value */
    epicsFloat64        sent;       /* Sent Value */
    epicsFloat64        osent;      /* Previous Sent Value */
    epicsEnum16         wait;       /* Busy */
    epicsFloat64        hopr;       /* High Operating Range */
    epicsFloat64        lopr;       /* Low Operating Range */
    epicsFloat64        drvlh;      /* High Limit */
    epicsFloat64        drvll;      /* Low Limit */
    epicsEnum16         drvls;      /* Limit Status */
    epicsEnum16         drvlc;      /* Limit Clipping */
    char                ver[20];    /* Code Version */
    void *rpvt;                     /* Record Private */
    epicsEnum16         sts;        /* Record Status */
    epicsInt16          prec;       /* Display Precision */
    epicsInt16          dprec;      /* Delay Display Precision */
    epicsFloat64        dly;        /* Delay value */
    DBLINK              out;        /* Output */
    epicsEnum16         ov;         /* Output link valid */
    DBLINK              sinp;       /* Sync Input */
    epicsEnum16         siv;        /* Sync Input link valid */
    epicsEnum16         sync;       /* Sync values */
} throttleRecord;

typedef enum {
	throttleRecordNAME = 0,
	throttleRecordDESC = 1,
	throttleRecordASG = 2,
	throttleRecordSCAN = 3,
	throttleRecordPINI = 4,
	throttleRecordPHAS = 5,
	throttleRecordEVNT = 6,
	throttleRecordTSE = 7,
	throttleRecordTSEL = 8,
	throttleRecordDTYP = 9,
	throttleRecordDISV = 10,
	throttleRecordDISA = 11,
	throttleRecordSDIS = 12,
	throttleRecordMLOK = 13,
	throttleRecordMLIS = 14,
	throttleRecordBKLNK = 15,
	throttleRecordDISP = 16,
	throttleRecordPROC = 17,
	throttleRecordSTAT = 18,
	throttleRecordSEVR = 19,
	throttleRecordNSTA = 20,
	throttleRecordNSEV = 21,
	throttleRecordACKS = 22,
	throttleRecordACKT = 23,
	throttleRecordDISS = 24,
	throttleRecordLCNT = 25,
	throttleRecordPACT = 26,
	throttleRecordPUTF = 27,
	throttleRecordRPRO = 28,
	throttleRecordASP = 29,
	throttleRecordPPN = 30,
	throttleRecordPPNR = 31,
	throttleRecordSPVT = 32,
	throttleRecordRSET = 33,
	throttleRecordDSET = 34,
	throttleRecordDPVT = 35,
	throttleRecordRDES = 36,
	throttleRecordLSET = 37,
	throttleRecordPRIO = 38,
	throttleRecordTPRO = 39,
	throttleRecordBKPT = 40,
	throttleRecordUDF = 41,
	throttleRecordUDFS = 42,
	throttleRecordTIME = 43,
	throttleRecordFLNK = 44,
	throttleRecordVAL = 45,
	throttleRecordOVAL = 46,
	throttleRecordSENT = 47,
	throttleRecordOSENT = 48,
	throttleRecordWAIT = 49,
	throttleRecordHOPR = 50,
	throttleRecordLOPR = 51,
	throttleRecordDRVLH = 52,
	throttleRecordDRVLL = 53,
	throttleRecordDRVLS = 54,
	throttleRecordDRVLC = 55,
	throttleRecordVER = 56,
	throttleRecordRPVT = 57,
	throttleRecordSTS = 58,
	throttleRecordPREC = 59,
	throttleRecordDPREC = 60,
	throttleRecordDLY = 61,
	throttleRecordOUT = 62,
	throttleRecordOV = 63,
	throttleRecordSINP = 64,
	throttleRecordSIV = 65,
	throttleRecordSYNC = 66
} throttleFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int throttleRecordSizeOffset(dbRecordType *prt)
{
    throttleRecord *prec = 0;

    if (prt->no_fields != 67) {
        cantProceed("IOC build or installation error:\n"
            "    The throttleRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 67.\n",
            prt->no_fields);
    }
    prt->papFldDes[throttleRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[throttleRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[throttleRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[throttleRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[throttleRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[throttleRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[throttleRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[throttleRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[throttleRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[throttleRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[throttleRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[throttleRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[throttleRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[throttleRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[throttleRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[throttleRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[throttleRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[throttleRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[throttleRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[throttleRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[throttleRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[throttleRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[throttleRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[throttleRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[throttleRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[throttleRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[throttleRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[throttleRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[throttleRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[throttleRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[throttleRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[throttleRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[throttleRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[throttleRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[throttleRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[throttleRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[throttleRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[throttleRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[throttleRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[throttleRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[throttleRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[throttleRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[throttleRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[throttleRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[throttleRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[throttleRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[throttleRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[throttleRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[throttleRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[throttleRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[throttleRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[throttleRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[throttleRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[throttleRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[throttleRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[throttleRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[throttleRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[throttleRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[throttleRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[throttleRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[throttleRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[throttleRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[throttleRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[throttleRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[throttleRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[throttleRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[throttleRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[throttleRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[throttleRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[throttleRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[throttleRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[throttleRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[throttleRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[throttleRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[throttleRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[throttleRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[throttleRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[throttleRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[throttleRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[throttleRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[throttleRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[throttleRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[throttleRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[throttleRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[throttleRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[throttleRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[throttleRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[throttleRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[throttleRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[throttleRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[throttleRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[throttleRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[throttleRecordOVAL]->size = sizeof(prec->oval);
    prt->papFldDes[throttleRecordOVAL]->offset = (unsigned short)((char *)&prec->oval - (char *)prec);
    prt->papFldDes[throttleRecordSENT]->size = sizeof(prec->sent);
    prt->papFldDes[throttleRecordSENT]->offset = (unsigned short)((char *)&prec->sent - (char *)prec);
    prt->papFldDes[throttleRecordOSENT]->size = sizeof(prec->osent);
    prt->papFldDes[throttleRecordOSENT]->offset = (unsigned short)((char *)&prec->osent - (char *)prec);
    prt->papFldDes[throttleRecordWAIT]->size = sizeof(prec->wait);
    prt->papFldDes[throttleRecordWAIT]->offset = (unsigned short)((char *)&prec->wait - (char *)prec);
    prt->papFldDes[throttleRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[throttleRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[throttleRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[throttleRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[throttleRecordDRVLH]->size = sizeof(prec->drvlh);
    prt->papFldDes[throttleRecordDRVLH]->offset = (unsigned short)((char *)&prec->drvlh - (char *)prec);
    prt->papFldDes[throttleRecordDRVLL]->size = sizeof(prec->drvll);
    prt->papFldDes[throttleRecordDRVLL]->offset = (unsigned short)((char *)&prec->drvll - (char *)prec);
    prt->papFldDes[throttleRecordDRVLS]->size = sizeof(prec->drvls);
    prt->papFldDes[throttleRecordDRVLS]->offset = (unsigned short)((char *)&prec->drvls - (char *)prec);
    prt->papFldDes[throttleRecordDRVLC]->size = sizeof(prec->drvlc);
    prt->papFldDes[throttleRecordDRVLC]->offset = (unsigned short)((char *)&prec->drvlc - (char *)prec);
    prt->papFldDes[throttleRecordVER]->size = sizeof(prec->ver);
    prt->papFldDes[throttleRecordVER]->offset = (unsigned short)((char *)&prec->ver - (char *)prec);
    prt->papFldDes[throttleRecordRPVT]->size = sizeof(prec->rpvt);
    prt->papFldDes[throttleRecordRPVT]->offset = (unsigned short)((char *)&prec->rpvt - (char *)prec);
    prt->papFldDes[throttleRecordSTS]->size = sizeof(prec->sts);
    prt->papFldDes[throttleRecordSTS]->offset = (unsigned short)((char *)&prec->sts - (char *)prec);
    prt->papFldDes[throttleRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[throttleRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->papFldDes[throttleRecordDPREC]->size = sizeof(prec->dprec);
    prt->papFldDes[throttleRecordDPREC]->offset = (unsigned short)((char *)&prec->dprec - (char *)prec);
    prt->papFldDes[throttleRecordDLY]->size = sizeof(prec->dly);
    prt->papFldDes[throttleRecordDLY]->offset = (unsigned short)((char *)&prec->dly - (char *)prec);
    prt->papFldDes[throttleRecordOUT]->size = sizeof(prec->out);
    prt->papFldDes[throttleRecordOUT]->offset = (unsigned short)((char *)&prec->out - (char *)prec);
    prt->papFldDes[throttleRecordOV]->size = sizeof(prec->ov);
    prt->papFldDes[throttleRecordOV]->offset = (unsigned short)((char *)&prec->ov - (char *)prec);
    prt->papFldDes[throttleRecordSINP]->size = sizeof(prec->sinp);
    prt->papFldDes[throttleRecordSINP]->offset = (unsigned short)((char *)&prec->sinp - (char *)prec);
    prt->papFldDes[throttleRecordSIV]->size = sizeof(prec->siv);
    prt->papFldDes[throttleRecordSIV]->offset = (unsigned short)((char *)&prec->siv - (char *)prec);
    prt->papFldDes[throttleRecordSYNC]->size = sizeof(prec->sync);
    prt->papFldDes[throttleRecordSYNC]->offset = (unsigned short)((char *)&prec->sync - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(throttleRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_throttleRecord_H */
