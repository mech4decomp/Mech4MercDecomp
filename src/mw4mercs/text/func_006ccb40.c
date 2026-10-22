/*
 * FUN_006ccb40 (418 B) - Script operator tokenizer/lexer. Reads the next
 * operator token from the global char* cursor DAT_0082f328, advancing the
 * cursor, and returns an encoded operator id (e.g. 0x150, 0x645, ...).
 * Uses a char lookup table at 0x6ccd24 and a jump table at 0x6ccce4 (both
 * outside this function's byte range).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char *g_82f328;   /* DAT_0082f328 - script parse cursor */

__declspec(naked) int __cdecl FUN_006ccb40(void)
{
    __asm {
        mov     eax, dword ptr [g_82f328]
    L_cb45:
        movsx   ecx, byte ptr [eax]
        inc     eax
        add     ecx, -0x20
        cmp     ecx, 0x5c
        mov     dword ptr [g_82f328], eax
        ja      L_cb76
    L_cb56:
        xor     edx, edx
        mov     dl, byte ptr [ecx + 0x6ccd24]
        jmp     dword ptr [edx*4 + 0x6ccce4]

    L_cb65: /* loop continue */
        movsx   ecx, byte ptr [eax]
        add     ecx, -0x20
        inc     eax
        cmp     ecx, 0x5c
        jbe     L_cb56
        mov     dword ptr [g_82f328], eax
    L_cb76:
        dec     eax
        mov     dword ptr [g_82f328], eax
    L_cb7c:
        xor     eax, eax
        ret

    L_cb7f:
        mov     dword ptr [g_82f328], eax
        mov     eax, 0x150
        ret
    L_cb8a:
        mov     dword ptr [g_82f328], eax
        mov     eax, 0x250
        ret
    L_cb95:
        mov     dword ptr [g_82f328], eax
        mov     eax, 0x355
        ret
    L_cba0:
        mov     dword ptr [g_82f328], eax
        mov     eax, 0x455
        ret
    L_cbab:
        mov     dword ptr [g_82f328], eax
        mov     eax, 0x555
        ret
    L_cbb6:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x3c
        mov     dword ptr [g_82f328], eax
        jnz     L_cbce
        inc     eax
        mov     dword ptr [g_82f328], eax
        mov     eax, 0x645
        ret
    L_cbce:
        cmp     cl, 0x3e
        jnz     L_cbdf
        inc     eax
        mov     dword ptr [g_82f328], eax
        mov     eax, 0x735
        ret
    L_cbdf:
        cmp     cl, 0x3d
        jnz     L_cbf0
        inc     eax
        mov     dword ptr [g_82f328], eax
        mov     eax, 0x840
        ret
    L_cbf0:
        mov     eax, 0x940
        ret
    L_cbf6:
        mov     cl, byte ptr [eax]
        cmp     cl, 0x3e
        mov     dword ptr [g_82f328], eax
        jnz     L_ccc0e
        inc     eax
        mov     dword ptr [g_82f328], eax
        mov     eax, 0xa45
        ret
    L_ccc0e:
        cmp     cl, 0x3d
        jnz     L_ccc1f
        inc     eax
        mov     dword ptr [g_82f328], eax
        mov     eax, 0xb40
        ret
    L_ccc1f:
        mov     eax, 0xc40
        ret
    L_ccc25:
        cmp     byte ptr [eax], 0x3d
        mov     dword ptr [g_82f328], eax
        jnz     L_ccc35
        inc     eax
        mov     dword ptr [g_82f328], eax
    L_ccc35:
        mov     eax, 0xd35
        ret
    L_ccc3b:
        cmp     byte ptr [eax], 0x3d
        mov     dword ptr [g_82f328], eax
        jnz     L_cb7c
        inc     eax
        mov     dword ptr [g_82f328], eax
        mov     eax, 0x735
        ret
    L_ccc55:
        mov     dword ptr [g_82f328], eax
        mov     eax, 0xe25
        ret
    L_ccc60:
        cmp     byte ptr [eax], 0x26
        mov     dword ptr [g_82f328], eax
        jnz     L_ccc76
        inc     eax
        mov     dword ptr [g_82f328], eax
        mov     eax, 0xf15
        ret
    L_ccc76:
        mov     eax, 0x1030
        ret
    L_ccc7c:
        cmp     byte ptr [eax], 0x7c
        mov     dword ptr [g_82f328], eax
        jnz     L_ccc92
        inc     eax
        mov     dword ptr [g_82f328], eax
        mov     eax, 0x1110
        ret
    L_ccc92:
        mov     eax, 0x1220
        ret
    L_ccc98:
        cmp     byte ptr [eax], 0x6e
        mov     dword ptr [g_82f328], eax
        jnz     L_cb76
        cmp     byte ptr [eax + 0x1], 0x64
        jnz     L_cb76
        cmp     byte ptr [eax + 0x2], 0x20
        jnz     L_cb76
        add     eax, 0x3
        mov     dword ptr [g_82f328], eax
        mov     eax, 0xf15
        ret
    L_cccc8:
        cmp     byte ptr [eax], 0x72
        mov     dword ptr [g_82f328], eax
        jnz     L_cb76
        inc     eax
        mov     dword ptr [g_82f328], eax
        mov     eax, 0x1110
        ret
    }
}
