/*
 * FUN_004D7010 (88 B) — __cdecl (2 stack args, RET 8). Compares two 16-bit
 * fields of arg1 against arg2's [0x18]/[0x1A] and returns a tri-state
 * (-1/0/1) ordering via a setg/sbb/and/dec idiom.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004D7010(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        mov     dx, word ptr [eax + 0x18]
        push    esi
        mov     esi, dword ptr [esp + 8]
        mov     cx, word ptr [esi]
        cmp     cx, dx
        jne     loc_4d7054
        push    edi
        mov     di, word ptr [esi + 2]
        cmp     di, word ptr [eax + 0x1a]
        pop     edi
        jne     loc_4d7037
        xor     eax, eax
        pop     esi
        ret     8
loc_4d7037:
        cmp     cx, dx
        jne     loc_4d7054
        mov     cx, word ptr [esi + 2]
        cmp     word ptr [eax + 0x1a], cx
        pop     esi
        sbb     eax, eax
        neg     eax
        neg     al
        sbb     eax, eax
        and     eax, 2
        dec     eax
        ret     8
loc_4d7054:
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
