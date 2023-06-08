/* tsubRecord.h generated from tsubRecord.dbd */

#ifndef INC_tsubRecord_H
#define INC_tsubRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "devSup.h"
#include "epicsTime.h"

typedef struct tsubRecord {
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
    epicsFloat64        val;        /* Result */
    char                inam[16];   /* Init Routine Name */
    char                snam[16];   /* Subroutine Name */
    long (*sadr)(struct tsubRecord *); /* Subroutine Address */
    char                egu[16];    /* Units Name */
    epicsFloat32        hopr;       /* High Operating Rng */
    epicsFloat32        lopr;       /* Low Operating Range */
    epicsFloat32        hihi;       /* Hihi Alarm Limit */
    epicsFloat32        lolo;       /* Lolo Alarm Limit */
    epicsFloat32        high;       /* High Alarm Limit */
    epicsFloat32        low;        /* Low Alarm Limit */
    epicsInt16          prec;       /* Display Precision */
    epicsEnum16         brsv;       /* Bad Return Severity */
    epicsEnum16         hhsv;       /* Hihi Severity */
    epicsEnum16         llsv;       /* Lolo Severity */
    epicsEnum16         hsv;        /* High Severity */
    epicsEnum16         lsv;        /* Low Severity */
    epicsFloat64        hyst;       /* Alarm Deadband */
    epicsFloat64        adel;       /* Archive Deadband */
    epicsFloat64        mdel;       /* Monitor Deadband */
    epicsFloat64        lalm;       /* Last Value Alarmed */
    epicsFloat64        alst;       /* Last Value Archived */
    epicsFloat64        mlst;       /* Last Value Monitored */
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
    DBLINK              ota0;       /* Output Link A0 */
    DBLINK              ota1;       /* Output Link A1 */
    DBLINK              ota2;       /* Output Link A2 */
    DBLINK              ota3;       /* Output Link A3 */
    DBLINK              ota4;       /* Output Link A4 */
    DBLINK              ota5;       /* Output Link A5 */
    DBLINK              ota6;       /* Output Link A6 */
    DBLINK              ota7;       /* Output Link A7 */
    DBLINK              ota8;       /* Output Link A8 */
    DBLINK              ota9;       /* Output Link A9 */
    DBLINK              otb0;       /* Output Link B0 */
    DBLINK              otb1;       /* Output Link B1 */
    DBLINK              otb2;       /* Output Link B2 */
    DBLINK              otb3;       /* Output Link B3 */
    DBLINK              otb4;       /* Output Link B4 */
    DBLINK              otb5;       /* Output Link B5 */
    DBLINK              otb6;       /* Output Link B6 */
    DBLINK              otb7;       /* Output Link B7 */
    DBLINK              otb8;       /* Output Link B8 */
    DBLINK              otb9;       /* Output Link B9 */
    DBLINK              otc0;       /* Output Link C0 */
    DBLINK              otc1;       /* Output Link C1 */
    DBLINK              otc2;       /* Output Link C2 */
    DBLINK              otc3;       /* Output Link C3 */
    DBLINK              otc4;       /* Output Link C4 */
    DBLINK              otc5;       /* Output Link C5 */
    DBLINK              otc6;       /* Output Link C6 */
    DBLINK              otc7;       /* Output Link C7 */
    DBLINK              otc8;       /* Output Link C8 */
    DBLINK              otc9;       /* Output Link C9 */
    DBLINK              otd0;       /* Output Link D0 */
    DBLINK              otd1;       /* Output Link D1 */
    DBLINK              otd2;       /* Output Link D2 */
    DBLINK              otd3;       /* Output Link D3 */
    DBLINK              otd4;       /* Output Link D4 */
    DBLINK              otd5;       /* Output Link D5 */
    DBLINK              otd6;       /* Output Link D6 */
    DBLINK              otd7;       /* Output Link D7 */
    DBLINK              otd8;       /* Output Link D8 */
    DBLINK              otd9;       /* Output Link D9 */
    DBLINK              ote0;       /* Output Link E0 */
    DBLINK              ote1;       /* Output Link E1 */
    DBLINK              ote2;       /* Output Link E2 */
    DBLINK              ote3;       /* Output Link E3 */
    DBLINK              ote4;       /* Output Link E4 */
    DBLINK              ote5;       /* Output Link E5 */
    DBLINK              ote6;       /* Output Link E6 */
    DBLINK              ote7;       /* Output Link E7 */
    DBLINK              ote8;       /* Output Link E8 */
    DBLINK              ote9;       /* Output Link E9 */
    DBLINK              otf0;       /* Output Link F0 */
    DBLINK              otf1;       /* Output Link F1 */
    DBLINK              otf2;       /* Output Link F2 */
    DBLINK              otf3;       /* Output Link F3 */
    DBLINK              otf4;       /* Output Link F4 */
    DBLINK              otf5;       /* Output Link F5 */
    DBLINK              otf6;       /* Output Link F6 */
    DBLINK              otf7;       /* Output Link F7 */
    DBLINK              otf8;       /* Output Link F8 */
    DBLINK              otf9;       /* Output Link F9 */
    epicsFloat64        oa;         /* Output Value A */
    epicsFloat64        ob;         /* Output Value B */
    epicsFloat64        oc;         /* Output Value C */
    epicsFloat64        od;         /* Output Value D */
    epicsFloat64        oe;         /* Output Value E */
    epicsFloat64        of;         /* Output Value F */
    epicsFloat64        og;         /* Output Value G */
    epicsFloat64        oh;         /* Output Value H */
    epicsFloat64        oi;         /* Output Value I */
    epicsFloat64        oj;         /* Output Value J */
    epicsFloat64        oa0;        /* Output Value A0 */
    epicsFloat64        oa1;        /* Output Value A1 */
    epicsFloat64        oa2;        /* Output Value A2 */
    epicsFloat64        oa3;        /* Output Value A3 */
    epicsFloat64        oa4;        /* Output Value A4 */
    epicsFloat64        oa5;        /* Output Value A5 */
    epicsFloat64        oa6;        /* Output Value A6 */
    epicsFloat64        oa7;        /* Output Value A7 */
    epicsFloat64        oa8;        /* Output Value A8 */
    epicsFloat64        oa9;        /* Output Value A9 */
    epicsFloat64        ob0;        /* Output Value B0 */
    epicsFloat64        ob1;        /* Output Value B1 */
    epicsFloat64        ob2;        /* Output Value B2 */
    epicsFloat64        ob3;        /* Output Value B3 */
    epicsFloat64        ob4;        /* Output Value B4 */
    epicsFloat64        ob5;        /* Output Value B5 */
    epicsFloat64        ob6;        /* Output Value B6 */
    epicsFloat64        ob7;        /* Output Value B7 */
    epicsFloat64        ob8;        /* Output Value B8 */
    epicsFloat64        ob9;        /* Output Value B9 */
    epicsFloat64        oc0;        /* Output Value C0 */
    epicsFloat64        oc1;        /* Output Value C1 */
    epicsFloat64        oc2;        /* Output Value C2 */
    epicsFloat64        oc3;        /* Output Value C3 */
    epicsFloat64        oc4;        /* Output Value C4 */
    epicsFloat64        oc5;        /* Output Value C5 */
    epicsFloat64        oc6;        /* Output Value C6 */
    epicsFloat64        oc7;        /* Output Value C7 */
    epicsFloat64        oc8;        /* Output Value C8 */
    epicsFloat64        oc9;        /* Output Value C9 */
    epicsFloat64        od0;        /* Output Value D0 */
    epicsFloat64        od1;        /* Output Value D1 */
    epicsFloat64        od2;        /* Output Value D2 */
    epicsFloat64        od3;        /* Output Value D3 */
    epicsFloat64        od4;        /* Output Value D4 */
    epicsFloat64        od5;        /* Output Value D5 */
    epicsFloat64        od6;        /* Output Value D6 */
    epicsFloat64        od7;        /* Output Value D7 */
    epicsFloat64        od8;        /* Output Value D8 */
    epicsFloat64        od9;        /* Output Value D9 */
    epicsFloat64        oe0;        /* Output Value E0 */
    epicsFloat64        oe1;        /* Output Value E1 */
    epicsFloat64        oe2;        /* Output Value E2 */
    epicsFloat64        oe3;        /* Output Value E3 */
    epicsFloat64        oe4;        /* Output Value E4 */
    epicsFloat64        oe5;        /* Output Value E5 */
    epicsFloat64        oe6;        /* Output Value E6 */
    epicsFloat64        oe7;        /* Output Value E7 */
    epicsFloat64        oe8;        /* Output Value E8 */
    epicsFloat64        oe9;        /* Output Value E9 */
    epicsFloat64        of0;        /* Output Value F0 */
    epicsFloat64        of1;        /* Output Value F1 */
    epicsFloat64        of2;        /* Output Value F2 */
    epicsFloat64        of3;        /* Output Value F3 */
    epicsFloat64        of4;        /* Output Value F4 */
    epicsFloat64        of5;        /* Output Value F5 */
    epicsFloat64        of6;        /* Output Value F6 */
    epicsFloat64        of7;        /* Output Value F7 */
    epicsFloat64        of8;        /* Output Value F8 */
    epicsFloat64        of9;        /* Output Value F9 */
    epicsFloat64        loa;        /* Prev Value of OA */
    epicsFloat64        lob;        /* Prev Value of OB */
    epicsFloat64        loc;        /* Prev Value of OC */
    epicsFloat64        lod;        /* Prev Value of OD */
    epicsFloat64        loe;        /* Prev Value of OE */
    epicsFloat64        lof;        /* Prev Value of OF */
    epicsFloat64        log;        /* Prev Value of OG */
    epicsFloat64        loh;        /* Prev Value of OH */
    epicsFloat64        loi;        /* Prev Value of OI */
    epicsFloat64        loj;        /* Prev Value of OJ */
    epicsFloat64        loa0;       /* Prev Value of OA0 */
    epicsFloat64        loa1;       /* Prev Value of OA1 */
    epicsFloat64        loa2;       /* Prev Value of OA2 */
    epicsFloat64        loa3;       /* Prev Value of OA3 */
    epicsFloat64        loa4;       /* Prev Value of OA4 */
    epicsFloat64        loa5;       /* Prev Value of OA5 */
    epicsFloat64        loa6;       /* Prev Value of OA6 */
    epicsFloat64        loa7;       /* Prev Value of OA7 */
    epicsFloat64        loa8;       /* Prev Value of OA8 */
    epicsFloat64        loa9;       /* Prev Value of OA9 */
    epicsFloat64        lob0;       /* Prev Value of OB0 */
    epicsFloat64        lob1;       /* Prev Value of OB1 */
    epicsFloat64        lob2;       /* Prev Value of OB2 */
    epicsFloat64        lob3;       /* Prev Value of OB3 */
    epicsFloat64        lob4;       /* Prev Value of OB4 */
    epicsFloat64        lob5;       /* Prev Value of OB5 */
    epicsFloat64        lob6;       /* Prev Value of OB6 */
    epicsFloat64        lob7;       /* Prev Value of OB7 */
    epicsFloat64        lob8;       /* Prev Value of OB8 */
    epicsFloat64        lob9;       /* Prev Value of OB9 */
    epicsFloat64        loc0;       /* Prev Value of OC0 */
    epicsFloat64        loc1;       /* Prev Value of OC1 */
    epicsFloat64        loc2;       /* Prev Value of OC2 */
    epicsFloat64        loc3;       /* Prev Value of OC3 */
    epicsFloat64        loc4;       /* Prev Value of OC4 */
    epicsFloat64        loc5;       /* Prev Value of OC5 */
    epicsFloat64        loc6;       /* Prev Value of OC6 */
    epicsFloat64        loc7;       /* Prev Value of OC7 */
    epicsFloat64        loc8;       /* Prev Value of OC8 */
    epicsFloat64        loc9;       /* Prev Value of OC9 */
    epicsFloat64        lod0;       /* Prev Value of OD0 */
    epicsFloat64        lod1;       /* Prev Value of OD1 */
    epicsFloat64        lod2;       /* Prev Value of OD2 */
    epicsFloat64        lod3;       /* Prev Value of OD3 */
    epicsFloat64        lod4;       /* Prev Value of OD4 */
    epicsFloat64        lod5;       /* Prev Value of OD5 */
    epicsFloat64        lod6;       /* Prev Value of OD6 */
    epicsFloat64        lod7;       /* Prev Value of OD7 */
    epicsFloat64        lod8;       /* Prev Value of OD8 */
    epicsFloat64        lod9;       /* Prev Value of OD9 */
    epicsFloat64        loe0;       /* Prev Value of OE0 */
    epicsFloat64        loe1;       /* Prev Value of OE1 */
    epicsFloat64        loe2;       /* Prev Value of OE2 */
    epicsFloat64        loe3;       /* Prev Value of OE3 */
    epicsFloat64        loe4;       /* Prev Value of OE4 */
    epicsFloat64        loe5;       /* Prev Value of OE5 */
    epicsFloat64        loe6;       /* Prev Value of OE6 */
    epicsFloat64        loe7;       /* Prev Value of OE7 */
    epicsFloat64        loe8;       /* Prev Value of OE8 */
    epicsFloat64        loe9;       /* Prev Value of OE9 */
    epicsFloat64        lof0;       /* Prev Value of OF0 */
    epicsFloat64        lof1;       /* Prev Value of OF1 */
    epicsFloat64        lof2;       /* Prev Value of OF2 */
    epicsFloat64        lof3;       /* Prev Value of OF3 */
    epicsFloat64        lof4;       /* Prev Value of OF4 */
    epicsFloat64        lof5;       /* Prev Value of OF5 */
    epicsFloat64        lof6;       /* Prev Value of OF6 */
    epicsFloat64        lof7;       /* Prev Value of OF7 */
    epicsFloat64        lof8;       /* Prev Value of OF8 */
    epicsFloat64        lof9;       /* Prev Value of OF9 */
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
    DBLINK              inpk;       /* Input K */
    DBLINK              inpl;       /* Input L */
    DBLINK              inpm;       /* Input M */
    DBLINK              inpn;       /* Input N */
    DBLINK              inpo;       /* Input O */
    DBLINK              inpp;       /* Input P */
    DBLINK              inpq;       /* Input Q */
    DBLINK              inpr;       /* Input R */
    DBLINK              inps;       /* Input S */
    DBLINK              inpt;       /* Input T */
    DBLINK              ipa0;       /* Input A0 */
    DBLINK              ipa1;       /* Input A1 */
    DBLINK              ipa2;       /* Input A2 */
    DBLINK              ipa3;       /* Input A3 */
    DBLINK              ipa4;       /* Input A4 */
    DBLINK              ipa5;       /* Input A5 */
    DBLINK              ipa6;       /* Input A6 */
    DBLINK              ipa7;       /* Input A7 */
    DBLINK              ipa8;       /* Input A8 */
    DBLINK              ipa9;       /* Input A9 */
    DBLINK              ipb0;       /* Input B0 */
    DBLINK              ipb1;       /* Input B1 */
    DBLINK              ipb2;       /* Input B2 */
    DBLINK              ipb3;       /* Input B3 */
    DBLINK              ipb4;       /* Input B4 */
    DBLINK              ipb5;       /* Input B5 */
    DBLINK              ipb6;       /* Input B6 */
    DBLINK              ipb7;       /* Input B7 */
    DBLINK              ipb8;       /* Input B8 */
    DBLINK              ipb9;       /* Input B9 */
    DBLINK              ipc0;       /* Input C0 */
    DBLINK              ipc1;       /* Input C1 */
    DBLINK              ipc2;       /* Input C2 */
    DBLINK              ipc3;       /* Input C3 */
    DBLINK              ipc4;       /* Input C4 */
    DBLINK              ipc5;       /* Input C5 */
    DBLINK              ipc6;       /* Input C6 */
    DBLINK              ipc7;       /* Input C7 */
    DBLINK              ipc8;       /* Input C8 */
    DBLINK              ipc9;       /* Input C9 */
    DBLINK              ipd0;       /* Input D0 */
    DBLINK              ipd1;       /* Input D1 */
    DBLINK              ipd2;       /* Input D2 */
    DBLINK              ipd3;       /* Input D3 */
    DBLINK              ipd4;       /* Input D4 */
    DBLINK              ipd5;       /* Input D5 */
    DBLINK              ipd6;       /* Input D6 */
    DBLINK              ipd7;       /* Input D7 */
    DBLINK              ipd8;       /* Input D8 */
    DBLINK              ipd9;       /* Input D9 */
    DBLINK              ipe0;       /* Input E0 */
    DBLINK              ipe1;       /* Input E1 */
    DBLINK              ipe2;       /* Input E2 */
    DBLINK              ipe3;       /* Input E3 */
    DBLINK              ipe4;       /* Input E4 */
    DBLINK              ipe5;       /* Input E5 */
    DBLINK              ipe6;       /* Input E6 */
    DBLINK              ipe7;       /* Input E7 */
    DBLINK              ipe8;       /* Input E8 */
    DBLINK              ipe9;       /* Input E9 */
    DBLINK              ipf0;       /* Input F0 */
    DBLINK              ipf1;       /* Input F1 */
    DBLINK              ipf2;       /* Input F2 */
    DBLINK              ipf3;       /* Input F3 */
    DBLINK              ipf4;       /* Input F4 */
    DBLINK              ipf5;       /* Input F5 */
    DBLINK              ipf6;       /* Input F6 */
    DBLINK              ipf7;       /* Input F7 */
    DBLINK              ipf8;       /* Input F8 */
    DBLINK              ipf9;       /* Input F9 */
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
    epicsFloat64        m;          /* Value of Input M */
    epicsFloat64        n;          /* Value of Input N */
    epicsFloat64        o;          /* Value of Input O */
    epicsFloat64        p;          /* Value of Input P */
    epicsFloat64        q;          /* Value of Input Q */
    epicsFloat64        r;          /* Value of Input R */
    epicsFloat64        s;          /* Value of Input S */
    epicsFloat64        t;          /* Value of Input T */
    epicsFloat64        a0;         /* Value of Input A0 */
    epicsFloat64        a1;         /* Value of Input A1 */
    epicsFloat64        a2;         /* Value of Input A2 */
    epicsFloat64        a3;         /* Value of Input A3 */
    epicsFloat64        a4;         /* Value of Input A4 */
    epicsFloat64        a5;         /* Value of Input A5 */
    epicsFloat64        a6;         /* Value of Input A6 */
    epicsFloat64        a7;         /* Value of Input A7 */
    epicsFloat64        a8;         /* Value of Input A8 */
    epicsFloat64        a9;         /* Value of Input A9 */
    epicsFloat64        b0;         /* Value of Input B0 */
    epicsFloat64        b1;         /* Value of Input B1 */
    epicsFloat64        b2;         /* Value of Input B2 */
    epicsFloat64        b3;         /* Value of Input B3 */
    epicsFloat64        b4;         /* Value of Input B4 */
    epicsFloat64        b5;         /* Value of Input B5 */
    epicsFloat64        b6;         /* Value of Input B6 */
    epicsFloat64        b7;         /* Value of Input B7 */
    epicsFloat64        b8;         /* Value of Input B8 */
    epicsFloat64        b9;         /* Value of Input B9 */
    epicsFloat64        c0;         /* Value of Input C0 */
    epicsFloat64        c1;         /* Value of Input C1 */
    epicsFloat64        c2;         /* Value of Input C2 */
    epicsFloat64        c3;         /* Value of Input C3 */
    epicsFloat64        c4;         /* Value of Input C4 */
    epicsFloat64        c5;         /* Value of Input C5 */
    epicsFloat64        c6;         /* Value of Input C6 */
    epicsFloat64        c7;         /* Value of Input C7 */
    epicsFloat64        c8;         /* Value of Input C8 */
    epicsFloat64        c9;         /* Value of Input C9 */
    epicsFloat64        d0;         /* Value of Input D0 */
    epicsFloat64        d1;         /* Value of Input D1 */
    epicsFloat64        d2;         /* Value of Input D2 */
    epicsFloat64        d3;         /* Value of Input D3 */
    epicsFloat64        d4;         /* Value of Input D4 */
    epicsFloat64        d5;         /* Value of Input D5 */
    epicsFloat64        d6;         /* Value of Input D6 */
    epicsFloat64        d7;         /* Value of Input D7 */
    epicsFloat64        d8;         /* Value of Input D8 */
    epicsFloat64        d9;         /* Value of Input D9 */
    epicsFloat64        e0;         /* Value of Input E0 */
    epicsFloat64        e1;         /* Value of Input E1 */
    epicsFloat64        e2;         /* Value of Input E2 */
    epicsFloat64        e3;         /* Value of Input E3 */
    epicsFloat64        e4;         /* Value of Input E4 */
    epicsFloat64        e5;         /* Value of Input E5 */
    epicsFloat64        e6;         /* Value of Input E6 */
    epicsFloat64        e7;         /* Value of Input E7 */
    epicsFloat64        e8;         /* Value of Input E8 */
    epicsFloat64        e9;         /* Value of Input E9 */
    epicsFloat64        f0;         /* Value of Input F0 */
    epicsFloat64        f1;         /* Value of Input F1 */
    epicsFloat64        f2;         /* Value of Input F2 */
    epicsFloat64        f3;         /* Value of Input F3 */
    epicsFloat64        f4;         /* Value of Input F4 */
    epicsFloat64        f5;         /* Value of Input F5 */
    epicsFloat64        f6;         /* Value of Input F6 */
    epicsFloat64        f7;         /* Value of Input F7 */
    epicsFloat64        f8;         /* Value of Input F8 */
    epicsFloat64        f9;         /* Value of Input F9 */
    epicsFloat64        la;         /* Prev Value of A */
    epicsFloat64        lb;         /* Prev Value of B */
    epicsFloat64        lc;         /* Prev Value of C */
    epicsFloat64        ld;         /* Prev Value of D */
    epicsFloat64        le;         /* Prev Value of E */
    epicsFloat64        lf;         /* Prev Value of F */
    epicsFloat64        lg;         /* Prev Value of G */
    epicsFloat64        lh;         /* Prev Value of H */
    epicsFloat64        li;         /* Prev Value of I */
    epicsFloat64        lj;         /* Prev Value of J */
    epicsFloat64        lk;         /* Prev Value of K */
    epicsFloat64        ll;         /* Prev Value of L */
    epicsFloat64        lm;         /* Prev Value of M */
    epicsFloat64        ln;         /* Prev Value of N */
    epicsFloat64        lo;         /* Prev Value of O */
    epicsFloat64        lp;         /* Prev Value of P */
    epicsFloat64        lq;         /* Prev Value of Q */
    epicsFloat64        lr;         /* Prev Value of R */
    epicsFloat64        ls;         /* Prev Value of S */
    epicsFloat64        lt;         /* Prev Value of T */
    epicsFloat64        la0;        /* Prev Value of A0 */
    epicsFloat64        la1;        /* Prev Value of A1 */
    epicsFloat64        la2;        /* Prev Value of A2 */
    epicsFloat64        la3;        /* Prev Value of A3 */
    epicsFloat64        la4;        /* Prev Value of A4 */
    epicsFloat64        la5;        /* Prev Value of A5 */
    epicsFloat64        la6;        /* Prev Value of A6 */
    epicsFloat64        la7;        /* Prev Value of A7 */
    epicsFloat64        la8;        /* Prev Value of A8 */
    epicsFloat64        la9;        /* Prev Value of A9 */
    epicsFloat64        lb0;        /* Prev Value of B0 */
    epicsFloat64        lb1;        /* Prev Value of B1 */
    epicsFloat64        lb2;        /* Prev Value of B2 */
    epicsFloat64        lb3;        /* Prev Value of B3 */
    epicsFloat64        lb4;        /* Prev Value of B4 */
    epicsFloat64        lb5;        /* Prev Value of B5 */
    epicsFloat64        lb6;        /* Prev Value of B6 */
    epicsFloat64        lb7;        /* Prev Value of B7 */
    epicsFloat64        lb8;        /* Prev Value of B8 */
    epicsFloat64        lb9;        /* Prev Value of B9 */
    epicsFloat64        lc0;        /* Prev Value of C0 */
    epicsFloat64        lc1;        /* Prev Value of C1 */
    epicsFloat64        lc2;        /* Prev Value of C2 */
    epicsFloat64        lc3;        /* Prev Value of C3 */
    epicsFloat64        lc4;        /* Prev Value of C4 */
    epicsFloat64        lc5;        /* Prev Value of C5 */
    epicsFloat64        lc6;        /* Prev Value of C6 */
    epicsFloat64        lc7;        /* Prev Value of C7 */
    epicsFloat64        lc8;        /* Prev Value of C8 */
    epicsFloat64        lc9;        /* Prev Value of C9 */
    epicsFloat64        ld0;        /* Prev Value of D0 */
    epicsFloat64        ld1;        /* Prev Value of D1 */
    epicsFloat64        ld2;        /* Prev Value of D2 */
    epicsFloat64        ld3;        /* Prev Value of D3 */
    epicsFloat64        ld4;        /* Prev Value of D4 */
    epicsFloat64        ld5;        /* Prev Value of D5 */
    epicsFloat64        ld6;        /* Prev Value of D6 */
    epicsFloat64        ld7;        /* Prev Value of D7 */
    epicsFloat64        ld8;        /* Prev Value of D8 */
    epicsFloat64        ld9;        /* Prev Value of D9 */
    epicsFloat64        le0;        /* Prev Value of E0 */
    epicsFloat64        le1;        /* Prev Value of E1 */
    epicsFloat64        le2;        /* Prev Value of E2 */
    epicsFloat64        le3;        /* Prev Value of E3 */
    epicsFloat64        le4;        /* Prev Value of E4 */
    epicsFloat64        le5;        /* Prev Value of E5 */
    epicsFloat64        le6;        /* Prev Value of E6 */
    epicsFloat64        le7;        /* Prev Value of E7 */
    epicsFloat64        le8;        /* Prev Value of E8 */
    epicsFloat64        le9;        /* Prev Value of E9 */
    epicsFloat64        lf0;        /* Prev Value of F0 */
    epicsFloat64        lf1;        /* Prev Value of F1 */
    epicsFloat64        lf2;        /* Prev Value of F2 */
    epicsFloat64        lf3;        /* Prev Value of F3 */
    epicsFloat64        lf4;        /* Prev Value of F4 */
    epicsFloat64        lf5;        /* Prev Value of F5 */
    epicsFloat64        lf6;        /* Prev Value of F6 */
    epicsFloat64        lf7;        /* Prev Value of F7 */
    epicsFloat64        lf8;        /* Prev Value of F8 */
    epicsFloat64        lf9;        /* Prev Value of F9 */
    epicsFloat64        nla;        /* Non-link input A */
    epicsFloat64        nlb;        /* Non-link input B */
    epicsFloat64        nlc;        /* Non-link input C */
    epicsFloat64        nld;        /* Non-link input D */
    epicsFloat64        nle;        /* Non-link input E */
    epicsFloat64        nlf;        /* Non-link input F */
    epicsFloat64        nlg;        /* Non-link input G */
    epicsFloat64        nlh;        /* Non-link input H */
    epicsFloat64        nli;        /* Non-link input I */
    epicsFloat64        nlj;        /* Non-link input J */
    epicsFloat64        nlk;        /* Non-link input K */
    epicsFloat64        nll;        /* Non-link input L */
    epicsFloat64        nlm;        /* Non-link input M */
    epicsFloat64        nln;        /* Non-link input N */
    epicsFloat64        nlo;        /* Non-link input O */
    epicsFloat64        nlp;        /* Non-link input P */
    epicsFloat64        nlq;        /* Non-link input Q */
    epicsFloat64        nlr;        /* Non-link input R */
    epicsFloat64        nls;        /* Non-link input S */
    epicsFloat64        nlt;        /* Non-link input T */
    epicsFloat64        lnla;       /* Prev Value of NLA */
    epicsFloat64        lnlb;       /* Prev Value of NLB */
    epicsFloat64        lnlc;       /* Prev Value of NLC */
    epicsFloat64        lnld;       /* Prev Value of NLD */
    epicsFloat64        lnle;       /* Prev Value of NLE */
    epicsFloat64        lnlf;       /* Prev Value of NLF */
    epicsFloat64        lnlg;       /* Prev Value of NLG */
    epicsFloat64        lnlh;       /* Prev Value of NLH */
    epicsFloat64        lnli;       /* Prev Value of NLI */
    epicsFloat64        lnlj;       /* Prev Value of NLJ */
    epicsFloat64        lnlk;       /* Prev Value of NLK */
    epicsFloat64        lnll;       /* Prev Value of NLL */
    epicsFloat64        lnlm;       /* Prev Value of NLM */
    epicsFloat64        lnln;       /* Prev Value of NLN */
    epicsFloat64        lnlo;       /* Prev Value of NLO */
    epicsFloat64        lnlp;       /* Prev Value of NLP */
    epicsFloat64        lnlq;       /* Prev Value of NLQ */
    epicsFloat64        lnlr;       /* Prev Value of NLR */
    epicsFloat64        lnls;       /* Prev Value of NLS */
    epicsFloat64        lnlt;       /* Prev Value of NLT */
} tsubRecord;

