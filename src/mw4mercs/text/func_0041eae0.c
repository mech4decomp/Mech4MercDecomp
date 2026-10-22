/*
 * FUN_0041eae0 (89 B) — __thiscall stream method: writes one bit into the
 * bit-buffer (this+0xc), flushing via vtable[0x24] when the buffer is full
 * (state==8). Returns this. Bit-stream writer family.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041eae0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        mov     dl, byte ptr [ecx]
        mov     ecx, dword ptr [esi + 0x8]
        xor     eax, eax
        test    dl, dl
        setnz   al
        cmp     ecx, -0x14
        push    edi
        jnz     L_0041eb04
        mov     dword ptr [esi + 0x8], 0x0
        mov     byte ptr [esi + 0xc], 0x0
L_0041eb04:
        mov     ecx, dword ptr [esi + 0x8]
        mov     dl, byte ptr [esi + 0xc]
        shl     al, cl
        lea     edi, [esi + 0xc]
        or      dl, al
        lea     eax, [ecx + 0x1]
        cmp     eax, 0x7
        mov     byte ptr [edi], dl
        mov     dword ptr [esi + 0x8], eax
        jle     L_0041eb32
        mov     edx, dword ptr [esi]
        push    0x1
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     byte ptr [edi], 0x0
        mov     dword ptr [esi + 0x8], 0x0
L_0041eb32:
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
