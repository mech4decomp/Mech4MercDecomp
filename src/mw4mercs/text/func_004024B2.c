/*
 * FUN_004024B2 (417 B) — __stdcall, RET 0xC (3 params). The first 37
 * bytes (0x004024B2..0x004024D6) are raw in-.text data (not real code;
 * capstone mis-disassembles them as garbage). The real function starts
 * at 0x004024D7: it walks a chain of string keys (0x76b8xx) via an IAT
 * fn (0x76b2ac), returning the matching byte/dword from a config table
 * (0x7b7bxx / 0x7b7cxx), or -1 if none match.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b2ac;   /* IAT fn ptr 0x0076b2ac */

extern char g_76b8d4;    /* .rdata string 0x0076b8d4 */
extern char g_76b8c8;    /* .rdata string 0x0076b8c8 */
extern char g_76b8bc;    /* .rdata string 0x0076b8bc */
extern char g_76b8b4;    /* .rdata string 0x0076b8b4 */
extern char g_76b8a8;    /* .rdata string 0x0076b8a8 */
extern char g_76b89c;    /* .rdata string 0x0076b89c */
extern char g_76b890;    /* .rdata string 0x0076b890 */
extern char g_76b884;    /* .rdata string 0x0076b884 */
extern char g_76b878;    /* .rdata string 0x0076b878 */
extern char g_76b86c;    /* .rdata string 0x0076b86c */
extern char g_76b864;    /* .rdata string 0x0076b864 */
extern char g_76b858;    /* .rdata string 0x0076b858 */

extern int g_7b7b70;     /* DAT_007b7b70 */
extern char g_7b7b71;    /* DAT_007b7b71 */
extern char g_7b7b72;    /* DAT_007b7b72 */
extern char g_7b7b73;    /* DAT_007b7b73 */
extern int g_7b7b74;     /* DAT_007b7b74 */
extern char g_7b7b75;    /* DAT_007b7b75 */
extern int g_7b7c60;     /* DAT_007b7c60 */
extern char g_7b7c62;    /* DAT_007b7c62 */
extern char g_7b7c61;    /* DAT_007b7c61 */
extern int g_7b7c64;     /* DAT_007b7c64 */
extern int g_7b7b78;     /* DAT_007b7b78 */
extern char g_7b7b7c;    /* DAT_007b7b7c (string buffer) */
extern int g_7b7e64;     /* DAT_007b7e64 */

