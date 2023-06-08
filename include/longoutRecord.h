/* longoutRecord.h generated from longoutRecord.dbd */

#ifndef INC_longoutRecord_H
#define INC_longoutRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

/* Declare Device Support Entry Table */
struct longoutRecord;
typedef struct longoutdset {
    dset common; /*init_record returns: (-1,0)=>(failure,success)*/
    long (*write_longout)(struct longoutRecord *prec); /*(-1,0)=>(failure,success*/
} longoutdset;
#define HAS_longoutdset

#include "callback.h"

typedef struct longoutRecord {
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
    epicsInt32          val;        /* Desired Output */
    DBLINK              out;        /* Output Specification */
    DBLINK              dol;        /* Desired Output Loc */
    epicsEnum16         omsl;       /* Output Mode Select */
    char                egu[16];    /* Engineering Units */
    epicsInt32          drvh;       /* Drive High Limit */
    epicsInt32          drvl;       /* Drive Low Limit */
    epicsInt32          hopr;       /* High Operating Range */
    epicsInt32          lopr;       /* Low Operating Range */
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
    DBLINK              siol;       /* Sim Output Specifctn */
    DBLINK              siml;       /* Sim Mode Location */
    epicsEnum16         simm;       /* Simulation Mode */
    epicsEnum16         sims;       /* Sim mode Alarm Svrty */
    epicsEnum16         oldsimm;    /* Prev. Simulation Mode */
    epicsEnum16         sscn;       /* Sim. Mode Scan */
    epicsFloat64        sdly;       /* Sim. Mode Async Delay */
    epicsCallback            *simpvt; /* Sim. Mode Private */
    epicsEnum16         ivoa;       /* INVALID output action */
    epicsInt32          ivov;       /* INVALID output value */
} longoutRecord;

