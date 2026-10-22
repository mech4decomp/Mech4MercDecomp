/*
 * FUN_00606900 (100 B) — archive subsystem shutdown: releases the four
 * sub-archives (FUN_006f4850) and clears the globals, plus a virtual
 * release call on the 0x18-byte object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f27b0;
extern int g_007f27b8;
extern int g_007f27bc;
extern int g_007f27c0;
extern int g_007f27b4;

extern void __cdecl FUN_006f4850(void);

__declspec(naked) void FUN_00606900(void)
{
    __asm {
        mov     ecx, dword ptr [g_007f27b0]
        push    esi
        xor     esi, esi
        cmp     ecx, esi
        jz      L1
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L1:
        mov     ecx, dword ptr [g_007f27b8]
        push    0x1
        push    ecx
        call    FUN_006f4850
        mov     edx, dword ptr [g_007f27bc]
        push    0x1
        push    edx
        mov     dword ptr [g_007f27b8], esi
        call    FUN_006f4850
        mov     eax, dword ptr [g_007f27c0]
        push    0x1
        push    eax
        mov     dword ptr [g_007f27bc], esi
        call    FUN_006f4850
        mov     ecx, dword ptr [g_007f27b4]
        push    0x1
        push    ecx
        mov     dword ptr [g_007f27c0], esi
        call    FUN_006f4850
        mov     dword ptr [g_007f27b4], esi
        pop     esi
        ret
    }
}
