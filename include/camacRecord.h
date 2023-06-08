/* camacRecord.h generated from camacRecord.dbd */

#ifndef INC_camacRecord_H
#define INC_camacRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

#ifndef camacTMOD_NUM_CHOICES
typedef enum {
    camacTMOD_Single                /* Single */,
    camacTMOD_Q_Stop                /* Q Stop */,
    camacTMOD_Q_Repeat              /* Q Repeat */,
    camacTMOD_Q_Scan                /* Q Scan */
} camacTMOD;
#define camacTMOD_NUM_CHOICES 4
#endif

#ifndef camacCCMD_NUM_CHOICES
typedef enum {
    camacCCMD_None                  /* None */,
    camacCCMD_Clear_Inhibit         /* Clear Inhibit */,
    camacCCMD_Set_Inhibit           /* Set Inhibit */,
    camacCCMD_Clear__C_             /* Clear (C) */,
    camacCCMD_Initialize__Z_        /* Initialize (Z) */
} camacCCMD;
#define camacCCMD_NUM_CHOICES 5
#endif

typedef struct camacRecord {
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
    epicsInt32          val;        /* Current value */
    void *bptr;                     /* Buffer Pointer */
    epicsInt32          q;          /* Q  response */
    epicsInt32          x;          /* X  response */
    epicsInt32          inhb;       /* Inhibit status */
    epicsInt32          b;          /* Branch */
    epicsInt32          c;          /* Crate */
    epicsInt32          n;          /* Station */
    epicsInt32          a;          /* Subaddress */
    epicsInt32          f;          /* Function */
    epicsEnum16         tmod;       /* Transfer mode */
    epicsInt32          nmax;       /* Max. number of values */
    epicsInt32          nuse;       /* Number of values to R/W */
    epicsInt32          nact;       /* Actual number of values */
    epicsEnum16         ccmd;       /* Crate command */
} camacRecord;

