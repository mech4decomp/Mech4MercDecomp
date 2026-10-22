/*
 * FUN_004AF0C0 (160 B) — ElementRenderer initialization.
 *   Registers profiler handles, calls all subsystem init functions.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __cdecl FUN_006f4710(const char *name, int a, int b);
extern void __stdcall FUN_006f4950(int handle);
extern void __stdcall FUN_006f49a0(void);
extern void __cdecl FUN_004c6270(void);
extern void __cdecl FUN_004c4240(void);
extern void __cdecl FUN_004c2f70(int param);
extern void __cdecl FUN_004c1240(int param);
extern void __cdecl FUN_004bed40(void);
extern void __cdecl FUN_004bccf0(void);
extern void __cdecl FUN_004bc290(int param);
extern void __cdecl FUN_004bbd10(void);
extern void __cdecl FUN_004bb950(void);
extern void __cdecl FUN_004ba560(void);
extern void __cdecl FUN_004b9e00(void);
extern void __cdecl FUN_004b99c0(void);
extern void __cdecl FUN_004b8370(void);
extern void __cdecl FUN_004b6840(void);
extern void __cdecl FUN_004b6480(void);
extern void __cdecl FUN_004b5f00(void);
extern void __cdecl FUN_004b4cd0(void);
extern void __cdecl FUN_004b2830(void);
extern void __cdecl FUN_004af2a0(void);

extern int DAT_00849304;
extern int DAT_007da9e8;
extern int DAT_007da9ec;

__declspec(naked) void __stdcall FUN_004af0c0(void)
{
    __asm {
        mov     eax, dword ptr [DAT_00849304]
        push    esi
        push    eax
        push    0
        push    0x7704d8
        call    FUN_006f4710
        push    eax
        push    0
        push    0x7704c8
        mov     dword ptr [DAT_007da9e8], eax
        call    FUN_006f4710
        push    eax
        mov     dword ptr [DAT_007da9ec], eax
        call    FUN_006f4950
        call    FUN_004c6270
        call    FUN_004c4240
        mov     esi, dword ptr [esp + 8]
        push    esi
        call    FUN_004c2f70
        push    esi
        call    FUN_004c1240
        call    FUN_004bed40
        call    FUN_004bccf0
        push    esi
        call    FUN_004bc290
        add     esp, 0xc
        call    FUN_004bbd10
        call    FUN_004bb950
        call    FUN_004ba560
        call    FUN_004b9e00
        call    FUN_004b99c0
        call    FUN_004b8370
        call    FUN_004b6840
        call    FUN_004b6480
        call    FUN_004b5f00
        call    FUN_004b4cd0
        call    FUN_004b2830
        call    FUN_004af2a0
        call    FUN_006f49a0
        pop     esi
        ret
    }
}
