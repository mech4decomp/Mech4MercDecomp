/*
 * FUN_00567730 (99 B) — parses a byte stream, updates a float value via
 * FPU add/sub, and stores results into globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_0075db4a(void);
extern unsigned long g_805918;
extern unsigned long g_805908;
extern unsigned long g_80592c;
extern unsigned long g_80d9bc;
extern double g_76d970;
extern double g_76d588;

__declspec(naked) void FUN_00567730(void)
{
    __asm {
        mov     eax, dword ptr [g_805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        inc     eax
        push    esi
        mov     dword ptr [g_805908], ecx
        mov     dword ptr [g_805918], eax
        call    FUN_0064db40
        mov     esi, dword ptr [g_80592c]
        fld     dword ptr [esi]
        fcomp   qword ptr [g_76d970]
        fld     dword ptr [esi]
        fnstsw  ax
        test    ah, 0x41
        jne     l_1
        fadd    qword ptr [g_76d588]
        jmp     l_2
    l_1:
        fsub    qword ptr [g_76d588]
    l_2:
        call    FUN_0075db4a
        mov     dword ptr [esi], eax
        mov     eax, dword ptr [g_805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov     dword ptr [g_805918], eax
        mov     eax, dword ptr [g_80d9bc]
        mov     dword ptr [g_805908], edx
        pop     esi
        ret
    }
}
