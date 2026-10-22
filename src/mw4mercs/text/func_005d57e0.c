/*
 * FUN_005d57e0 (58 B) — __thiscall (ECX = this), RET (no stack params).
 *
 * Sets this->[0x41c] = 1, calls virtual method at vtable+0x1bc with
 * (this+0x3ec, 0x115, 1, 1), then sets this->[0x435] = 1 if this->[0x42c]==0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __stdcall FUN_005d57e0(void)
{
    __asm {
        push    esi
        push    0x1
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    0x1
        push    0x115
        lea     ecx, [esi + 0x3ec]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esi + 0x41c], 0x1
        call    dword ptr [eax + 0x1bc]
        mov     eax, dword ptr [esi + 0x42c]
        test    eax, eax
        jnz     done
        mov     byte ptr [esi + 0x435], 0x1
done:
        pop     esi
        ret
    }
}
