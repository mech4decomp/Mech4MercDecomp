/*
 * FUN_00698F80 (90 B) — Indexed lookup helper.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * Reads a byte table at this+0x1C indexed by param; if 0xFF uses a
 * 16-byte-strided table at this+0x18->+0x2C, else if nonzero uses the
 * byte value directly; returns 0 when the byte is zero.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int __fastcall FUN_00698f80(void)
{
    __asm {
        mov     edx, dword ptr [ecx + 0x1c]
        mov     eax, dword ptr [esp + 4]
        mov     dl, byte ptr [edx + eax]
        cmp     dl, 0xff
        jne     l_af
        mov     ecx, dword ptr [ecx + 0x18]
        mov     edx, dword ptr [ecx + 0x2c]
        shl     eax, 4
        add     eax, edx
        xor     edx, edx
        mov     dl, byte ptr [eax + 0xc]
        mov     eax, dword ptr [eax + 8]
        lea     edx, [eax + edx * 4]
        mov     eax, dword ptr [ecx + 0x24]
        lea     eax, [edx + eax - 4]
        ret     4
    l_af:
        test    dl, dl
        jz      l_d5
        mov     ecx, dword ptr [ecx + 0x18]
        shl     eax, 4
        push    esi
        mov     esi, dword ptr [ecx + 0x2c]
        mov     eax, dword ptr [esi + eax + 8]
        and     edx, 0xff
        lea     edx, [eax + edx * 4]
        mov     eax, dword ptr [ecx + 0x24]
        lea     eax, [edx + eax - 4]
        pop     esi
        ret     4
    l_d5:
        xor     eax, eax
        ret     4
    }
}
