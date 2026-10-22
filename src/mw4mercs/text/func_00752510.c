/*
 * FUN_00752510 (225 B) — flag-string builder (AMMSF_* flags).
 *
 * Appends flag strings ("AMMSF_ADDDEFAULTRENDERER ", "AMMSF_CREATEPEER ",
 * "AMMSF_STOPIFNOSAMPLES ", "AMMSF_NOSTALL ") to the g_8b9250 buffer based on
 * bits in param_1, using strlen (repne scasb) + strcpy (rep movsd/movsb).
 * Returns the buffer address.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8b9250;

__declspec(naked) void __stdcall FUN_00752510(void)
{
    __asm {
        mov     dl, byte ptr [esp + 4]
        test    dl, 1
        push    ebx
        push    esi
        push    edi
        mov     byte ptr [g_8b9250], 0
        jz      L_50
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad64c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9250
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L_50:
        test    dl, 2
        jz      L_82
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad638
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9250
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L_82:
        test    dl, 4
        jz      L_b4
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad620
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9250
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L_b4:
        test    dl, 8
        jz      L_e6
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad610
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9250
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_e6:
        pop     edi
        pop     esi
        mov     eax, 0x8b9250
        pop     ebx
        ret     4
    }
}
