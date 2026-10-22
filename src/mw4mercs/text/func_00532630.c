/*
 * FUN_00532630 (58 B) — Reference-counted buffer release.
 *
 * Decrements refcount byte before [this+0x18] buffer. If refcount reaches
 * zero, frees the buffer. Then calls a method on this. If stack param & 1,
 * frees this as well.
 * __thiscall (ECX = this), RET 0x04 (1 stack param: flags).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00532630(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x18]
        test    eax, eax
        jz      l_call_method
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_call_method
        push    eax
        _emit 0xE8
        _emit 0x96
        _emit 0x5E
        _emit 0xED
        _emit 0xFF
        add     esp, 4
    l_call_method:
        mov     ecx, esi
        _emit 0xE8
        _emit 0x2C
        _emit 0x2D
        _emit 0xEE
        _emit 0xFF
        test    byte ptr [esp + 8], 1
        jz      l_done
        push    esi
        _emit 0xE8
        _emit 0x7F
        _emit 0x5E
        _emit 0xED
        _emit 0xFF
        add     esp, 4
    l_done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
