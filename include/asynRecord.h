/* asynRecord.h generated from asynRecord.dbd */

#ifndef INC_asynRecord_H
#define INC_asynRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

#ifndef ipDRTO_NUM_CHOICES
typedef enum {
    ipDRTO_unknown                  /* Unknown */,
    ipDRTO_No                       /* No */,
    ipDRTO_Yes                      /* Yes */
} ipDRTO;
#define ipDRTO_NUM_CHOICES 3
#endif

#ifndef serialDBIT_NUM_CHOICES
typedef enum {
    serialDBIT_unknown              /* Unknown */,
    serialDBIT_5                    /* 5 */,
    serialDBIT_6                    /* 6 */,
    serialDBIT_7                    /* 7 */,
    serialDBIT_8                    /* 8 */
} serialDBIT;
#define serialDBIT_NUM_CHOICES 5
#endif

#ifndef gpibUCMD_NUM_CHOICES
typedef enum {
    gpibUCMD_None                   /* None */,
    gpibUCMD_Device_Clear__DCL_     /* Device Clear (DCL) */,
    gpibUCMD_Local_Lockout__LL0_    /* Local Lockout (LL0) */,
    gpibUCMD_Serial_Poll_Disable__SPD_ /* Serial Poll Disable (SPD) */,
    gpibUCMD_Serial_Poll_Enable__SPE_ /* Serial Poll Enable (SPE) */,
    gpibUCMD_Unlisten__UNL_         /* Unlisten (UNL) */,
    gpibUCMD_Untalk__UNT_           /* Untalk (UNT) */
} gpibUCMD;
#define gpibUCMD_NUM_CHOICES 7
#endif

#ifndef gpibACMD_NUM_CHOICES
typedef enum {
    gpibACMD_None                   /* None */,
    gpibACMD_Group_Execute_Trig___GET_ /* Group Execute Trig. (GET) */,
    gpibACMD_Go_To_Local__GTL_      /* Go To Local (GTL) */,
    gpibACMD_Selected_Dev__Clear__SDC_ /* Selected Dev. Clear (SDC) */,
    gpibACMD_Take_Control__TCT_     /* Take Control (TCT) */,
    gpibACMD_Serial_Poll            /* Serial Poll */
} gpibACMD;
#define gpibACMD_NUM_CHOICES 6
#endif

#ifndef serialIX_NUM_CHOICES
typedef enum {
    serialIX_unknown                /* Unknown */,
    serialIX_No                     /* No */,
    serialIX_Yes                    /* Yes */
} serialIX;
#define serialIX_NUM_CHOICES 3
#endif

#ifndef asynAUTOCONNECT_NUM_CHOICES
typedef enum {
    asynAUTOCONNECT_noAutoConnect   /* noAutoConnect */,
    asynAUTOCONNECT_autoConnect     /* autoConnect */
} asynAUTOCONNECT;
#define asynAUTOCONNECT_NUM_CHOICES 2
#endif

#ifndef asynENABLE_NUM_CHOICES
typedef enum {
    asynENABLE_Disable              /* Disable */,
    asynENABLE_Enable               /* Enable */
} asynENABLE;
#define asynENABLE_NUM_CHOICES 2
#endif

#ifndef asynTRACE_NUM_CHOICES
typedef enum {
    asynTRACE_Off                   /* Off */,
    asynTRACE_On                    /* On */
} asynTRACE;
#define asynTRACE_NUM_CHOICES 2
#endif

#ifndef serialMCTL_NUM_CHOICES
typedef enum {
    serialMCTL_unknown              /* Unknown */,
    serialMCTL_CLOCAL               /* CLOCAL */,
    serialMCTL_Yes                  /* YES */
} serialMCTL;
#define serialMCTL_NUM_CHOICES 3
#endif

#ifndef asynFMT_NUM_CHOICES
typedef enum {
    asynFMT_ASCII                   /* ASCII */,
    asynFMT_Hybrid                  /* Hybrid */,
    asynFMT_Binary                  /* Binary */
} asynFMT;
#define asynFMT_NUM_CHOICES 3
#endif

#ifndef asynCONNECT_NUM_CHOICES
typedef enum {
    asynCONNECT_Disconnect          /* Disconnect */,
    asynCONNECT_Connect             /* Connect */
} asynCONNECT;
#define asynCONNECT_NUM_CHOICES 2
#endif

