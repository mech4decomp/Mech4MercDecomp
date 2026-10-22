/*
 * FUN_00751810 (1475 B) — build a D3D surface-description string into the
 * global buffer at 0x008b9650.
 *
 * Validates the size field (must be 0x7c), then appends a series of
 * sprintf()-formatted fragments describing the surface (dimensions, alpha
 * buffer, backbuffer, pitch, mipmaps, colorkeys, and a long chain of
 * surface-usage flags). Returns the buffer pointer.
 *
 * sprintf is reached via the IAT slot at 0x0076b420 (ESI). Each append
 * computes the current end of the buffer with repne scasb, then calls
 * sprintf(end, fmt, ...).
 *
 * __stdcall, RET 4 (1 param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_8b9650;      /* DAT_008b9650 - output buffer */
extern void *g_76b420;              /* IAT sprintf */

extern void *__cdecl FUN_00751100(void *a);

__declspec(naked) void *__stdcall FUN_00751810(void *param_1)
{
    __asm {
        push    ebp
        mov     ebp, dword ptr [esp + 0x8]
        cmp     dword ptr [ebp], 0x7c
        mov     byte ptr [g_8b9650], 0x0
        jz      L_5182b
        mov     eax, 0x7ad50c
        pop     ebp
        ret     0x4
    L_5182b:
        push    ebx
        mov     ebx, dword ptr [ebp + 0x4]
        mov     eax, ebx
        push    esi
        mov     esi, dword ptr [g_76b420]
        and     eax, 0x6
        cmp     al, 0x6
        push    edi
        jnz     L_51868
        mov     ecx, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [ebp + 0xc]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        push    edx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7a3f18
        push    ecx
        call    esi
        add     esp, 0x10
    L_51868:
        test    bh, 0x10
        jz      L_51897
        lea     eax, [ebp + 0x48]
        push    eax
        call    FUN_00751100
        push    eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x76c690
        push    ecx
        call    esi
        add     esp, 0xc
    L_51897:
        mov     ebx, dword ptr [ebp + 0x4]
        test    bl, 0x80
        jz      L_518d3
        mov     ecx, dword ptr [ebp + 0x1c]
        cmp     ecx, 0x1
        mov     eax, 0x76b768
        jz      L_518b1
        mov     eax, 0x78ce88
    L_518b1:
        push    eax
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad4f4
        push    ecx
        call    esi
        add     esp, 0x10
    L_518d3:
        test    bl, 0x20
        jz      L_5190c
        mov     ecx, dword ptr [ebp + 0x14]
        cmp     ecx, 0x1
        mov     eax, 0x76b768
        jz      L_518ea
        mov     eax, 0x78ce88
    L_518ea:
        push    ecx
        push    eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad4e0
        push    ecx
        call    esi
        add     esp, 0x10
    L_5190c:
        test    bl, 0x8
        jz      L_51935
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad4d4
        push    ecx
        call    esi
        add     esp, 0xc
    L_51935:
        test    ebx, 0x20000
        jz      L_51971
        mov     ecx, dword ptr [ebp + 0x18]
        cmp     ecx, 0x1
        mov     eax, 0x76b768
        jz      L_5194f
        mov     eax, 0x78ce88
    L_5194f:
        push    ecx
        push    eax
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad4c4
        push    ecx
        call    esi
        add     esp, 0x10
    L_51971:
        test    bh, 0x40
        jz      L_51996
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad4b4
        push    ecx
        call    esi
        add     esp, 0x8
    L_51996:
        test    ebx, 0x10000
        jz      L_519be
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad4a0
        push    ecx
        call    esi
        add     esp, 0x8
    L_519be:
        and     ebx, 0x1
        jz      L_519eb
        mov     eax, dword ptr [ebp + 0x68]
        __emit 0xF6                 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x20
        jz      L_519eb
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad460
        push    ecx
        call    esi
        add     esp, 0x8
    L_519eb:
        test    ebx, ebx
        jz      L_51dc7
        test    byte ptr [ebp + 0x68], 0x8
        jz      L_51a19
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad454
        push    ecx
        call    esi
        add     esp, 0x8
    L_51a19:
        test    ebx, ebx
        jz      L_51dc7
        test    byte ptr [ebp + 0x68], 0x4
        jz      L_51a47
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad448
        push    ecx
        call    esi
        add     esp, 0x8
    L_51a47:
        test    ebx, ebx
        jz      L_51dc7
        test    byte ptr [ebp + 0x68], 0x20
        jz      L_51a75
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad438
        push    ecx
        call    esi
        add     esp, 0x8
    L_51a75:
        test    ebx, ebx
        jz      L_51dc7
        test    dword ptr [ebp + 0x68], 0x100000
        jz      L_51aa6
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad42c
        push    ecx
        call    esi
        add     esp, 0x8
    L_51aa6:
        test    ebx, ebx
        jz      L_51dc7
        test    dword ptr [ebp + 0x68], 0x80000
        jz      L_51ad7
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad420
        push    ecx
        call    esi
        add     esp, 0x8
    L_51ad7:
        test    ebx, ebx
        jz      L_51dc7
        test    dword ptr [ebp + 0x68], 0x400000
        jz      L_51b08
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad418
        push    ecx
        call    esi
        add     esp, 0x8
    L_51b08:
        test    ebx, ebx
        jz      L_51dc7
        test    dword ptr [ebp + 0x68], 0x10000
        jz      L_51b39
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad40c
        push    ecx
        call    esi
        add     esp, 0x8
    L_51b39:
        test    ebx, ebx
        jz      L_51dc7
        test    byte ptr [ebp + 0x68], 0x10
        jz      L_51b67
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad400
        push    ecx
        call    esi
        add     esp, 0x8
    L_51b67:
        test    ebx, ebx
        jz      L_51dc7
        test    dword ptr [ebp + 0x68], 0x10000000
        jz      L_51b98
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad3ec
        push    ecx
        call    esi
        add     esp, 0x8
    L_51b98:
        test    ebx, ebx
        jz      L_51dc7
        test    dword ptr [ebp + 0x68], 0x20000000
        jz      L_51bc9
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad3d4
        push    ecx
        call    esi
        add     esp, 0x8
    L_51bc9:
        test    ebx, ebx
        jz      L_51dc7
        mov     eax, dword ptr [ebp + 0x68]
        __emit 0xF6                 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x40
        jz      L_51bf9
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad3c4
        push    ecx
        call    esi
        add     esp, 0x8
    L_51bf9:
        test    ebx, ebx
        jz      L_51dc7
        mov     eax, dword ptr [ebp + 0x68]
        __emit 0xF6                 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x08
        jz      L_51c29
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad3b4
        push    ecx
        call    esi
        add     esp, 0x8
    L_51c29:
        test    ebx, ebx
        jz      L_51dc7
        test    dword ptr [ebp + 0x68], 0x4000000
        jz      L_51c5a
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad3a4
        push    ecx
        call    esi
        add     esp, 0x8
    L_51c5a:
        test    ebx, ebx
        jz      L_51dc7
        mov     eax, dword ptr [ebp + 0x68]
        __emit 0xF6                 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x02
        jz      L_51c8a
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad398
        push    ecx
        call    esi
        add     esp, 0x8
    L_51c8a:
        test    ebx, ebx
        jz      L_51dc7
        mov     eax, dword ptr [ebp + 0x68]
        __emit 0xF6                 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x10
        jz      L_51cba
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad38c
        push    ecx
        call    esi
        add     esp, 0x8
    L_51cba:
        test    ebx, ebx
        jz      L_51dc7
        test    byte ptr [ebp + 0x68], 0x40
        jz      L_51ce8
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad37c
        push    ecx
        call    esi
        add     esp, 0x8
    L_51ce8:
        test    ebx, ebx
        jz      L_51dc7
        mov     eax, dword ptr [ebp + 0x6c]
        __emit 0xF6                 /* __emit: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_51d18
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad490
        push    ecx
        call    esi
        add     esp, 0x8
    L_51d18:
        test    ebx, ebx
        jz      L_51dc7
        test    byte ptr [ebp + 0x6c], 0x4
        jz      L_51d46
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad484
        push    ecx
        call    esi
        add     esp, 0x8
    L_51d46:
        test    ebx, ebx
        jz      L_51dc7
        test    byte ptr [ebp + 0x6c], 0x8
        jz      L_51d70
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad47c
        push    ecx
        call    esi
        add     esp, 0x8
    L_51d70:
        test    ebx, ebx
        jz      L_51dc7
        test    dword ptr [ebp + 0x6c], 0x10000
        jz      L_51d9d
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad46c
        push    ecx
        call    esi
        add     esp, 0x8
    L_51d9d:
        test    ebx, ebx
        jz      L_51dc7
        test    byte ptr [ebp + 0x6c], 0x80
        jz      L_51dc7
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x8b9650
        repne   scasb
        not     ecx
        dec     ecx
        add     ecx, 0x8b9650
        push    0x7ad464
        push    ecx
        call    esi
        add     esp, 0x8
    L_51dc7:
        pop     edi
        pop     esi
        pop     ebx
        mov     eax, 0x8b9650
        pop     ebp
        ret     0x4
    }
}
