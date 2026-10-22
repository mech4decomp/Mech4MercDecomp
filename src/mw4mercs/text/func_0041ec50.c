/*
 * FUN_0041ec50 (239 B) — __thiscall stream method: writes `count` bits from
 * a byte array into the bit-buffer (WriteBits), flushing via vtable[0x24]
 * when the buffer is full. Returns this. Bit-stream writer family.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041ec50(void)
{
    __asm {
        sub     esp, 0x8
        push    esi
        mov     esi, ecx
        cmp     dword ptr [esi + 0x8], -0x14
        jnz     L_0041ec67
        mov     byte ptr [esi + 0xc], 0x0
        mov     dword ptr [esi + 0x8], 0x0
L_0041ec67:
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        mov     dword ptr [esp + 0x4], eax
        jle     L_0041ed36
        mov     edx, dword ptr [esp + 0x10]
        push    ebx
        push    ebp
        push    edi
        lea     edi, [esi + 0xc]
        mov     dword ptr [esp + 0x1c], edx
        jmp     L_0041ec8f
L_0041ec87:
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x1c]
L_0041ec8f:
        mov     ebx, 0x8
        cmp     eax, ebx
        mov     dword ptr [esp + 0x14], edx
        mov     dword ptr [esp + 0x20], ebx
        jge     L_0041eca6
        mov     dword ptr [esp + 0x20], eax
        mov     ebx, eax
L_0041eca6:
        mov     ebp, dword ptr [esi + 0x8]
        mov     eax, 0x8
        sub     eax, ebp
        cmp     ebx, eax
        jle     L_0041ecb6
        mov     ebx, eax
L_0041ecb6:
        mov     ebp, dword ptr [esi + 0x8]
        mov     dl, byte ptr [edx]
        mov     ecx, 0x8
        sub     ecx, ebp
        mov     eax, 0xff
        sar     eax, cl
        and     al, byte ptr [edi]
        mov     ecx, ebp
        shl     dl, cl
        add     ebp, ebx
        mov     dword ptr [esi + 0x8], ebp
        or      al, dl
        cmp     ebp, 0x8
        mov     byte ptr [edi], al
        jnz     L_0041ed16
        mov     ebp, dword ptr [esp + 0x20]
        mov     eax, dword ptr [esi]
        push    0x1
        lea     edi, [esi + 0xc]
        push    edi
        mov     ecx, esi
        sub     ebp, ebx
        call    dword ptr [eax + 0x24]
        mov     ecx, dword ptr [esp + 0x1c]
        inc     ecx
        test    ebp, ebp
        mov     dword ptr [esp + 0x1c], ecx
        mov     byte ptr [edi], 0x0
        mov     dword ptr [esi + 0x8], 0x0
        jz      L_0041ed16
        mov     ecx, dword ptr [esp + 0x14]
        mov     dl, byte ptr [ecx]
        mov     cl, bl
        shr     dl, cl
        mov     dword ptr [esi + 0x8], ebp
        mov     byte ptr [edi], dl
L_0041ed16:
        mov     eax, dword ptr [esp + 0x10]
        sub     eax, dword ptr [esp + 0x20]
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        jg      L_0041ec87
        pop     edi
        pop     ebp
        pop     ebx
        mov     eax, esi
        pop     esi
        add     esp, 0x8
        ret     0x8
L_0041ed36:
        mov     eax, esi
        pop     esi
        add     esp, 0x8
        ret     0x8
    }
}