#ifndef serialFCTL_NUM_CHOICES
typedef enum {
    serialFCTL_unknown              /* Unknown */,
    serialFCTL_None                 /* None */,
    serialFCTL_Hardware             /* Hardware */
} serialFCTL;
#define serialFCTL_NUM_CHOICES 3
#endif

#ifndef serialBAUD_NUM_CHOICES
typedef enum {
    serialBAUD_unknown              /* Unknown */,
    serialBAUD_300                  /* 300 */,
    serialBAUD_600                  /* 600 */,
    serialBAUD_1200                 /* 1200 */,
    serialBAUD_2400                 /* 2400 */,
    serialBAUD_4800                 /* 4800 */,
    serialBAUD_9600                 /* 9600 */,
    serialBAUD_19200                /* 19200 */,
    serialBAUD_38400                /* 38400 */,
    serialBAUD_57600                /* 57600 */,
    serialBAUD_115200               /* 115200 */,
    serialBAUD_230400               /* 230400 */,
    serialBAUD_460800               /* 460800 */,
    serialBAUD_576000               /* 576000 */,
    serialBAUD_921600               /* 921600 */,
    serialBAUD_1152000              /* 1152000 */
} serialBAUD;
#define serialBAUD_NUM_CHOICES 16
#endif

#ifndef asynINTERFACE_NUM_CHOICES
typedef enum {
    asynINTERFACE_OCTET             /* asynOctet */,
    asynINTERFACE_INT32             /* asynInt32 */,
    asynINTERFACE_UINT32            /* asynUInt32Digital */,
    asynINTERFACE_FLOAT64           /* asynFloat64 */
} asynINTERFACE;
#define asynINTERFACE_NUM_CHOICES 4
#endif

#ifndef serialPRTY_NUM_CHOICES
typedef enum {
    serialPRTY_unknown              /* Unknown */,
    serialPRTY_None                 /* None */,
    serialPRTY_Even                 /* Even */,
    serialPRTY_Odd                  /* Odd */
} serialPRTY;
#define serialPRTY_NUM_CHOICES 4
#endif

#ifndef serialSBIT_NUM_CHOICES
typedef enum {
    serialSBIT_unknown              /* Unknown */,
    serialSBIT_1                    /* 1 */,
    serialSBIT_2                    /* 2 */
} serialSBIT;
#define serialSBIT_NUM_CHOICES 3
#endif

#ifndef asynTMOD_NUM_CHOICES
typedef enum {
    asynTMOD_Write_Read             /* Write/Read */,
    asynTMOD_Write                  /* Write */,
    asynTMOD_Read                   /* Read */,
    asynTMOD_Flush                  /* Flush */,
    asynTMOD_NoIO                   /* NoI/O */
} asynTMOD;
#define asynTMOD_NUM_CHOICES 5
#endif

#ifndef asynEOMREASON_NUM_CHOICES
typedef enum {
    asynEOMREASONNone               /* None */,
    asynEOMREASONCNT                /* Count */,
    asynEOMREASONEOS                /* Eos */,
    asynEOMREASONCNTEOS             /* Count Eos */,
    asynEOMREASONEND                /* End */,
    asynEOMREASONCNTEND             /* Count End */,
    asynEOMREASONEOSEND             /* Eos End */,
    asynEOMREASONCNTEOSEND          /* Count Eos End */
} asynEOMREASON;
#define asynEOMREASON_NUM_CHOICES 8
#endif

