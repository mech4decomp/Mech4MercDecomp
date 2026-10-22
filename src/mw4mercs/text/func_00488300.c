/*
 * FUN_00488300 (75 B) — Iterator dispatch: calls vtable+0x5c, returns OR.
 *
 * __thiscall (ECX = this), RET 0x08 (2 stack params).
 * Iterates over array at this+0x14, count at this+0x1c (byte).
 * Calls each element's vtable[0x5c/4=23] method. Returns 1 if any call
 * returned nonzero, else 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_00488300(int param1, int param2)
{
    __asm {
        push    ecx
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x1c]
        xor     dl, dl
        mov     byte ptr [esp + 0x03], dl
        test    eax, eax
        jle     l_return_dl
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        mov     esi, dword ptr [ecx + 0x14]
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        mov     ebx, eax
    l_loop:
        mov     ecx, dword ptr [esi]
        mov     eax, dword ptr [ecx]
        push    edi
        push    ebp
        call    dword ptr [eax + 0x5c]
        test    al, al
        jz      l_skip
        mov     byte ptr [esp + 0x13], 0x01
    l_skip:
        add     esi, 0x4
        dec     ebx
        jnz     l_loop
        mov     al, byte ptr [esp + 0x13]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x08
    l_return_dl:
        mov     al, dl
        pop     ecx
        ret     0x08
    }
}
