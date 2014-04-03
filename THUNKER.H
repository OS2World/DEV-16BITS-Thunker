/* This header written by Robert E. Canup II to allow 32 bit C to access KBD 
*   MOU and VIO 16-bit functions. It is to be used with the THUNKER.LIB and 
*   THUNKER.DLL files. It contains the information documented in Microsoft's 
*   "OS/2 Programmers Reference" vols 3&4, as well as information in the IBM 
*   book "OS/2 Programmers Guide"  by Ed Iacobucci. Header written 4/30/94 
*   While great care has been taken to get both this header and the 
*   accompanying .DLL file into a correct state, no guarantees can be given 
*   as to its total functionality. This code is released into the public 
*   domain. UNDER NO CIRCUMSTANCES SHALL THE AUTHOR BE LIABLE FOR ANY DAMAGES 
*   OCCURRING FROM THE USE OF THIS SOFTWARE. Note to lawyers: forget it guys; 
*   there are no deep pockets to put your greedy little fingers into. */

#define IO_WAIT 0
#define IO_NOWAIT 1
#define KEYBOARD_ECHO_ON                0x0002
#define KEYBOARD_ECHO_OFF               0x0001
#define KEYBOARD_BINARY_MODE            0x0004
#define KEYBOARD_ASCII_MODE             0x0008
#define KEYBOARD_MODIFY_STATE           0x0010
#define KEYBOARD_MODIFY_INTERIM         0x0020
#define KEYBOARD_MODIFY_TURNAROUND      0x0040
#define KEYBOARD_2B_TURNAROUND          0x0080
#define KEYBOARD_SHIFT_REPORT           0x0100
#define ANSI_ON                         0x0001
#define ANSI_OFF                        0x0000
#define KR_KBDCHARIN                    0x0001
#define KR_KBDPEEK                      0x0002
#define KR_KBDFLUSHBUFFER               0x0004
#define KR_KBDGETSTATUS                 0x0008
#define KR_KBDSETSTATUS                 0x0010
#define KR_KBDSTRINGIN                  0x0020
#define KR_KBDOPEN                      0x0040
#define KR_KBDCLOSE                     0x0080
#define KR_KBDGETFOCUS                  0x0100
#define KR_KBDFREEFOCUS                 0x0200
#define KR_KBDGETCP                     0x0400
#define KR_KBDSETCP                     0x0800
#define KR_KBDXLATE                     0x1000
#define KR_KBDSETCUSTXT                 0x2000
#define MOUSE_QUEUEBUSY                 0x0001
#define MOUSE_BLOCKREAD                 0x0002
#define MOUSE_FLUSH                     0x0004
#define MOUSE_UNSUPPORTED_MODE          0x0008
#define MOUSE_DISABLED                  0x0100
#define MOUSE_MICKEYS                   0x0200
#define MOUSE_MOTION                    0x0001
#define MOUSE_MOTION_WITH_BN1_DOWN      0x0002
#define MOUSE_BN1_DOWN                  0x0004
#define MOUSE_MOTION_WITH_BN2_D0WN      0x0008
#define MOUSE_BN2_DOWN                  0x0010
#define MOUSE_MOTION_WITH_BN3_DOWN      0x0020
#define MOUSE_BN3_DOWN                  0x0040
#define MR_MOUGETNUMBUTTONS             0x0001
#define MR_MOUGETNUMMICKEYS             0x0002
#define MR_MOUGETDEVSTATUS              0x0004
#define MR_MOUGETNUMQUEEL               0x0008
#define MR_MOUREADEVENTQUE              0x0010
#define MR_MOUGETSCALEFACT              0x0020
#define MR_MOUGETEVENTMASK              0x0040
#define MR_MOUOPEN                      0x0080
#define MR_MOUCLOSE                     0x0100
#define MR_MOUGETPTRSHAPE               0x0200
#define MR_MOUSETPTRSHAPE               0x0400
#define MR_MOUDRAWPTR                   0x0800
#define MR_MOUREMOVEPTR                 0x1000
#define MR_MOUGETPTRPOS                 0x2000
#define MR_MOUSETPTRPOS                 0x4000
#define MR_MOUINITREAL                  0x8000
#define MR_MOUSETDEVSTATUS              0x00010000
#define VR_VIOGETCURPOS                 0x00000001
#define VR_VIOGETCURTYPE                0x00000002
#define VR_VIOGETMODE                   0x00000004
#define VR_VIOGETBUF                    0x00000008
#define VR_VIOGETPHYSBUF                0x00000010
#define VR_VIOSETCURPOS                 0x00000020
#define VR_VIOSETCURTYPE                0x00000040
#define VR_VIOSETMODE                   0x00000080
#define VR_VIOSHOWBUF                   0x00000100
#define VR_VIOREADCHARSTR               0x00000200
#define VR_VIOREADCELLSTR               0x00000400
#define VR_VIOWRTNCHAR                  0x00000800
#define VR_VIOWRTNATTR                  0x00001000
#define VR_VIOWRTNCELL                  0x00002000
#define VR_VIOWRTTTY                    0x00004000
#define VR_VIOWRTCHARSTR                0x00008000
#define VR_VIOWRTCHARSTRATT             0x00010000
#define VR_VIOWRTCELLSTR                0x00020000
#define VR_VIOSCROLLUP                  0x00040000
#define VR_VIOSCROLLDN                  0x00080000
#define VR_VIOSCROLLLF                  0x00100000
#define VR_VIOSCROLLRT                  0x00200000
#define VR_VIOSETANSI                   0x00400000
#define VR_VIOGETANSI                   0x00800000
#define VR_VIOPRTSC                     0x01000000
#define VR_VIOSCRLOCK                   0x02000000
#define VR_VIOSCRUNLOCK                 0x04000000
#define VR_VIOSAVREDRAWWAIT             0x08000000
#define VR_VIOSAVREDRAWUNDO             0x10000000
#define VR_VIOPOPUP                     0x20000000
#define VR_VIOENDPOPUP                  0x40000000
#define VR_VIOPPRTSCTOGGLE              0x80000000
#define VR_VIOMODEWAIT                  0x00000001
#define VR_VIOMODEUNDO                  0x00000002
#define VR_VIOGETFONT                   0x00000004
#define VR_VIOGETCONFIG                 0x00000008
#define VR_VIOSETCP                     0x00000010
#define VR_VIOGETCP                     0x00000020
#define VR_VIOSETFONT                   0x00000040
#define VR_VIOGETSTATE                  0x00000080
#define VR_VIOSETSTATE                  0x00000100



