/*
 * FUN_004AF160 (149 B) — ElementRenderer shutdown.
 *   Calls all subsystem shutdown functions, frees profiler handles.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004af300(void);
extern void __cdecl FUN_004b2890(void);
extern void __cdecl FUN_004b4d30(void);
extern void __cdecl FUN_004b5fb0(void);
extern void __cdecl FUN_004b64d0(void);
extern void __cdecl FUN_004b68a0(void);
extern void __cdecl FUN_004b83b0(void);
extern void __cdecl FUN_004b9a60(void);
extern void __cdecl FUN_004b9e60(void);
extern void __cdecl FUN_004ba5c0(void);
extern void __cdecl FUN_004bb9a0(void);
extern void __cdecl FUN_004bbd60(void);
extern void __cdecl FUN_004bc4a0(int param);
extern void __cdecl FUN_004bcd50(void);
extern void __cdecl FUN_004beda0(void);
extern void __cdecl FUN_004c1400(int param);
extern void __cdecl FUN_004c3020(int param);
extern void __cdecl FUN_004c42b0(void);
extern void __cdecl FUN_004c63c0(void);
extern void __cdecl FUN_006f4850(int handle, int flag);

extern int DAT_007da9ec;
extern int DAT_007da9e8;

__declspec(naked) void __stdcall FUN_004af160(void)
{
    __asm {
        push    esi
        call    FUN_004af300
        call    FUN_004b2890
        call    FUN_004b4d30
        call    FUN_004b5fb0
        call    FUN_004b64d0
        call    FUN_004b68a0
        call    FUN_004b83b0
        call    FUN_004b9a60
        call    FUN_004b9e60
        call    FUN_004ba5c0
        call    FUN_004bb9a0
        call    FUN_004bbd60
        mov     esi, dword ptr [esp + 8]
        push    esi
        call    FUN_004bc4a0
        call    FUN_004bcd50
        call    FUN_004beda0
        push    esi
        call    FUN_004c1400
        push    esi
        call    FUN_004c3020
        add     esp, 0xc
        call    FUN_004c42b0
        call    FUN_004c63c0
        mov     eax, dword ptr [DAT_007da9ec]
        push    1
        push    eax
        call    FUN_006f4850
        mov     ecx, dword ptr [DAT_007da9e8]
        push    1
        xor     esi, esi
        push    ecx
        mov     dword ptr [DAT_007da9ec], esi
        call    FUN_006f4850
        mov     dword ptr [DAT_007da9e8], esi
        pop     esi
        ret
    }
}
