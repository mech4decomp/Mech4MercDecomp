/*
 * FUN_00750ba0 (225 B) — flag-string builder.
 *
 * Appends flag strings ("NOSYSLOCK ", "READONLY ", "WAIT ", "WRITEONLY ") to
 * the g_8b9b10 buffer based on bits in param_1, using strlen (repne scasb) +
 * strcpy (rep movsd/movsb). Returns the buffer address.
 *
 * The buffer is referenced via extern char symbol for the byte-store; string
 * addresses are immediates. repne scasb / rep movsd / rep movsb encode
 * natively in this toolchain.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8b9b10;

__declspec(naked) void __stdcall FUN_00750ba0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 4]
        test    dh, 8
        push    ebx
        push    esi
        push    edi
        mov     byte ptr [g_8b9b10], 0
        jz      L_e0
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad168
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9b10
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L_e0:
        test    dl, 0x10
        jz      L_12
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad15c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9b10
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L_12:
        test    dl, 1
        jz      L_44
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7abec8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9b10
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L_44:
        test    dl, 0x20
        jz      L_76
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad150
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b9b10
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_76:
        pop     edi
        pop     esi
        mov     eax, 0x8b9b10
        pop     ebx
        ret     4
    }
}