typedef struct asynRecord {
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
    epicsInt32          val;        /* Value field (unused) */
    char                port[40];   /* asyn port */
    epicsInt32          addr;       /* asyn address */
    epicsEnum16         pcnct;      /* Port Connect/Disconnect */
    char                drvinfo[40];/* Driver info string */
    epicsInt32          reason;     /* asynUser->reason */
    epicsEnum16         tmod;       /* Transaction mode */
    epicsFloat64        tmot;       /* Timeout (sec) */
    epicsEnum16         iface;      /* Interface */
    epicsInt32          octetiv;    /* asynOctet is valid */
    epicsInt32          optioniv;   /* asynOption is valid */
    epicsInt32          gpibiv;     /* asynGPIB is valid */
    epicsInt32          i32iv;      /* asynInt32 is valid */
    epicsInt32          ui32iv;     /* asynUInt32Digital is valid */
    epicsInt32          f64iv;      /* asynFloat64 is valid */
    char                aout[40];   /* Output (command) string */
    char                oeos[40];   /* Output delimiter */
    epicsInt8           bout;       /* Output binary data */
    void *optr;                     /* Output buffer pointer */
    epicsInt32          omax;       /* Max. size of output array */
    epicsInt32          nowt;       /* Number of bytes to write */
    epicsInt32          nawt;       /* Number of bytes actually written */
    epicsEnum16         ofmt;       /* Output format */
    char                ainp[40];   /* Input (response) string */
    char                tinp[40];   /* Translated input string */
    char                ieos[40];   /* Input Delimiter */
    epicsInt8           binp;       /* Input binary data */
    void *iptr;                     /* Input buffer pointer */
    epicsInt32          imax;       /* Max. size of input array */
    epicsInt32          nrrd;       /* Number of bytes to read */
    epicsInt32          nord;       /* Number of bytes read */
    epicsEnum16         ifmt;       /* Input format */
    epicsEnum16         eomr;       /* EOM reason */
    epicsInt32          i32inp;     /* asynInt32 input */
    epicsInt32          i32out;     /* asynInt32 output */
    epicsUInt32         ui32inp;    /* asynUInt32Digital input */
    epicsUInt32         ui32out;    /* asynUInt32Digital output */
    epicsUInt32         ui32mask;   /* asynUInt32Digital mask */
    epicsFloat64        f64inp;     /* asynFloat64 input */
    epicsFloat64        f64out;     /* asynFloat64 output */
    epicsEnum16         baud;       /* Baud rate */
    epicsInt32          lbaud;      /* Baud rate */
    epicsEnum16         prty;       /* Parity */
    epicsEnum16         dbit;       /* Data bits */
    epicsEnum16         sbit;       /* Stop bits */
    epicsEnum16         mctl;       /* Modem control */
    epicsEnum16         fctl;       /* Flow control */
    epicsEnum16         ixon;       /* Output XON/XOFF */
    epicsEnum16         ixoff;      /* Input XON/XOFF */
    epicsEnum16         ixany;      /* XON=any character */
    char                hostinfo[40];/* host info */
    epicsEnum16         drto;       /* Disconnect on timeout */
    epicsEnum16         ucmd;       /* Universal command */
    epicsEnum16         acmd;       /* Addressed command */
    epicsUInt8          spr;        /* Serial poll response */
    epicsInt32          tmsk;       /* Trace mask */
    epicsEnum16         tb0;        /* Trace error */
    epicsEnum16         tb1;        /* Trace IO device */
    epicsEnum16         tb2;        /* Trace IO filter */
    epicsEnum16         tb3;        /* Trace IO driver */
    epicsEnum16         tb4;        /* Trace flow */
    epicsEnum16         tb5;        /* Trace warning */
    epicsInt32          tiom;       /* Trace I/O mask */
    epicsEnum16         tib0;       /* Trace IO ASCII */
    epicsEnum16         tib1;       /* Trace IO escape */
    epicsEnum16         tib2;       /* Trace IO hex */
    epicsInt32          tinm;       /* Trace Info mask */
    epicsEnum16         tinb0;      /* Trace Info Time */
    epicsEnum16         tinb1;      /* Trace Info Port */
    epicsEnum16         tinb2;      /* Trace Info Source */
    epicsEnum16         tinb3;      /* Trace Info Thread */
    epicsInt32          tsiz;       /* Trace IO truncate size */
    char                tfil[40];   /* Trace IO file */
    epicsEnum16         auct;       /* Autoconnect */
    epicsEnum16         cnct;       /* Connect/Disconnect */
    epicsEnum16         enbl;       /* Enable/Disable */
    char *errs;                     /* Error string */
    epicsUInt8          aqr;        /* Abort queueRequest */
} asynRecord;

