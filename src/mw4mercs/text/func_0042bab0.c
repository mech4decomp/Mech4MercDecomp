/*
 * FUN_0042bab0 (61 B) — __thiscall refcount helper. Releases the object
 * at this+0xa8 (decrement refcount, virtual delete when it hits 0), then
 * stores a new object pointer at this+0xa8, adjusting the refcount and
 * the this+0x78 flag bits accordingly.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0042bab0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0xa8]
        test    ecx, ecx
        jz      L_bacc
        dec     dword ptr [ecx + 0x8]
        jnz     L_bacc
        test    ecx, ecx
        jz      L_bacc
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
L_bacc:
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        mov     dword ptr [esi + 0xa8], eax
        jnz     L_bae2
        and     dword ptr [esi + 0x78], 0xffffffbf
        pop     esi
        ret     0x4
L_bae2:
        inc     dword ptr [eax + 0x8]
        or      dword ptr [esi + 0x78], 0x40
        pop     esi
        ret     0x4
    }
}
