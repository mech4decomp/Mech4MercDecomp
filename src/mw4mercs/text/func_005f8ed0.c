/*
 * FUN_005f8ed0 (206 B) -- __thiscall (ECX = this), RET 4 (1 stack param).
 * Looks up a name in a global table (FUN_0066c4a0) or, failing that,
 * scans a linked list at this+0x398 comparing names via a callback.
 * Returns the found index, or -1. Releases a reference-counted string.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int DAT_007f25d0[];
extern void *DAT_0076b2ac;
extern int __stdcall FUN_0066c4a0(void *param, void *out);
extern void __stdcall FUN_004084e0(void *ptr);

__declspec(naked) int __fastcall FUN_005f8ed0(void *param)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        push    edi
        lea     eax, [esp + 0xc]
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x14], 0
        call    FUN_0066c4a0
        add     esp, 8
        cmp     eax, -1
        jz      l_case_neg1
        mov     esi, dword ptr [eax*4 + DAT_007f25d0]
        cmp     esi, -1
        jz      l_ret_neg1
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      l_ret_esi
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_ret_esi
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_ret_esi:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ecx
        ret     4
    l_case_neg1:
        mov     esi, dword ptr [esi + 0x398]
        mov     edi, dword ptr [DAT_0076b2ac]
        xor     ebx, ebx
    l_loop:
        test    esi, esi
        jz      l_ret_neg1
        mov     eax, dword ptr [esi]
        test    eax, eax
        mov     esi, dword ptr [esi + 4]
        jz      l_ret_neg1
        mov     edx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [eax + 0x2c]
        push    edx
        push    eax
        call    edi
        add     esp, 8
        test    eax, eax
        jz      l_found
        inc     ebx
        jmp     l_loop
    l_found:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      l_ret_ebx
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_ret_ebx
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_ret_ebx:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        pop     ecx
        ret     4
    l_ret_neg1:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      l_ret_neg1_cleanup
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_ret_neg1_cleanup
        push    eax
        call    FUN_004084e0
        add     esp, 4
    l_ret_neg1_cleanup:
        pop     edi
        pop     esi
        or      eax, 0xffffffff
        pop     ebx
        pop     ecx
        ret     4
    }
}