typedef struct _VIOCURSORINFO{
        USHORT  yStart;
        USHORT  cEnd;
        USHORT  cx;
        USHORT  attr;
} VIOCURSORINFO;

typedef struct _KBDKEYINFO{
        UCHAR   chChar;
        UCHAR   chScan;
        UCHAR   fbStatus;
        UCHAR   bNleShift;
        USHORT  fsState;
        ULONG   time;
} KBDKEYINFO;

typedef struct _KBDINFO {
        USHORT  cb;
        USHORT  fsMask;
        USHORT  chTurnAround;
        USHORT  fsInterim;
        USHORT  fsState;
} KBDINFO;

typedef struct _STRINGINBUF {
        USHORT  cb;
        USHORT  cchIn;
} STRINGINBUF ;

typedef struct _KBDTRANS {
        UCHAR    chChar ;
        UCHAR    chScan ;
        UCHAR    fbStatus ;
        UCHAR    nNleShift ;
        USHORT   fsState ;
        ULONG    time ;
        USHORT   fsDD ;
        USHORT   fsXlate ;
        USHORT    fsShift ;
        USHORT    sZero ;
} KBDTRANS ;

typedef struct _MOUQUEINFO {
        USHORT    cEvents ;
        USHORT    cmaxEvents ;
} MOUQUEINFO ;

typedef struct _PTRLOC {
        USHORT    row ;
        USHORT    col ;
} PTRLOC ;

typedef struct _PTRSHAPE {
        USHORT    cb ;
        USHORT    col ;
        USHORT    row ;
        USHORT    colHot ;
        USHORT    rowHot ;
} PTRSHAPE ;

typedef struct _SCALEFACT {
        USHORT    rowScale ;
        USHORT    colScale ;
} SCALEFACT ;

typedef struct _MOUEVENTINFO {
        USHORT  fs;
        ULONG   time;
        USHORT  row;
        USHORT  col;
} MOUEVENTINFO;

typedef struct _NOPTRRECT {
        USHORT    row ;
        USHORT    col ;
        USHORT    cRow ;
        USHORT    cCol ;
} NOPTRRECT ;


typedef struct _VIOCONFIGINFO {
        USHORT    cb ;
        USHORT    adapter ;
        USHORT    display ;
        ULONG      cbMemory ;
} VIOCONFIGINFO ;

typedef struct _VIOFONTINFO {
        USHORT    cb ;
        USHORT    type ;
        USHORT    cxCell ;
        USHORT    cyCell ;
        PVOID      pbData ;
        USHORT    cbData ;
} VIOFONTINFO ;

