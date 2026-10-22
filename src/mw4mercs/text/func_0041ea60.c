/*
 * FUN_0041ea60 (113 B) — __thiscall stream method: reads one bit from the
 * bit-buffer (this+0xc), refilling via vtable[0x20] when the buffer is
 * exhausted (state==8). Returns this. Bit-stream reader family.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041ea60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        cmp     dword ptr [esi + 0x8], -0x14
        push    edi
        jnz     L_0041ea7e
        mov     eax, dword ptr [esi]
        push    0x1
        lea     ecx, [esi + 0xc]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     dword ptr [esi + 0x8], 0x0
L_0041ea7e:
        mov     cl, byte ptr [esi + 0x8]
        mov     dl, byte ptr [esi + 0xc]
        mov     eax, dword ptr [esp + 0xc]
        lea     edi, [esi + 0xc]
        shr     dl, cl
        mov     ecx, dword ptr [esi + 0x8]
        and     dl, 0x1
        inc     ecx
        mov     byte ptr [eax], dl
        mov     eax, ecx
        cmp     eax, 0x7
        mov     dword ptr [esi + 0x8], ecx
        jle     L_0041eaca
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x8]
        test    eax, eax
        jz      L_0041eac3
        mov     eax, dword ptr [esi]
        push    0x1
        push    edi
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        pop     edi
        mov     dword ptr [esi + 0x8], 0x0
        mov     eax, esi
        pop     esi
        ret     0x4
L_0041eac3:
        mov     dword ptr [esi + 0x8], 0xffffffec
L_0041eaca:
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
