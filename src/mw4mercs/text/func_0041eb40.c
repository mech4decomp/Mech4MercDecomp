/*
 * FUN_0041eb40 (263 B) — __thiscall stream method: reads `count` bits from
 * the bit-buffer into a byte array (ReadBits). Refills via vtable[0x20]
 * when the buffer is exhausted. Returns this. Bit-stream reader family.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041eb40(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, ecx
        cmp     dword ptr [esi + 0x8], -0x14
        jnz     L_0041eb5e
        mov     eax, dword ptr [esi]
        push    0x1
        lea     ecx, [esi + 0xc]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     dword ptr [esi + 0x8], 0x0
L_0041eb5e:
        mov     ecx, dword ptr [esp + 0x10]
        test    ecx, ecx
        mov     dword ptr [esp + 0x4], ecx
        jle     L_0041ec40
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        push    ebp
        push    edi
        mov     dword ptr [esp + 0x1c], eax
        jmp     L_0041eb83
L_0041eb7b:
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x1c]
L_0041eb83:
        mov     ebx, 0x8
        cmp     ecx, ebx
        mov     dword ptr [esp + 0x18], eax
        mov     byte ptr [eax], 0x0
        jge     L_0041eb95
        mov     ebx, ecx
L_0041eb95:
        mov     edx, dword ptr [esi + 0x8]
        mov     eax, 0x8
        sub     eax, edx
        cmp     ebx, eax
        mov     ebp, ebx
        jle     L_0041eba7
        mov     ebp, eax
L_0041eba7:
        mov     al, byte ptr [esi + 0xc]
        mov     ecx, 0x8
        sub     ecx, ebp
        mov     edx, 0xff
        sar     edx, cl
        mov     cl, byte ptr [esi + 0x8]
        shr     al, cl
        mov     ecx, dword ptr [esp + 0x1c]
        and     dl, al
        mov     byte ptr [ecx], dl
        mov     ecx, dword ptr [esi + 0x8]
        add     ecx, ebp
        mov     eax, ecx
        cmp     eax, 0x8
        mov     dword ptr [esi + 0x8], ecx
        jnz     L_0041ec24
        mov     edx, dword ptr [esi]
        mov     edi, ebx
        mov     ecx, esi
        sub     edi, ebp
        call    dword ptr [edx + 0x8]
        test    eax, eax
        jz      L_0041ebf0
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esi + 0xc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
L_0041ebf0:
        mov     ecx, dword ptr [esp + 0x1c]
        inc     ecx
        test    edi, edi
        mov     dword ptr [esp + 0x1c], ecx
        mov     dword ptr [esi + 0x8], 0x0
        jz      L_0041ec24
        mov     al, byte ptr [esi + 0xc]
        mov     ecx, 0x8
        sub     ecx, edi
        mov     edx, 0xff
        sar     edx, cl
        mov     ecx, ebp
        mov     dword ptr [esi + 0x8], edi
        and     dl, al
        mov     eax, dword ptr [esp + 0x18]
        shl     dl, cl
        or      byte ptr [eax], dl
L_0041ec24:
        mov     eax, dword ptr [esp + 0x10]
        sub     eax, ebx
        test    eax, eax
        mov     dword ptr [esp + 0x10], eax
        jg      L_0041eb7b
        pop     edi
        pop     ebp
        pop     ebx
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x8
L_0041ec40:
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x8
    }
}
