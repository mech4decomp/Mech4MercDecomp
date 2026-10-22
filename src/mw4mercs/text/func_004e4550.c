/*
 * FUN_004E4550 (82 B) - __thiscall array-resize helper.
 *
 * If new count != current count: if new count != 0, free old buffer
 * (if any), allocate new count*4 bytes, store; else free old buffer
 * and null it.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_004084e0(void *ptr);
extern void *__cdecl FUN_004084d0(unsigned int size);

__declspec(naked) void FUN_004E4550(void)
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
        jbe     l_zero
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      l_alloc
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_alloc:
        __emit 0x8D  /* __emit: lea eax,[edi*4+0] no-base SIB form (8D 04 BD 00000000) */
        __emit 0x04
        __emit 0xBD
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        push    eax
        mov     dword ptr [esi+4], edi
        call    FUN_004084d0
        add     esp, 4
        pop     edi
        mov     dword ptr [esi], eax
        pop     esi
        ret     4
    l_zero:
        mov     ecx, dword ptr [esi]
        push    ecx
        call    FUN_004084e0
        add     esp, 4
        mov     dword ptr [esi], 0
    l_ret:
        pop     edi
        pop     esi
        ret     4
    }
}