typedef enum {
	longoutRecordNAME = 0,
	longoutRecordDESC = 1,
	longoutRecordASG = 2,
	longoutRecordSCAN = 3,
	longoutRecordPINI = 4,
	longoutRecordPHAS = 5,
	longoutRecordEVNT = 6,
	longoutRecordTSE = 7,
	longoutRecordTSEL = 8,
	longoutRecordDTYP = 9,
	longoutRecordDISV = 10,
	longoutRecordDISA = 11,
	longoutRecordSDIS = 12,
	longoutRecordMLOK = 13,
	longoutRecordMLIS = 14,
	longoutRecordBKLNK = 15,
	longoutRecordDISP = 16,
	longoutRecordPROC = 17,
	longoutRecordSTAT = 18,
	longoutRecordSEVR = 19,
	longoutRecordNSTA = 20,
	longoutRecordNSEV = 21,
	longoutRecordACKS = 22,
	longoutRecordACKT = 23,
	longoutRecordDISS = 24,
	longoutRecordLCNT = 25,
	longoutRecordPACT = 26,
	longoutRecordPUTF = 27,
	longoutRecordRPRO = 28,
	longoutRecordASP = 29,
	longoutRecordPPN = 30,
	longoutRecordPPNR = 31,
	longoutRecordSPVT = 32,
	longoutRecordRSET = 33,
	longoutRecordDSET = 34,
	longoutRecordDPVT = 35,
	longoutRecordRDES = 36,
	longoutRecordLSET = 37,
	longoutRecordPRIO = 38,
	longoutRecordTPRO = 39,
	longoutRecordBKPT = 40,
	longoutRecordUDF = 41,
	longoutRecordUDFS = 42,
	longoutRecordTIME = 43,
	longoutRecordFLNK = 44,
	longoutRecordVAL = 45,
	longoutRecordOUT = 46,
	longoutRecordDOL = 47,
	longoutRecordOMSL = 48,
	longoutRecordEGU = 49,
	longoutRecordDRVH = 50,
	longoutRecordDRVL = 51,
	longoutRecordHOPR = 52,
	longoutRecordLOPR = 53,
	longoutRecordHIHI = 54,
	longoutRecordLOLO = 55,
	longoutRecordHIGH = 56,
	longoutRecordLOW = 57,
	longoutRecordHHSV = 58,
	longoutRecordLLSV = 59,
	longoutRecordHSV = 60,
	longoutRecordLSV = 61,
	longoutRecordHYST = 62,
	longoutRecordADEL = 63,
	longoutRecordMDEL = 64,
	longoutRecordLALM = 65,
	longoutRecordALST = 66,
	longoutRecordMLST = 67,
	longoutRecordSIOL = 68,
	longoutRecordSIML = 69,
	longoutRecordSIMM = 70,
	longoutRecordSIMS = 71,
	longoutRecordOLDSIMM = 72,
	longoutRecordSSCN = 73,
	longoutRecordSDLY = 74,
	longoutRecordSIMPVT = 75,
	longoutRecordIVOA = 76,
	longoutRecordIVOV = 77
} longoutFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int longoutRecordSizeOffset(dbRecordType *prt)
{
    longoutRecord *prec = 0;

    if (prt->no_fields != 78) {
        cantProceed("IOC build or installation error:\n"
            "    The longoutRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 78.\n",
            prt->no_fields);
    }
    prt->papFldDes[longoutRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[longoutRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[longoutRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[longoutRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[longoutRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[longoutRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[longoutRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[longoutRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[longoutRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[longoutRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[longoutRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[longoutRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[longoutRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[longoutRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[longoutRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[longoutRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[longoutRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[longoutRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[longoutRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[longoutRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[longoutRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[longoutRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[longoutRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[longoutRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[longoutRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[longoutRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[longoutRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[longoutRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[longoutRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[longoutRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[longoutRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[longoutRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[longoutRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[longoutRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[longoutRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[longoutRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[longoutRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[longoutRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[longoutRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[longoutRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[longoutRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[longoutRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[longoutRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[longoutRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[longoutRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[longoutRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[longoutRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[longoutRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[longoutRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[longoutRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[longoutRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[longoutRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[longoutRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[longoutRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[longoutRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[longoutRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[longoutRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[longoutRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[longoutRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[longoutRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[longoutRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[longoutRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[longoutRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[longoutRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[longoutRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[longoutRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[longoutRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[longoutRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[longoutRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[longoutRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[longoutRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[longoutRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[longoutRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[longoutRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[longoutRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[longoutRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[longoutRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[longoutRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[longoutRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[longoutRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[longoutRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[longoutRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[longoutRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[longoutRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[longoutRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[longoutRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[longoutRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[longoutRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[longoutRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[longoutRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[longoutRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[longoutRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[longoutRecordOUT]->size = sizeof(prec->out);
    prt->papFldDes[longoutRecordOUT]->offset = (unsigned short)((char *)&prec->out - (char *)prec);
    prt->papFldDes[longoutRecordDOL]->size = sizeof(prec->dol);
    prt->papFldDes[longoutRecordDOL]->offset = (unsigned short)((char *)&prec->dol - (char *)prec);
    prt->papFldDes[longoutRecordOMSL]->size = sizeof(prec->omsl);
    prt->papFldDes[longoutRecordOMSL]->offset = (unsigned short)((char *)&prec->omsl - (char *)prec);
    prt->papFldDes[longoutRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[longoutRecordEGU]->offset = (unsigned short)((char *)&prec->egu - (char *)prec);
    prt->papFldDes[longoutRecordDRVH]->size = sizeof(prec->drvh);
    prt->papFldDes[longoutRecordDRVH]->offset = (unsigned short)((char *)&prec->drvh - (char *)prec);
    prt->papFldDes[longoutRecordDRVL]->size = sizeof(prec->drvl);
    prt->papFldDes[longoutRecordDRVL]->offset = (unsigned short)((char *)&prec->drvl - (char *)prec);
    prt->papFldDes[longoutRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[longoutRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[longoutRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[longoutRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[longoutRecordHIHI]->size = sizeof(prec->hihi);
    prt->papFldDes[longoutRecordHIHI]->offset = (unsigned short)((char *)&prec->hihi - (char *)prec);
    prt->papFldDes[longoutRecordLOLO]->size = sizeof(prec->lolo);
    prt->papFldDes[longoutRecordLOLO]->offset = (unsigned short)((char *)&prec->lolo - (char *)prec);
    prt->papFldDes[longoutRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[longoutRecordHIGH]->offset = (unsigned short)((char *)&prec->high - (char *)prec);
    prt->papFldDes[longoutRecordLOW]->size = sizeof(prec->low);
    prt->papFldDes[longoutRecordLOW]->offset = (unsigned short)((char *)&prec->low - (char *)prec);
    prt->papFldDes[longoutRecordHHSV]->size = sizeof(prec->hhsv);
    prt->papFldDes[longoutRecordHHSV]->offset = (unsigned short)((char *)&prec->hhsv - (char *)prec);
    prt->papFldDes[longoutRecordLLSV]->size = sizeof(prec->llsv);
    prt->papFldDes[longoutRecordLLSV]->offset = (unsigned short)((char *)&prec->llsv - (char *)prec);
    prt->papFldDes[longoutRecordHSV]->size = sizeof(prec->hsv);
    prt->papFldDes[longoutRecordHSV]->offset = (unsigned short)((char *)&prec->hsv - (char *)prec);
    prt->papFldDes[longoutRecordLSV]->size = sizeof(prec->lsv);
    prt->papFldDes[longoutRecordLSV]->offset = (unsigned short)((char *)&prec->lsv - (char *)prec);
    prt->papFldDes[longoutRecordHYST]->size = sizeof(prec->hyst);
    prt->papFldDes[longoutRecordHYST]->offset = (unsigned short)((char *)&prec->hyst - (char *)prec);
    prt->papFldDes[longoutRecordADEL]->size = sizeof(prec->adel);
    prt->papFldDes[longoutRecordADEL]->offset = (unsigned short)((char *)&prec->adel - (char *)prec);
    prt->papFldDes[longoutRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[longoutRecordMDEL]->offset = (unsigned short)((char *)&prec->mdel - (char *)prec);
    prt->papFldDes[longoutRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[longoutRecordLALM]->offset = (unsigned short)((char *)&prec->lalm - (char *)prec);
    prt->papFldDes[longoutRecordALST]->size = sizeof(prec->alst);
    prt->papFldDes[longoutRecordALST]->offset = (unsigned short)((char *)&prec->alst - (char *)prec);
    prt->papFldDes[longoutRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[longoutRecordMLST]->offset = (unsigned short)((char *)&prec->mlst - (char *)prec);
    prt->papFldDes[longoutRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[longoutRecordSIOL]->offset = (unsigned short)((char *)&prec->siol - (char *)prec);
    prt->papFldDes[longoutRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[longoutRecordSIML]->offset = (unsigned short)((char *)&prec->siml - (char *)prec);
    prt->papFldDes[longoutRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[longoutRecordSIMM]->offset = (unsigned short)((char *)&prec->simm - (char *)prec);
    prt->papFldDes[longoutRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[longoutRecordSIMS]->offset = (unsigned short)((char *)&prec->sims - (char *)prec);
    prt->papFldDes[longoutRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[longoutRecordOLDSIMM]->offset = (unsigned short)((char *)&prec->oldsimm - (char *)prec);
    prt->papFldDes[longoutRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[longoutRecordSSCN]->offset = (unsigned short)((char *)&prec->sscn - (char *)prec);
    prt->papFldDes[longoutRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[longoutRecordSDLY]->offset = (unsigned short)((char *)&prec->sdly - (char *)prec);
    prt->papFldDes[longoutRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[longoutRecordSIMPVT]->offset = (unsigned short)((char *)&prec->simpvt - (char *)prec);
    prt->papFldDes[longoutRecordIVOA]->size = sizeof(prec->ivoa);
    prt->papFldDes[longoutRecordIVOA]->offset = (unsigned short)((char *)&prec->ivoa - (char *)prec);
    prt->papFldDes[longoutRecordIVOV]->size = sizeof(prec->ivov);
    prt->papFldDes[longoutRecordIVOV]->offset = (unsigned short)((char *)&prec->ivov - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(longoutRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_longoutRecord_H */
