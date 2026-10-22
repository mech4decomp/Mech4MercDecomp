/*
 * FUN_004E4600 (97 B) - __thiscall array-resize helper (0x30-byte element).
 *
 * Allocates param_1 * 0x30 bytes. On success stores pointer and writes
 * the decremented count back to the argument slot (original-code quirk).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004084e0(void *ptr);
extern void *__cdecl FUN_004084d0(unsigned int size);

__declspec(naked) void FUN_004E4600(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp+8]
        push    edi
        mov     edi, ecx
        cmp     esi, dword ptr [edi+4]
        jz      l_ret
        test    esi, esi
        jbe     l_zero
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      l_alloc
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_alloc:
        lea     eax, [esi+esi*2]
        shl     eax, 4
        push    eax
        mov     dword ptr [edi+4], esi
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_fail
        dec     esi
        mov     dword ptr [edi], eax
        pop     edi
        mov     dword ptr [esp+8], esi
        pop     esi
        ret     4
    l_fail:
        xor     eax, eax
        mov     dword ptr [edi], eax
        pop     edi
        pop     esi
        ret     4
    l_zero:
        mov     ecx, dword ptr [edi]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [edi], 0
    l_ret:
        pop     edi
        pop     esi
        ret     4
    }
}
