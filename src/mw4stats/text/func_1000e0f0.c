/*
 * FUN_1000e0f0 (94 B) - __stdcall. InterlockedDecrement on object+0x8; if it
 * reaches 0, tears down the object: releases the pool at +0x38 (vtable +0x30),
 * calls its vtable[0] with 1, nulls +0x38, then FUN_1000e060 (thiscall) and
 * FUN_1000a110 (cdecl free). Returns 0 on teardown, else the decremented count.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_10021018;   /* InterlockedDecrement IAT @ 0x10021018 */
extern void FUN_1000e060(void);
extern void FUN_1000a110(void);

__declspec(naked) long __cdecl FUN_1000e0f0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        lea     edi, [esi + 0x8]
        push    edi
        call    dword ptr [g_10021018]
        test    eax, eax
        jnz     Le147
        mov     eax, dword ptr [esi + 0x38]
        test    eax, eax
        jz      Le12c
        mov     ecx, dword ptr [eax]
        push    0x0
        push    0x1388
        push    eax
        call    dword ptr [ecx + 0x30]
        mov     ecx, dword ptr [esi + 0x38]
        test    ecx, ecx
        jz      Le125
        mov     edx, dword ptr [ecx]
        push    0x1
        call    dword ptr [edx]
Le125:
        mov     dword ptr [esi + 0x38], 0x0
Le12c:
        test    esi, esi
        jz      Le140
        mov     ecx, esi
        call    FUN_1000e060
        push    esi
        call    FUN_1000a110
        add     esp, 0x4
Le140:
        pop     edi
        xor     eax, eax
        pop     esi
        ret     0x4
Le147:
        mov     eax, dword ptr [edi]
        pop     edi
        pop     esi
        ret     0x4
    }
}
