/*
 * FUN_00488160 (98 B) — Iterator dispatch: calls vtable+0x74, manages refcount.
 *
 * __thiscall (ECX = this), RET 0x0C (3 stack params).
 * Iterates over array at this+0x14, count at this+0x1c (byte).
 * Calls each element's vtable[0x74/4=29] method, then decrements refcount
 * at [result+8] (word). If refcount reaches 0, calls vtable[0] with arg 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern void __fastcall FUN_00487ce0(void *this, void *obj);

__declspec(naked) void __fastcall FUN_00488160(int param1, int param2, int param3)
{
    __asm {
        push    ecx
        push    ebx
        xor     eax, eax
        push    edi
        mov     edi, ecx
        mov     al, byte ptr [edi + 0x1c]
        xor     ebx, ebx
        test    eax, eax
        mov     dword ptr [esp + 0x08], eax
        jle     l_done
        push    ebp
        mov     ebp, dword ptr [esp + 0x1c]
        push    esi
    l_loop:
        mov     eax, dword ptr [edi + 0x14]
        mov     ecx, dword ptr [eax + ebx * 4]
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [ecx]
        push    ebp
        push    eax
        mov     eax, dword ptr [esp + 0x20]
        push    eax
        call    dword ptr [edx + 0x74]
        mov     esi, eax
        test    esi, esi
        jz      l_next
        push    esi
        mov     ecx, edi
        call    FUN_00487ce0
        dec     word ptr [esi + 0x08]
        cmp     word ptr [esi + 0x08], 0
        jnz     l_next
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx]
    l_next:
        mov     eax, dword ptr [esp + 0x10]
        inc     ebx
        cmp     ebx, eax
        jl      l_loop
        pop     esi
        pop     ebp
    l_done:
        pop     edi
        pop     ebx
        pop     ecx
        ret     0x0c
    }
}
