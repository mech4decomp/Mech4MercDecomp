/*
 * FUN_00488130 (48 B) — Iterator dispatch: calls vtable+0x78 on each element.
 *
 * __thiscall (ECX = this), RET 0x08 (2 stack params).
 * Iterates over array at this+0x14, count at this+0x1c (byte).
 * Calls each element's vtable[0x78/4=30] method.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00488130(int param1, int param2)
{
    __asm {
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x1c]
        push    edi
        mov     edi, eax
        test    edi, edi
        jle     l_done
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        mov     esi, dword ptr [ecx + 0x14]
    l_loop:
        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [ecx]
        push    ebx
        push    ebp
        call    dword ptr [edx + 0x78]
        add     esi, 0x4
        dec     edi
        jnz     l_loop
        pop     esi
        pop     ebp
        pop     ebx
    l_done:
        pop     edi
        ret     0x08
    }
}