typedef enum {
	camacRecordNAME = 0,
	camacRecordDESC = 1,
	camacRecordASG = 2,
	camacRecordSCAN = 3,
	camacRecordPINI = 4,
	camacRecordPHAS = 5,
	camacRecordEVNT = 6,
	camacRecordTSE = 7,
	camacRecordTSEL = 8,
	camacRecordDTYP = 9,
	camacRecordDISV = 10,
	camacRecordDISA = 11,
	camacRecordSDIS = 12,
	camacRecordMLOK = 13,
	camacRecordMLIS = 14,
	camacRecordBKLNK = 15,
	camacRecordDISP = 16,
	camacRecordPROC = 17,
	camacRecordSTAT = 18,
	camacRecordSEVR = 19,
	camacRecordNSTA = 20,
	camacRecordNSEV = 21,
	camacRecordACKS = 22,
	camacRecordACKT = 23,
	camacRecordDISS = 24,
	camacRecordLCNT = 25,
	camacRecordPACT = 26,
	camacRecordPUTF = 27,
	camacRecordRPRO = 28,
	camacRecordASP = 29,
	camacRecordPPN = 30,
	camacRecordPPNR = 31,
	camacRecordSPVT = 32,
	camacRecordRSET = 33,
	camacRecordDSET = 34,
	camacRecordDPVT = 35,
	camacRecordRDES = 36,
	camacRecordLSET = 37,
	camacRecordPRIO = 38,
	camacRecordTPRO = 39,
	camacRecordBKPT = 40,
	camacRecordUDF = 41,
	camacRecordUDFS = 42,
	camacRecordTIME = 43,
	camacRecordFLNK = 44,
	camacRecordVAL = 45,
	camacRecordBPTR = 46,
	camacRecordQ = 47,
	camacRecordX = 48,
	camacRecordINHB = 49,
	camacRecordB = 50,
	camacRecordC = 51,
	camacRecordN = 52,
	camacRecordA = 53,
	camacRecordF = 54,
	camacRecordTMOD = 55,
	camacRecordNMAX = 56,
	camacRecordNUSE = 57,
	camacRecordNACT = 58,
	camacRecordCCMD = 59
} camacFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int camacRecordSizeOffset(dbRecordType *prt)
{
    camacRecord *prec = 0;

    if (prt->no_fields != 60) {
        cantProceed("IOC build or installation error:\n"
            "    The camacRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 60.\n",
            prt->no_fields);
    }
    prt->papFldDes[camacRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[camacRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[camacRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[camacRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[camacRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[camacRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[camacRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[camacRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[camacRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[camacRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[camacRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[camacRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[camacRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[camacRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[camacRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[camacRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[camacRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[camacRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[camacRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[camacRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[camacRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[camacRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[camacRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[camacRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[camacRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[camacRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[camacRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[camacRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[camacRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[camacRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[camacRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[camacRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[camacRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[camacRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[camacRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[camacRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[camacRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[camacRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[camacRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[camacRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[camacRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[camacRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[camacRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[camacRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[camacRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[camacRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[camacRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[camacRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[camacRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[camacRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[camacRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[camacRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[camacRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[camacRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[camacRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[camacRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[camacRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[camacRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[camacRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[camacRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[camacRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[camacRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[camacRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[camacRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[camacRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[camacRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[camacRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[camacRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[camacRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[camacRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[camacRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[camacRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[camacRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[camacRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[camacRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[camacRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[camacRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[camacRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[camacRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[camacRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[camacRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[camacRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[camacRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[camacRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[camacRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[camacRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[camacRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[camacRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[camacRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[camacRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[camacRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[camacRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[camacRecordBPTR]->size = sizeof(prec->bptr);
    prt->papFldDes[camacRecordBPTR]->offset = (unsigned short)((char *)&prec->bptr - (char *)prec);
    prt->papFldDes[camacRecordQ]->size = sizeof(prec->q);
    prt->papFldDes[camacRecordQ]->offset = (unsigned short)((char *)&prec->q - (char *)prec);
    prt->papFldDes[camacRecordX]->size = sizeof(prec->x);
    prt->papFldDes[camacRecordX]->offset = (unsigned short)((char *)&prec->x - (char *)prec);
    prt->papFldDes[camacRecordINHB]->size = sizeof(prec->inhb);
    prt->papFldDes[camacRecordINHB]->offset = (unsigned short)((char *)&prec->inhb - (char *)prec);
    prt->papFldDes[camacRecordB]->size = sizeof(prec->b);
    prt->papFldDes[camacRecordB]->offset = (unsigned short)((char *)&prec->b - (char *)prec);
    prt->papFldDes[camacRecordC]->size = sizeof(prec->c);
    prt->papFldDes[camacRecordC]->offset = (unsigned short)((char *)&prec->c - (char *)prec);
    prt->papFldDes[camacRecordN]->size = sizeof(prec->n);
    prt->papFldDes[camacRecordN]->offset = (unsigned short)((char *)&prec->n - (char *)prec);
    prt->papFldDes[camacRecordA]->size = sizeof(prec->a);
    prt->papFldDes[camacRecordA]->offset = (unsigned short)((char *)&prec->a - (char *)prec);
    prt->papFldDes[camacRecordF]->size = sizeof(prec->f);
    prt->papFldDes[camacRecordF]->offset = (unsigned short)((char *)&prec->f - (char *)prec);
    prt->papFldDes[camacRecordTMOD]->size = sizeof(prec->tmod);
    prt->papFldDes[camacRecordTMOD]->offset = (unsigned short)((char *)&prec->tmod - (char *)prec);
    prt->papFldDes[camacRecordNMAX]->size = sizeof(prec->nmax);
    prt->papFldDes[camacRecordNMAX]->offset = (unsigned short)((char *)&prec->nmax - (char *)prec);
    prt->papFldDes[camacRecordNUSE]->size = sizeof(prec->nuse);
    prt->papFldDes[camacRecordNUSE]->offset = (unsigned short)((char *)&prec->nuse - (char *)prec);
    prt->papFldDes[camacRecordNACT]->size = sizeof(prec->nact);
    prt->papFldDes[camacRecordNACT]->offset = (unsigned short)((char *)&prec->nact - (char *)prec);
    prt->papFldDes[camacRecordCCMD]->size = sizeof(prec->ccmd);
    prt->papFldDes[camacRecordCCMD]->offset = (unsigned short)((char *)&prec->ccmd - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(camacRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_camacRecord_H */