typedef enum {
	asynRecordNAME = 0,
	asynRecordDESC = 1,
	asynRecordASG = 2,
	asynRecordSCAN = 3,
	asynRecordPINI = 4,
	asynRecordPHAS = 5,
	asynRecordEVNT = 6,
	asynRecordTSE = 7,
	asynRecordTSEL = 8,
	asynRecordDTYP = 9,
	asynRecordDISV = 10,
	asynRecordDISA = 11,
	asynRecordSDIS = 12,
	asynRecordMLOK = 13,
	asynRecordMLIS = 14,
	asynRecordBKLNK = 15,
	asynRecordDISP = 16,
	asynRecordPROC = 17,
	asynRecordSTAT = 18,
	asynRecordSEVR = 19,
	asynRecordNSTA = 20,
	asynRecordNSEV = 21,
	asynRecordACKS = 22,
	asynRecordACKT = 23,
	asynRecordDISS = 24,
	asynRecordLCNT = 25,
	asynRecordPACT = 26,
	asynRecordPUTF = 27,
	asynRecordRPRO = 28,
	asynRecordASP = 29,
	asynRecordPPN = 30,
	asynRecordPPNR = 31,
	asynRecordSPVT = 32,
	asynRecordRSET = 33,
	asynRecordDSET = 34,
	asynRecordDPVT = 35,
	asynRecordRDES = 36,
	asynRecordLSET = 37,
	asynRecordPRIO = 38,
	asynRecordTPRO = 39,
	asynRecordBKPT = 40,
	asynRecordUDF = 41,
	asynRecordUDFS = 42,
	asynRecordTIME = 43,
	asynRecordFLNK = 44,
	asynRecordVAL = 45,
	asynRecordPORT = 46,
	asynRecordADDR = 47,
	asynRecordPCNCT = 48,
	asynRecordDRVINFO = 49,
	asynRecordREASON = 50,
	asynRecordTMOD = 51,
	asynRecordTMOT = 52,
	asynRecordIFACE = 53,
	asynRecordOCTETIV = 54,
	asynRecordOPTIONIV = 55,
	asynRecordGPIBIV = 56,
	asynRecordI32IV = 57,
	asynRecordUI32IV = 58,
	asynRecordF64IV = 59,
	asynRecordAOUT = 60,
	asynRecordOEOS = 61,
	asynRecordBOUT = 62,
	asynRecordOPTR = 63,
	asynRecordOMAX = 64,
	asynRecordNOWT = 65,
	asynRecordNAWT = 66,
	asynRecordOFMT = 67,
	asynRecordAINP = 68,
	asynRecordTINP = 69,
	asynRecordIEOS = 70,
	asynRecordBINP = 71,
	asynRecordIPTR = 72,
	asynRecordIMAX = 73,
	asynRecordNRRD = 74,
	asynRecordNORD = 75,
	asynRecordIFMT = 76,
	asynRecordEOMR = 77,
	asynRecordI32INP = 78,
	asynRecordI32OUT = 79,
	asynRecordUI32INP = 80,
	asynRecordUI32OUT = 81,
	asynRecordUI32MASK = 82,
	asynRecordF64INP = 83,
	asynRecordF64OUT = 84,
	asynRecordBAUD = 85,
	asynRecordLBAUD = 86,
	asynRecordPRTY = 87,
	asynRecordDBIT = 88,
	asynRecordSBIT = 89,
	asynRecordMCTL = 90,
	asynRecordFCTL = 91,
	asynRecordIXON = 92,
	asynRecordIXOFF = 93,
	asynRecordIXANY = 94,
	asynRecordHOSTINFO = 95,
	asynRecordDRTO = 96,
	asynRecordUCMD = 97,
	asynRecordACMD = 98,
	asynRecordSPR = 99,
	asynRecordTMSK = 100,
	asynRecordTB0 = 101,
	asynRecordTB1 = 102,
	asynRecordTB2 = 103,
	asynRecordTB3 = 104,
	asynRecordTB4 = 105,
	asynRecordTB5 = 106,
	asynRecordTIOM = 107,
	asynRecordTIB0 = 108,
	asynRecordTIB1 = 109,
	asynRecordTIB2 = 110,
	asynRecordTINM = 111,
	asynRecordTINB0 = 112,
	asynRecordTINB1 = 113,
	asynRecordTINB2 = 114,
	asynRecordTINB3 = 115,
	asynRecordTSIZ = 116,
	asynRecordTFIL = 117,
	asynRecordAUCT = 118,
	asynRecordCNCT = 119,
	asynRecordENBL = 120,
	asynRecordERRS = 121,
	asynRecordAQR = 122
} asynFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int asynRecordSizeOffset(dbRecordType *prt)
{
    asynRecord *prec = 0;

    if (prt->no_fields != 123) {
        cantProceed("IOC build or installation error:\n"
            "    The asynRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 123.\n",
            prt->no_fields);
    }
    prt->papFldDes[asynRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[asynRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[asynRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[asynRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[asynRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[asynRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[asynRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[asynRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[asynRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[asynRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[asynRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[asynRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[asynRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[asynRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[asynRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[asynRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[asynRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[asynRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[asynRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[asynRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[asynRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[asynRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[asynRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[asynRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[asynRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[asynRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[asynRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[asynRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[asynRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[asynRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[asynRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[asynRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[asynRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[asynRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[asynRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[asynRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[asynRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[asynRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[asynRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[asynRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[asynRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[asynRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[asynRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[asynRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[asynRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[asynRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[asynRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[asynRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[asynRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[asynRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[asynRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[asynRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[asynRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[asynRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[asynRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[asynRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[asynRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[asynRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[asynRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[asynRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[asynRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[asynRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[asynRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[asynRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[asynRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[asynRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[asynRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[asynRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[asynRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[asynRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[asynRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[asynRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[asynRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[asynRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[asynRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[asynRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[asynRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[asynRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[asynRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[asynRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[asynRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[asynRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[asynRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[asynRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[asynRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[asynRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[asynRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[asynRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[asynRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[asynRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[asynRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[asynRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[asynRecordPORT]->size = sizeof(prec->port);
    prt->papFldDes[asynRecordPORT]->offset = (unsigned short)((char *)&prec->port - (char *)prec);
    prt->papFldDes[asynRecordADDR]->size = sizeof(prec->addr);
    prt->papFldDes[asynRecordADDR]->offset = (unsigned short)((char *)&prec->addr - (char *)prec);
    prt->papFldDes[asynRecordPCNCT]->size = sizeof(prec->pcnct);
    prt->papFldDes[asynRecordPCNCT]->offset = (unsigned short)((char *)&prec->pcnct - (char *)prec);
    prt->papFldDes[asynRecordDRVINFO]->size = sizeof(prec->drvinfo);
    prt->papFldDes[asynRecordDRVINFO]->offset = (unsigned short)((char *)&prec->drvinfo - (char *)prec);
    prt->papFldDes[asynRecordREASON]->size = sizeof(prec->reason);
    prt->papFldDes[asynRecordREASON]->offset = (unsigned short)((char *)&prec->reason - (char *)prec);
    prt->papFldDes[asynRecordTMOD]->size = sizeof(prec->tmod);
    prt->papFldDes[asynRecordTMOD]->offset = (unsigned short)((char *)&prec->tmod - (char *)prec);
    prt->papFldDes[asynRecordTMOT]->size = sizeof(prec->tmot);
    prt->papFldDes[asynRecordTMOT]->offset = (unsigned short)((char *)&prec->tmot - (char *)prec);
    prt->papFldDes[asynRecordIFACE]->size = sizeof(prec->iface);
    prt->papFldDes[asynRecordIFACE]->offset = (unsigned short)((char *)&prec->iface - (char *)prec);
    prt->papFldDes[asynRecordOCTETIV]->size = sizeof(prec->octetiv);
    prt->papFldDes[asynRecordOCTETIV]->offset = (unsigned short)((char *)&prec->octetiv - (char *)prec);
    prt->papFldDes[asynRecordOPTIONIV]->size = sizeof(prec->optioniv);
    prt->papFldDes[asynRecordOPTIONIV]->offset = (unsigned short)((char *)&prec->optioniv - (char *)prec);
    prt->papFldDes[asynRecordGPIBIV]->size = sizeof(prec->gpibiv);
    prt->papFldDes[asynRecordGPIBIV]->offset = (unsigned short)((char *)&prec->gpibiv - (char *)prec);
    prt->papFldDes[asynRecordI32IV]->size = sizeof(prec->i32iv);
    prt->papFldDes[asynRecordI32IV]->offset = (unsigned short)((char *)&prec->i32iv - (char *)prec);
    prt->papFldDes[asynRecordUI32IV]->size = sizeof(prec->ui32iv);
    prt->papFldDes[asynRecordUI32IV]->offset = (unsigned short)((char *)&prec->ui32iv - (char *)prec);
    prt->papFldDes[asynRecordF64IV]->size = sizeof(prec->f64iv);
    prt->papFldDes[asynRecordF64IV]->offset = (unsigned short)((char *)&prec->f64iv - (char *)prec);
    prt->papFldDes[asynRecordAOUT]->size = sizeof(prec->aout);
    prt->papFldDes[asynRecordAOUT]->offset = (unsigned short)((char *)&prec->aout - (char *)prec);
    prt->papFldDes[asynRecordOEOS]->size = sizeof(prec->oeos);
    prt->papFldDes[asynRecordOEOS]->offset = (unsigned short)((char *)&prec->oeos - (char *)prec);
    prt->papFldDes[asynRecordBOUT]->size = sizeof(prec->bout);
    prt->papFldDes[asynRecordBOUT]->offset = (unsigned short)((char *)&prec->bout - (char *)prec);
    prt->papFldDes[asynRecordOPTR]->size = sizeof(prec->optr);
    prt->papFldDes[asynRecordOPTR]->offset = (unsigned short)((char *)&prec->optr - (char *)prec);
    prt->papFldDes[asynRecordOMAX]->size = sizeof(prec->omax);
    prt->papFldDes[asynRecordOMAX]->offset = (unsigned short)((char *)&prec->omax - (char *)prec);
    prt->papFldDes[asynRecordNOWT]->size = sizeof(prec->nowt);
    prt->papFldDes[asynRecordNOWT]->offset = (unsigned short)((char *)&prec->nowt - (char *)prec);
    prt->papFldDes[asynRecordNAWT]->size = sizeof(prec->nawt);
    prt->papFldDes[asynRecordNAWT]->offset = (unsigned short)((char *)&prec->nawt - (char *)prec);
    prt->papFldDes[asynRecordOFMT]->size = sizeof(prec->ofmt);
    prt->papFldDes[asynRecordOFMT]->offset = (unsigned short)((char *)&prec->ofmt - (char *)prec);
    prt->papFldDes[asynRecordAINP]->size = sizeof(prec->ainp);
    prt->papFldDes[asynRecordAINP]->offset = (unsigned short)((char *)&prec->ainp - (char *)prec);
    prt->papFldDes[asynRecordTINP]->size = sizeof(prec->tinp);
    prt->papFldDes[asynRecordTINP]->offset = (unsigned short)((char *)&prec->tinp - (char *)prec);
    prt->papFldDes[asynRecordIEOS]->size = sizeof(prec->ieos);
    prt->papFldDes[asynRecordIEOS]->offset = (unsigned short)((char *)&prec->ieos - (char *)prec);
    prt->papFldDes[asynRecordBINP]->size = sizeof(prec->binp);
    prt->papFldDes[asynRecordBINP]->offset = (unsigned short)((char *)&prec->binp - (char *)prec);
    prt->papFldDes[asynRecordIPTR]->size = sizeof(prec->iptr);
    prt->papFldDes[asynRecordIPTR]->offset = (unsigned short)((char *)&prec->iptr - (char *)prec);
    prt->papFldDes[asynRecordIMAX]->size = sizeof(prec->imax);
    prt->papFldDes[asynRecordIMAX]->offset = (unsigned short)((char *)&prec->imax - (char *)prec);
    prt->papFldDes[asynRecordNRRD]->size = sizeof(prec->nrrd);
    prt->papFldDes[asynRecordNRRD]->offset = (unsigned short)((char *)&prec->nrrd - (char *)prec);
    prt->papFldDes[asynRecordNORD]->size = sizeof(prec->nord);
    prt->papFldDes[asynRecordNORD]->offset = (unsigned short)((char *)&prec->nord - (char *)prec);
    prt->papFldDes[asynRecordIFMT]->size = sizeof(prec->ifmt);
    prt->papFldDes[asynRecordIFMT]->offset = (unsigned short)((char *)&prec->ifmt - (char *)prec);
    prt->papFldDes[asynRecordEOMR]->size = sizeof(prec->eomr);
    prt->papFldDes[asynRecordEOMR]->offset = (unsigned short)((char *)&prec->eomr - (char *)prec);
    prt->papFldDes[asynRecordI32INP]->size = sizeof(prec->i32inp);
    prt->papFldDes[asynRecordI32INP]->offset = (unsigned short)((char *)&prec->i32inp - (char *)prec);
    prt->papFldDes[asynRecordI32OUT]->size = sizeof(prec->i32out);
    prt->papFldDes[asynRecordI32OUT]->offset = (unsigned short)((char *)&prec->i32out - (char *)prec);
    prt->papFldDes[asynRecordUI32INP]->size = sizeof(prec->ui32inp);
    prt->papFldDes[asynRecordUI32INP]->offset = (unsigned short)((char *)&prec->ui32inp - (char *)prec);
    prt->papFldDes[asynRecordUI32OUT]->size = sizeof(prec->ui32out);
    prt->papFldDes[asynRecordUI32OUT]->offset = (unsigned short)((char *)&prec->ui32out - (char *)prec);
    prt->papFldDes[asynRecordUI32MASK]->size = sizeof(prec->ui32mask);
    prt->papFldDes[asynRecordUI32MASK]->offset = (unsigned short)((char *)&prec->ui32mask - (char *)prec);
    prt->papFldDes[asynRecordF64INP]->size = sizeof(prec->f64inp);
    prt->papFldDes[asynRecordF64INP]->offset = (unsigned short)((char *)&prec->f64inp - (char *)prec);
    prt->papFldDes[asynRecordF64OUT]->size = sizeof(prec->f64out);
    prt->papFldDes[asynRecordF64OUT]->offset = (unsigned short)((char *)&prec->f64out - (char *)prec);
    prt->papFldDes[asynRecordBAUD]->size = sizeof(prec->baud);
    prt->papFldDes[asynRecordBAUD]->offset = (unsigned short)((char *)&prec->baud - (char *)prec);
    prt->papFldDes[asynRecordLBAUD]->size = sizeof(prec->lbaud);
    prt->papFldDes[asynRecordLBAUD]->offset = (unsigned short)((char *)&prec->lbaud - (char *)prec);
    prt->papFldDes[asynRecordPRTY]->size = sizeof(prec->prty);
    prt->papFldDes[asynRecordPRTY]->offset = (unsigned short)((char *)&prec->prty - (char *)prec);
    prt->papFldDes[asynRecordDBIT]->size = sizeof(prec->dbit);
    prt->papFldDes[asynRecordDBIT]->offset = (unsigned short)((char *)&prec->dbit - (char *)prec);
    prt->papFldDes[asynRecordSBIT]->size = sizeof(prec->sbit);
    prt->papFldDes[asynRecordSBIT]->offset = (unsigned short)((char *)&prec->sbit - (char *)prec);
    prt->papFldDes[asynRecordMCTL]->size = sizeof(prec->mctl);
    prt->papFldDes[asynRecordMCTL]->offset = (unsigned short)((char *)&prec->mctl - (char *)prec);
    prt->papFldDes[asynRecordFCTL]->size = sizeof(prec->fctl);
    prt->papFldDes[asynRecordFCTL]->offset = (unsigned short)((char *)&prec->fctl - (char *)prec);
    prt->papFldDes[asynRecordIXON]->size = sizeof(prec->ixon);
    prt->papFldDes[asynRecordIXON]->offset = (unsigned short)((char *)&prec->ixon - (char *)prec);
    prt->papFldDes[asynRecordIXOFF]->size = sizeof(prec->ixoff);
    prt->papFldDes[asynRecordIXOFF]->offset = (unsigned short)((char *)&prec->ixoff - (char *)prec);
    prt->papFldDes[asynRecordIXANY]->size = sizeof(prec->ixany);
    prt->papFldDes[asynRecordIXANY]->offset = (unsigned short)((char *)&prec->ixany - (char *)prec);
    prt->papFldDes[asynRecordHOSTINFO]->size = sizeof(prec->hostinfo);
    prt->papFldDes[asynRecordHOSTINFO]->offset = (unsigned short)((char *)&prec->hostinfo - (char *)prec);
    prt->papFldDes[asynRecordDRTO]->size = sizeof(prec->drto);
    prt->papFldDes[asynRecordDRTO]->offset = (unsigned short)((char *)&prec->drto - (char *)prec);
    prt->papFldDes[asynRecordUCMD]->size = sizeof(prec->ucmd);
    prt->papFldDes[asynRecordUCMD]->offset = (unsigned short)((char *)&prec->ucmd - (char *)prec);
    prt->papFldDes[asynRecordACMD]->size = sizeof(prec->acmd);
    prt->papFldDes[asynRecordACMD]->offset = (unsigned short)((char *)&prec->acmd - (char *)prec);
    prt->papFldDes[asynRecordSPR]->size = sizeof(prec->spr);
    prt->papFldDes[asynRecordSPR]->offset = (unsigned short)((char *)&prec->spr - (char *)prec);
    prt->papFldDes[asynRecordTMSK]->size = sizeof(prec->tmsk);
    prt->papFldDes[asynRecordTMSK]->offset = (unsigned short)((char *)&prec->tmsk - (char *)prec);
    prt->papFldDes[asynRecordTB0]->size = sizeof(prec->tb0);
    prt->papFldDes[asynRecordTB0]->offset = (unsigned short)((char *)&prec->tb0 - (char *)prec);
    prt->papFldDes[asynRecordTB1]->size = sizeof(prec->tb1);
    prt->papFldDes[asynRecordTB1]->offset = (unsigned short)((char *)&prec->tb1 - (char *)prec);
    prt->papFldDes[asynRecordTB2]->size = sizeof(prec->tb2);
    prt->papFldDes[asynRecordTB2]->offset = (unsigned short)((char *)&prec->tb2 - (char *)prec);
    prt->papFldDes[asynRecordTB3]->size = sizeof(prec->tb3);
    prt->papFldDes[asynRecordTB3]->offset = (unsigned short)((char *)&prec->tb3 - (char *)prec);
    prt->papFldDes[asynRecordTB4]->size = sizeof(prec->tb4);
    prt->papFldDes[asynRecordTB4]->offset = (unsigned short)((char *)&prec->tb4 - (char *)prec);
    prt->papFldDes[asynRecordTB5]->size = sizeof(prec->tb5);
    prt->papFldDes[asynRecordTB5]->offset = (unsigned short)((char *)&prec->tb5 - (char *)prec);
    prt->papFldDes[asynRecordTIOM]->size = sizeof(prec->tiom);
    prt->papFldDes[asynRecordTIOM]->offset = (unsigned short)((char *)&prec->tiom - (char *)prec);
    prt->papFldDes[asynRecordTIB0]->size = sizeof(prec->tib0);
    prt->papFldDes[asynRecordTIB0]->offset = (unsigned short)((char *)&prec->tib0 - (char *)prec);
    prt->papFldDes[asynRecordTIB1]->size = sizeof(prec->tib1);
    prt->papFldDes[asynRecordTIB1]->offset = (unsigned short)((char *)&prec->tib1 - (char *)prec);
    prt->papFldDes[asynRecordTIB2]->size = sizeof(prec->tib2);
    prt->papFldDes[asynRecordTIB2]->offset = (unsigned short)((char *)&prec->tib2 - (char *)prec);
    prt->papFldDes[asynRecordTINM]->size = sizeof(prec->tinm);
    prt->papFldDes[asynRecordTINM]->offset = (unsigned short)((char *)&prec->tinm - (char *)prec);
    prt->papFldDes[asynRecordTINB0]->size = sizeof(prec->tinb0);
    prt->papFldDes[asynRecordTINB0]->offset = (unsigned short)((char *)&prec->tinb0 - (char *)prec);
    prt->papFldDes[asynRecordTINB1]->size = sizeof(prec->tinb1);
    prt->papFldDes[asynRecordTINB1]->offset = (unsigned short)((char *)&prec->tinb1 - (char *)prec);
    prt->papFldDes[asynRecordTINB2]->size = sizeof(prec->tinb2);
    prt->papFldDes[asynRecordTINB2]->offset = (unsigned short)((char *)&prec->tinb2 - (char *)prec);
    prt->papFldDes[asynRecordTINB3]->size = sizeof(prec->tinb3);
    prt->papFldDes[asynRecordTINB3]->offset = (unsigned short)((char *)&prec->tinb3 - (char *)prec);
    prt->papFldDes[asynRecordTSIZ]->size = sizeof(prec->tsiz);
    prt->papFldDes[asynRecordTSIZ]->offset = (unsigned short)((char *)&prec->tsiz - (char *)prec);
    prt->papFldDes[asynRecordTFIL]->size = sizeof(prec->tfil);
    prt->papFldDes[asynRecordTFIL]->offset = (unsigned short)((char *)&prec->tfil - (char *)prec);
    prt->papFldDes[asynRecordAUCT]->size = sizeof(prec->auct);
    prt->papFldDes[asynRecordAUCT]->offset = (unsigned short)((char *)&prec->auct - (char *)prec);
    prt->papFldDes[asynRecordCNCT]->size = sizeof(prec->cnct);
    prt->papFldDes[asynRecordCNCT]->offset = (unsigned short)((char *)&prec->cnct - (char *)prec);
    prt->papFldDes[asynRecordENBL]->size = sizeof(prec->enbl);
    prt->papFldDes[asynRecordENBL]->offset = (unsigned short)((char *)&prec->enbl - (char *)prec);
    prt->papFldDes[asynRecordERRS]->size = sizeof(prec->errs);
    prt->papFldDes[asynRecordERRS]->offset = (unsigned short)((char *)&prec->errs - (char *)prec);
    prt->papFldDes[asynRecordAQR]->size = sizeof(prec->aqr);
    prt->papFldDes[asynRecordAQR]->offset = (unsigned short)((char *)&prec->aqr - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(asynRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_asynRecord_H */
