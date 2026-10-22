/*
 * FUN_00752E30 (806 B) - __stdcall (RET 4, 1 param). Builds a string in
 * the global buffer g_008b8f50 by concatenating a set of constant strings
 * selected by bit flags in the parameter (0x7ad978, 0x7ad544, 0x7ad958,
 * 0x7ad934, 0x7ad914, 0x7ad8f8, 0x7ad8e0, 0x7ad8cc, 0x7ad8b8). Returns
 * the buffer address.
 *
 * CFLAGS: /O1
 */

extern unsigned char g_008b8f50;

__declspec(naked) void FUN_00752E30(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp + 8]
        test    bl, 1
        push    esi
        push    edi
        mov     byte ptr [g_008b8f50], 0
        je      L_2e70
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad978
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b8f50
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_2e70:
        test    bl, 2
        je      L_2ed8
        mov     al, byte ptr [g_008b8f50]
        test    al, al
        je      L_2eab
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b8f50
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_2eab:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad958
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b8f50
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_2ed8:
        mov     edx, ebx
        and     edx, 3
        je      L_2f44
        mov     al, byte ptr [g_008b8f50]
        test    al, al
        push    ebp
        je      L_2f16
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b8f50
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
L_2f16:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad934
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebp, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b8f50
        repne   scasb
        mov     ecx, ebp
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebp
        and     ecx, 3
        rep     movsb
        pop     ebp
L_2f44:
        test    edx, edx
        je      L_2fab
        mov     al, byte ptr [g_008b8f50]
        test    al, al
        je      L_2f7e
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b8f50
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_2f7e:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad914
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b8f50
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_2fab:
        test    bl, 4
        je      L_3013
        mov     al, byte ptr [g_008b8f50]
        test    al, al
        je      L_2fe6
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b8f50
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_2fe6:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad8f8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b8f50
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_3013:
        test    bl, 8
        je      L_307b
        mov     al, byte ptr [g_008b8f50]
        test    al, al
        je      L_304e
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b8f50
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_304e:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad8e0
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b8f50
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_307b:
        test    bl, 0x10
        je      L_30e3
        mov     al, byte ptr [g_008b8f50]
        test    al, al
        je      L_30b6
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b8f50
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_30b6:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad8cc
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b8f50
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_30e3:
        test    bl, 0x20
        je      L_314b
        mov     al, byte ptr [g_008b8f50]
        test    al, al
        je      L_311e
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad544
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b8f50
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_311e:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7ad8b8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8b8f50
        repne   scasb
        mov     ecx, edx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
L_314b:
        pop     edi
        pop     esi
        mov     eax, 0x8b8f50
        pop     ebx
        ret     4
    }
}
