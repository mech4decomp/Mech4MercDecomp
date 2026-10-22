/*
 * FUN_10002660 (174 B) - __stdcall, RET 0x10. Base64 decoder over a UTF-16
 * input string: classifies each char via a lookup table + jump table,
 * accumulates 6-bit groups into EBX, flushes bytes to the output buffer.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_lookup_10002728[];   /* base64 class table at 0x10002728 */
extern void *g_jumptable_10002710[];        /* jump table at 0x10002710 */

__declspec(naked) void __stdcall FUN_10002660(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     ax, word ptr [edi]
        xor     ebx, ebx
        xor     ecx, ecx
        test    ax, ax
        __emit 0x0F /* __emit: MSVC6 emits rel8 (74) for this forward JZ; reference uses rel32 (0F 84) */
        __emit 0x84
        __emit 0x7F
        __emit 0x00
        __emit 0x00
        __emit 0x00
        xor     ebp, ebp
        mov     edi, edi
L_80:
        movzx   eax, ax
        lea     edx, [eax - 0x21]
        add     edi, 2
        cmp     edx, 0x59
        ja      L_e3
        movzx   edx, byte ptr [edx + g_lookup_10002728]
        jmp     dword ptr [edx*4 + g_jumptable_10002710]
L_9c:
        add     eax, -0x61
        jmp     L_b7
L_a1:
        add     eax, -0x27
        jmp     L_b7
L_a6:
        add     eax, 4
        jmp     L_b7
L_ab:
        mov     eax, 0x3e
        jmp     L_b7
L_b2:
        mov     eax, 0x3f
L_b7:
        shl     eax, cl
        add     ecx, 6
        or      ebx, eax
        cmp     ecx, 8
        jb      L_d3
        cmp     ebp, dword ptr [esp + 0x1c]
        jge     L_ef
        mov     byte ptr [esi], bl
        inc     esi
        inc     ebp
        shr     ebx, 8
        sub     ecx, 8
L_d3:
        mov     ax, word ptr [edi]
        test    ax, ax
        jnz     L_80
        test    ecx, ecx
        jbe     L_fb
        test    ebx, ebx
        jz      L_fb
L_e3:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc112000c
        pop     ebx
        ret     0x10
L_ef:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120002
        pop     ebx
        ret     0x10
L_fb:
        sub     esi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x20]
        pop     edi
        mov     dword ptr [eax], esi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        ret     0x10
    }
}
