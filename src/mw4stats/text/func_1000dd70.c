/*
 * FUN_1000dd70 (94 B) - __stdcall. InterlockedDecrement on object+0x4; if it
 * reaches 0, tears down the object: releases the pool (vtable +0x30), calls
 * the pool's vtable[0] with 1, nulls +0xc, then FUN_1000dd00 (thiscall) and
 * FUN_1000a110 (cdecl free). Returns 0 on teardown, else the decremented count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021018;   /* InterlockedDecrement IAT @ 0x10021018 */
extern void FUN_1000dd00(void);
extern void FUN_1000a110(void);

__declspec(naked) long __cdecl FUN_1000dd70(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        lea     edi, [esi + 0x4]
        push    edi
        call    dword ptr [g_10021018]
        test    eax, eax
        jnz     Lc7
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        jz      L98
        mov     ecx, dword ptr [eax]
        push    0x0
        push    0x2710
        push    eax
        call    dword ptr [ecx + 0x30]
L98:
        mov     ecx, dword ptr [esi + 0xc]
        test    ecx, ecx
        jz      La5
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
La5:
        test    esi, esi
        mov     dword ptr [esi + 0xc], 0x0
        jz      Lc0
        mov     ecx, esi
        call    FUN_1000dd00
        push    esi
        call    FUN_1000a110
        add     esp, 0x4
Lc0:
        pop     edi
        xor     eax, eax
        pop     esi
        ret     0x4
Lc7:
        mov     eax, dword ptr [edi]
        pop     edi
        pop     esi
        ret     0x4
    }
}
