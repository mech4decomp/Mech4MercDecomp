/*
 * FUN_004E45B0 (73 B) - __thiscall array-resize helper (byte-count variant).
 *
 * Same shape as FUN_004E4550 but allocates param_1 bytes directly
 * (no *4 scaling).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004084e0(void *ptr);
extern void *__cdecl FUN_004084d0(unsigned int size);

__declspec(naked) void FUN_004E45B0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi+4]
        push    edi
        mov     edi, dword ptr [esp+0xc]
        cmp     edi, eax
        jz      l_ret
        test    edi, edi
        mov     eax, dword ptr [esi]
        jbe     l_zero
        test    eax, eax
        jz      l_alloc
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_alloc:
        push    edi
        mov     dword ptr [esi+4], edi
        call    FUN_004084d0
        add     esp, 4
        pop     edi
        mov     dword ptr [esi], eax
        pop     esi
        ret     4
    l_zero:
        push    eax
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], 0
    l_ret:
        pop     edi
        pop     esi
        ret     4
    }
}
