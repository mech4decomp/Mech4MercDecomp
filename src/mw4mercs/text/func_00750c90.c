/*
 * FUN_00750C90 (275 B) — String-builder.
 *
 * Based on flag bits in DL, appends one of five string constants
 * ("COLORSPACE ", "DESTBLT ", "DESTOVERLAY ", "SRCBLT ", "SRCOVERLAY ")
 * into the global buffer at 0x8b9a90 using repne scasb / rep movsd /
 * rep movsb. Returns the buffer address.
 *
 * __stdcall, RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8b9a90;

__declspec(naked) void __stdcall FUN_00750C90(void)
{
    __asm {
        mov     dl, byte ptr [esp + 0x4]
        test    dl, 0x1
        push    ebx
        push    esi
        push    edi
        mov     byte ptr [g_8b9a90], 0x0
        jz      L_750cd0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad1a4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9a90
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_750cd0:
        test    dl, 0x2
        jz      L_750d02
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad198
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9a90
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_750d02:
        test    dl, 0x4
        jz      L_750d34
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad188
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9a90
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_750d34:
        test    dl, 0x8
        jz      L_750d66
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad180
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9a90
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_750d66:
        test    dl, 0x10
        jz      L_750d98
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad174
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9a90
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
L_750d98:
        pop     edi
        pop     esi
        mov     eax, 0x8b9a90
        pop     ebx
        ret     0x4
    }
}
