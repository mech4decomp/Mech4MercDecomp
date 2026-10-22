/*
 * FUN_00698d60 (94 B) — __thiscall. Table lookup by index; returns a
 * computed offset (or 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00698d60(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x1c]
        mov     edx, dword ptr [esp + 0x4]
        mov     al, byte ptr [eax + edx*0x1]
        cmp     al, 0xff
        push    esi
        jnz     L_notff
        mov     ecx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [ecx + 0x2c]
        shl     edx, 0x4
        mov     esi, dword ptr [edx + eax*0x1 + 0x4]
        add     edx, eax
        xor     eax, eax
        mov     al, byte ptr [edx + 0xc]
        dec     eax
        imul    eax, dword ptr [edx]
        mov     edx, dword ptr [ecx + 0x1c]
        add     eax, esi
        add     eax, edx
        pop     esi
        ret     0x4
    L_notff:
        test    al, al
        jz      L_zero
        mov     ecx, dword ptr [ecx + 0x18]
        mov     esi, dword ptr [ecx + 0x2c]
        shl     edx, 0x4
        add     edx, esi
        mov     esi, dword ptr [edx + 0x4]
        and     eax, 0xff
        dec     eax
        imul    eax, dword ptr [edx]
        mov     edx, dword ptr [ecx + 0x1c]
        add     eax, esi
        add     eax, edx
        pop     esi
        ret     0x4
    L_zero:
        xor     eax, eax
        pop     esi
        ret     0x4
    }
}