typedef struct _VIOMODEINFO {
        USHORT    cb ;
        UCHAR     fbType ;
        UCHAR     color ;
        USHORT    col ;
        USHORT    row ;
        USHORT    hres ;
        USHORT    vres ;
        UCHAR     fmt_ID ;
        UCHAR     attrib ;
        ULONG     buf_addr ;
        ULONG     buf_length ;
        ULONG     partial_length ;
        PCH        ext_data_addr ;
} VIOMODEINFO ;

typedef struct _VIOPHYSBUF {
        PBYTE      pBuf ;
        ULONG      cb ;
        ULONG      asel ;
} VIOPHYSBUF ;

typedef struct _VIOPALSTATE {
        USHORT    cb ;
        USHORT    type ;
        USHORT    iFirst ;
        USHORT    scolor[1] ;
} VIOPALSTATE ;

typedef struct _VIOOVERSCAN {
        USHORT    cb ;
        USHORT    type ;
        USHORT    color ;
} VIOOVERSCAN ;

typedef struct _VIOINTENSITY {
        USHORT    cb ;
        USHORT    type ;
        USHORT    FS ;
} VIOINTENSITY ;

typedef struct _VIOSETULINELOC {
        USHORT    cb ;
        USHORT    type ;
        USHORT    scanline ;
} VIOSETULINELOC ;

typedef struct _VIOSETTARGET {
        USHORT    cb ;
        USHORT    type ;
        USHORT    defaultalgorithm ;
} VIOSETTARGET ;

typedef struct _VIOCOLORREG {
        USHORT    cb ;
        USHORT    type ;
        USHORT    firstcolorreg;
        USHORT    numcolorreg ;
        PCH        colorregaddr ;
} VIOCOLORREG ;

typedef struct _KBDHWID {
        USHORT    cb ;
        USHORT    idKbd ;
        USHORT    usReserved1 ;
        USHORT    usReserved2 ;
 } KBDHWID ;



typedef VIOPHYSBUF *PVIOPHYSBUF ;
typedef VIOMODEINFO *PVIOMODEINFO ;
typedef VIOFONTINFO *PVIOFONTINFO ;
typedef VIOCURSORINFO *PVIOCURSORINFO ;
typedef ULONG HVIO ;
typedef KBDKEYINFO *PKBDKEYINFO ;
typedef ULONG HKBD ;
typedef HKBD *PHKBD ;
typedef STRINGINBUF *PSTRINGINBUF ;
typedef KBDTRANS *PKBDTRANS ;
typedef ULONG HMOU ;
typedef MOUQUEINFO *PMOUQUEINFO ;
typedef PTRLOC *PPTRLOC ;
typedef PTRSHAPE *PPTRSHAPE ;
typedef SCALEFACT *PSCALEFACT ;
typedef HMOU *PHMOU ;
typedef MOUEVENTINFO *PMOUEVENTINFO ;
typedef KBDTRANS *PKBDXLATE ;
typedef KBDINFO *PKBDINFO ;
typedef NOPTRRECT *PNOPTRRECT ;
typedef ULONG HVPS ;
typedef HVPS *PHVPS ;
typedef VIOCONFIGINFO *PVIOCONFIGINFO ;
typedef KBDHWID *PKBDHWID ;


