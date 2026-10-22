/*
 * FUN_00533020 (133 B) — __fastcall function with FPU operations.
 *
 * Checks a time delta and triggers an event if threshold exceeded.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

/* extern function declarations */
extern int __cdecl FUN_00707e70(int a);
extern void __fastcall FUN_004ce190(int a, int b, void *c, int d);

__declspec(naked) void FUN_00533020(void)
{
    

extern int DAT_007db090;
extern int DAT_0076d5f0;
extern int DAT_007db094;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    ecx
        push    esi
        push    0x0
        mov     esi, ecx
        call    FUN_00707e70
        fstp    dword ptr [esp + 0x4]
        mov ecx, dword ptr [DAT_007db090]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        mov     al, byte ptr [esi + edx*8 + 0x353a]
        test    al, al
        jz      skip
        fld     dword ptr [esp + 0x4]
        fsub    dword ptr [esi + 0x3510]
        fcomp dword ptr [DAT_0076d5f0]
        fnstsw ax
        test    ah, 0x41
        jnz     skip
        mov ecx, dword ptr [DAT_007db094]
        mov edx, dword ptr [DAT_007dab44]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        mov ecx, dword ptr [DAT_007dab40]
        push    0x1
        push    0x0
        push    0x33
        push    eax
        mov     eax, [edx]
        xor     eax, ecx
        mov     ecx, [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004ce190
        mov     ecx, [esp + 0x4]
        mov     dword ptr [esi + 0x3510], ecx
    skip:
        pop     esi
        pop     ecx
        ret
    }


}