__declspec(naked) void __stdcall FUN_004024B2(void)
{
    __asm {
        /* ---- 37 raw data bytes (0x004024B2..0x004024D6) ---- */
        __emit 0x8B   /* __emit: raw in-.text data, not real code */
        __emit 0xFF   /* __emit: raw in-.text data, not real code */
        __emit 0x06   /* __emit: raw in-.text data, not real code */
        __emit 0x24   /* __emit: raw in-.text data, not real code */
        __emit 0x40   /* __emit: raw in-.text data, not real code */
        __emit 0x00   /* __emit: raw in-.text data, not real code */
        __emit 0x1C   /* __emit: raw in-.text data, not real code */
        __emit 0x24   /* __emit: raw in-.text data, not real code */
        __emit 0x40   /* __emit: raw in-.text data, not real code */
        __emit 0x00   /* __emit: raw in-.text data, not real code */
        __emit 0x35   /* __emit: raw in-.text data, not real code */
        __emit 0x24   /* __emit: raw in-.text data, not real code */
        __emit 0x40   /* __emit: raw in-.text data, not real code */
        __emit 0x00   /* __emit: raw in-.text data, not real code */
        __emit 0x4E   /* __emit: raw in-.text data, not real code */
        __emit 0x24   /* __emit: raw in-.text data, not real code */
        __emit 0x40   /* __emit: raw in-.text data, not real code */
        __emit 0x00   /* __emit: raw in-.text data, not real code */
        __emit 0x67   /* __emit: raw in-.text data, not real code */
        __emit 0x24   /* __emit: raw in-.text data, not real code */
        __emit 0x40   /* __emit: raw in-.text data, not real code */
        __emit 0x00   /* __emit: raw in-.text data, not real code */
        __emit 0x80   /* __emit: raw in-.text data, not real code */
        __emit 0x24   /* __emit: raw in-.text data, not real code */
        __emit 0x40   /* __emit: raw in-.text data, not real code */
        __emit 0x00   /* __emit: raw in-.text data, not real code */
        __emit 0x99   /* __emit: raw in-.text data, not real code */
        __emit 0x24   /* __emit: raw in-.text data, not real code */
        __emit 0x40   /* __emit: raw in-.text data, not real code */
        __emit 0x00   /* __emit: raw in-.text data, not real code */
        __emit 0x83   /* __emit: raw in-.text data, not real code */
        __emit 0x7C   /* __emit: raw in-.text data, not real code */
        __emit 0x24   /* __emit: raw in-.text data, not real code */
        __emit 0x08   /* __emit: raw in-.text data, not real code */
        __emit 0x01   /* __emit: raw in-.text data, not real code */
        __emit 0x56   /* __emit: raw in-.text data, not real code */
        __emit 0x57   /* __emit: raw in-.text data, not real code */
        /* ---- real function starts at 0x004024D7 ---- */
        jne     L_64b
        mov     eax, dword ptr [esp + 0x14]
        mov     esi, dword ptr [eax]
        test    esi, esi
        je      L_64b
        mov     edi, dword ptr [g_76b2ac]
        push    offset g_76b8d4
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     L_50f
        mov     eax, dword ptr [g_7b7b70]
        pop     edi
        and     eax, 0xff
        pop     esi
        ret     0xc
L_50f:
        push    offset g_76b8c8
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     L_528
        mov     al, byte ptr [g_7b7b71]
        pop     edi
        pop     esi
        ret     0xc
L_528:
        push    offset g_76b8bc
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     L_541
        mov     al, byte ptr [g_7b7b72]
        pop     edi
        pop     esi
        ret     0xc
L_541:
        push    offset g_76b8b4
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     L_55a
        mov     al, byte ptr [g_7b7b73]
        pop     edi
        pop     esi
        ret     0xc
L_55a:
        push    offset g_76b8a8
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     L_578
        mov     eax, dword ptr [g_7b7b74]
        pop     edi
        and     eax, 0xff
        pop     esi
        ret     0xc
L_578:
        push    offset g_76b89c
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     L_591
        mov     al, byte ptr [g_7b7b75]
        pop     edi
        pop     esi
        ret     0xc
L_591:
        push    offset g_76b890
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     L_5af
        mov     eax, dword ptr [g_7b7c60]
        pop     edi
        and     eax, 0xff
        pop     esi
        ret     0xc
L_5af:
        push    offset g_76b884
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     L_5c8
        mov     al, byte ptr [g_7b7c62]
        pop     edi
        pop     esi
        ret     0xc
L_5c8:
        push    offset g_76b878
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     L_5e1
        mov     al, byte ptr [g_7b7c61]
        pop     edi
        pop     esi
        ret     0xc
L_5e1:
        push    offset g_76b86c
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     L_5fa
        mov     eax, dword ptr [g_7b7c64]
        pop     edi
        pop     esi
        ret     0xc
L_5fa:
        push    offset g_76b864
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     L_613
        mov     eax, dword ptr [g_7b7b78]
        pop     edi
        pop     esi
        ret     0xc
L_613:
        push    offset g_76b858
        push    esi
        call    edi
        add     esp, 8
        test    eax, eax
        jne     L_64b
        or      ecx, 0xffffffff
        mov     edi, offset g_7b7b7c
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        mov     edi, dword ptr [g_7b7e64]
        shr     ecx, 2
        rep     movsd
        mov     ecx, edx
        and     ecx, 3
        rep     movsb
        pop     edi
        pop     esi
        ret     0xc
L_64b:
        pop     edi
        or      eax, 0xffffffff
        pop     esi
        ret     0xc
    }
}
