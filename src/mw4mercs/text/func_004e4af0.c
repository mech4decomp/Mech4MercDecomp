/*
 * FUN_004E4AF0 (86 B) - Component factory.
 *
 * Tries FUN_004F2250(param_1,param_2); if non-null, initializes it via
 * FUN_004E4AD0 and returns. Otherwise allocates 0x3C bytes and
 * constructs via FUN_004E4920(DAT_007DC738, param_1, param_2, param_3).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__cdecl FUN_004f2250(void);
extern void __cdecl FUN_004e4ad0(void);
extern void *__cdecl FUN_004084d0(unsigned int size);
extern void *__cdecl FUN_004e4920(void);
extern void *DAT_007dc738;

__declspec(naked) void FUN_004E4AF0(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp+0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x10]
        push    ebx
        push    edi
        call    FUN_004f2250
        mov     esi, eax
        add     esp, 8
        test    esi, esi
        jz      l_alloc
        push    edi
        mov     ecx, esi
        call    FUN_004e4ad0
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
    l_alloc:
        push    0x3c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      l_fail
        mov     ecx, dword ptr [esp+0x18]
        mov     edx, dword ptr [DAT_007dc738]
        push    ecx
        push    ebx
        push    edi
        push    edx
        mov     ecx, eax
        call    FUN_004e4920
        pop     edi
        pop     esi
        pop     ebx
        ret
    l_fail:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret
    }
}
