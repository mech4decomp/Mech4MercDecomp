/*
 * FUN_005f8b50 (134 B) -- __thiscall (ECX = this), plain RET.
 * Builds two parallel arrays (values + flags) sized by a count from
 * FUN_00417a40, then copies a linked-list of values into the first.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __fastcall FUN_00417a40(void *this);
extern void *__stdcall FUN_004084d0(int size);

__declspec(naked) void __fastcall FUN_005f8b50(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ebp, dword ptr [esi + 0x398]
        lea     ecx, [esi + 0x398]
        call    FUN_00417a40
        mov     ebx, eax
        xor     eax, eax
        cmp     ebx, eax
        mov     dword ptr [esi + 0x2bc], ebx
        jnz     l_alloc
        mov     dword ptr [esi + 0x2c0], eax
        mov     dword ptr [esi + 0x2c4], eax
    l_ret:
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    l_alloc:
        push    edi
        lea     edi, [ebx*4 + 0]
        push    edi
        call    FUN_004084d0
        push    edi
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esi + 0x2c0], eax
        call    FUN_004084d0
        add     esp, 8
        test    ebx, ebx
        mov     edi, eax
        mov     dword ptr [esi + 0x2c4], edi
        jle     l_after_stosd
        mov     ecx, ebx
        xor     eax, eax
        rep stosd
    l_after_stosd:
        xor     ecx, ecx
        pop     edi
    l_loop:
        test    ebp, ebp
        jz      l_ret
        mov     eax, dword ptr [ebp]
        test    eax, eax
        mov     ebp, dword ptr [ebp + 4]
        jz      l_ret
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [ecx + edx], eax
        add     ecx, 4
        jmp     l_loop
    }
}
