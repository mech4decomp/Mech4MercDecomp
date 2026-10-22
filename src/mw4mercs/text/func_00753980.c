/*
 * FUN_00753980 (91 B true extent; 96 B block w/ trailing nop pad) —
 * __stdcall, 1 arg (ret 4), ecx=this. Copies a string into a freshly
 * allocated buffer stored at [this+0x14].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void *__cdecl FUN_006f4230(void);
extern void *__cdecl FUN_006f3c80(void);
extern unsigned long g_849324;

__declspec(naked) void FUN_00753980(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        push    esi
        mov     esi, ecx
        push    edi
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, ebx
        repne   scasb
        mov     eax, dword ptr [esi + 0x14]
        not     ecx
        dec     ecx
        test    eax, eax
        mov     edi, ecx
        je      l_1
        push    eax
        call    FUN_006f4230
    l_1:
        mov     eax, dword ptr [g_849324]
        push    eax
        inc     edi
        push    edi
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     edx, eax
        mov     edi, ebx
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     dword ptr [esi + 0x14], edx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        pop     edi
        pop     esi
        pop     ebx
        ret     4
    }
}