typedef enum {
	tsubRecordNAME = 0,
	tsubRecordDESC = 1,
	tsubRecordASG = 2,
	tsubRecordSCAN = 3,
	tsubRecordPINI = 4,
	tsubRecordPHAS = 5,
	tsubRecordEVNT = 6,
	tsubRecordTSE = 7,
	tsubRecordTSEL = 8,
	tsubRecordDTYP = 9,
	tsubRecordDISV = 10,
	tsubRecordDISA = 11,
	tsubRecordSDIS = 12,
	tsubRecordMLOK = 13,
	tsubRecordMLIS = 14,
	tsubRecordBKLNK = 15,
	tsubRecordDISP = 16,
	tsubRecordPROC = 17,
	tsubRecordSTAT = 18,
	tsubRecordSEVR = 19,
	tsubRecordNSTA = 20,
	tsubRecordNSEV = 21,
	tsubRecordACKS = 22,
	tsubRecordACKT = 23,
	tsubRecordDISS = 24,
	tsubRecordLCNT = 25,
	tsubRecordPACT = 26,
	tsubRecordPUTF = 27,
	tsubRecordRPRO = 28,
	tsubRecordASP = 29,
	tsubRecordPPN = 30,
	tsubRecordPPNR = 31,
	tsubRecordSPVT = 32,
	tsubRecordRSET = 33,
	tsubRecordDSET = 34,
	tsubRecordDPVT = 35,
	tsubRecordRDES = 36,
	tsubRecordLSET = 37,
	tsubRecordPRIO = 38,
	tsubRecordTPRO = 39,
	tsubRecordBKPT = 40,
	tsubRecordUDF = 41,
	tsubRecordUDFS = 42,
	tsubRecordTIME = 43,
	tsubRecordFLNK = 44,
	tsubRecordVAL = 45,
	tsubRecordINAM = 46,
	tsubRecordSNAM = 47,
	tsubRecordSADR = 48,
	tsubRecordEGU = 49,
	tsubRecordHOPR = 50,
	tsubRecordLOPR = 51,
	tsubRecordHIHI = 52,
	tsubRecordLOLO = 53,
	tsubRecordHIGH = 54,
	tsubRecordLOW = 55,
	tsubRecordPREC = 56,
	tsubRecordBRSV = 57,
	tsubRecordHHSV = 58,
	tsubRecordLLSV = 59,
	tsubRecordHSV = 60,
	tsubRecordLSV = 61,
	tsubRecordHYST = 62,
	tsubRecordADEL = 63,
	tsubRecordMDEL = 64,
	tsubRecordLALM = 65,
	tsubRecordALST = 66,
	tsubRecordMLST = 67,
	tsubRecordOUTA = 68,
	tsubRecordOUTB = 69,
	tsubRecordOUTC = 70,
	tsubRecordOUTD = 71,
	tsubRecordOUTE = 72,
	tsubRecordOUTF = 73,
	tsubRecordOUTG = 74,
	tsubRecordOUTH = 75,
	tsubRecordOUTI = 76,
	tsubRecordOUTJ = 77,
	tsubRecordOTA0 = 78,
	tsubRecordOTA1 = 79,
	tsubRecordOTA2 = 80,
	tsubRecordOTA3 = 81,
	tsubRecordOTA4 = 82,
	tsubRecordOTA5 = 83,
	tsubRecordOTA6 = 84,
	tsubRecordOTA7 = 85,
	tsubRecordOTA8 = 86,
	tsubRecordOTA9 = 87,
	tsubRecordOTB0 = 88,
	tsubRecordOTB1 = 89,
	tsubRecordOTB2 = 90,
	tsubRecordOTB3 = 91,
	tsubRecordOTB4 = 92,
	tsubRecordOTB5 = 93,
	tsubRecordOTB6 = 94,
	tsubRecordOTB7 = 95,
	tsubRecordOTB8 = 96,
	tsubRecordOTB9 = 97,
	tsubRecordOTC0 = 98,
	tsubRecordOTC1 = 99,
	tsubRecordOTC2 = 100,
	tsubRecordOTC3 = 101,
	tsubRecordOTC4 = 102,
	tsubRecordOTC5 = 103,
	tsubRecordOTC6 = 104,
	tsubRecordOTC7 = 105,
	tsubRecordOTC8 = 106,
	tsubRecordOTC9 = 107,
	tsubRecordOTD0 = 108,
	tsubRecordOTD1 = 109,
	tsubRecordOTD2 = 110,
	tsubRecordOTD3 = 111,
	tsubRecordOTD4 = 112,
	tsubRecordOTD5 = 113,
	tsubRecordOTD6 = 114,
	tsubRecordOTD7 = 115,
	tsubRecordOTD8 = 116,
	tsubRecordOTD9 = 117,
	tsubRecordOTE0 = 118,
	tsubRecordOTE1 = 119,
	tsubRecordOTE2 = 120,
	tsubRecordOTE3 = 121,
	tsubRecordOTE4 = 122,
	tsubRecordOTE5 = 123,
	tsubRecordOTE6 = 124,
	tsubRecordOTE7 = 125,
	tsubRecordOTE8 = 126,
	tsubRecordOTE9 = 127,
	tsubRecordOTF0 = 128,
	tsubRecordOTF1 = 129,
	tsubRecordOTF2 = 130,
	tsubRecordOTF3 = 131,
	tsubRecordOTF4 = 132,
	tsubRecordOTF5 = 133,
	tsubRecordOTF6 = 134,
	tsubRecordOTF7 = 135,
	tsubRecordOTF8 = 136,
	tsubRecordOTF9 = 137,
	tsubRecordOA = 138,
	tsubRecordOB = 139,
	tsubRecordOC = 140,
	tsubRecordOD = 141,
	tsubRecordOE = 142,
	tsubRecordOF = 143,
	tsubRecordOG = 144,
	tsubRecordOH = 145,
	tsubRecordOI = 146,
	tsubRecordOJ = 147,
	tsubRecordOA0 = 148,
	tsubRecordOA1 = 149,
	tsubRecordOA2 = 150,
	tsubRecordOA3 = 151,
	tsubRecordOA4 = 152,
	tsubRecordOA5 = 153,
	tsubRecordOA6 = 154,
	tsubRecordOA7 = 155,
	tsubRecordOA8 = 156,
	tsubRecordOA9 = 157,
	tsubRecordOB0 = 158,
	tsubRecordOB1 = 159,
	tsubRecordOB2 = 160,
	tsubRecordOB3 = 161,
	tsubRecordOB4 = 162,
	tsubRecordOB5 = 163,
	tsubRecordOB6 = 164,
	tsubRecordOB7 = 165,
	tsubRecordOB8 = 166,
	tsubRecordOB9 = 167,
	tsubRecordOC0 = 168,
	tsubRecordOC1 = 169,
	tsubRecordOC2 = 170,
	tsubRecordOC3 = 171,
	tsubRecordOC4 = 172,
	tsubRecordOC5 = 173,
	tsubRecordOC6 = 174,
	tsubRecordOC7 = 175,
	tsubRecordOC8 = 176,
	tsubRecordOC9 = 177,
	tsubRecordOD0 = 178,
	tsubRecordOD1 = 179,
	tsubRecordOD2 = 180,
	tsubRecordOD3 = 181,
	tsubRecordOD4 = 182,
	tsubRecordOD5 = 183,
	tsubRecordOD6 = 184,
	tsubRecordOD7 = 185,
	tsubRecordOD8 = 186,
	tsubRecordOD9 = 187,
	tsubRecordOE0 = 188,
	tsubRecordOE1 = 189,
	tsubRecordOE2 = 190,
	tsubRecordOE3 = 191,
	tsubRecordOE4 = 192,
	tsubRecordOE5 = 193,
	tsubRecordOE6 = 194,
	tsubRecordOE7 = 195,
	tsubRecordOE8 = 196,
	tsubRecordOE9 = 197,
	tsubRecordOF0 = 198,
	tsubRecordOF1 = 199,
	tsubRecordOF2 = 200,
	tsubRecordOF3 = 201,
	tsubRecordOF4 = 202,
	tsubRecordOF5 = 203,
	tsubRecordOF6 = 204,
	tsubRecordOF7 = 205,
	tsubRecordOF8 = 206,
	tsubRecordOF9 = 207,
	tsubRecordLOA = 208,
	tsubRecordLOB = 209,
	tsubRecordLOC = 210,
	tsubRecordLOD = 211,
	tsubRecordLOE = 212,
	tsubRecordLOF = 213,
	tsubRecordLOG = 214,
	tsubRecordLOH = 215,
	tsubRecordLOI = 216,
	tsubRecordLOJ = 217,
	tsubRecordLOA0 = 218,
	tsubRecordLOA1 = 219,
	tsubRecordLOA2 = 220,
	tsubRecordLOA3 = 221,
	tsubRecordLOA4 = 222,
	tsubRecordLOA5 = 223,
	tsubRecordLOA6 = 224,
	tsubRecordLOA7 = 225,
	tsubRecordLOA8 = 226,
	tsubRecordLOA9 = 227,
	tsubRecordLOB0 = 228,
	tsubRecordLOB1 = 229,
	tsubRecordLOB2 = 230,
	tsubRecordLOB3 = 231,
	tsubRecordLOB4 = 232,
	tsubRecordLOB5 = 233,
	tsubRecordLOB6 = 234,
	tsubRecordLOB7 = 235,
	tsubRecordLOB8 = 236,
	tsubRecordLOB9 = 237,
	tsubRecordLOC0 = 238,
	tsubRecordLOC1 = 239,
	tsubRecordLOC2 = 240,
	tsubRecordLOC3 = 241,
	tsubRecordLOC4 = 242,
	tsubRecordLOC5 = 243,
	tsubRecordLOC6 = 244,
	tsubRecordLOC7 = 245,
	tsubRecordLOC8 = 246,
	tsubRecordLOC9 = 247,
	tsubRecordLOD0 = 248,
	tsubRecordLOD1 = 249,
	tsubRecordLOD2 = 250,
	tsubRecordLOD3 = 251,
	tsubRecordLOD4 = 252,
	tsubRecordLOD5 = 253,
	tsubRecordLOD6 = 254,
	tsubRecordLOD7 = 255,
	tsubRecordLOD8 = 256,
	tsubRecordLOD9 = 257,
	tsubRecordLOE0 = 258,
	tsubRecordLOE1 = 259,
	tsubRecordLOE2 = 260,
	tsubRecordLOE3 = 261,
	tsubRecordLOE4 = 262,
	tsubRecordLOE5 = 263,
	tsubRecordLOE6 = 264,
	tsubRecordLOE7 = 265,
	tsubRecordLOE8 = 266,
	tsubRecordLOE9 = 267,
	tsubRecordLOF0 = 268,
	tsubRecordLOF1 = 269,
	tsubRecordLOF2 = 270,
	tsubRecordLOF3 = 271,
	tsubRecordLOF4 = 272,
	tsubRecordLOF5 = 273,
	tsubRecordLOF6 = 274,
	tsubRecordLOF7 = 275,
	tsubRecordLOF8 = 276,
	tsubRecordLOF9 = 277,
	tsubRecordINPA = 278,
	tsubRecordINPB = 279,
	tsubRecordINPC = 280,
	tsubRecordINPD = 281,
	tsubRecordINPE = 282,
	tsubRecordINPF = 283,
	tsubRecordINPG = 284,
	tsubRecordINPH = 285,
	tsubRecordINPI = 286,
	tsubRecordINPJ = 287,
	tsubRecordINPK = 288,
	tsubRecordINPL = 289,
	tsubRecordINPM = 290,
	tsubRecordINPN = 291,
	tsubRecordINPO = 292,
	tsubRecordINPP = 293,
	tsubRecordINPQ = 294,
	tsubRecordINPR = 295,
	tsubRecordINPS = 296,
	tsubRecordINPT = 297,
	tsubRecordIPA0 = 298,
	tsubRecordIPA1 = 299,
	tsubRecordIPA2 = 300,
	tsubRecordIPA3 = 301,
	tsubRecordIPA4 = 302,
	tsubRecordIPA5 = 303,
	tsubRecordIPA6 = 304,
	tsubRecordIPA7 = 305,
	tsubRecordIPA8 = 306,
	tsubRecordIPA9 = 307,
	tsubRecordIPB0 = 308,
	tsubRecordIPB1 = 309,
	tsubRecordIPB2 = 310,
	tsubRecordIPB3 = 311,
	tsubRecordIPB4 = 312,
	tsubRecordIPB5 = 313,
	tsubRecordIPB6 = 314,
	tsubRecordIPB7 = 315,
	tsubRecordIPB8 = 316,
	tsubRecordIPB9 = 317,
	tsubRecordIPC0 = 318,
	tsubRecordIPC1 = 319,
	tsubRecordIPC2 = 320,
	tsubRecordIPC3 = 321,
	tsubRecordIPC4 = 322,
	tsubRecordIPC5 = 323,
	tsubRecordIPC6 = 324,
	tsubRecordIPC7 = 325,
	tsubRecordIPC8 = 326,
	tsubRecordIPC9 = 327,
	tsubRecordIPD0 = 328,
	tsubRecordIPD1 = 329,
	tsubRecordIPD2 = 330,
	tsubRecordIPD3 = 331,
	tsubRecordIPD4 = 332,
	tsubRecordIPD5 = 333,
	tsubRecordIPD6 = 334,
	tsubRecordIPD7 = 335,
	tsubRecordIPD8 = 336,
	tsubRecordIPD9 = 337,
	tsubRecordIPE0 = 338,
	tsubRecordIPE1 = 339,
	tsubRecordIPE2 = 340,
	tsubRecordIPE3 = 341,
	tsubRecordIPE4 = 342,
	tsubRecordIPE5 = 343,
	tsubRecordIPE6 = 344,
	tsubRecordIPE7 = 345,
	tsubRecordIPE8 = 346,
	tsubRecordIPE9 = 347,
	tsubRecordIPF0 = 348,
	tsubRecordIPF1 = 349,
	tsubRecordIPF2 = 350,
	tsubRecordIPF3 = 351,
	tsubRecordIPF4 = 352,
	tsubRecordIPF5 = 353,
	tsubRecordIPF6 = 354,
	tsubRecordIPF7 = 355,
	tsubRecordIPF8 = 356,
	tsubRecordIPF9 = 357,
	tsubRecordA = 358,
	tsubRecordB = 359,
	tsubRecordC = 360,
	tsubRecordD = 361,
	tsubRecordE = 362,
	tsubRecordF = 363,
	tsubRecordG = 364,
	tsubRecordH = 365,
	tsubRecordI = 366,
	tsubRecordJ = 367,
	tsubRecordK = 368,
	tsubRecordL = 369,
	tsubRecordM = 370,
	tsubRecordN = 371,
	tsubRecordO = 372,
	tsubRecordP = 373,
	tsubRecordQ = 374,
	tsubRecordR = 375,
	tsubRecordS = 376,
	tsubRecordT = 377,
	tsubRecordA0 = 378,
	tsubRecordA1 = 379,
	tsubRecordA2 = 380,
	tsubRecordA3 = 381,
	tsubRecordA4 = 382,
	tsubRecordA5 = 383,
	tsubRecordA6 = 384,
	tsubRecordA7 = 385,
	tsubRecordA8 = 386,
	tsubRecordA9 = 387,
	tsubRecordB0 = 388,
	tsubRecordB1 = 389,
	tsubRecordB2 = 390,
	tsubRecordB3 = 391,
	tsubRecordB4 = 392,
	tsubRecordB5 = 393,
	tsubRecordB6 = 394,
	tsubRecordB7 = 395,
	tsubRecordB8 = 396,
	tsubRecordB9 = 397,
	tsubRecordC0 = 398,
	tsubRecordC1 = 399,
	tsubRecordC2 = 400,
	tsubRecordC3 = 401,
	tsubRecordC4 = 402,
	tsubRecordC5 = 403,
	tsubRecordC6 = 404,
	tsubRecordC7 = 405,
	tsubRecordC8 = 406,
	tsubRecordC9 = 407,
	tsubRecordD0 = 408,
	tsubRecordD1 = 409,
	tsubRecordD2 = 410,
	tsubRecordD3 = 411,
	tsubRecordD4 = 412,
	tsubRecordD5 = 413,
	tsubRecordD6 = 414,
	tsubRecordD7 = 415,
	tsubRecordD8 = 416,
	tsubRecordD9 = 417,
	tsubRecordE0 = 418,
	tsubRecordE1 = 419,
	tsubRecordE2 = 420,
	tsubRecordE3 = 421,
	tsubRecordE4 = 422,
	tsubRecordE5 = 423,
	tsubRecordE6 = 424,
	tsubRecordE7 = 425,
	tsubRecordE8 = 426,
	tsubRecordE9 = 427,
	tsubRecordF0 = 428,
	tsubRecordF1 = 429,
	tsubRecordF2 = 430,
	tsubRecordF3 = 431,
	tsubRecordF4 = 432,
	tsubRecordF5 = 433,
	tsubRecordF6 = 434,
	tsubRecordF7 = 435,
	tsubRecordF8 = 436,
	tsubRecordF9 = 437,
	tsubRecordLA = 438,
	tsubRecordLB = 439,
	tsubRecordLC = 440,
	tsubRecordLD = 441,
	tsubRecordLE = 442,
	tsubRecordLF = 443,
	tsubRecordLG = 444,
	tsubRecordLH = 445,
	tsubRecordLI = 446,
	tsubRecordLJ = 447,
	tsubRecordLK = 448,
	tsubRecordLL = 449,
	tsubRecordLM = 450,
	tsubRecordLN = 451,
	tsubRecordLO = 452,
	tsubRecordLP = 453,
	tsubRecordLQ = 454,
	tsubRecordLR = 455,
	tsubRecordLS = 456,
	tsubRecordLT = 457,
	tsubRecordLA0 = 458,
	tsubRecordLA1 = 459,
	tsubRecordLA2 = 460,
	tsubRecordLA3 = 461,
	tsubRecordLA4 = 462,
	tsubRecordLA5 = 463,
	tsubRecordLA6 = 464,
	tsubRecordLA7 = 465,
	tsubRecordLA8 = 466,
	tsubRecordLA9 = 467,
	tsubRecordLB0 = 468,
	tsubRecordLB1 = 469,
	tsubRecordLB2 = 470,
	tsubRecordLB3 = 471,
	tsubRecordLB4 = 472,
	tsubRecordLB5 = 473,
	tsubRecordLB6 = 474,
	tsubRecordLB7 = 475,
	tsubRecordLB8 = 476,
	tsubRecordLB9 = 477,
	tsubRecordLC0 = 478,
	tsubRecordLC1 = 479,
	tsubRecordLC2 = 480,
	tsubRecordLC3 = 481,
	tsubRecordLC4 = 482,
	tsubRecordLC5 = 483,
	tsubRecordLC6 = 484,
	tsubRecordLC7 = 485,
	tsubRecordLC8 = 486,
	tsubRecordLC9 = 487,
	tsubRecordLD0 = 488,
	tsubRecordLD1 = 489,
	tsubRecordLD2 = 490,
	tsubRecordLD3 = 491,
	tsubRecordLD4 = 492,
	tsubRecordLD5 = 493,
	tsubRecordLD6 = 494,
	tsubRecordLD7 = 495,
	tsubRecordLD8 = 496,
	tsubRecordLD9 = 497,
	tsubRecordLE0 = 498,
	tsubRecordLE1 = 499,
	tsubRecordLE2 = 500,
	tsubRecordLE3 = 501,
	tsubRecordLE4 = 502,
	tsubRecordLE5 = 503,
	tsubRecordLE6 = 504,
	tsubRecordLE7 = 505,
	tsubRecordLE8 = 506,
	tsubRecordLE9 = 507,
	tsubRecordLF0 = 508,
	tsubRecordLF1 = 509,
	tsubRecordLF2 = 510,
	tsubRecordLF3 = 511,
	tsubRecordLF4 = 512,
	tsubRecordLF5 = 513,
	tsubRecordLF6 = 514,
	tsubRecordLF7 = 515,
	tsubRecordLF8 = 516,
	tsubRecordLF9 = 517,
	tsubRecordNLA = 518,
	tsubRecordNLB = 519,
	tsubRecordNLC = 520,
	tsubRecordNLD = 521,
	tsubRecordNLE = 522,
	tsubRecordNLF = 523,
	tsubRecordNLG = 524,
	tsubRecordNLH = 525,
	tsubRecordNLI = 526,
	tsubRecordNLJ = 527,
	tsubRecordNLK = 528,
	tsubRecordNLL = 529,
	tsubRecordNLM = 530,
	tsubRecordNLN = 531,
	tsubRecordNLO = 532,
	tsubRecordNLP = 533,
	tsubRecordNLQ = 534,
	tsubRecordNLR = 535,
	tsubRecordNLS = 536,
	tsubRecordNLT = 537,
	tsubRecordLNLA = 538,
	tsubRecordLNLB = 539,
	tsubRecordLNLC = 540,
	tsubRecordLNLD = 541,
	tsubRecordLNLE = 542,
	tsubRecordLNLF = 543,
	tsubRecordLNLG = 544,
	tsubRecordLNLH = 545,
	tsubRecordLNLI = 546,
	tsubRecordLNLJ = 547,
	tsubRecordLNLK = 548,
	tsubRecordLNLL = 549,
	tsubRecordLNLM = 550,
	tsubRecordLNLN = 551,
	tsubRecordLNLO = 552,
	tsubRecordLNLP = 553,
	tsubRecordLNLQ = 554,
	tsubRecordLNLR = 555,
	tsubRecordLNLS = 556,
	tsubRecordLNLT = 557
} tsubFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsExport.h>
#include <cantProceed.h>
#ifdef __cplusplus
extern "C" {
#endif
static int tsubRecordSizeOffset(dbRecordType *prt)
{
    tsubRecord *prec = 0;

    if (prt->no_fields != 558) {
        cantProceed("IOC build or installation error:\n"
            "    The tsubRecord defined in the DBD file has %d fields,\n"
            "    but the record support code was built with 558.\n",
            prt->no_fields);
    }
    prt->papFldDes[tsubRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[tsubRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[tsubRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[tsubRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[tsubRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[tsubRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[tsubRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[tsubRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[tsubRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[tsubRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[tsubRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[tsubRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[tsubRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[tsubRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[tsubRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[tsubRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[tsubRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[tsubRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[tsubRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[tsubRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[tsubRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[tsubRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[tsubRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[tsubRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[tsubRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[tsubRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[tsubRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[tsubRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[tsubRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[tsubRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[tsubRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[tsubRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[tsubRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[tsubRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[tsubRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[tsubRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[tsubRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[tsubRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[tsubRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[tsubRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[tsubRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[tsubRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[tsubRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[tsubRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[tsubRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[tsubRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[tsubRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[tsubRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[tsubRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[tsubRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[tsubRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[tsubRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[tsubRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[tsubRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[tsubRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[tsubRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[tsubRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[tsubRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[tsubRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[tsubRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[tsubRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[tsubRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[tsubRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[tsubRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[tsubRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[tsubRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[tsubRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[tsubRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[tsubRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[tsubRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[tsubRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[tsubRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[tsubRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[tsubRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[tsubRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[tsubRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[tsubRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[tsubRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[tsubRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[tsubRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[tsubRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[tsubRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[tsubRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[tsubRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[tsubRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[tsubRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[tsubRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[tsubRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[tsubRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[tsubRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[tsubRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[tsubRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[tsubRecordINAM]->size = sizeof(prec->inam);
    prt->papFldDes[tsubRecordINAM]->offset = (unsigned short)((char *)&prec->inam - (char *)prec);
    prt->papFldDes[tsubRecordSNAM]->size = sizeof(prec->snam);
    prt->papFldDes[tsubRecordSNAM]->offset = (unsigned short)((char *)&prec->snam - (char *)prec);
    prt->papFldDes[tsubRecordSADR]->size = sizeof(prec->sadr);
    prt->papFldDes[tsubRecordSADR]->offset = (unsigned short)((char *)&prec->sadr - (char *)prec);
    prt->papFldDes[tsubRecordEGU]->size = sizeof(prec->egu);
    prt->papFldDes[tsubRecordEGU]->offset = (unsigned short)((char *)&prec->egu - (char *)prec);
    prt->papFldDes[tsubRecordHOPR]->size = sizeof(prec->hopr);
    prt->papFldDes[tsubRecordHOPR]->offset = (unsigned short)((char *)&prec->hopr - (char *)prec);
    prt->papFldDes[tsubRecordLOPR]->size = sizeof(prec->lopr);
    prt->papFldDes[tsubRecordLOPR]->offset = (unsigned short)((char *)&prec->lopr - (char *)prec);
    prt->papFldDes[tsubRecordHIHI]->size = sizeof(prec->hihi);
    prt->papFldDes[tsubRecordHIHI]->offset = (unsigned short)((char *)&prec->hihi - (char *)prec);
    prt->papFldDes[tsubRecordLOLO]->size = sizeof(prec->lolo);
    prt->papFldDes[tsubRecordLOLO]->offset = (unsigned short)((char *)&prec->lolo - (char *)prec);
    prt->papFldDes[tsubRecordHIGH]->size = sizeof(prec->high);
    prt->papFldDes[tsubRecordHIGH]->offset = (unsigned short)((char *)&prec->high - (char *)prec);
    prt->papFldDes[tsubRecordLOW]->size = sizeof(prec->low);
    prt->papFldDes[tsubRecordLOW]->offset = (unsigned short)((char *)&prec->low - (char *)prec);
    prt->papFldDes[tsubRecordPREC]->size = sizeof(prec->prec);
    prt->papFldDes[tsubRecordPREC]->offset = (unsigned short)((char *)&prec->prec - (char *)prec);
    prt->papFldDes[tsubRecordBRSV]->size = sizeof(prec->brsv);
    prt->papFldDes[tsubRecordBRSV]->offset = (unsigned short)((char *)&prec->brsv - (char *)prec);
    prt->papFldDes[tsubRecordHHSV]->size = sizeof(prec->hhsv);
    prt->papFldDes[tsubRecordHHSV]->offset = (unsigned short)((char *)&prec->hhsv - (char *)prec);
    prt->papFldDes[tsubRecordLLSV]->size = sizeof(prec->llsv);
    prt->papFldDes[tsubRecordLLSV]->offset = (unsigned short)((char *)&prec->llsv - (char *)prec);
    prt->papFldDes[tsubRecordHSV]->size = sizeof(prec->hsv);
    prt->papFldDes[tsubRecordHSV]->offset = (unsigned short)((char *)&prec->hsv - (char *)prec);
    prt->papFldDes[tsubRecordLSV]->size = sizeof(prec->lsv);
    prt->papFldDes[tsubRecordLSV]->offset = (unsigned short)((char *)&prec->lsv - (char *)prec);
    prt->papFldDes[tsubRecordHYST]->size = sizeof(prec->hyst);
    prt->papFldDes[tsubRecordHYST]->offset = (unsigned short)((char *)&prec->hyst - (char *)prec);
    prt->papFldDes[tsubRecordADEL]->size = sizeof(prec->adel);
    prt->papFldDes[tsubRecordADEL]->offset = (unsigned short)((char *)&prec->adel - (char *)prec);
    prt->papFldDes[tsubRecordMDEL]->size = sizeof(prec->mdel);
    prt->papFldDes[tsubRecordMDEL]->offset = (unsigned short)((char *)&prec->mdel - (char *)prec);
    prt->papFldDes[tsubRecordLALM]->size = sizeof(prec->lalm);
    prt->papFldDes[tsubRecordLALM]->offset = (unsigned short)((char *)&prec->lalm - (char *)prec);
    prt->papFldDes[tsubRecordALST]->size = sizeof(prec->alst);
    prt->papFldDes[tsubRecordALST]->offset = (unsigned short)((char *)&prec->alst - (char *)prec);
    prt->papFldDes[tsubRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[tsubRecordMLST]->offset = (unsigned short)((char *)&prec->mlst - (char *)prec);
    prt->papFldDes[tsubRecordOUTA]->size = sizeof(prec->outa);
    prt->papFldDes[tsubRecordOUTA]->offset = (unsigned short)((char *)&prec->outa - (char *)prec);
    prt->papFldDes[tsubRecordOUTB]->size = sizeof(prec->outb);
    prt->papFldDes[tsubRecordOUTB]->offset = (unsigned short)((char *)&prec->outb - (char *)prec);
    prt->papFldDes[tsubRecordOUTC]->size = sizeof(prec->outc);
    prt->papFldDes[tsubRecordOUTC]->offset = (unsigned short)((char *)&prec->outc - (char *)prec);
    prt->papFldDes[tsubRecordOUTD]->size = sizeof(prec->outd);
    prt->papFldDes[tsubRecordOUTD]->offset = (unsigned short)((char *)&prec->outd - (char *)prec);
    prt->papFldDes[tsubRecordOUTE]->size = sizeof(prec->oute);
    prt->papFldDes[tsubRecordOUTE]->offset = (unsigned short)((char *)&prec->oute - (char *)prec);
    prt->papFldDes[tsubRecordOUTF]->size = sizeof(prec->outf);
    prt->papFldDes[tsubRecordOUTF]->offset = (unsigned short)((char *)&prec->outf - (char *)prec);
    prt->papFldDes[tsubRecordOUTG]->size = sizeof(prec->outg);
    prt->papFldDes[tsubRecordOUTG]->offset = (unsigned short)((char *)&prec->outg - (char *)prec);
    prt->papFldDes[tsubRecordOUTH]->size = sizeof(prec->outh);
    prt->papFldDes[tsubRecordOUTH]->offset = (unsigned short)((char *)&prec->outh - (char *)prec);
    prt->papFldDes[tsubRecordOUTI]->size = sizeof(prec->outi);
    prt->papFldDes[tsubRecordOUTI]->offset = (unsigned short)((char *)&prec->outi - (char *)prec);
    prt->papFldDes[tsubRecordOUTJ]->size = sizeof(prec->outj);
    prt->papFldDes[tsubRecordOUTJ]->offset = (unsigned short)((char *)&prec->outj - (char *)prec);
    prt->papFldDes[tsubRecordOTA0]->size = sizeof(prec->ota0);
    prt->papFldDes[tsubRecordOTA0]->offset = (unsigned short)((char *)&prec->ota0 - (char *)prec);
    prt->papFldDes[tsubRecordOTA1]->size = sizeof(prec->ota1);
    prt->papFldDes[tsubRecordOTA1]->offset = (unsigned short)((char *)&prec->ota1 - (char *)prec);
    prt->papFldDes[tsubRecordOTA2]->size = sizeof(prec->ota2);
    prt->papFldDes[tsubRecordOTA2]->offset = (unsigned short)((char *)&prec->ota2 - (char *)prec);
    prt->papFldDes[tsubRecordOTA3]->size = sizeof(prec->ota3);
    prt->papFldDes[tsubRecordOTA3]->offset = (unsigned short)((char *)&prec->ota3 - (char *)prec);
    prt->papFldDes[tsubRecordOTA4]->size = sizeof(prec->ota4);
    prt->papFldDes[tsubRecordOTA4]->offset = (unsigned short)((char *)&prec->ota4 - (char *)prec);
    prt->papFldDes[tsubRecordOTA5]->size = sizeof(prec->ota5);
    prt->papFldDes[tsubRecordOTA5]->offset = (unsigned short)((char *)&prec->ota5 - (char *)prec);
    prt->papFldDes[tsubRecordOTA6]->size = sizeof(prec->ota6);
    prt->papFldDes[tsubRecordOTA6]->offset = (unsigned short)((char *)&prec->ota6 - (char *)prec);
    prt->papFldDes[tsubRecordOTA7]->size = sizeof(prec->ota7);
    prt->papFldDes[tsubRecordOTA7]->offset = (unsigned short)((char *)&prec->ota7 - (char *)prec);
    prt->papFldDes[tsubRecordOTA8]->size = sizeof(prec->ota8);
    prt->papFldDes[tsubRecordOTA8]->offset = (unsigned short)((char *)&prec->ota8 - (char *)prec);
    prt->papFldDes[tsubRecordOTA9]->size = sizeof(prec->ota9);
    prt->papFldDes[tsubRecordOTA9]->offset = (unsigned short)((char *)&prec->ota9 - (char *)prec);
    prt->papFldDes[tsubRecordOTB0]->size = sizeof(prec->otb0);
    prt->papFldDes[tsubRecordOTB0]->offset = (unsigned short)((char *)&prec->otb0 - (char *)prec);
    prt->papFldDes[tsubRecordOTB1]->size = sizeof(prec->otb1);
    prt->papFldDes[tsubRecordOTB1]->offset = (unsigned short)((char *)&prec->otb1 - (char *)prec);
    prt->papFldDes[tsubRecordOTB2]->size = sizeof(prec->otb2);
    prt->papFldDes[tsubRecordOTB2]->offset = (unsigned short)((char *)&prec->otb2 - (char *)prec);
    prt->papFldDes[tsubRecordOTB3]->size = sizeof(prec->otb3);
    prt->papFldDes[tsubRecordOTB3]->offset = (unsigned short)((char *)&prec->otb3 - (char *)prec);
    prt->papFldDes[tsubRecordOTB4]->size = sizeof(prec->otb4);
    prt->papFldDes[tsubRecordOTB4]->offset = (unsigned short)((char *)&prec->otb4 - (char *)prec);
    prt->papFldDes[tsubRecordOTB5]->size = sizeof(prec->otb5);
    prt->papFldDes[tsubRecordOTB5]->offset = (unsigned short)((char *)&prec->otb5 - (char *)prec);
    prt->papFldDes[tsubRecordOTB6]->size = sizeof(prec->otb6);
    prt->papFldDes[tsubRecordOTB6]->offset = (unsigned short)((char *)&prec->otb6 - (char *)prec);
    prt->papFldDes[tsubRecordOTB7]->size = sizeof(prec->otb7);
    prt->papFldDes[tsubRecordOTB7]->offset = (unsigned short)((char *)&prec->otb7 - (char *)prec);
    prt->papFldDes[tsubRecordOTB8]->size = sizeof(prec->otb8);
    prt->papFldDes[tsubRecordOTB8]->offset = (unsigned short)((char *)&prec->otb8 - (char *)prec);
    prt->papFldDes[tsubRecordOTB9]->size = sizeof(prec->otb9);
    prt->papFldDes[tsubRecordOTB9]->offset = (unsigned short)((char *)&prec->otb9 - (char *)prec);
    prt->papFldDes[tsubRecordOTC0]->size = sizeof(prec->otc0);
    prt->papFldDes[tsubRecordOTC0]->offset = (unsigned short)((char *)&prec->otc0 - (char *)prec);
    prt->papFldDes[tsubRecordOTC1]->size = sizeof(prec->otc1);
    prt->papFldDes[tsubRecordOTC1]->offset = (unsigned short)((char *)&prec->otc1 - (char *)prec);
    prt->papFldDes[tsubRecordOTC2]->size = sizeof(prec->otc2);
    prt->papFldDes[tsubRecordOTC2]->offset = (unsigned short)((char *)&prec->otc2 - (char *)prec);
    prt->papFldDes[tsubRecordOTC3]->size = sizeof(prec->otc3);
    prt->papFldDes[tsubRecordOTC3]->offset = (unsigned short)((char *)&prec->otc3 - (char *)prec);
    prt->papFldDes[tsubRecordOTC4]->size = sizeof(prec->otc4);
    prt->papFldDes[tsubRecordOTC4]->offset = (unsigned short)((char *)&prec->otc4 - (char *)prec);
    prt->papFldDes[tsubRecordOTC5]->size = sizeof(prec->otc5);
    prt->papFldDes[tsubRecordOTC5]->offset = (unsigned short)((char *)&prec->otc5 - (char *)prec);
    prt->papFldDes[tsubRecordOTC6]->size = sizeof(prec->otc6);
    prt->papFldDes[tsubRecordOTC6]->offset = (unsigned short)((char *)&prec->otc6 - (char *)prec);
    prt->papFldDes[tsubRecordOTC7]->size = sizeof(prec->otc7);
    prt->papFldDes[tsubRecordOTC7]->offset = (unsigned short)((char *)&prec->otc7 - (char *)prec);
    prt->papFldDes[tsubRecordOTC8]->size = sizeof(prec->otc8);
    prt->papFldDes[tsubRecordOTC8]->offset = (unsigned short)((char *)&prec->otc8 - (char *)prec);
    prt->papFldDes[tsubRecordOTC9]->size = sizeof(prec->otc9);
    prt->papFldDes[tsubRecordOTC9]->offset = (unsigned short)((char *)&prec->otc9 - (char *)prec);
    prt->papFldDes[tsubRecordOTD0]->size = sizeof(prec->otd0);
    prt->papFldDes[tsubRecordOTD0]->offset = (unsigned short)((char *)&prec->otd0 - (char *)prec);
    prt->papFldDes[tsubRecordOTD1]->size = sizeof(prec->otd1);
    prt->papFldDes[tsubRecordOTD1]->offset = (unsigned short)((char *)&prec->otd1 - (char *)prec);
    prt->papFldDes[tsubRecordOTD2]->size = sizeof(prec->otd2);
    prt->papFldDes[tsubRecordOTD2]->offset = (unsigned short)((char *)&prec->otd2 - (char *)prec);
    prt->papFldDes[tsubRecordOTD3]->size = sizeof(prec->otd3);
    prt->papFldDes[tsubRecordOTD3]->offset = (unsigned short)((char *)&prec->otd3 - (char *)prec);
    prt->papFldDes[tsubRecordOTD4]->size = sizeof(prec->otd4);
    prt->papFldDes[tsubRecordOTD4]->offset = (unsigned short)((char *)&prec->otd4 - (char *)prec);
    prt->papFldDes[tsubRecordOTD5]->size = sizeof(prec->otd5);
    prt->papFldDes[tsubRecordOTD5]->offset = (unsigned short)((char *)&prec->otd5 - (char *)prec);
    prt->papFldDes[tsubRecordOTD6]->size = sizeof(prec->otd6);
    prt->papFldDes[tsubRecordOTD6]->offset = (unsigned short)((char *)&prec->otd6 - (char *)prec);
    prt->papFldDes[tsubRecordOTD7]->size = sizeof(prec->otd7);
    prt->papFldDes[tsubRecordOTD7]->offset = (unsigned short)((char *)&prec->otd7 - (char *)prec);
    prt->papFldDes[tsubRecordOTD8]->size = sizeof(prec->otd8);
    prt->papFldDes[tsubRecordOTD8]->offset = (unsigned short)((char *)&prec->otd8 - (char *)prec);
    prt->papFldDes[tsubRecordOTD9]->size = sizeof(prec->otd9);
    prt->papFldDes[tsubRecordOTD9]->offset = (unsigned short)((char *)&prec->otd9 - (char *)prec);
    prt->papFldDes[tsubRecordOTE0]->size = sizeof(prec->ote0);
    prt->papFldDes[tsubRecordOTE0]->offset = (unsigned short)((char *)&prec->ote0 - (char *)prec);
    prt->papFldDes[tsubRecordOTE1]->size = sizeof(prec->ote1);
    prt->papFldDes[tsubRecordOTE1]->offset = (unsigned short)((char *)&prec->ote1 - (char *)prec);
    prt->papFldDes[tsubRecordOTE2]->size = sizeof(prec->ote2);
    prt->papFldDes[tsubRecordOTE2]->offset = (unsigned short)((char *)&prec->ote2 - (char *)prec);
    prt->papFldDes[tsubRecordOTE3]->size = sizeof(prec->ote3);
    prt->papFldDes[tsubRecordOTE3]->offset = (unsigned short)((char *)&prec->ote3 - (char *)prec);
    prt->papFldDes[tsubRecordOTE4]->size = sizeof(prec->ote4);
    prt->papFldDes[tsubRecordOTE4]->offset = (unsigned short)((char *)&prec->ote4 - (char *)prec);
    prt->papFldDes[tsubRecordOTE5]->size = sizeof(prec->ote5);
    prt->papFldDes[tsubRecordOTE5]->offset = (unsigned short)((char *)&prec->ote5 - (char *)prec);
    prt->papFldDes[tsubRecordOTE6]->size = sizeof(prec->ote6);
    prt->papFldDes[tsubRecordOTE6]->offset = (unsigned short)((char *)&prec->ote6 - (char *)prec);
    prt->papFldDes[tsubRecordOTE7]->size = sizeof(prec->ote7);
    prt->papFldDes[tsubRecordOTE7]->offset = (unsigned short)((char *)&prec->ote7 - (char *)prec);
    prt->papFldDes[tsubRecordOTE8]->size = sizeof(prec->ote8);
    prt->papFldDes[tsubRecordOTE8]->offset = (unsigned short)((char *)&prec->ote8 - (char *)prec);
    prt->papFldDes[tsubRecordOTE9]->size = sizeof(prec->ote9);
    prt->papFldDes[tsubRecordOTE9]->offset = (unsigned short)((char *)&prec->ote9 - (char *)prec);
    prt->papFldDes[tsubRecordOTF0]->size = sizeof(prec->otf0);
    prt->papFldDes[tsubRecordOTF0]->offset = (unsigned short)((char *)&prec->otf0 - (char *)prec);
    prt->papFldDes[tsubRecordOTF1]->size = sizeof(prec->otf1);
    prt->papFldDes[tsubRecordOTF1]->offset = (unsigned short)((char *)&prec->otf1 - (char *)prec);
    prt->papFldDes[tsubRecordOTF2]->size = sizeof(prec->otf2);
    prt->papFldDes[tsubRecordOTF2]->offset = (unsigned short)((char *)&prec->otf2 - (char *)prec);
    prt->papFldDes[tsubRecordOTF3]->size = sizeof(prec->otf3);
    prt->papFldDes[tsubRecordOTF3]->offset = (unsigned short)((char *)&prec->otf3 - (char *)prec);
    prt->papFldDes[tsubRecordOTF4]->size = sizeof(prec->otf4);
    prt->papFldDes[tsubRecordOTF4]->offset = (unsigned short)((char *)&prec->otf4 - (char *)prec);
    prt->papFldDes[tsubRecordOTF5]->size = sizeof(prec->otf5);
    prt->papFldDes[tsubRecordOTF5]->offset = (unsigned short)((char *)&prec->otf5 - (char *)prec);
    prt->papFldDes[tsubRecordOTF6]->size = sizeof(prec->otf6);
    prt->papFldDes[tsubRecordOTF6]->offset = (unsigned short)((char *)&prec->otf6 - (char *)prec);
    prt->papFldDes[tsubRecordOTF7]->size = sizeof(prec->otf7);
    prt->papFldDes[tsubRecordOTF7]->offset = (unsigned short)((char *)&prec->otf7 - (char *)prec);
    prt->papFldDes[tsubRecordOTF8]->size = sizeof(prec->otf8);
    prt->papFldDes[tsubRecordOTF8]->offset = (unsigned short)((char *)&prec->otf8 - (char *)prec);
    prt->papFldDes[tsubRecordOTF9]->size = sizeof(prec->otf9);
    prt->papFldDes[tsubRecordOTF9]->offset = (unsigned short)((char *)&prec->otf9 - (char *)prec);
    prt->papFldDes[tsubRecordOA]->size = sizeof(prec->oa);
    prt->papFldDes[tsubRecordOA]->offset = (unsigned short)((char *)&prec->oa - (char *)prec);
    prt->papFldDes[tsubRecordOB]->size = sizeof(prec->ob);
    prt->papFldDes[tsubRecordOB]->offset = (unsigned short)((char *)&prec->ob - (char *)prec);
    prt->papFldDes[tsubRecordOC]->size = sizeof(prec->oc);
    prt->papFldDes[tsubRecordOC]->offset = (unsigned short)((char *)&prec->oc - (char *)prec);
    prt->papFldDes[tsubRecordOD]->size = sizeof(prec->od);
    prt->papFldDes[tsubRecordOD]->offset = (unsigned short)((char *)&prec->od - (char *)prec);
    prt->papFldDes[tsubRecordOE]->size = sizeof(prec->oe);
    prt->papFldDes[tsubRecordOE]->offset = (unsigned short)((char *)&prec->oe - (char *)prec);
    prt->papFldDes[tsubRecordOF]->size = sizeof(prec->of);
    prt->papFldDes[tsubRecordOF]->offset = (unsigned short)((char *)&prec->of - (char *)prec);
    prt->papFldDes[tsubRecordOG]->size = sizeof(prec->og);
    prt->papFldDes[tsubRecordOG]->offset = (unsigned short)((char *)&prec->og - (char *)prec);
    prt->papFldDes[tsubRecordOH]->size = sizeof(prec->oh);
    prt->papFldDes[tsubRecordOH]->offset = (unsigned short)((char *)&prec->oh - (char *)prec);
    prt->papFldDes[tsubRecordOI]->size = sizeof(prec->oi);
    prt->papFldDes[tsubRecordOI]->offset = (unsigned short)((char *)&prec->oi - (char *)prec);
    prt->papFldDes[tsubRecordOJ]->size = sizeof(prec->oj);
    prt->papFldDes[tsubRecordOJ]->offset = (unsigned short)((char *)&prec->oj - (char *)prec);
    prt->papFldDes[tsubRecordOA0]->size = sizeof(prec->oa0);
    prt->papFldDes[tsubRecordOA0]->offset = (unsigned short)((char *)&prec->oa0 - (char *)prec);
    prt->papFldDes[tsubRecordOA1]->size = sizeof(prec->oa1);
    prt->papFldDes[tsubRecordOA1]->offset = (unsigned short)((char *)&prec->oa1 - (char *)prec);
    prt->papFldDes[tsubRecordOA2]->size = sizeof(prec->oa2);
    prt->papFldDes[tsubRecordOA2]->offset = (unsigned short)((char *)&prec->oa2 - (char *)prec);
    prt->papFldDes[tsubRecordOA3]->size = sizeof(prec->oa3);
    prt->papFldDes[tsubRecordOA3]->offset = (unsigned short)((char *)&prec->oa3 - (char *)prec);
    prt->papFldDes[tsubRecordOA4]->size = sizeof(prec->oa4);
    prt->papFldDes[tsubRecordOA4]->offset = (unsigned short)((char *)&prec->oa4 - (char *)prec);
    prt->papFldDes[tsubRecordOA5]->size = sizeof(prec->oa5);
    prt->papFldDes[tsubRecordOA5]->offset = (unsigned short)((char *)&prec->oa5 - (char *)prec);
    prt->papFldDes[tsubRecordOA6]->size = sizeof(prec->oa6);
    prt->papFldDes[tsubRecordOA6]->offset = (unsigned short)((char *)&prec->oa6 - (char *)prec);
    prt->papFldDes[tsubRecordOA7]->size = sizeof(prec->oa7);
    prt->papFldDes[tsubRecordOA7]->offset = (unsigned short)((char *)&prec->oa7 - (char *)prec);
    prt->papFldDes[tsubRecordOA8]->size = sizeof(prec->oa8);
    prt->papFldDes[tsubRecordOA8]->offset = (unsigned short)((char *)&prec->oa8 - (char *)prec);
    prt->papFldDes[tsubRecordOA9]->size = sizeof(prec->oa9);
    prt->papFldDes[tsubRecordOA9]->offset = (unsigned short)((char *)&prec->oa9 - (char *)prec);
    prt->papFldDes[tsubRecordOB0]->size = sizeof(prec->ob0);
    prt->papFldDes[tsubRecordOB0]->offset = (unsigned short)((char *)&prec->ob0 - (char *)prec);
    prt->papFldDes[tsubRecordOB1]->size = sizeof(prec->ob1);
    prt->papFldDes[tsubRecordOB1]->offset = (unsigned short)((char *)&prec->ob1 - (char *)prec);
    prt->papFldDes[tsubRecordOB2]->size = sizeof(prec->ob2);
    prt->papFldDes[tsubRecordOB2]->offset = (unsigned short)((char *)&prec->ob2 - (char *)prec);
    prt->papFldDes[tsubRecordOB3]->size = sizeof(prec->ob3);
    prt->papFldDes[tsubRecordOB3]->offset = (unsigned short)((char *)&prec->ob3 - (char *)prec);
    prt->papFldDes[tsubRecordOB4]->size = sizeof(prec->ob4);
    prt->papFldDes[tsubRecordOB4]->offset = (unsigned short)((char *)&prec->ob4 - (char *)prec);
    prt->papFldDes[tsubRecordOB5]->size = sizeof(prec->ob5);
    prt->papFldDes[tsubRecordOB5]->offset = (unsigned short)((char *)&prec->ob5 - (char *)prec);
    prt->papFldDes[tsubRecordOB6]->size = sizeof(prec->ob6);
    prt->papFldDes[tsubRecordOB6]->offset = (unsigned short)((char *)&prec->ob6 - (char *)prec);
    prt->papFldDes[tsubRecordOB7]->size = sizeof(prec->ob7);
    prt->papFldDes[tsubRecordOB7]->offset = (unsigned short)((char *)&prec->ob7 - (char *)prec);
    prt->papFldDes[tsubRecordOB8]->size = sizeof(prec->ob8);
    prt->papFldDes[tsubRecordOB8]->offset = (unsigned short)((char *)&prec->ob8 - (char *)prec);
    prt->papFldDes[tsubRecordOB9]->size = sizeof(prec->ob9);
    prt->papFldDes[tsubRecordOB9]->offset = (unsigned short)((char *)&prec->ob9 - (char *)prec);
    prt->papFldDes[tsubRecordOC0]->size = sizeof(prec->oc0);
    prt->papFldDes[tsubRecordOC0]->offset = (unsigned short)((char *)&prec->oc0 - (char *)prec);
    prt->papFldDes[tsubRecordOC1]->size = sizeof(prec->oc1);
    prt->papFldDes[tsubRecordOC1]->offset = (unsigned short)((char *)&prec->oc1 - (char *)prec);
    prt->papFldDes[tsubRecordOC2]->size = sizeof(prec->oc2);
    prt->papFldDes[tsubRecordOC2]->offset = (unsigned short)((char *)&prec->oc2 - (char *)prec);
    prt->papFldDes[tsubRecordOC3]->size = sizeof(prec->oc3);
    prt->papFldDes[tsubRecordOC3]->offset = (unsigned short)((char *)&prec->oc3 - (char *)prec);
    prt->papFldDes[tsubRecordOC4]->size = sizeof(prec->oc4);
    prt->papFldDes[tsubRecordOC4]->offset = (unsigned short)((char *)&prec->oc4 - (char *)prec);
    prt->papFldDes[tsubRecordOC5]->size = sizeof(prec->oc5);
    prt->papFldDes[tsubRecordOC5]->offset = (unsigned short)((char *)&prec->oc5 - (char *)prec);
    prt->papFldDes[tsubRecordOC6]->size = sizeof(prec->oc6);
    prt->papFldDes[tsubRecordOC6]->offset = (unsigned short)((char *)&prec->oc6 - (char *)prec);
    prt->papFldDes[tsubRecordOC7]->size = sizeof(prec->oc7);
    prt->papFldDes[tsubRecordOC7]->offset = (unsigned short)((char *)&prec->oc7 - (char *)prec);
    prt->papFldDes[tsubRecordOC8]->size = sizeof(prec->oc8);
    prt->papFldDes[tsubRecordOC8]->offset = (unsigned short)((char *)&prec->oc8 - (char *)prec);
    prt->papFldDes[tsubRecordOC9]->size = sizeof(prec->oc9);
    prt->papFldDes[tsubRecordOC9]->offset = (unsigned short)((char *)&prec->oc9 - (char *)prec);
    prt->papFldDes[tsubRecordOD0]->size = sizeof(prec->od0);
    prt->papFldDes[tsubRecordOD0]->offset = (unsigned short)((char *)&prec->od0 - (char *)prec);
    prt->papFldDes[tsubRecordOD1]->size = sizeof(prec->od1);
    prt->papFldDes[tsubRecordOD1]->offset = (unsigned short)((char *)&prec->od1 - (char *)prec);
    prt->papFldDes[tsubRecordOD2]->size = sizeof(prec->od2);
    prt->papFldDes[tsubRecordOD2]->offset = (unsigned short)((char *)&prec->od2 - (char *)prec);
    prt->papFldDes[tsubRecordOD3]->size = sizeof(prec->od3);
    prt->papFldDes[tsubRecordOD3]->offset = (unsigned short)((char *)&prec->od3 - (char *)prec);
    prt->papFldDes[tsubRecordOD4]->size = sizeof(prec->od4);
    prt->papFldDes[tsubRecordOD4]->offset = (unsigned short)((char *)&prec->od4 - (char *)prec);
    prt->papFldDes[tsubRecordOD5]->size = sizeof(prec->od5);
    prt->papFldDes[tsubRecordOD5]->offset = (unsigned short)((char *)&prec->od5 - (char *)prec);
    prt->papFldDes[tsubRecordOD6]->size = sizeof(prec->od6);
    prt->papFldDes[tsubRecordOD6]->offset = (unsigned short)((char *)&prec->od6 - (char *)prec);
    prt->papFldDes[tsubRecordOD7]->size = sizeof(prec->od7);
    prt->papFldDes[tsubRecordOD7]->offset = (unsigned short)((char *)&prec->od7 - (char *)prec);
    prt->papFldDes[tsubRecordOD8]->size = sizeof(prec->od8);
    prt->papFldDes[tsubRecordOD8]->offset = (unsigned short)((char *)&prec->od8 - (char *)prec);
    prt->papFldDes[tsubRecordOD9]->size = sizeof(prec->od9);
    prt->papFldDes[tsubRecordOD9]->offset = (unsigned short)((char *)&prec->od9 - (char *)prec);
    prt->papFldDes[tsubRecordOE0]->size = sizeof(prec->oe0);
    prt->papFldDes[tsubRecordOE0]->offset = (unsigned short)((char *)&prec->oe0 - (char *)prec);
    prt->papFldDes[tsubRecordOE1]->size = sizeof(prec->oe1);
    prt->papFldDes[tsubRecordOE1]->offset = (unsigned short)((char *)&prec->oe1 - (char *)prec);
    prt->papFldDes[tsubRecordOE2]->size = sizeof(prec->oe2);
    prt->papFldDes[tsubRecordOE2]->offset = (unsigned short)((char *)&prec->oe2 - (char *)prec);
    prt->papFldDes[tsubRecordOE3]->size = sizeof(prec->oe3);
    prt->papFldDes[tsubRecordOE3]->offset = (unsigned short)((char *)&prec->oe3 - (char *)prec);
    prt->papFldDes[tsubRecordOE4]->size = sizeof(prec->oe4);
    prt->papFldDes[tsubRecordOE4]->offset = (unsigned short)((char *)&prec->oe4 - (char *)prec);
    prt->papFldDes[tsubRecordOE5]->size = sizeof(prec->oe5);
    prt->papFldDes[tsubRecordOE5]->offset = (unsigned short)((char *)&prec->oe5 - (char *)prec);
    prt->papFldDes[tsubRecordOE6]->size = sizeof(prec->oe6);
    prt->papFldDes[tsubRecordOE6]->offset = (unsigned short)((char *)&prec->oe6 - (char *)prec);
    prt->papFldDes[tsubRecordOE7]->size = sizeof(prec->oe7);
    prt->papFldDes[tsubRecordOE7]->offset = (unsigned short)((char *)&prec->oe7 - (char *)prec);
    prt->papFldDes[tsubRecordOE8]->size = sizeof(prec->oe8);
    prt->papFldDes[tsubRecordOE8]->offset = (unsigned short)((char *)&prec->oe8 - (char *)prec);
    prt->papFldDes[tsubRecordOE9]->size = sizeof(prec->oe9);
    prt->papFldDes[tsubRecordOE9]->offset = (unsigned short)((char *)&prec->oe9 - (char *)prec);
    prt->papFldDes[tsubRecordOF0]->size = sizeof(prec->of0);
    prt->papFldDes[tsubRecordOF0]->offset = (unsigned short)((char *)&prec->of0 - (char *)prec);
    prt->papFldDes[tsubRecordOF1]->size = sizeof(prec->of1);
    prt->papFldDes[tsubRecordOF1]->offset = (unsigned short)((char *)&prec->of1 - (char *)prec);
    prt->papFldDes[tsubRecordOF2]->size = sizeof(prec->of2);
    prt->papFldDes[tsubRecordOF2]->offset = (unsigned short)((char *)&prec->of2 - (char *)prec);
    prt->papFldDes[tsubRecordOF3]->size = sizeof(prec->of3);
    prt->papFldDes[tsubRecordOF3]->offset = (unsigned short)((char *)&prec->of3 - (char *)prec);
    prt->papFldDes[tsubRecordOF4]->size = sizeof(prec->of4);
    prt->papFldDes[tsubRecordOF4]->offset = (unsigned short)((char *)&prec->of4 - (char *)prec);
    prt->papFldDes[tsubRecordOF5]->size = sizeof(prec->of5);
    prt->papFldDes[tsubRecordOF5]->offset = (unsigned short)((char *)&prec->of5 - (char *)prec);
    prt->papFldDes[tsubRecordOF6]->size = sizeof(prec->of6);
    prt->papFldDes[tsubRecordOF6]->offset = (unsigned short)((char *)&prec->of6 - (char *)prec);
    prt->papFldDes[tsubRecordOF7]->size = sizeof(prec->of7);
    prt->papFldDes[tsubRecordOF7]->offset = (unsigned short)((char *)&prec->of7 - (char *)prec);
    prt->papFldDes[tsubRecordOF8]->size = sizeof(prec->of8);
    prt->papFldDes[tsubRecordOF8]->offset = (unsigned short)((char *)&prec->of8 - (char *)prec);
    prt->papFldDes[tsubRecordOF9]->size = sizeof(prec->of9);
    prt->papFldDes[tsubRecordOF9]->offset = (unsigned short)((char *)&prec->of9 - (char *)prec);
    prt->papFldDes[tsubRecordLOA]->size = sizeof(prec->loa);
    prt->papFldDes[tsubRecordLOA]->offset = (unsigned short)((char *)&prec->loa - (char *)prec);
    prt->papFldDes[tsubRecordLOB]->size = sizeof(prec->lob);
    prt->papFldDes[tsubRecordLOB]->offset = (unsigned short)((char *)&prec->lob - (char *)prec);
    prt->papFldDes[tsubRecordLOC]->size = sizeof(prec->loc);
    prt->papFldDes[tsubRecordLOC]->offset = (unsigned short)((char *)&prec->loc - (char *)prec);
    prt->papFldDes[tsubRecordLOD]->size = sizeof(prec->lod);
    prt->papFldDes[tsubRecordLOD]->offset = (unsigned short)((char *)&prec->lod - (char *)prec);
    prt->papFldDes[tsubRecordLOE]->size = sizeof(prec->loe);
    prt->papFldDes[tsubRecordLOE]->offset = (unsigned short)((char *)&prec->loe - (char *)prec);
    prt->papFldDes[tsubRecordLOF]->size = sizeof(prec->lof);
    prt->papFldDes[tsubRecordLOF]->offset = (unsigned short)((char *)&prec->lof - (char *)prec);
    prt->papFldDes[tsubRecordLOG]->size = sizeof(prec->log);
    prt->papFldDes[tsubRecordLOG]->offset = (unsigned short)((char *)&prec->log - (char *)prec);
    prt->papFldDes[tsubRecordLOH]->size = sizeof(prec->loh);
    prt->papFldDes[tsubRecordLOH]->offset = (unsigned short)((char *)&prec->loh - (char *)prec);
    prt->papFldDes[tsubRecordLOI]->size = sizeof(prec->loi);
    prt->papFldDes[tsubRecordLOI]->offset = (unsigned short)((char *)&prec->loi - (char *)prec);
    prt->papFldDes[tsubRecordLOJ]->size = sizeof(prec->loj);
    prt->papFldDes[tsubRecordLOJ]->offset = (unsigned short)((char *)&prec->loj - (char *)prec);
    prt->papFldDes[tsubRecordLOA0]->size = sizeof(prec->loa0);
    prt->papFldDes[tsubRecordLOA0]->offset = (unsigned short)((char *)&prec->loa0 - (char *)prec);
    prt->papFldDes[tsubRecordLOA1]->size = sizeof(prec->loa1);
    prt->papFldDes[tsubRecordLOA1]->offset = (unsigned short)((char *)&prec->loa1 - (char *)prec);
    prt->papFldDes[tsubRecordLOA2]->size = sizeof(prec->loa2);
    prt->papFldDes[tsubRecordLOA2]->offset = (unsigned short)((char *)&prec->loa2 - (char *)prec);
    prt->papFldDes[tsubRecordLOA3]->size = sizeof(prec->loa3);
    prt->papFldDes[tsubRecordLOA3]->offset = (unsigned short)((char *)&prec->loa3 - (char *)prec);
    prt->papFldDes[tsubRecordLOA4]->size = sizeof(prec->loa4);
    prt->papFldDes[tsubRecordLOA4]->offset = (unsigned short)((char *)&prec->loa4 - (char *)prec);
    prt->papFldDes[tsubRecordLOA5]->size = sizeof(prec->loa5);
    prt->papFldDes[tsubRecordLOA5]->offset = (unsigned short)((char *)&prec->loa5 - (char *)prec);
    prt->papFldDes[tsubRecordLOA6]->size = sizeof(prec->loa6);
    prt->papFldDes[tsubRecordLOA6]->offset = (unsigned short)((char *)&prec->loa6 - (char *)prec);
    prt->papFldDes[tsubRecordLOA7]->size = sizeof(prec->loa7);
    prt->papFldDes[tsubRecordLOA7]->offset = (unsigned short)((char *)&prec->loa7 - (char *)prec);
    prt->papFldDes[tsubRecordLOA8]->size = sizeof(prec->loa8);
    prt->papFldDes[tsubRecordLOA8]->offset = (unsigned short)((char *)&prec->loa8 - (char *)prec);
    prt->papFldDes[tsubRecordLOA9]->size = sizeof(prec->loa9);
    prt->papFldDes[tsubRecordLOA9]->offset = (unsigned short)((char *)&prec->loa9 - (char *)prec);
    prt->papFldDes[tsubRecordLOB0]->size = sizeof(prec->lob0);
    prt->papFldDes[tsubRecordLOB0]->offset = (unsigned short)((char *)&prec->lob0 - (char *)prec);
    prt->papFldDes[tsubRecordLOB1]->size = sizeof(prec->lob1);
    prt->papFldDes[tsubRecordLOB1]->offset = (unsigned short)((char *)&prec->lob1 - (char *)prec);
    prt->papFldDes[tsubRecordLOB2]->size = sizeof(prec->lob2);
    prt->papFldDes[tsubRecordLOB2]->offset = (unsigned short)((char *)&prec->lob2 - (char *)prec);
    prt->papFldDes[tsubRecordLOB3]->size = sizeof(prec->lob3);
    prt->papFldDes[tsubRecordLOB3]->offset = (unsigned short)((char *)&prec->lob3 - (char *)prec);
    prt->papFldDes[tsubRecordLOB4]->size = sizeof(prec->lob4);
    prt->papFldDes[tsubRecordLOB4]->offset = (unsigned short)((char *)&prec->lob4 - (char *)prec);
    prt->papFldDes[tsubRecordLOB5]->size = sizeof(prec->lob5);
    prt->papFldDes[tsubRecordLOB5]->offset = (unsigned short)((char *)&prec->lob5 - (char *)prec);
    prt->papFldDes[tsubRecordLOB6]->size = sizeof(prec->lob6);
    prt->papFldDes[tsubRecordLOB6]->offset = (unsigned short)((char *)&prec->lob6 - (char *)prec);
    prt->papFldDes[tsubRecordLOB7]->size = sizeof(prec->lob7);
    prt->papFldDes[tsubRecordLOB7]->offset = (unsigned short)((char *)&prec->lob7 - (char *)prec);
    prt->papFldDes[tsubRecordLOB8]->size = sizeof(prec->lob8);
    prt->papFldDes[tsubRecordLOB8]->offset = (unsigned short)((char *)&prec->lob8 - (char *)prec);
    prt->papFldDes[tsubRecordLOB9]->size = sizeof(prec->lob9);
    prt->papFldDes[tsubRecordLOB9]->offset = (unsigned short)((char *)&prec->lob9 - (char *)prec);
    prt->papFldDes[tsubRecordLOC0]->size = sizeof(prec->loc0);
    prt->papFldDes[tsubRecordLOC0]->offset = (unsigned short)((char *)&prec->loc0 - (char *)prec);
    prt->papFldDes[tsubRecordLOC1]->size = sizeof(prec->loc1);
    prt->papFldDes[tsubRecordLOC1]->offset = (unsigned short)((char *)&prec->loc1 - (char *)prec);
    prt->papFldDes[tsubRecordLOC2]->size = sizeof(prec->loc2);
    prt->papFldDes[tsubRecordLOC2]->offset = (unsigned short)((char *)&prec->loc2 - (char *)prec);
    prt->papFldDes[tsubRecordLOC3]->size = sizeof(prec->loc3);
    prt->papFldDes[tsubRecordLOC3]->offset = (unsigned short)((char *)&prec->loc3 - (char *)prec);
    prt->papFldDes[tsubRecordLOC4]->size = sizeof(prec->loc4);
    prt->papFldDes[tsubRecordLOC4]->offset = (unsigned short)((char *)&prec->loc4 - (char *)prec);
    prt->papFldDes[tsubRecordLOC5]->size = sizeof(prec->loc5);
    prt->papFldDes[tsubRecordLOC5]->offset = (unsigned short)((char *)&prec->loc5 - (char *)prec);
    prt->papFldDes[tsubRecordLOC6]->size = sizeof(prec->loc6);
    prt->papFldDes[tsubRecordLOC6]->offset = (unsigned short)((char *)&prec->loc6 - (char *)prec);
    prt->papFldDes[tsubRecordLOC7]->size = sizeof(prec->loc7);
    prt->papFldDes[tsubRecordLOC7]->offset = (unsigned short)((char *)&prec->loc7 - (char *)prec);
    prt->papFldDes[tsubRecordLOC8]->size = sizeof(prec->loc8);
    prt->papFldDes[tsubRecordLOC8]->offset = (unsigned short)((char *)&prec->loc8 - (char *)prec);
    prt->papFldDes[tsubRecordLOC9]->size = sizeof(prec->loc9);
    prt->papFldDes[tsubRecordLOC9]->offset = (unsigned short)((char *)&prec->loc9 - (char *)prec);
    prt->papFldDes[tsubRecordLOD0]->size = sizeof(prec->lod0);
    prt->papFldDes[tsubRecordLOD0]->offset = (unsigned short)((char *)&prec->lod0 - (char *)prec);
    prt->papFldDes[tsubRecordLOD1]->size = sizeof(prec->lod1);
    prt->papFldDes[tsubRecordLOD1]->offset = (unsigned short)((char *)&prec->lod1 - (char *)prec);
    prt->papFldDes[tsubRecordLOD2]->size = sizeof(prec->lod2);
    prt->papFldDes[tsubRecordLOD2]->offset = (unsigned short)((char *)&prec->lod2 - (char *)prec);
    prt->papFldDes[tsubRecordLOD3]->size = sizeof(prec->lod3);
    prt->papFldDes[tsubRecordLOD3]->offset = (unsigned short)((char *)&prec->lod3 - (char *)prec);
    prt->papFldDes[tsubRecordLOD4]->size = sizeof(prec->lod4);
    prt->papFldDes[tsubRecordLOD4]->offset = (unsigned short)((char *)&prec->lod4 - (char *)prec);
    prt->papFldDes[tsubRecordLOD5]->size = sizeof(prec->lod5);
    prt->papFldDes[tsubRecordLOD5]->offset = (unsigned short)((char *)&prec->lod5 - (char *)prec);
    prt->papFldDes[tsubRecordLOD6]->size = sizeof(prec->lod6);
    prt->papFldDes[tsubRecordLOD6]->offset = (unsigned short)((char *)&prec->lod6 - (char *)prec);
    prt->papFldDes[tsubRecordLOD7]->size = sizeof(prec->lod7);
    prt->papFldDes[tsubRecordLOD7]->offset = (unsigned short)((char *)&prec->lod7 - (char *)prec);
    prt->papFldDes[tsubRecordLOD8]->size = sizeof(prec->lod8);
    prt->papFldDes[tsubRecordLOD8]->offset = (unsigned short)((char *)&prec->lod8 - (char *)prec);
    prt->papFldDes[tsubRecordLOD9]->size = sizeof(prec->lod9);
    prt->papFldDes[tsubRecordLOD9]->offset = (unsigned short)((char *)&prec->lod9 - (char *)prec);
    prt->papFldDes[tsubRecordLOE0]->size = sizeof(prec->loe0);
    prt->papFldDes[tsubRecordLOE0]->offset = (unsigned short)((char *)&prec->loe0 - (char *)prec);
    prt->papFldDes[tsubRecordLOE1]->size = sizeof(prec->loe1);
    prt->papFldDes[tsubRecordLOE1]->offset = (unsigned short)((char *)&prec->loe1 - (char *)prec);
    prt->papFldDes[tsubRecordLOE2]->size = sizeof(prec->loe2);
    prt->papFldDes[tsubRecordLOE2]->offset = (unsigned short)((char *)&prec->loe2 - (char *)prec);
    prt->papFldDes[tsubRecordLOE3]->size = sizeof(prec->loe3);
    prt->papFldDes[tsubRecordLOE3]->offset = (unsigned short)((char *)&prec->loe3 - (char *)prec);
    prt->papFldDes[tsubRecordLOE4]->size = sizeof(prec->loe4);
    prt->papFldDes[tsubRecordLOE4]->offset = (unsigned short)((char *)&prec->loe4 - (char *)prec);
    prt->papFldDes[tsubRecordLOE5]->size = sizeof(prec->loe5);
    prt->papFldDes[tsubRecordLOE5]->offset = (unsigned short)((char *)&prec->loe5 - (char *)prec);
    prt->papFldDes[tsubRecordLOE6]->size = sizeof(prec->loe6);
    prt->papFldDes[tsubRecordLOE6]->offset = (unsigned short)((char *)&prec->loe6 - (char *)prec);
    prt->papFldDes[tsubRecordLOE7]->size = sizeof(prec->loe7);
    prt->papFldDes[tsubRecordLOE7]->offset = (unsigned short)((char *)&prec->loe7 - (char *)prec);
    prt->papFldDes[tsubRecordLOE8]->size = sizeof(prec->loe8);
    prt->papFldDes[tsubRecordLOE8]->offset = (unsigned short)((char *)&prec->loe8 - (char *)prec);
    prt->papFldDes[tsubRecordLOE9]->size = sizeof(prec->loe9);
    prt->papFldDes[tsubRecordLOE9]->offset = (unsigned short)((char *)&prec->loe9 - (char *)prec);
    prt->papFldDes[tsubRecordLOF0]->size = sizeof(prec->lof0);
    prt->papFldDes[tsubRecordLOF0]->offset = (unsigned short)((char *)&prec->lof0 - (char *)prec);
    prt->papFldDes[tsubRecordLOF1]->size = sizeof(prec->lof1);
    prt->papFldDes[tsubRecordLOF1]->offset = (unsigned short)((char *)&prec->lof1 - (char *)prec);
    prt->papFldDes[tsubRecordLOF2]->size = sizeof(prec->lof2);
    prt->papFldDes[tsubRecordLOF2]->offset = (unsigned short)((char *)&prec->lof2 - (char *)prec);
    prt->papFldDes[tsubRecordLOF3]->size = sizeof(prec->lof3);
    prt->papFldDes[tsubRecordLOF3]->offset = (unsigned short)((char *)&prec->lof3 - (char *)prec);
    prt->papFldDes[tsubRecordLOF4]->size = sizeof(prec->lof4);
    prt->papFldDes[tsubRecordLOF4]->offset = (unsigned short)((char *)&prec->lof4 - (char *)prec);
    prt->papFldDes[tsubRecordLOF5]->size = sizeof(prec->lof5);
    prt->papFldDes[tsubRecordLOF5]->offset = (unsigned short)((char *)&prec->lof5 - (char *)prec);
    prt->papFldDes[tsubRecordLOF6]->size = sizeof(prec->lof6);
    prt->papFldDes[tsubRecordLOF6]->offset = (unsigned short)((char *)&prec->lof6 - (char *)prec);
    prt->papFldDes[tsubRecordLOF7]->size = sizeof(prec->lof7);
    prt->papFldDes[tsubRecordLOF7]->offset = (unsigned short)((char *)&prec->lof7 - (char *)prec);
    prt->papFldDes[tsubRecordLOF8]->size = sizeof(prec->lof8);
    prt->papFldDes[tsubRecordLOF8]->offset = (unsigned short)((char *)&prec->lof8 - (char *)prec);
    prt->papFldDes[tsubRecordLOF9]->size = sizeof(prec->lof9);
    prt->papFldDes[tsubRecordLOF9]->offset = (unsigned short)((char *)&prec->lof9 - (char *)prec);
    prt->papFldDes[tsubRecordINPA]->size = sizeof(prec->inpa);
    prt->papFldDes[tsubRecordINPA]->offset = (unsigned short)((char *)&prec->inpa - (char *)prec);
    prt->papFldDes[tsubRecordINPB]->size = sizeof(prec->inpb);
    prt->papFldDes[tsubRecordINPB]->offset = (unsigned short)((char *)&prec->inpb - (char *)prec);
    prt->papFldDes[tsubRecordINPC]->size = sizeof(prec->inpc);
    prt->papFldDes[tsubRecordINPC]->offset = (unsigned short)((char *)&prec->inpc - (char *)prec);
    prt->papFldDes[tsubRecordINPD]->size = sizeof(prec->inpd);
    prt->papFldDes[tsubRecordINPD]->offset = (unsigned short)((char *)&prec->inpd - (char *)prec);
    prt->papFldDes[tsubRecordINPE]->size = sizeof(prec->inpe);
    prt->papFldDes[tsubRecordINPE]->offset = (unsigned short)((char *)&prec->inpe - (char *)prec);
    prt->papFldDes[tsubRecordINPF]->size = sizeof(prec->inpf);
    prt->papFldDes[tsubRecordINPF]->offset = (unsigned short)((char *)&prec->inpf - (char *)prec);
    prt->papFldDes[tsubRecordINPG]->size = sizeof(prec->inpg);
    prt->papFldDes[tsubRecordINPG]->offset = (unsigned short)((char *)&prec->inpg - (char *)prec);
    prt->papFldDes[tsubRecordINPH]->size = sizeof(prec->inph);
    prt->papFldDes[tsubRecordINPH]->offset = (unsigned short)((char *)&prec->inph - (char *)prec);
    prt->papFldDes[tsubRecordINPI]->size = sizeof(prec->inpi);
    prt->papFldDes[tsubRecordINPI]->offset = (unsigned short)((char *)&prec->inpi - (char *)prec);
    prt->papFldDes[tsubRecordINPJ]->size = sizeof(prec->inpj);
    prt->papFldDes[tsubRecordINPJ]->offset = (unsigned short)((char *)&prec->inpj - (char *)prec);
    prt->papFldDes[tsubRecordINPK]->size = sizeof(prec->inpk);
    prt->papFldDes[tsubRecordINPK]->offset = (unsigned short)((char *)&prec->inpk - (char *)prec);
    prt->papFldDes[tsubRecordINPL]->size = sizeof(prec->inpl);
    prt->papFldDes[tsubRecordINPL]->offset = (unsigned short)((char *)&prec->inpl - (char *)prec);
    prt->papFldDes[tsubRecordINPM]->size = sizeof(prec->inpm);
    prt->papFldDes[tsubRecordINPM]->offset = (unsigned short)((char *)&prec->inpm - (char *)prec);
    prt->papFldDes[tsubRecordINPN]->size = sizeof(prec->inpn);
    prt->papFldDes[tsubRecordINPN]->offset = (unsigned short)((char *)&prec->inpn - (char *)prec);
    prt->papFldDes[tsubRecordINPO]->size = sizeof(prec->inpo);
    prt->papFldDes[tsubRecordINPO]->offset = (unsigned short)((char *)&prec->inpo - (char *)prec);
    prt->papFldDes[tsubRecordINPP]->size = sizeof(prec->inpp);
    prt->papFldDes[tsubRecordINPP]->offset = (unsigned short)((char *)&prec->inpp - (char *)prec);
    prt->papFldDes[tsubRecordINPQ]->size = sizeof(prec->inpq);
    prt->papFldDes[tsubRecordINPQ]->offset = (unsigned short)((char *)&prec->inpq - (char *)prec);
    prt->papFldDes[tsubRecordINPR]->size = sizeof(prec->inpr);
    prt->papFldDes[tsubRecordINPR]->offset = (unsigned short)((char *)&prec->inpr - (char *)prec);
    prt->papFldDes[tsubRecordINPS]->size = sizeof(prec->inps);
    prt->papFldDes[tsubRecordINPS]->offset = (unsigned short)((char *)&prec->inps - (char *)prec);
    prt->papFldDes[tsubRecordINPT]->size = sizeof(prec->inpt);
    prt->papFldDes[tsubRecordINPT]->offset = (unsigned short)((char *)&prec->inpt - (char *)prec);
    prt->papFldDes[tsubRecordIPA0]->size = sizeof(prec->ipa0);
    prt->papFldDes[tsubRecordIPA0]->offset = (unsigned short)((char *)&prec->ipa0 - (char *)prec);
    prt->papFldDes[tsubRecordIPA1]->size = sizeof(prec->ipa1);
    prt->papFldDes[tsubRecordIPA1]->offset = (unsigned short)((char *)&prec->ipa1 - (char *)prec);
    prt->papFldDes[tsubRecordIPA2]->size = sizeof(prec->ipa2);
    prt->papFldDes[tsubRecordIPA2]->offset = (unsigned short)((char *)&prec->ipa2 - (char *)prec);
    prt->papFldDes[tsubRecordIPA3]->size = sizeof(prec->ipa3);
    prt->papFldDes[tsubRecordIPA3]->offset = (unsigned short)((char *)&prec->ipa3 - (char *)prec);
    prt->papFldDes[tsubRecordIPA4]->size = sizeof(prec->ipa4);
    prt->papFldDes[tsubRecordIPA4]->offset = (unsigned short)((char *)&prec->ipa4 - (char *)prec);
    prt->papFldDes[tsubRecordIPA5]->size = sizeof(prec->ipa5);
    prt->papFldDes[tsubRecordIPA5]->offset = (unsigned short)((char *)&prec->ipa5 - (char *)prec);
    prt->papFldDes[tsubRecordIPA6]->size = sizeof(prec->ipa6);
    prt->papFldDes[tsubRecordIPA6]->offset = (unsigned short)((char *)&prec->ipa6 - (char *)prec);
    prt->papFldDes[tsubRecordIPA7]->size = sizeof(prec->ipa7);
    prt->papFldDes[tsubRecordIPA7]->offset = (unsigned short)((char *)&prec->ipa7 - (char *)prec);
    prt->papFldDes[tsubRecordIPA8]->size = sizeof(prec->ipa8);
    prt->papFldDes[tsubRecordIPA8]->offset = (unsigned short)((char *)&prec->ipa8 - (char *)prec);
    prt->papFldDes[tsubRecordIPA9]->size = sizeof(prec->ipa9);
    prt->papFldDes[tsubRecordIPA9]->offset = (unsigned short)((char *)&prec->ipa9 - (char *)prec);
    prt->papFldDes[tsubRecordIPB0]->size = sizeof(prec->ipb0);
    prt->papFldDes[tsubRecordIPB0]->offset = (unsigned short)((char *)&prec->ipb0 - (char *)prec);
    prt->papFldDes[tsubRecordIPB1]->size = sizeof(prec->ipb1);
    prt->papFldDes[tsubRecordIPB1]->offset = (unsigned short)((char *)&prec->ipb1 - (char *)prec);
    prt->papFldDes[tsubRecordIPB2]->size = sizeof(prec->ipb2);
    prt->papFldDes[tsubRecordIPB2]->offset = (unsigned short)((char *)&prec->ipb2 - (char *)prec);
    prt->papFldDes[tsubRecordIPB3]->size = sizeof(prec->ipb3);
    prt->papFldDes[tsubRecordIPB3]->offset = (unsigned short)((char *)&prec->ipb3 - (char *)prec);
    prt->papFldDes[tsubRecordIPB4]->size = sizeof(prec->ipb4);
    prt->papFldDes[tsubRecordIPB4]->offset = (unsigned short)((char *)&prec->ipb4 - (char *)prec);
    prt->papFldDes[tsubRecordIPB5]->size = sizeof(prec->ipb5);
    prt->papFldDes[tsubRecordIPB5]->offset = (unsigned short)((char *)&prec->ipb5 - (char *)prec);
    prt->papFldDes[tsubRecordIPB6]->size = sizeof(prec->ipb6);
    prt->papFldDes[tsubRecordIPB6]->offset = (unsigned short)((char *)&prec->ipb6 - (char *)prec);
    prt->papFldDes[tsubRecordIPB7]->size = sizeof(prec->ipb7);
    prt->papFldDes[tsubRecordIPB7]->offset = (unsigned short)((char *)&prec->ipb7 - (char *)prec);
    prt->papFldDes[tsubRecordIPB8]->size = sizeof(prec->ipb8);
    prt->papFldDes[tsubRecordIPB8]->offset = (unsigned short)((char *)&prec->ipb8 - (char *)prec);
    prt->papFldDes[tsubRecordIPB9]->size = sizeof(prec->ipb9);
    prt->papFldDes[tsubRecordIPB9]->offset = (unsigned short)((char *)&prec->ipb9 - (char *)prec);
    prt->papFldDes[tsubRecordIPC0]->size = sizeof(prec->ipc0);
    prt->papFldDes[tsubRecordIPC0]->offset = (unsigned short)((char *)&prec->ipc0 - (char *)prec);
    prt->papFldDes[tsubRecordIPC1]->size = sizeof(prec->ipc1);
    prt->papFldDes[tsubRecordIPC1]->offset = (unsigned short)((char *)&prec->ipc1 - (char *)prec);
    prt->papFldDes[tsubRecordIPC2]->size = sizeof(prec->ipc2);
    prt->papFldDes[tsubRecordIPC2]->offset = (unsigned short)((char *)&prec->ipc2 - (char *)prec);
    prt->papFldDes[tsubRecordIPC3]->size = sizeof(prec->ipc3);
    prt->papFldDes[tsubRecordIPC3]->offset = (unsigned short)((char *)&prec->ipc3 - (char *)prec);
    prt->papFldDes[tsubRecordIPC4]->size = sizeof(prec->ipc4);
    prt->papFldDes[tsubRecordIPC4]->offset = (unsigned short)((char *)&prec->ipc4 - (char *)prec);
    prt->papFldDes[tsubRecordIPC5]->size = sizeof(prec->ipc5);
    prt->papFldDes[tsubRecordIPC5]->offset = (unsigned short)((char *)&prec->ipc5 - (char *)prec);
    prt->papFldDes[tsubRecordIPC6]->size = sizeof(prec->ipc6);
    prt->papFldDes[tsubRecordIPC6]->offset = (unsigned short)((char *)&prec->ipc6 - (char *)prec);
    prt->papFldDes[tsubRecordIPC7]->size = sizeof(prec->ipc7);
    prt->papFldDes[tsubRecordIPC7]->offset = (unsigned short)((char *)&prec->ipc7 - (char *)prec);
    prt->papFldDes[tsubRecordIPC8]->size = sizeof(prec->ipc8);
    prt->papFldDes[tsubRecordIPC8]->offset = (unsigned short)((char *)&prec->ipc8 - (char *)prec);
    prt->papFldDes[tsubRecordIPC9]->size = sizeof(prec->ipc9);
    prt->papFldDes[tsubRecordIPC9]->offset = (unsigned short)((char *)&prec->ipc9 - (char *)prec);
    prt->papFldDes[tsubRecordIPD0]->size = sizeof(prec->ipd0);
    prt->papFldDes[tsubRecordIPD0]->offset = (unsigned short)((char *)&prec->ipd0 - (char *)prec);
    prt->papFldDes[tsubRecordIPD1]->size = sizeof(prec->ipd1);
    prt->papFldDes[tsubRecordIPD1]->offset = (unsigned short)((char *)&prec->ipd1 - (char *)prec);
    prt->papFldDes[tsubRecordIPD2]->size = sizeof(prec->ipd2);
    prt->papFldDes[tsubRecordIPD2]->offset = (unsigned short)((char *)&prec->ipd2 - (char *)prec);
    prt->papFldDes[tsubRecordIPD3]->size = sizeof(prec->ipd3);
    prt->papFldDes[tsubRecordIPD3]->offset = (unsigned short)((char *)&prec->ipd3 - (char *)prec);
    prt->papFldDes[tsubRecordIPD4]->size = sizeof(prec->ipd4);
    prt->papFldDes[tsubRecordIPD4]->offset = (unsigned short)((char *)&prec->ipd4 - (char *)prec);
    prt->papFldDes[tsubRecordIPD5]->size = sizeof(prec->ipd5);
    prt->papFldDes[tsubRecordIPD5]->offset = (unsigned short)((char *)&prec->ipd5 - (char *)prec);
    prt->papFldDes[tsubRecordIPD6]->size = sizeof(prec->ipd6);
    prt->papFldDes[tsubRecordIPD6]->offset = (unsigned short)((char *)&prec->ipd6 - (char *)prec);
    prt->papFldDes[tsubRecordIPD7]->size = sizeof(prec->ipd7);
    prt->papFldDes[tsubRecordIPD7]->offset = (unsigned short)((char *)&prec->ipd7 - (char *)prec);
    prt->papFldDes[tsubRecordIPD8]->size = sizeof(prec->ipd8);
    prt->papFldDes[tsubRecordIPD8]->offset = (unsigned short)((char *)&prec->ipd8 - (char *)prec);
    prt->papFldDes[tsubRecordIPD9]->size = sizeof(prec->ipd9);
    prt->papFldDes[tsubRecordIPD9]->offset = (unsigned short)((char *)&prec->ipd9 - (char *)prec);
    prt->papFldDes[tsubRecordIPE0]->size = sizeof(prec->ipe0);
    prt->papFldDes[tsubRecordIPE0]->offset = (unsigned short)((char *)&prec->ipe0 - (char *)prec);
    prt->papFldDes[tsubRecordIPE1]->size = sizeof(prec->ipe1);
    prt->papFldDes[tsubRecordIPE1]->offset = (unsigned short)((char *)&prec->ipe1 - (char *)prec);
    prt->papFldDes[tsubRecordIPE2]->size = sizeof(prec->ipe2);
    prt->papFldDes[tsubRecordIPE2]->offset = (unsigned short)((char *)&prec->ipe2 - (char *)prec);
    prt->papFldDes[tsubRecordIPE3]->size = sizeof(prec->ipe3);
    prt->papFldDes[tsubRecordIPE3]->offset = (unsigned short)((char *)&prec->ipe3 - (char *)prec);
    prt->papFldDes[tsubRecordIPE4]->size = sizeof(prec->ipe4);
    prt->papFldDes[tsubRecordIPE4]->offset = (unsigned short)((char *)&prec->ipe4 - (char *)prec);
    prt->papFldDes[tsubRecordIPE5]->size = sizeof(prec->ipe5);
    prt->papFldDes[tsubRecordIPE5]->offset = (unsigned short)((char *)&prec->ipe5 - (char *)prec);
    prt->papFldDes[tsubRecordIPE6]->size = sizeof(prec->ipe6);
    prt->papFldDes[tsubRecordIPE6]->offset = (unsigned short)((char *)&prec->ipe6 - (char *)prec);
    prt->papFldDes[tsubRecordIPE7]->size = sizeof(prec->ipe7);
    prt->papFldDes[tsubRecordIPE7]->offset = (unsigned short)((char *)&prec->ipe7 - (char *)prec);
    prt->papFldDes[tsubRecordIPE8]->size = sizeof(prec->ipe8);
    prt->papFldDes[tsubRecordIPE8]->offset = (unsigned short)((char *)&prec->ipe8 - (char *)prec);
    prt->papFldDes[tsubRecordIPE9]->size = sizeof(prec->ipe9);
    prt->papFldDes[tsubRecordIPE9]->offset = (unsigned short)((char *)&prec->ipe9 - (char *)prec);
    prt->papFldDes[tsubRecordIPF0]->size = sizeof(prec->ipf0);
    prt->papFldDes[tsubRecordIPF0]->offset = (unsigned short)((char *)&prec->ipf0 - (char *)prec);
    prt->papFldDes[tsubRecordIPF1]->size = sizeof(prec->ipf1);
    prt->papFldDes[tsubRecordIPF1]->offset = (unsigned short)((char *)&prec->ipf1 - (char *)prec);
    prt->papFldDes[tsubRecordIPF2]->size = sizeof(prec->ipf2);
    prt->papFldDes[tsubRecordIPF2]->offset = (unsigned short)((char *)&prec->ipf2 - (char *)prec);
    prt->papFldDes[tsubRecordIPF3]->size = sizeof(prec->ipf3);
    prt->papFldDes[tsubRecordIPF3]->offset = (unsigned short)((char *)&prec->ipf3 - (char *)prec);
    prt->papFldDes[tsubRecordIPF4]->size = sizeof(prec->ipf4);
    prt->papFldDes[tsubRecordIPF4]->offset = (unsigned short)((char *)&prec->ipf4 - (char *)prec);
    prt->papFldDes[tsubRecordIPF5]->size = sizeof(prec->ipf5);
    prt->papFldDes[tsubRecordIPF5]->offset = (unsigned short)((char *)&prec->ipf5 - (char *)prec);
    prt->papFldDes[tsubRecordIPF6]->size = sizeof(prec->ipf6);
    prt->papFldDes[tsubRecordIPF6]->offset = (unsigned short)((char *)&prec->ipf6 - (char *)prec);
    prt->papFldDes[tsubRecordIPF7]->size = sizeof(prec->ipf7);
    prt->papFldDes[tsubRecordIPF7]->offset = (unsigned short)((char *)&prec->ipf7 - (char *)prec);
    prt->papFldDes[tsubRecordIPF8]->size = sizeof(prec->ipf8);
    prt->papFldDes[tsubRecordIPF8]->offset = (unsigned short)((char *)&prec->ipf8 - (char *)prec);
    prt->papFldDes[tsubRecordIPF9]->size = sizeof(prec->ipf9);
    prt->papFldDes[tsubRecordIPF9]->offset = (unsigned short)((char *)&prec->ipf9 - (char *)prec);
    prt->papFldDes[tsubRecordA]->size = sizeof(prec->a);
    prt->papFldDes[tsubRecordA]->offset = (unsigned short)((char *)&prec->a - (char *)prec);
    prt->papFldDes[tsubRecordB]->size = sizeof(prec->b);
    prt->papFldDes[tsubRecordB]->offset = (unsigned short)((char *)&prec->b - (char *)prec);
    prt->papFldDes[tsubRecordC]->size = sizeof(prec->c);
    prt->papFldDes[tsubRecordC]->offset = (unsigned short)((char *)&prec->c - (char *)prec);
    prt->papFldDes[tsubRecordD]->size = sizeof(prec->d);
    prt->papFldDes[tsubRecordD]->offset = (unsigned short)((char *)&prec->d - (char *)prec);
    prt->papFldDes[tsubRecordE]->size = sizeof(prec->e);
    prt->papFldDes[tsubRecordE]->offset = (unsigned short)((char *)&prec->e - (char *)prec);
    prt->papFldDes[tsubRecordF]->size = sizeof(prec->f);
    prt->papFldDes[tsubRecordF]->offset = (unsigned short)((char *)&prec->f - (char *)prec);
    prt->papFldDes[tsubRecordG]->size = sizeof(prec->g);
    prt->papFldDes[tsubRecordG]->offset = (unsigned short)((char *)&prec->g - (char *)prec);
    prt->papFldDes[tsubRecordH]->size = sizeof(prec->h);
    prt->papFldDes[tsubRecordH]->offset = (unsigned short)((char *)&prec->h - (char *)prec);
    prt->papFldDes[tsubRecordI]->size = sizeof(prec->i);
    prt->papFldDes[tsubRecordI]->offset = (unsigned short)((char *)&prec->i - (char *)prec);
    prt->papFldDes[tsubRecordJ]->size = sizeof(prec->j);
    prt->papFldDes[tsubRecordJ]->offset = (unsigned short)((char *)&prec->j - (char *)prec);
    prt->papFldDes[tsubRecordK]->size = sizeof(prec->k);
    prt->papFldDes[tsubRecordK]->offset = (unsigned short)((char *)&prec->k - (char *)prec);
    prt->papFldDes[tsubRecordL]->size = sizeof(prec->l);
    prt->papFldDes[tsubRecordL]->offset = (unsigned short)((char *)&prec->l - (char *)prec);
    prt->papFldDes[tsubRecordM]->size = sizeof(prec->m);
    prt->papFldDes[tsubRecordM]->offset = (unsigned short)((char *)&prec->m - (char *)prec);
    prt->papFldDes[tsubRecordN]->size = sizeof(prec->n);
    prt->papFldDes[tsubRecordN]->offset = (unsigned short)((char *)&prec->n - (char *)prec);
    prt->papFldDes[tsubRecordO]->size = sizeof(prec->o);
    prt->papFldDes[tsubRecordO]->offset = (unsigned short)((char *)&prec->o - (char *)prec);
    prt->papFldDes[tsubRecordP]->size = sizeof(prec->p);
    prt->papFldDes[tsubRecordP]->offset = (unsigned short)((char *)&prec->p - (char *)prec);
    prt->papFldDes[tsubRecordQ]->size = sizeof(prec->q);
    prt->papFldDes[tsubRecordQ]->offset = (unsigned short)((char *)&prec->q - (char *)prec);
    prt->papFldDes[tsubRecordR]->size = sizeof(prec->r);
    prt->papFldDes[tsubRecordR]->offset = (unsigned short)((char *)&prec->r - (char *)prec);
    prt->papFldDes[tsubRecordS]->size = sizeof(prec->s);
    prt->papFldDes[tsubRecordS]->offset = (unsigned short)((char *)&prec->s - (char *)prec);
    prt->papFldDes[tsubRecordT]->size = sizeof(prec->t);
    prt->papFldDes[tsubRecordT]->offset = (unsigned short)((char *)&prec->t - (char *)prec);
    prt->papFldDes[tsubRecordA0]->size = sizeof(prec->a0);
    prt->papFldDes[tsubRecordA0]->offset = (unsigned short)((char *)&prec->a0 - (char *)prec);
    prt->papFldDes[tsubRecordA1]->size = sizeof(prec->a1);
    prt->papFldDes[tsubRecordA1]->offset = (unsigned short)((char *)&prec->a1 - (char *)prec);
    prt->papFldDes[tsubRecordA2]->size = sizeof(prec->a2);
    prt->papFldDes[tsubRecordA2]->offset = (unsigned short)((char *)&prec->a2 - (char *)prec);
    prt->papFldDes[tsubRecordA3]->size = sizeof(prec->a3);
    prt->papFldDes[tsubRecordA3]->offset = (unsigned short)((char *)&prec->a3 - (char *)prec);
    prt->papFldDes[tsubRecordA4]->size = sizeof(prec->a4);
    prt->papFldDes[tsubRecordA4]->offset = (unsigned short)((char *)&prec->a4 - (char *)prec);
    prt->papFldDes[tsubRecordA5]->size = sizeof(prec->a5);
    prt->papFldDes[tsubRecordA5]->offset = (unsigned short)((char *)&prec->a5 - (char *)prec);
    prt->papFldDes[tsubRecordA6]->size = sizeof(prec->a6);
    prt->papFldDes[tsubRecordA6]->offset = (unsigned short)((char *)&prec->a6 - (char *)prec);
    prt->papFldDes[tsubRecordA7]->size = sizeof(prec->a7);
    prt->papFldDes[tsubRecordA7]->offset = (unsigned short)((char *)&prec->a7 - (char *)prec);
    prt->papFldDes[tsubRecordA8]->size = sizeof(prec->a8);
    prt->papFldDes[tsubRecordA8]->offset = (unsigned short)((char *)&prec->a8 - (char *)prec);
    prt->papFldDes[tsubRecordA9]->size = sizeof(prec->a9);
    prt->papFldDes[tsubRecordA9]->offset = (unsigned short)((char *)&prec->a9 - (char *)prec);
    prt->papFldDes[tsubRecordB0]->size = sizeof(prec->b0);
    prt->papFldDes[tsubRecordB0]->offset = (unsigned short)((char *)&prec->b0 - (char *)prec);
    prt->papFldDes[tsubRecordB1]->size = sizeof(prec->b1);
    prt->papFldDes[tsubRecordB1]->offset = (unsigned short)((char *)&prec->b1 - (char *)prec);
    prt->papFldDes[tsubRecordB2]->size = sizeof(prec->b2);
    prt->papFldDes[tsubRecordB2]->offset = (unsigned short)((char *)&prec->b2 - (char *)prec);
    prt->papFldDes[tsubRecordB3]->size = sizeof(prec->b3);
    prt->papFldDes[tsubRecordB3]->offset = (unsigned short)((char *)&prec->b3 - (char *)prec);
    prt->papFldDes[tsubRecordB4]->size = sizeof(prec->b4);
    prt->papFldDes[tsubRecordB4]->offset = (unsigned short)((char *)&prec->b4 - (char *)prec);
    prt->papFldDes[tsubRecordB5]->size = sizeof(prec->b5);
    prt->papFldDes[tsubRecordB5]->offset = (unsigned short)((char *)&prec->b5 - (char *)prec);
    prt->papFldDes[tsubRecordB6]->size = sizeof(prec->b6);
    prt->papFldDes[tsubRecordB6]->offset = (unsigned short)((char *)&prec->b6 - (char *)prec);
    prt->papFldDes[tsubRecordB7]->size = sizeof(prec->b7);
    prt->papFldDes[tsubRecordB7]->offset = (unsigned short)((char *)&prec->b7 - (char *)prec);
    prt->papFldDes[tsubRecordB8]->size = sizeof(prec->b8);
    prt->papFldDes[tsubRecordB8]->offset = (unsigned short)((char *)&prec->b8 - (char *)prec);
    prt->papFldDes[tsubRecordB9]->size = sizeof(prec->b9);
    prt->papFldDes[tsubRecordB9]->offset = (unsigned short)((char *)&prec->b9 - (char *)prec);
    prt->papFldDes[tsubRecordC0]->size = sizeof(prec->c0);
    prt->papFldDes[tsubRecordC0]->offset = (unsigned short)((char *)&prec->c0 - (char *)prec);
    prt->papFldDes[tsubRecordC1]->size = sizeof(prec->c1);
    prt->papFldDes[tsubRecordC1]->offset = (unsigned short)((char *)&prec->c1 - (char *)prec);
    prt->papFldDes[tsubRecordC2]->size = sizeof(prec->c2);
    prt->papFldDes[tsubRecordC2]->offset = (unsigned short)((char *)&prec->c2 - (char *)prec);
    prt->papFldDes[tsubRecordC3]->size = sizeof(prec->c3);
    prt->papFldDes[tsubRecordC3]->offset = (unsigned short)((char *)&prec->c3 - (char *)prec);
    prt->papFldDes[tsubRecordC4]->size = sizeof(prec->c4);
    prt->papFldDes[tsubRecordC4]->offset = (unsigned short)((char *)&prec->c4 - (char *)prec);
    prt->papFldDes[tsubRecordC5]->size = sizeof(prec->c5);
    prt->papFldDes[tsubRecordC5]->offset = (unsigned short)((char *)&prec->c5 - (char *)prec);
    prt->papFldDes[tsubRecordC6]->size = sizeof(prec->c6);
    prt->papFldDes[tsubRecordC6]->offset = (unsigned short)((char *)&prec->c6 - (char *)prec);
    prt->papFldDes[tsubRecordC7]->size = sizeof(prec->c7);
    prt->papFldDes[tsubRecordC7]->offset = (unsigned short)((char *)&prec->c7 - (char *)prec);
    prt->papFldDes[tsubRecordC8]->size = sizeof(prec->c8);
    prt->papFldDes[tsubRecordC8]->offset = (unsigned short)((char *)&prec->c8 - (char *)prec);
    prt->papFldDes[tsubRecordC9]->size = sizeof(prec->c9);
    prt->papFldDes[tsubRecordC9]->offset = (unsigned short)((char *)&prec->c9 - (char *)prec);
    prt->papFldDes[tsubRecordD0]->size = sizeof(prec->d0);
    prt->papFldDes[tsubRecordD0]->offset = (unsigned short)((char *)&prec->d0 - (char *)prec);
    prt->papFldDes[tsubRecordD1]->size = sizeof(prec->d1);
    prt->papFldDes[tsubRecordD1]->offset = (unsigned short)((char *)&prec->d1 - (char *)prec);
    prt->papFldDes[tsubRecordD2]->size = sizeof(prec->d2);
    prt->papFldDes[tsubRecordD2]->offset = (unsigned short)((char *)&prec->d2 - (char *)prec);
    prt->papFldDes[tsubRecordD3]->size = sizeof(prec->d3);
    prt->papFldDes[tsubRecordD3]->offset = (unsigned short)((char *)&prec->d3 - (char *)prec);
    prt->papFldDes[tsubRecordD4]->size = sizeof(prec->d4);
    prt->papFldDes[tsubRecordD4]->offset = (unsigned short)((char *)&prec->d4 - (char *)prec);
    prt->papFldDes[tsubRecordD5]->size = sizeof(prec->d5);
    prt->papFldDes[tsubRecordD5]->offset = (unsigned short)((char *)&prec->d5 - (char *)prec);
    prt->papFldDes[tsubRecordD6]->size = sizeof(prec->d6);
    prt->papFldDes[tsubRecordD6]->offset = (unsigned short)((char *)&prec->d6 - (char *)prec);
    prt->papFldDes[tsubRecordD7]->size = sizeof(prec->d7);
    prt->papFldDes[tsubRecordD7]->offset = (unsigned short)((char *)&prec->d7 - (char *)prec);
    prt->papFldDes[tsubRecordD8]->size = sizeof(prec->d8);
    prt->papFldDes[tsubRecordD8]->offset = (unsigned short)((char *)&prec->d8 - (char *)prec);
    prt->papFldDes[tsubRecordD9]->size = sizeof(prec->d9);
    prt->papFldDes[tsubRecordD9]->offset = (unsigned short)((char *)&prec->d9 - (char *)prec);
    prt->papFldDes[tsubRecordE0]->size = sizeof(prec->e0);
    prt->papFldDes[tsubRecordE0]->offset = (unsigned short)((char *)&prec->e0 - (char *)prec);
    prt->papFldDes[tsubRecordE1]->size = sizeof(prec->e1);
    prt->papFldDes[tsubRecordE1]->offset = (unsigned short)((char *)&prec->e1 - (char *)prec);
    prt->papFldDes[tsubRecordE2]->size = sizeof(prec->e2);
    prt->papFldDes[tsubRecordE2]->offset = (unsigned short)((char *)&prec->e2 - (char *)prec);
    prt->papFldDes[tsubRecordE3]->size = sizeof(prec->e3);
    prt->papFldDes[tsubRecordE3]->offset = (unsigned short)((char *)&prec->e3 - (char *)prec);
    prt->papFldDes[tsubRecordE4]->size = sizeof(prec->e4);
    prt->papFldDes[tsubRecordE4]->offset = (unsigned short)((char *)&prec->e4 - (char *)prec);
    prt->papFldDes[tsubRecordE5]->size = sizeof(prec->e5);
    prt->papFldDes[tsubRecordE5]->offset = (unsigned short)((char *)&prec->e5 - (char *)prec);
    prt->papFldDes[tsubRecordE6]->size = sizeof(prec->e6);
    prt->papFldDes[tsubRecordE6]->offset = (unsigned short)((char *)&prec->e6 - (char *)prec);
    prt->papFldDes[tsubRecordE7]->size = sizeof(prec->e7);
    prt->papFldDes[tsubRecordE7]->offset = (unsigned short)((char *)&prec->e7 - (char *)prec);
    prt->papFldDes[tsubRecordE8]->size = sizeof(prec->e8);
    prt->papFldDes[tsubRecordE8]->offset = (unsigned short)((char *)&prec->e8 - (char *)prec);
    prt->papFldDes[tsubRecordE9]->size = sizeof(prec->e9);
    prt->papFldDes[tsubRecordE9]->offset = (unsigned short)((char *)&prec->e9 - (char *)prec);
    prt->papFldDes[tsubRecordF0]->size = sizeof(prec->f0);
    prt->papFldDes[tsubRecordF0]->offset = (unsigned short)((char *)&prec->f0 - (char *)prec);
    prt->papFldDes[tsubRecordF1]->size = sizeof(prec->f1);
    prt->papFldDes[tsubRecordF1]->offset = (unsigned short)((char *)&prec->f1 - (char *)prec);
    prt->papFldDes[tsubRecordF2]->size = sizeof(prec->f2);
    prt->papFldDes[tsubRecordF2]->offset = (unsigned short)((char *)&prec->f2 - (char *)prec);
    prt->papFldDes[tsubRecordF3]->size = sizeof(prec->f3);
    prt->papFldDes[tsubRecordF3]->offset = (unsigned short)((char *)&prec->f3 - (char *)prec);
    prt->papFldDes[tsubRecordF4]->size = sizeof(prec->f4);
    prt->papFldDes[tsubRecordF4]->offset = (unsigned short)((char *)&prec->f4 - (char *)prec);
    prt->papFldDes[tsubRecordF5]->size = sizeof(prec->f5);
    prt->papFldDes[tsubRecordF5]->offset = (unsigned short)((char *)&prec->f5 - (char *)prec);
    prt->papFldDes[tsubRecordF6]->size = sizeof(prec->f6);
    prt->papFldDes[tsubRecordF6]->offset = (unsigned short)((char *)&prec->f6 - (char *)prec);
    prt->papFldDes[tsubRecordF7]->size = sizeof(prec->f7);
    prt->papFldDes[tsubRecordF7]->offset = (unsigned short)((char *)&prec->f7 - (char *)prec);
    prt->papFldDes[tsubRecordF8]->size = sizeof(prec->f8);
    prt->papFldDes[tsubRecordF8]->offset = (unsigned short)((char *)&prec->f8 - (char *)prec);
    prt->papFldDes[tsubRecordF9]->size = sizeof(prec->f9);
    prt->papFldDes[tsubRecordF9]->offset = (unsigned short)((char *)&prec->f9 - (char *)prec);
    prt->papFldDes[tsubRecordLA]->size = sizeof(prec->la);
    prt->papFldDes[tsubRecordLA]->offset = (unsigned short)((char *)&prec->la - (char *)prec);
    prt->papFldDes[tsubRecordLB]->size = sizeof(prec->lb);
    prt->papFldDes[tsubRecordLB]->offset = (unsigned short)((char *)&prec->lb - (char *)prec);
    prt->papFldDes[tsubRecordLC]->size = sizeof(prec->lc);
    prt->papFldDes[tsubRecordLC]->offset = (unsigned short)((char *)&prec->lc - (char *)prec);
    prt->papFldDes[tsubRecordLD]->size = sizeof(prec->ld);
    prt->papFldDes[tsubRecordLD]->offset = (unsigned short)((char *)&prec->ld - (char *)prec);
    prt->papFldDes[tsubRecordLE]->size = sizeof(prec->le);
    prt->papFldDes[tsubRecordLE]->offset = (unsigned short)((char *)&prec->le - (char *)prec);
    prt->papFldDes[tsubRecordLF]->size = sizeof(prec->lf);
    prt->papFldDes[tsubRecordLF]->offset = (unsigned short)((char *)&prec->lf - (char *)prec);
    prt->papFldDes[tsubRecordLG]->size = sizeof(prec->lg);
    prt->papFldDes[tsubRecordLG]->offset = (unsigned short)((char *)&prec->lg - (char *)prec);
    prt->papFldDes[tsubRecordLH]->size = sizeof(prec->lh);
    prt->papFldDes[tsubRecordLH]->offset = (unsigned short)((char *)&prec->lh - (char *)prec);
    prt->papFldDes[tsubRecordLI]->size = sizeof(prec->li);
    prt->papFldDes[tsubRecordLI]->offset = (unsigned short)((char *)&prec->li - (char *)prec);
    prt->papFldDes[tsubRecordLJ]->size = sizeof(prec->lj);
    prt->papFldDes[tsubRecordLJ]->offset = (unsigned short)((char *)&prec->lj - (char *)prec);
    prt->papFldDes[tsubRecordLK]->size = sizeof(prec->lk);
    prt->papFldDes[tsubRecordLK]->offset = (unsigned short)((char *)&prec->lk - (char *)prec);
    prt->papFldDes[tsubRecordLL]->size = sizeof(prec->ll);
    prt->papFldDes[tsubRecordLL]->offset = (unsigned short)((char *)&prec->ll - (char *)prec);
    prt->papFldDes[tsubRecordLM]->size = sizeof(prec->lm);
    prt->papFldDes[tsubRecordLM]->offset = (unsigned short)((char *)&prec->lm - (char *)prec);
    prt->papFldDes[tsubRecordLN]->size = sizeof(prec->ln);
    prt->papFldDes[tsubRecordLN]->offset = (unsigned short)((char *)&prec->ln - (char *)prec);
    prt->papFldDes[tsubRecordLO]->size = sizeof(prec->lo);
    prt->papFldDes[tsubRecordLO]->offset = (unsigned short)((char *)&prec->lo - (char *)prec);
    prt->papFldDes[tsubRecordLP]->size = sizeof(prec->lp);
    prt->papFldDes[tsubRecordLP]->offset = (unsigned short)((char *)&prec->lp - (char *)prec);
    prt->papFldDes[tsubRecordLQ]->size = sizeof(prec->lq);
    prt->papFldDes[tsubRecordLQ]->offset = (unsigned short)((char *)&prec->lq - (char *)prec);
    prt->papFldDes[tsubRecordLR]->size = sizeof(prec->lr);
    prt->papFldDes[tsubRecordLR]->offset = (unsigned short)((char *)&prec->lr - (char *)prec);
    prt->papFldDes[tsubRecordLS]->size = sizeof(prec->ls);
    prt->papFldDes[tsubRecordLS]->offset = (unsigned short)((char *)&prec->ls - (char *)prec);
    prt->papFldDes[tsubRecordLT]->size = sizeof(prec->lt);
    prt->papFldDes[tsubRecordLT]->offset = (unsigned short)((char *)&prec->lt - (char *)prec);
    prt->papFldDes[tsubRecordLA0]->size = sizeof(prec->la0);
    prt->papFldDes[tsubRecordLA0]->offset = (unsigned short)((char *)&prec->la0 - (char *)prec);
    prt->papFldDes[tsubRecordLA1]->size = sizeof(prec->la1);
    prt->papFldDes[tsubRecordLA1]->offset = (unsigned short)((char *)&prec->la1 - (char *)prec);
    prt->papFldDes[tsubRecordLA2]->size = sizeof(prec->la2);
    prt->papFldDes[tsubRecordLA2]->offset = (unsigned short)((char *)&prec->la2 - (char *)prec);
    prt->papFldDes[tsubRecordLA3]->size = sizeof(prec->la3);
    prt->papFldDes[tsubRecordLA3]->offset = (unsigned short)((char *)&prec->la3 - (char *)prec);
    prt->papFldDes[tsubRecordLA4]->size = sizeof(prec->la4);
    prt->papFldDes[tsubRecordLA4]->offset = (unsigned short)((char *)&prec->la4 - (char *)prec);
    prt->papFldDes[tsubRecordLA5]->size = sizeof(prec->la5);
    prt->papFldDes[tsubRecordLA5]->offset = (unsigned short)((char *)&prec->la5 - (char *)prec);
    prt->papFldDes[tsubRecordLA6]->size = sizeof(prec->la6);
    prt->papFldDes[tsubRecordLA6]->offset = (unsigned short)((char *)&prec->la6 - (char *)prec);
    prt->papFldDes[tsubRecordLA7]->size = sizeof(prec->la7);
    prt->papFldDes[tsubRecordLA7]->offset = (unsigned short)((char *)&prec->la7 - (char *)prec);
    prt->papFldDes[tsubRecordLA8]->size = sizeof(prec->la8);
    prt->papFldDes[tsubRecordLA8]->offset = (unsigned short)((char *)&prec->la8 - (char *)prec);
    prt->papFldDes[tsubRecordLA9]->size = sizeof(prec->la9);
    prt->papFldDes[tsubRecordLA9]->offset = (unsigned short)((char *)&prec->la9 - (char *)prec);
    prt->papFldDes[tsubRecordLB0]->size = sizeof(prec->lb0);
    prt->papFldDes[tsubRecordLB0]->offset = (unsigned short)((char *)&prec->lb0 - (char *)prec);
    prt->papFldDes[tsubRecordLB1]->size = sizeof(prec->lb1);
    prt->papFldDes[tsubRecordLB1]->offset = (unsigned short)((char *)&prec->lb1 - (char *)prec);
    prt->papFldDes[tsubRecordLB2]->size = sizeof(prec->lb2);
    prt->papFldDes[tsubRecordLB2]->offset = (unsigned short)((char *)&prec->lb2 - (char *)prec);
    prt->papFldDes[tsubRecordLB3]->size = sizeof(prec->lb3);
    prt->papFldDes[tsubRecordLB3]->offset = (unsigned short)((char *)&prec->lb3 - (char *)prec);
    prt->papFldDes[tsubRecordLB4]->size = sizeof(prec->lb4);
    prt->papFldDes[tsubRecordLB4]->offset = (unsigned short)((char *)&prec->lb4 - (char *)prec);
    prt->papFldDes[tsubRecordLB5]->size = sizeof(prec->lb5);
    prt->papFldDes[tsubRecordLB5]->offset = (unsigned short)((char *)&prec->lb5 - (char *)prec);
    prt->papFldDes[tsubRecordLB6]->size = sizeof(prec->lb6);
    prt->papFldDes[tsubRecordLB6]->offset = (unsigned short)((char *)&prec->lb6 - (char *)prec);
    prt->papFldDes[tsubRecordLB7]->size = sizeof(prec->lb7);
    prt->papFldDes[tsubRecordLB7]->offset = (unsigned short)((char *)&prec->lb7 - (char *)prec);
    prt->papFldDes[tsubRecordLB8]->size = sizeof(prec->lb8);
    prt->papFldDes[tsubRecordLB8]->offset = (unsigned short)((char *)&prec->lb8 - (char *)prec);
    prt->papFldDes[tsubRecordLB9]->size = sizeof(prec->lb9);
    prt->papFldDes[tsubRecordLB9]->offset = (unsigned short)((char *)&prec->lb9 - (char *)prec);
    prt->papFldDes[tsubRecordLC0]->size = sizeof(prec->lc0);
    prt->papFldDes[tsubRecordLC0]->offset = (unsigned short)((char *)&prec->lc0 - (char *)prec);
    prt->papFldDes[tsubRecordLC1]->size = sizeof(prec->lc1);
    prt->papFldDes[tsubRecordLC1]->offset = (unsigned short)((char *)&prec->lc1 - (char *)prec);
    prt->papFldDes[tsubRecordLC2]->size = sizeof(prec->lc2);
    prt->papFldDes[tsubRecordLC2]->offset = (unsigned short)((char *)&prec->lc2 - (char *)prec);
    prt->papFldDes[tsubRecordLC3]->size = sizeof(prec->lc3);
    prt->papFldDes[tsubRecordLC3]->offset = (unsigned short)((char *)&prec->lc3 - (char *)prec);
    prt->papFldDes[tsubRecordLC4]->size = sizeof(prec->lc4);
    prt->papFldDes[tsubRecordLC4]->offset = (unsigned short)((char *)&prec->lc4 - (char *)prec);
    prt->papFldDes[tsubRecordLC5]->size = sizeof(prec->lc5);
    prt->papFldDes[tsubRecordLC5]->offset = (unsigned short)((char *)&prec->lc5 - (char *)prec);
    prt->papFldDes[tsubRecordLC6]->size = sizeof(prec->lc6);
    prt->papFldDes[tsubRecordLC6]->offset = (unsigned short)((char *)&prec->lc6 - (char *)prec);
    prt->papFldDes[tsubRecordLC7]->size = sizeof(prec->lc7);
    prt->papFldDes[tsubRecordLC7]->offset = (unsigned short)((char *)&prec->lc7 - (char *)prec);
    prt->papFldDes[tsubRecordLC8]->size = sizeof(prec->lc8);
    prt->papFldDes[tsubRecordLC8]->offset = (unsigned short)((char *)&prec->lc8 - (char *)prec);
    prt->papFldDes[tsubRecordLC9]->size = sizeof(prec->lc9);
    prt->papFldDes[tsubRecordLC9]->offset = (unsigned short)((char *)&prec->lc9 - (char *)prec);
    prt->papFldDes[tsubRecordLD0]->size = sizeof(prec->ld0);
    prt->papFldDes[tsubRecordLD0]->offset = (unsigned short)((char *)&prec->ld0 - (char *)prec);
    prt->papFldDes[tsubRecordLD1]->size = sizeof(prec->ld1);
    prt->papFldDes[tsubRecordLD1]->offset = (unsigned short)((char *)&prec->ld1 - (char *)prec);
    prt->papFldDes[tsubRecordLD2]->size = sizeof(prec->ld2);
    prt->papFldDes[tsubRecordLD2]->offset = (unsigned short)((char *)&prec->ld2 - (char *)prec);
    prt->papFldDes[tsubRecordLD3]->size = sizeof(prec->ld3);
    prt->papFldDes[tsubRecordLD3]->offset = (unsigned short)((char *)&prec->ld3 - (char *)prec);
    prt->papFldDes[tsubRecordLD4]->size = sizeof(prec->ld4);
    prt->papFldDes[tsubRecordLD4]->offset = (unsigned short)((char *)&prec->ld4 - (char *)prec);
    prt->papFldDes[tsubRecordLD5]->size = sizeof(prec->ld5);
    prt->papFldDes[tsubRecordLD5]->offset = (unsigned short)((char *)&prec->ld5 - (char *)prec);
    prt->papFldDes[tsubRecordLD6]->size = sizeof(prec->ld6);
    prt->papFldDes[tsubRecordLD6]->offset = (unsigned short)((char *)&prec->ld6 - (char *)prec);
    prt->papFldDes[tsubRecordLD7]->size = sizeof(prec->ld7);
    prt->papFldDes[tsubRecordLD7]->offset = (unsigned short)((char *)&prec->ld7 - (char *)prec);
    prt->papFldDes[tsubRecordLD8]->size = sizeof(prec->ld8);
    prt->papFldDes[tsubRecordLD8]->offset = (unsigned short)((char *)&prec->ld8 - (char *)prec);
    prt->papFldDes[tsubRecordLD9]->size = sizeof(prec->ld9);
    prt->papFldDes[tsubRecordLD9]->offset = (unsigned short)((char *)&prec->ld9 - (char *)prec);
    prt->papFldDes[tsubRecordLE0]->size = sizeof(prec->le0);
    prt->papFldDes[tsubRecordLE0]->offset = (unsigned short)((char *)&prec->le0 - (char *)prec);
    prt->papFldDes[tsubRecordLE1]->size = sizeof(prec->le1);
    prt->papFldDes[tsubRecordLE1]->offset = (unsigned short)((char *)&prec->le1 - (char *)prec);
    prt->papFldDes[tsubRecordLE2]->size = sizeof(prec->le2);
    prt->papFldDes[tsubRecordLE2]->offset = (unsigned short)((char *)&prec->le2 - (char *)prec);
    prt->papFldDes[tsubRecordLE3]->size = sizeof(prec->le3);
    prt->papFldDes[tsubRecordLE3]->offset = (unsigned short)((char *)&prec->le3 - (char *)prec);
    prt->papFldDes[tsubRecordLE4]->size = sizeof(prec->le4);
    prt->papFldDes[tsubRecordLE4]->offset = (unsigned short)((char *)&prec->le4 - (char *)prec);
    prt->papFldDes[tsubRecordLE5]->size = sizeof(prec->le5);
    prt->papFldDes[tsubRecordLE5]->offset = (unsigned short)((char *)&prec->le5 - (char *)prec);
    prt->papFldDes[tsubRecordLE6]->size = sizeof(prec->le6);
    prt->papFldDes[tsubRecordLE6]->offset = (unsigned short)((char *)&prec->le6 - (char *)prec);
    prt->papFldDes[tsubRecordLE7]->size = sizeof(prec->le7);
    prt->papFldDes[tsubRecordLE7]->offset = (unsigned short)((char *)&prec->le7 - (char *)prec);
    prt->papFldDes[tsubRecordLE8]->size = sizeof(prec->le8);
    prt->papFldDes[tsubRecordLE8]->offset = (unsigned short)((char *)&prec->le8 - (char *)prec);
    prt->papFldDes[tsubRecordLE9]->size = sizeof(prec->le9);
    prt->papFldDes[tsubRecordLE9]->offset = (unsigned short)((char *)&prec->le9 - (char *)prec);
    prt->papFldDes[tsubRecordLF0]->size = sizeof(prec->lf0);
    prt->papFldDes[tsubRecordLF0]->offset = (unsigned short)((char *)&prec->lf0 - (char *)prec);
    prt->papFldDes[tsubRecordLF1]->size = sizeof(prec->lf1);
    prt->papFldDes[tsubRecordLF1]->offset = (unsigned short)((char *)&prec->lf1 - (char *)prec);
    prt->papFldDes[tsubRecordLF2]->size = sizeof(prec->lf2);
    prt->papFldDes[tsubRecordLF2]->offset = (unsigned short)((char *)&prec->lf2 - (char *)prec);
    prt->papFldDes[tsubRecordLF3]->size = sizeof(prec->lf3);
    prt->papFldDes[tsubRecordLF3]->offset = (unsigned short)((char *)&prec->lf3 - (char *)prec);
    prt->papFldDes[tsubRecordLF4]->size = sizeof(prec->lf4);
    prt->papFldDes[tsubRecordLF4]->offset = (unsigned short)((char *)&prec->lf4 - (char *)prec);
    prt->papFldDes[tsubRecordLF5]->size = sizeof(prec->lf5);
    prt->papFldDes[tsubRecordLF5]->offset = (unsigned short)((char *)&prec->lf5 - (char *)prec);
    prt->papFldDes[tsubRecordLF6]->size = sizeof(prec->lf6);
    prt->papFldDes[tsubRecordLF6]->offset = (unsigned short)((char *)&prec->lf6 - (char *)prec);
    prt->papFldDes[tsubRecordLF7]->size = sizeof(prec->lf7);
    prt->papFldDes[tsubRecordLF7]->offset = (unsigned short)((char *)&prec->lf7 - (char *)prec);
    prt->papFldDes[tsubRecordLF8]->size = sizeof(prec->lf8);
    prt->papFldDes[tsubRecordLF8]->offset = (unsigned short)((char *)&prec->lf8 - (char *)prec);
    prt->papFldDes[tsubRecordLF9]->size = sizeof(prec->lf9);
    prt->papFldDes[tsubRecordLF9]->offset = (unsigned short)((char *)&prec->lf9 - (char *)prec);
    prt->papFldDes[tsubRecordNLA]->size = sizeof(prec->nla);
    prt->papFldDes[tsubRecordNLA]->offset = (unsigned short)((char *)&prec->nla - (char *)prec);
    prt->papFldDes[tsubRecordNLB]->size = sizeof(prec->nlb);
    prt->papFldDes[tsubRecordNLB]->offset = (unsigned short)((char *)&prec->nlb - (char *)prec);
    prt->papFldDes[tsubRecordNLC]->size = sizeof(prec->nlc);
    prt->papFldDes[tsubRecordNLC]->offset = (unsigned short)((char *)&prec->nlc - (char *)prec);
    prt->papFldDes[tsubRecordNLD]->size = sizeof(prec->nld);
    prt->papFldDes[tsubRecordNLD]->offset = (unsigned short)((char *)&prec->nld - (char *)prec);
    prt->papFldDes[tsubRecordNLE]->size = sizeof(prec->nle);
    prt->papFldDes[tsubRecordNLE]->offset = (unsigned short)((char *)&prec->nle - (char *)prec);
    prt->papFldDes[tsubRecordNLF]->size = sizeof(prec->nlf);
    prt->papFldDes[tsubRecordNLF]->offset = (unsigned short)((char *)&prec->nlf - (char *)prec);
    prt->papFldDes[tsubRecordNLG]->size = sizeof(prec->nlg);
    prt->papFldDes[tsubRecordNLG]->offset = (unsigned short)((char *)&prec->nlg - (char *)prec);
    prt->papFldDes[tsubRecordNLH]->size = sizeof(prec->nlh);
    prt->papFldDes[tsubRecordNLH]->offset = (unsigned short)((char *)&prec->nlh - (char *)prec);
    prt->papFldDes[tsubRecordNLI]->size = sizeof(prec->nli);
    prt->papFldDes[tsubRecordNLI]->offset = (unsigned short)((char *)&prec->nli - (char *)prec);
    prt->papFldDes[tsubRecordNLJ]->size = sizeof(prec->nlj);
    prt->papFldDes[tsubRecordNLJ]->offset = (unsigned short)((char *)&prec->nlj - (char *)prec);
    prt->papFldDes[tsubRecordNLK]->size = sizeof(prec->nlk);
    prt->papFldDes[tsubRecordNLK]->offset = (unsigned short)((char *)&prec->nlk - (char *)prec);
    prt->papFldDes[tsubRecordNLL]->size = sizeof(prec->nll);
    prt->papFldDes[tsubRecordNLL]->offset = (unsigned short)((char *)&prec->nll - (char *)prec);
    prt->papFldDes[tsubRecordNLM]->size = sizeof(prec->nlm);
    prt->papFldDes[tsubRecordNLM]->offset = (unsigned short)((char *)&prec->nlm - (char *)prec);
    prt->papFldDes[tsubRecordNLN]->size = sizeof(prec->nln);
    prt->papFldDes[tsubRecordNLN]->offset = (unsigned short)((char *)&prec->nln - (char *)prec);
    prt->papFldDes[tsubRecordNLO]->size = sizeof(prec->nlo);
    prt->papFldDes[tsubRecordNLO]->offset = (unsigned short)((char *)&prec->nlo - (char *)prec);
    prt->papFldDes[tsubRecordNLP]->size = sizeof(prec->nlp);
    prt->papFldDes[tsubRecordNLP]->offset = (unsigned short)((char *)&prec->nlp - (char *)prec);
    prt->papFldDes[tsubRecordNLQ]->size = sizeof(prec->nlq);
    prt->papFldDes[tsubRecordNLQ]->offset = (unsigned short)((char *)&prec->nlq - (char *)prec);
    prt->papFldDes[tsubRecordNLR]->size = sizeof(prec->nlr);
    prt->papFldDes[tsubRecordNLR]->offset = (unsigned short)((char *)&prec->nlr - (char *)prec);
    prt->papFldDes[tsubRecordNLS]->size = sizeof(prec->nls);
    prt->papFldDes[tsubRecordNLS]->offset = (unsigned short)((char *)&prec->nls - (char *)prec);
    prt->papFldDes[tsubRecordNLT]->size = sizeof(prec->nlt);
    prt->papFldDes[tsubRecordNLT]->offset = (unsigned short)((char *)&prec->nlt - (char *)prec);
    prt->papFldDes[tsubRecordLNLA]->size = sizeof(prec->lnla);
    prt->papFldDes[tsubRecordLNLA]->offset = (unsigned short)((char *)&prec->lnla - (char *)prec);
    prt->papFldDes[tsubRecordLNLB]->size = sizeof(prec->lnlb);
    prt->papFldDes[tsubRecordLNLB]->offset = (unsigned short)((char *)&prec->lnlb - (char *)prec);
    prt->papFldDes[tsubRecordLNLC]->size = sizeof(prec->lnlc);
    prt->papFldDes[tsubRecordLNLC]->offset = (unsigned short)((char *)&prec->lnlc - (char *)prec);
    prt->papFldDes[tsubRecordLNLD]->size = sizeof(prec->lnld);
    prt->papFldDes[tsubRecordLNLD]->offset = (unsigned short)((char *)&prec->lnld - (char *)prec);
    prt->papFldDes[tsubRecordLNLE]->size = sizeof(prec->lnle);
    prt->papFldDes[tsubRecordLNLE]->offset = (unsigned short)((char *)&prec->lnle - (char *)prec);
    prt->papFldDes[tsubRecordLNLF]->size = sizeof(prec->lnlf);
    prt->papFldDes[tsubRecordLNLF]->offset = (unsigned short)((char *)&prec->lnlf - (char *)prec);
    prt->papFldDes[tsubRecordLNLG]->size = sizeof(prec->lnlg);
    prt->papFldDes[tsubRecordLNLG]->offset = (unsigned short)((char *)&prec->lnlg - (char *)prec);
    prt->papFldDes[tsubRecordLNLH]->size = sizeof(prec->lnlh);
    prt->papFldDes[tsubRecordLNLH]->offset = (unsigned short)((char *)&prec->lnlh - (char *)prec);
    prt->papFldDes[tsubRecordLNLI]->size = sizeof(prec->lnli);
    prt->papFldDes[tsubRecordLNLI]->offset = (unsigned short)((char *)&prec->lnli - (char *)prec);
    prt->papFldDes[tsubRecordLNLJ]->size = sizeof(prec->lnlj);
    prt->papFldDes[tsubRecordLNLJ]->offset = (unsigned short)((char *)&prec->lnlj - (char *)prec);
    prt->papFldDes[tsubRecordLNLK]->size = sizeof(prec->lnlk);
    prt->papFldDes[tsubRecordLNLK]->offset = (unsigned short)((char *)&prec->lnlk - (char *)prec);
    prt->papFldDes[tsubRecordLNLL]->size = sizeof(prec->lnll);
    prt->papFldDes[tsubRecordLNLL]->offset = (unsigned short)((char *)&prec->lnll - (char *)prec);
    prt->papFldDes[tsubRecordLNLM]->size = sizeof(prec->lnlm);
    prt->papFldDes[tsubRecordLNLM]->offset = (unsigned short)((char *)&prec->lnlm - (char *)prec);
    prt->papFldDes[tsubRecordLNLN]->size = sizeof(prec->lnln);
    prt->papFldDes[tsubRecordLNLN]->offset = (unsigned short)((char *)&prec->lnln - (char *)prec);
    prt->papFldDes[tsubRecordLNLO]->size = sizeof(prec->lnlo);
    prt->papFldDes[tsubRecordLNLO]->offset = (unsigned short)((char *)&prec->lnlo - (char *)prec);
    prt->papFldDes[tsubRecordLNLP]->size = sizeof(prec->lnlp);
    prt->papFldDes[tsubRecordLNLP]->offset = (unsigned short)((char *)&prec->lnlp - (char *)prec);
    prt->papFldDes[tsubRecordLNLQ]->size = sizeof(prec->lnlq);
    prt->papFldDes[tsubRecordLNLQ]->offset = (unsigned short)((char *)&prec->lnlq - (char *)prec);
    prt->papFldDes[tsubRecordLNLR]->size = sizeof(prec->lnlr);
    prt->papFldDes[tsubRecordLNLR]->offset = (unsigned short)((char *)&prec->lnlr - (char *)prec);
    prt->papFldDes[tsubRecordLNLS]->size = sizeof(prec->lnls);
    prt->papFldDes[tsubRecordLNLS]->offset = (unsigned short)((char *)&prec->lnls - (char *)prec);
    prt->papFldDes[tsubRecordLNLT]->size = sizeof(prec->lnlt);
    prt->papFldDes[tsubRecordLNLT]->offset = (unsigned short)((char *)&prec->lnlt - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(tsubRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_tsubRecord_H */
