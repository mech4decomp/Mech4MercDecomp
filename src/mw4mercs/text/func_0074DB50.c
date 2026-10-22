/*
 * In-.text data block 0x74DA5F (440 B) — two functions + a jump table.
 *
 *   FUN_0074DB50 (RET 4): builds a string in the global buffer 0x8ba394 by
 *     concatenating one or more constant strings (0x7abda4/0x7abd94/
 *     0x7abd88/0x7abd80/0x7abd74/0x7abd68) selected by flag bits in the
 *     param, using strlen-style repne scasb + rep movsd/movsb copies; if the
 *     result is empty, calls the fn ptr at [0x76b420] with 0x7ab7ec.
 *   FUN_0074DCC0 (RET 4): switch on param (0..3) via a jump table at
 *     0x74dcf8 returning one of several constant string addresses.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_8BA394;
extern void *g_76B420;

__declspec(naked) void FUN_0074DB50(void)
{
    __asm {
        /* ---- FUN_0074DB50 ---- */
        mov     edx, dword ptr [esp + 4]
        test    edx, edx
        jne     L74DB60
        mov     eax, 0x76b9a0
        ret     4
L74DB60:
        test    dl, 0x10
        push    ebx
        push    esi
        push    edi
        mov     byte ptr [g_8BA394], 0
        je      L74DB9C
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7abda4
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba394
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L74DB9C:
        test    dl, 8
        je      L74DBCE
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7abd94
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba394
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L74DBCE:
        test    dl, 0x20
        je      L74DC00
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7abd88
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba394
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L74DC00:
        test    dl, 2
        je      L74DC32
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7abd80
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba394
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L74DC32:
        test    dl, 4
        je      L74DC64
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7abd74
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba394
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L74DC64:
        test    dl, 1
        je      L74DC96
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x7abd68
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x8ba394
        repne   scasb
        mov     ecx, ebx
        shr     ecx, 2
        dec     edi
        rep     movsd
        mov     ecx, ebx
        and     ecx, 3
        rep     movsb
L74DC96:
        mov     al, byte ptr [g_8BA394]
        test    al, al
        pop     edi
        pop     esi
        pop     ebx
        jne     L74DCB6
        push    edx
        push    0x7ab7ec
        push    0x8ba394
        call    dword ptr [g_76B420]
        add     esp, 0xc
L74DCB6:
        mov     eax, 0x8ba394
        ret     4

        /* alignment pad */
        nop
        nop

        /* ---- FUN_0074DCC0 ---- */
        mov     eax, dword ptr [esp + 4]
        cmp     eax, 3
        ja      L74DCF0
        __emit  0xFF            /* jmp [eax*4+0x74dcf8]: MSVC6 re-bases via EBX */
        __emit  0x24
        __emit  0x85
        __emit  0xF8
        __emit  0xDC
        __emit  0x74
        __emit  0x00
        mov     eax, 0x77008c
        ret     4
        mov     eax, 0x7abdc0
        ret     4
        mov     eax, 0x7abdbc
        ret     4
        mov     eax, 0x7abdb4
        ret     4
L74DCF0:
        mov     eax, 0x79e7f8
        ret     4

        /* in-.text jump table (4 dword entries -> 0x74dcd0/0x74dcd8/0x74dce0/0x74dce8) */
        __emit  0xD0            /* jumptable[0] = 0x0074DCD0 */
        __emit  0xDC
        __emit  0x74
        __emit  0x00
        __emit  0xD8            /* jumptable[1] = 0x0074DCD8 */
        __emit  0xDC
        __emit  0x74
        __emit  0x00
        __emit  0xE0            /* jumptable[2] = 0x0074DCE0 */
        __emit  0xDC
        __emit  0x74
        __emit  0x00
        __emit  0xE8            /* jumptable[3] = 0x0074DCE8 */
        __emit  0xDC
        __emit  0x74
        __emit  0x00
    }
}