ULONG DosQFileMode(PSZ pszFileName, PULONG usAttribute, ULONG ulReserved) ;
ULONG DosSetFileMode(PSZ pszFileName, ULONG usAttribute, ULONG ulReserved) ;
ULONG KbdCharIn(PKBDKEYINFO pkbci, ULONG fWait, HKBD hkbd) ;
ULONG KbdClose(HKBD hkbd) ;
ULONG KbdDeRegister(void) ;
ULONG KbdFlushBuffer(HKBD hkbd) ;
ULONG KbdFreeFocus(HKBD hkbd) ;
ULONG KbdGetCp(ULONG ulReserved, PULONG pidCodePage, HKBD hkbd) ;
ULONG KbdGetFocus(ULONG fWait, HKBD hkbd) ;
ULONG KbdGetHWID(PKBDHWID pkbdhwid, HKBD hkbd) ;
ULONG KbdGetStatus( PKBDINFO pkbstKbdInfo, HKBD hkbd) ;
ULONG KbdOpen(PHKBD phkbd) ;
ULONG KbdPeek(PKBDKEYINFO pkbciKeyInfo, HKBD hkbd) ;
ULONG KbdRegister(PSZ pszModuleName, PSZ pszEntryName, ULONG fFunctions) ; 
ULONG KbdSetCp(ULONG ulReserved, ULONG idCodePage, HKBD hkbd) ;
ULONG KbdSetCustXt(PULONG pulTransTbl, HKBD hkbd) ;
ULONG KbdSetFgnd(void) ;
ULONG KbdSetStatus(PKBDINFO pkbstKbdInfo, HKBD hkbd) ;
ULONG KbdStringIn(PCH pchBuffer, PSTRINGINBUF psibLength, ULONG fWait, HKBD hkbd) ;
ULONG KbdSynch(ULONG fwait) ;
ULONG KbdXlate(PKBDXLATE pkbxlKeyStroke, HKBD hkbd) ;
ULONG MouClose(HMOU hmou) ;
ULONG MouDeRegister(void) ;
ULONG MouDrawPtr(HMOU hmou) ;
ULONG MouFlushQue(HMOU hmou) ;
ULONG MouGetDevStatus(PULONG pfsDevStatus, HMOU hmou) ;
ULONG MouGetEventMask(PULONG pfuEvents, HMOU hmou) ;
ULONG MouGetNumButtons(PULONG pulButtons, HMOU hmou) ;
ULONG MouGetNumMickeys(PULONG pulMickeys, HMOU hmou) ;
ULONG MouGetNumQueEl(PMOUQUEINFO pmouqi, HMOU hmou) ;
ULONG MouGetPtrPos(PPTRLOC pmouplPosition, HMOU hmou) ;
ULONG MouGetPtrShape(PBYTE pbBuffer, PPTRSHAPE pmoupsinfo, HMOU hmou) ;
ULONG MouGetScaleFact(PSCALEFACT pmouseFactors, HMOU hmou) ;
ULONG MouInitReal(PSZ pszDriverName) ;
ULONG MouOpen(PSZ pszDriverName, PHMOU phmou) ;
ULONG MouReadEventQue(PMOUEVENTINFO pmouevEvent, PULONG pfWait, HMOU hmou) ;
ULONG MouRegister(PSZ pszModuleName, PSZ pszEntryName, ULONG flFunctions) ;
ULONG MouRemovePtr(PNOPTRRECT pmourtRect, HMOU hmou) ;
ULONG MouSetDeviceStatus(PULONG pfuDevStatus, HMOU hmou) ;
ULONG MouSetEventMask(PULONG pfuEvents, HMOU hmou) ;
ULONG MouSetPtrPos(PPTRLOC pmouplPosition, HMOU hmou) ;
ULONG MouSetPtrShape(PBYTE pbBuffer, PPTRSHAPE pmouplInfo, HMOU hmou) ;
ULONG MouSetScaleFact(PSCALEFACT pmouscFactors, HMOU hmou) ;
ULONG MouSynch(ULONG fWait) ;
ULONG VioAssociate(HDC hdc, HVPS) ;
ULONG VioCreateLogFont(PFATTRS pfat, LONG lcid, PSTR8 pstr8Name, HVPS hvps) ;
ULONG VioCreatePS(PHVPS phvps, LONG cRows, LONG cColumns, LONG fFormat, LONG cAttrBytes, HVPS hvps) ;
ULONG VioDeleteSetId(LONG lcid, HVPS hvps) ;
ULONG VioDeRegister(void) ;
ULONG VioDestroyPS(HVPS hvps) ;
ULONG VioEndPopUp(HVIO hvio) ;
ULONG VioGetAnsi(PULONG pfAnsi, HVIO hvio) ;
ULONG VioGetBuf(PULONG pulLVB, PULONG pcbLVB, HVIO hvio) ;
ULONG VioGetConfig(ULONG ulReserved, PVIOCONFIGINFO pvioin, HVIO hvio) ;
ULONG VioGetCp(ULONG ulReserved, PULONG pidCodePage, HVIO hvio) ;
ULONG VioGetCurPos(PULONG pulRow, PULONG pulColumn, HVIO hvio) ;
ULONG VioGetCurType(PVIOCURSORINFO pvicciCursor, HVIO hvio) ;
ULONG VioGetDeviceCellSize( PLONG pcRows, PLONG pcColumns, HVPS hvps) ;
ULONG VioGetFont(PVIOFONTINFO pviofi, HVIO hvio) ;
ULONG VioGetMode(PVIOMODEINFO pviomi, HVIO hvio) ;
ULONG VioGetOrg(PLONG plRow, PLONG plColumn, HVPS hvps) ;
ULONG VioGetPhysBuf(PVIOPHYSBUF pviopb, ULONG ulReserved) ;
ULONG VioGetState(PVOID pvoidState, HVIO hvio) ;
ULONG VioModeUndo(ULONG fRelinquish, ULONG fTerminate, HVIO hvio) ;
ULONG VioModeWait(ULONG fEvent, PULONG pfNotify, HVIO hvio) ;
ULONG VioPopUp(PULONG pfWait, HVIO hvio) ;
ULONG VioPrtSc(HVIO hvio) ;
ULONG VioPrtScToggle(HVIO hvio) ;
ULONG VioQueryFonts(PLONG pcbMetrics, PFONTMETRICS pfm, LONG cbMetrics, PLONG pcFonts, PSZ pszFacename, ULONG flOptions, HVPS hvps) ;
ULONG VioQuerySetIds(PLONG palcids, PSTR8 pachNames, PLONG palTypes, LONG cSets, HVPS hvps) ;
ULONG VioReadCellStr(PCH pchCellString, PULONG pcb, ULONG ulRow, ULONG ulColumn, HVIO hvio) ;
ULONG VioReadCharStr(PCH pchString, PULONG pcb, ULONG ulRow, ULONG ulColumn, HVIO hvio) ;
ULONG VioRegister(PSZ pszModuleName, PSZ pszEntryName, ULONG flFunction1, ULONG flFunction2) ;
ULONG VioSavRedrawUndo(ULONG fRelinquish, ULONG fTerminate, HVIO hvio) ;
ULONG VioSavRedrawWait(ULONG fEvent, PULONG pfNotify, ULONG ulReserved) ;
ULONG VioScrLock(ULONG fWait, PBYTE pfNotLocked, HVIO hvio) ;
ULONG VioScrollDn(ULONG TopRow, ULONG LeftCol, ULONG BotRow, ULONG RtCol, ULONG cbLines, PBYTE pbCell,ULONG hvio) ;
ULONG VioScrollLf(ULONG TopRow, ULONG LeftCol, ULONG BotRow, ULONG RtCol, ULONG cbLines, PBYTE pbCell,ULONG hvio) ;
ULONG VioScrollRt(ULONG TopRow, ULONG LeftCol, ULONG BotRow, ULONG RtCol, ULONG cbLines, PBYTE pbCell,ULONG hvio) ;
ULONG VioScrollUp(ULONG TopRow, ULONG LeftCol, ULONG BotRow, ULONG RtCol, ULONG cbLines, PBYTE pbCell,ULONG hvio) ;
ULONG VioScrUnLock(HVIO hvio) ;
ULONG VioSetAnsi(ULONG fAnsi, HVIO hvio) ;
ULONG VioSetCp(ULONG ulReserved, ULONG idCodePage, HVIO hvio) ;
ULONG VioSetCurPos(ULONG ulrow, ULONG ulcol, HVIO hvio) ;
ULONG VioSetCurType(PVIOCURSORINFO pvicci, HVIO hvio) ;
ULONG VioSetDeviceCellSize(LONG cRows, LONG cColumns, HVPS hvps) ;
ULONG VioSetFont(PVIOFONTINFO pviofi, HVIO hvio) ;
ULONG VioSetMode(PVIOMODEINFO pvioMi, HVIO hvio) ;
ULONG VioSetOrg(LONG sRow, LONG sColumn, HVPS hvps) ;
ULONG VioSetState(PVOID pvoidState, HVIO hvio) ;
ULONG VioShowBuf(ULONG offLVB, ULONG cbOutput, HVIO hvio) ;
ULONG VioShowPS(LONG cRows, LONG cColumns, LONG off, HVPS hvps) ;
ULONG VioWrtCellStr(PCH pchCellString, ULONG cbCellString, ULONG Row, ULONG Col, HVIO hvio);
ULONG VioWrtCharStr(PCH pchString, ULONG cbString, ULONG Row, ULONG Col, HVIO hvio);
ULONG VioWrtCharStrAtt(PCH pchString, ULONG cbString, ULONG Row, ULONG Col, HVIO hvio);
ULONG VioWrtNAttr(PBYTE pbAttr, ULONG cb, ULONG Row, ULONG Col, HVIO hvio);
ULONG VioWrtNCell(PBYTE pbCell, ULONG cb, ULONG Row, ULONG Col, HVIO hvio);
ULONG VioWrtNChar(PBYTE pbChar, ULONG cb, ULONG Row, ULONG Col, HVIO hvio);
ULONG VioWrtTTY(PCH pchString, ULONG cbString, HVIO hvio) ;
