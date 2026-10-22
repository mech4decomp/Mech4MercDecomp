/*
 * FUN_0053e860 (76 B) — __thiscall (ECX = this).
 * Iterates esi from 1..0xFF, calling FUN_004C7FA1 then (conditionally)
 * FUN_004C6DF1 for each active player slot.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004C7FA1(void);
extern void __cdecl FUN_004C6DF1(void);

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db094;

__declspec(naked) void func_0053e860(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, 0x1

    loop_start:
        mov     eax, dword ptr [DAT_007dab44]
        mov     eax, [eax]
        xor     eax, dword ptr [DAT_007dab40]
        mov     ecx, [eax + 0x14]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004C7FA1
        test    eax, eax
        jz      loop_next
        mov     edx, dword ptr [DAT_007db094]
        xor     ecx, ecx
        mov     cl, [edx + 0x28]
        cmp     esi, ecx
        jz      loop_next
        push    esi
        mov     ecx, edi
        call    FUN_004C6DF1

    loop_next:
        inc     esi
        cmp     esi, 0xFF
        jl      loop_start

        pop     edi
        pop     esi
        ret
    }
}
