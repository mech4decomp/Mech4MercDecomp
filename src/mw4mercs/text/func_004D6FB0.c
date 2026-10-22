/*
 * FUN_004D6FB0 (89 B) — __cdecl (2 stack args, RET 8). Compares the 16-bit
 * [0x18]/[0x1A] fields of arg1 against arg2 and returns a tri-state
 * (-1/0/1) ordering via a setg/sbb/and/dec idiom.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004D6FB0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        mov     cx, word ptr [eax + 0x18]
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     dx, word ptr [esi + 0x18]
        cmp     cx, dx
        jne     loc_4d6ff5
        push    edi
        mov     di, word ptr [eax + 0x1a]
        cmp     di, word ptr [esi + 0x1a]
        pop     edi
        jne     loc_4d6fd8
        xor     eax, eax
        pop     esi
        ret     8
loc_4d6fd8:
        cmp     cx, dx
        jne     loc_4d6ff5
        mov     ax, word ptr [eax + 0x1a]
        cmp     word ptr [esi + 0x1a], ax
        pop     esi
        sbb     eax, eax
        neg     eax
        neg     al
        sbb     eax, eax
        and     eax, 2
        dec     eax
        ret     8
loc_4d6ff5:
        xor     eax, eax
        cmp     cx, dx
        setg    al
        neg     al
        pop     esi
        sbb     eax, eax
        and     eax, 2
        dec     eax
        ret     8
    }
}
