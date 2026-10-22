/*
 * FUN_007522d0 (387 B) — DirectInput cooperative-level string builder.
 *
 * Builds a space-separated string in the global buffer DAT_008b9350 from
 * DISCL_* flags (param byte). Uses repne scasb / rep movsd / rep movsb
 * (all native in this toolchain) and absolute string/data references via
 * extern symbols.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_str_7ad59c[];   /* "DISCL_BACKGROUND " */
extern char g_str_7ad544[];   /* "| " */
extern char g_str_7ad588[];   /* "DISCL_EXCLUSIVE " */
extern char g_str_7ad574[];   /* "DISCL_FOREGROUND " */
extern char g_str_7ad560[];   /* "DISCL_NONEXCLUSIVE " */
extern char g_8b9350[];       /* DAT_008b9350 buffer */

__declspec(naked) void __stdcall FUN_007522d0(void)
{
    __asm {
        mov     dl, byte ptr [esp + 0x4]
        test    dl, 0x8
        push    ebx
        push    esi
        push    edi
        mov     byte ptr [g_8b9350], 0x0
        jz      L_52310
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_str_7ad59c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b9350
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_52310:
        test    dl, 0x1
        jz      L_52378
        mov     al, byte ptr [g_8b9350]
        test    al, al
        jz      L_5234b
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_str_7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b9350
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_5234b:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_str_7ad588
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b9350
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_52378:
        test    dl, 0x4
        jz      L_523e0
        mov     al, byte ptr [g_8b9350]
        test    al, al
        jz      L_523b3
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_str_7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b9350
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_523b3:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_str_7ad574
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b9350
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
L_523e0:
        test    dl, 0x2
        jz      L_52448
        mov     al, byte ptr [g_8b9350]
        test    al, al
        jz      L_5241b
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_str_7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b9350
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
L_5241b:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, offset g_str_7ad560
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, offset g_8b9350
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
L_52448:
        pop     edi
        pop     esi
        mov     eax, offset g_8b9350
        pop     ebx
        ret     0x4
    }
}
