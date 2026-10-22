/*
 * FUN_10002790 (235 B) - __stdcall, RET 0x10. Base64 decoder over a UTF-8
 * input buffer: accumulates 24-bit groups, extracts 3 bytes via a stack
 * temp, maps each through the base64 table at 0x10050140 into the output.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_b64table_10050140[];   /* base64 table at 0x10050140 */

__declspec(naked) void __stdcall FUN_10002790(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x10]
        push    ebx
        push    ebp
        push    esi
        xor     esi, esi
        test    edx, edx
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        jbe     L_857
        mov     ebp, dword ptr [esp + 0x1c]
        __emit 0x8D /* __emit: MSVC6 collapses lea ebx,[ebx+0] to 8D 1B; ref uses 6-byte nop 8D 9B 00000000 */
        __emit 0x9B
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
L_b0:
        sub     edx, esi
        cmp     edx, 3
        jb      L_d1
        movzx   ecx, byte ptr [esi + ebp]
        xor     eax, eax
        mov     ah, byte ptr [esi + ebp + 2]
        mov     edx, 3
        mov     al, byte ptr [esi + ebp + 1]
        shl     eax, 8
        or      eax, ecx
        jmp     L_ea
L_d1:
        cmp     edx, 2
        jnz     L_e1
        xor     eax, eax
        mov     ah, byte ptr [esi + ebp + 1]
        mov     al, byte ptr [esi + ebp]
        jmp     L_ea
L_e1:
        cmp     edx, 1
        jnz     L_857
        movzx   eax, byte ptr [esi + ebp]
L_ea:
        mov     ecx, eax
        shl     eax, 2
        mov     ebx, eax
        and     ebx, 0x3f00
        and     ecx, 0x3f
        or      ecx, ebx
        shl     eax, 2
        mov     ebx, eax
        and     ebx, 0x0fc00000
        and     eax, 0x3f0000
        shl     ebx, 2
        or      ebx, eax
        or      ecx, ebx
        mov     dword ptr [esp + 0x1c], ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     eax, edx
        sub     eax, ecx
        lea     ecx, [eax + edi + 1]
        cmp     ecx, dword ptr [esp + 0x18]
        jge     L_863
        xor     eax, eax
        inc     edx
        test    edx, edx
        jbe     L_848
L_830:
        movzx   ecx, byte ptr [esp + eax + 0x1c]
        cmp     ecx, 0x40
        jae     L_86f
        mov     cl, byte ptr [ecx + g_b64table_10050140]
        mov     byte ptr [edi], cl
        inc     edi
        inc     eax
        cmp     eax, edx
        jb      L_830
L_848:
        mov     edx, dword ptr [esp + 0x20]
        add     esi, 3
        cmp     esi, edx
        jb      L_b0
L_857:
        mov     byte ptr [edi], 0
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0x10
L_863:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120002
        pop     ebx
        ret     0x10
L_86f:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0x80070057
        pop     ebx
        ret     0x10
    }
}
