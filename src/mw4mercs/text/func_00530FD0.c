/*
 * FUN_00530FD0 (97 B) — __stdcall, 1 arg (ret 4), ecx=this. Destroys a
 * variable-length array of 0x28-byte elements, optionally freeing memory.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_004084e0(void);

__declspec(naked) void FUN_00530FD0(void)
{
    __asm {
        push    ebx
        mov     bl, byte ptr [esp + 8]
        test    bl, 2
        push    esi
        mov     esi, ecx
        je      l_3
        mov     eax, dword ptr [esi - 4]
        push    ebp
        lea     ebp, [esi - 4]
        lea     ecx, [eax + eax*4]
        dec     eax
        lea     esi, [esi + ecx*8]
        js      l_1
        push    edi
        lea     edi, [eax + 1]
    l_2:
        sub     esi, 0x28
        mov     ecx, esi
        call    FUN_0041ef60
        dec     edi
        jne     l_2
        pop     edi
    l_1:
        test    bl, 1
        je      l_4
        push    ebp
        call    FUN_004084e0
        add     esp, 4
    l_4:
        mov     eax, ebp
        pop     ebp
        pop     esi
        pop     ebx
        ret     4
    l_3:
        mov     ecx, esi
        call    FUN_0041ef60
        test    bl, 1
        je      l_5
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_5:
        mov     eax, esi
        pop     esi
        pop     ebx
        ret     4
    }
}
