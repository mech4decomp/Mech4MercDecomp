/*
 * FUN_0070abe0 (1348 B) — __cdecl. gosScript full display-mode setup:
 * saves window placement, picks a resolution, sets window style, tries a
 * sequence of mode changes via FUN_00735150, falls back to 0x280x0x1e0,
 * and on total failure enumerates windows / asserts. Ends by focusing the
 * window, clipping the cursor, and calling FUN_0070c540.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_00858954;             /* DAT_00858954 (byte) */
extern char g_0085a0c4;             /* DAT_0085a0c4 (byte) */
extern int  g_00858bf8;             /* DAT_00858bf8 (hwnd) */
extern int  g_0085a098;             /* DAT_0085a098 (WINDOWPLACEMENT) */
extern char g_0085a208;             /* DAT_0085a208 (byte) */
extern int  g_00858ab0;             /* DAT_00858ab0 */
extern int  g_0085894c;             /* DAT_0085894c */
extern int  g_0085a22c;             /* DAT_0085a22c */
extern int  g_0085a230;             /* DAT_0085a230 */
extern int  g_008aaec8;             /* DAT_008aaec8 */
extern char g_00858956;             /* DAT_00858956 (byte) */
extern int  g_008aaecc;             /* DAT_008aaecc */
extern int  g_00858948;             /* DAT_00858948 */
extern int  g_007b73dc;             /* DAT_007b73dc */
extern char g_0085a1de;             /* DAT_0085a1de (byte) */
extern char g_00858958;             /* DAT_00858958 (byte) */
extern int  g_00858940;             /* DAT_00858940 */
extern int  g_0085a0d4;             /* DAT_0085a0d4 */
extern int  g_00858944;             /* DAT_00858944 */
extern int  g_0085a0d0;             /* DAT_0085a0d0 */
extern int  g_008aaed4;             /* DAT_008aaed4 */
extern int  g_00858950;             /* DAT_00858950 */
extern int  g_008aaedc;             /* DAT_008aaedc */
extern int  g_008aaed8;             /* DAT_008aaed8 */
extern int  g_0085a1e0;             /* DAT_0085a1e0 */
extern int  g_008aaee0;             /* DAT_008aaee0 */
extern char g_00858957;             /* DAT_00858957 (byte) */
extern int  g_008abe50;             /* DAT_008abe50 */
extern int  g_0085a1ec;             /* DAT_0085a1ec */
extern int  g_0085a1e8;             /* DAT_0085a1e8 */
extern int  g_0085a1f0;             /* DAT_0085a1f0 */
extern char g_0087dd0a;             /* DAT_0087dd0a (byte) */
extern char g_0085895a;             /* DAT_0085895a (byte) */
extern int  g_00859ba4;             /* DAT_00859ba4 */
extern int  g_00896c88;             /* DAT_00896c88 */

extern char g_8abe60[];             /* DAT_008abe60 (mode table) */
extern char g_8acb30[];             /* DAT_008acb30 (mode-used flags) */
extern unsigned short g_8ac788[];   /* DAT_008ac788 (16-bit refresh table) */
extern unsigned short g_8ac7e8[];   /* DAT_008ac7e8 (32-bit refresh table) */

extern void __cdecl FUN_007333e0(void);
extern void __cdecl FUN_0073a250(void);
extern void __cdecl FUN_0070b430(void);
extern void __cdecl FUN_00740dc0(void);
extern void __cdecl FUN_00734e70(void);
extern void __cdecl FUN_00735280(void);
extern int  __cdecl FUN_00735150(void);
extern void __cdecl FUN_0070a920(void);
extern void __cdecl FUN_0072d830(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_0070c540(void);
extern void __cdecl FUN_0073a2e0(void);
extern void __cdecl FUN_007333b0(void);

extern int (*g_0076b4e4)(void);     /* IAT: GetWindowPlacement */
extern int (*g_0076b48c)(void);     /* IAT: SetWindowLongA */
extern int (*g_0076b490)(void);     /* IAT: EnumWindows */
extern int (*g_0076b494)(void);     /* IAT: SetFocus */
extern int (*g_0076b56c)(void);     /* IAT: GetWindowRect */
extern int (*g_0076b498)(void);     /* IAT: ClipCursor */

__declspec(naked) void FUN_0070abe0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        call    FUN_007333e0
        call    FUN_0073a250
        mov     al, byte ptr [g_00858954]
        test    al, al
        jnz     LAC14
        mov     eax, dword ptr [g_00858bf8]
        push    0x85a098
        push    eax
        mov     dword ptr [g_0085a098], 0x2c
        call    dword ptr [g_0076b4e4]
LAC14:
        push    esi
        xor     esi, esi
        mov     byte ptr [g_0085a208], 0x1
        mov     dword ptr [g_00858ab0], esi
        call    FUN_0070b430
        mov     eax, dword ptr [g_0085894c]
        cmp     eax, esi
        mov     byte ptr [g_00858954], 0x1
        mov     byte ptr [g_0085a0c4], 0x1
        jnz     LAC52
        mov     eax, dword ptr [g_0085a22c]
        push    eax
        mov     dword ptr [g_0085a230], eax
        call    FUN_00740dc0
        jmp     LAC77
LAC52:
        mov     ecx, eax
        shl     ecx, 0x4
        add     ecx, eax
        push    esi
        lea     eax, [eax + ecx*8]
        push    0x7a2d10
        lea     edx, [eax + eax*2]
        push    0x85a230
        lea     eax, [edx*8 + g_8abe60]
        push    eax
        call    FUN_00734e70
LAC77:
        mov     ecx, dword ptr [g_008aaec8]
        mov     eax, dword ptr [g_008aaecc]
        cmp     ecx, esi
        setnz   cl
        cmp     eax, esi
        mov     byte ptr [g_00858956], cl
        jz      LAC9B
        mov     dword ptr [g_00858948], 0x20
LAC9B:
        mov     eax, dword ptr [g_007b73dc]
        cmp     eax, esi
        mov     dl, byte ptr [g_0085a1de]
        mov     byte ptr [g_00858958], dl
        jz      LAD62
        mov     ecx, 0x400
        cmp     eax, ecx
        ja      LAD0D
        jz      LACFA
        mov     ecx, 0x200
        cmp     eax, ecx
        jz      LACE7
        mov     ecx, 0x320
        cmp     eax, ecx
        jnz     LAD1F
        mov     dword ptr [g_00858940], ecx
        mov     dword ptr [g_0085a0d4], ecx
        mov     eax, 0x258
        jmp     LAD76
LACE7:
        mov     dword ptr [g_00858940], ecx
        mov     dword ptr [g_0085a0d4], ecx
        mov     eax, 0x180
        jmp     LAD76
LACFA:
        mov     dword ptr [g_00858940], ecx
        mov     dword ptr [g_0085a0d4], ecx
        mov     eax, 0x300
        jmp     LAD76
LAD0D:
        mov     edx, 0x500
        cmp     eax, edx
        jz      LAD48
        mov     ecx, 0x640
        cmp     eax, ecx
        jz      LAD35
LAD1F:
        mov     eax, 0x280
        mov     dword ptr [g_00858940], eax
        mov     dword ptr [g_0085a0d4], eax
        mov     eax, 0x1e0
        jmp     LAD76
LAD35:
        mov     dword ptr [g_00858940], ecx
        mov     dword ptr [g_0085a0d4], ecx
        mov     eax, 0x4b0
        jmp     LAD76
LAD48:
        mov     dword ptr [g_00858940], edx
        mov     dword ptr [g_0085a0d4], edx
        mov     dword ptr [g_00858944], ecx
        mov     dword ptr [g_0085a0d0], ecx
        jmp     LAD80
LAD62:
        mov     eax, dword ptr [g_0085a1ec]
        mov     dword ptr [g_00858940], eax
        mov     dword ptr [g_0085a0d4], eax
        mov     eax, dword ptr [g_0085a1e8]
LAD76:
        mov     dword ptr [g_00858944], eax
        mov     dword ptr [g_0085a0d0], eax
LAD80:
        cmp     dword ptr [g_008aaed4], esi
        jz      LAD8F
        mov     eax, 0x3
        jmp     LADAD
LAD8F:
        cmp     dword ptr [g_008aaedc], esi
        jz      LAD9B
        xor     eax, eax
        jmp     LADAD
LAD9B:
        cmp     dword ptr [g_008aaed8], esi
        mov     eax, 0x1
        jnz     LADAD
        mov     eax, dword ptr [g_0085a1e0]
LADAD:
        cmp     dword ptr [g_008aaee0], esi
        setnz   cl
        cmp     eax, 0x3
        mov     dword ptr [g_00858950], eax
        mov     byte ptr [g_00858957], cl
        jge     LADCE
        cmp     dword ptr [g_008abe50], esi
        jnz     LADD8
LADCE:
        mov     dword ptr [g_00858948], 0x10
LADD8:
        mov     edx, dword ptr [g_00858bf8]
        push    0x90080000
        push    -0x10
        push    edx
        call    dword ptr [g_0076b48c]
        mov     eax, dword ptr [g_00858bf8]
        mov     ecx, dword ptr [g_0085a230]
        push    0x11
        push    eax
        push    ecx
        call    FUN_00735280
        mov     eax, dword ptr [g_0085894c]
        mov     edx, eax
        shl     edx, 0x4
        add     edx, eax
        lea     eax, [eax + edx*8]
        lea     eax, [eax + eax*2]
        mov     cl, byte ptr [eax*8 + g_8acb30]
        test    cl, cl
        jz      LAE4C
        mov     ecx, dword ptr [g_00858948]
        mov     edx, dword ptr [g_00858944]
        mov     eax, dword ptr [g_00858940]
        push    esi
        push    esi
        push    ecx
        mov     ecx, dword ptr [g_0085a230]
        push    edx
        push    eax
        mov     dword ptr [g_0085a1f0], esi
        mov     byte ptr [g_0087dd0a], 0x1
        push    ecx
        jmp     LAFB6
LAE4C:
        mov     al, byte ptr [g_0085895a]
        test    al, al
        jz      LAF31
        push    ebx
        mov     ebx, dword ptr [g_00858948]
        cmp     ebx, 0x10
        push    edi
        jnz     LAEB4
        mov     esi, dword ptr [g_00858944]
        mov     edi, dword ptr [g_00858940]
        xor     eax, eax
        mov     ecx, 0x8ac74a
LAE79:
        xor     edx, edx
        mov     dx, word ptr [ecx - 2]
        cmp     edx, edi
        jnz     LAE8C
        xor     edx, edx
        mov     dx, word ptr [ecx]
        cmp     edx, esi
        jz      LAEA1
LAE8C:
        add     ecx, 0x4
        add     eax, 0x2
        cmp     ecx, 0x8ac78a
        jl      LAE79
        mov     eax, dword ptr [g_0085a1f0]
        jmp     LAF05
LAEA1:
        cdq
        sub     eax, edx
        mov     ecx, eax
        sar     ecx, 0x1
        xor     eax, eax
        mov     ax, word ptr [ecx*2 + g_8ac788]
        jmp     LAF00
LAEB4:
        mov     esi, dword ptr [g_00858944]
        mov     edi, dword ptr [g_00858940]
        xor     eax, eax
        mov     ecx, 0x8ac7aa
LAEC7:
        xor     edx, edx
        mov     dx, word ptr [ecx - 2]
        cmp     edx, edi
        jnz     LAEDA
        xor     edx, edx
        mov     dx, word ptr [ecx]
        cmp     edx, esi
        jz      LAEEF
LAEDA:
        add     ecx, 0x4
        add     eax, 0x2
        cmp     ecx, 0x8ac7ea
        jl      LAEC7
        mov     eax, dword ptr [g_0085a1f0]
        jmp     LAF05
LAEEF:
        cdq
        sub     eax, edx
        mov     ecx, eax
        sar     ecx, 0x1
        xor     eax, eax
        mov     ax, word ptr [ecx*2 + g_8ac7e8]
LAF00:
        mov     dword ptr [g_0085a1f0], eax
LAF05:
        mov     edx, dword ptr [g_0085a230]
        push    0x0
        push    eax
        push    ebx
        push    esi
        push    edi
        push    edx
        mov     byte ptr [g_0087dd0a], 0x1
        call    FUN_00735150
        test    eax, eax
        pop     edi
        mov     byte ptr [g_0087dd0a], 0x0
        pop     ebx
        jge     LB0C7
        xor     esi, esi
LAF31:
        mov     eax, dword ptr [g_00858948]
        mov     ecx, dword ptr [g_00858944]
        mov     edx, dword ptr [g_00858940]
        push    esi
        push    0x3c
        push    eax
        mov     eax, dword ptr [g_0085a230]
        push    ecx
        push    edx
        push    eax
        mov     dword ptr [g_0085a1f0], 0x3c
        mov     byte ptr [g_0087dd0a], 0x1
        call    FUN_00735150
        cmp     eax, esi
        mov     byte ptr [g_0087dd0a], 0x0
        jge     LB0C7
        mov     eax, dword ptr [g_0085894c]
        mov     ecx, eax
        shl     ecx, 0x4
        add     ecx, eax
        lea     eax, [eax + ecx*8]
        mov     ecx, dword ptr [g_00858944]
        push    esi
        lea     edx, [eax + eax*2]
        mov     eax, dword ptr [g_00858948]
        push    esi
        push    eax
        mov     eax, dword ptr [g_0085a230]
        mov     byte ptr [edx*8 + g_8acb30], 0x1
        mov     edx, dword ptr [g_00858940]
        push    ecx
        push    edx
        mov     dword ptr [g_0085a1f0], esi
        mov     byte ptr [g_0087dd0a], 0x1
        push    eax
LAFB6:
        call    FUN_00735150
        cmp     eax, esi
        mov     byte ptr [g_0087dd0a], 0x0
        jge     LB0C7
        mov     edx, dword ptr [g_00858948]
        push    esi
        push    esi
        mov     ecx, 0x1e0
        push    edx
        mov     eax, 0x280
        push    ecx
        push    eax
        mov     dword ptr [g_00858940], eax
        mov     dword ptr [g_0085a0d4], eax
        mov     eax, dword ptr [g_0085a230]
        push    eax
        mov     dword ptr [g_00858944], ecx
        mov     dword ptr [g_0085a0d0], ecx
        mov     byte ptr [g_0087dd0a], 0x1
        call    FUN_00735150
        mov     ecx, dword ptr [g_00858944]
        mov     edx, dword ptr [g_00858940]
        mov     eax, dword ptr [g_0085a230]
        push    esi
        push    esi
        push    0x10
        push    ecx
        push    edx
        push    eax
        mov     dword ptr [g_00858948], 0x10
        mov     byte ptr [g_0087dd0a], 0x1
        call    FUN_00735150
        cmp     eax, esi
        mov     byte ptr [g_0087dd0a], 0x0
        jge     LB0C7
        push    esi
        push    0x70ab60
        mov     dword ptr [g_00859ba4], esi
        call    dword ptr [g_0076b490]
        mov     byte ptr [g_00858954], 0x1
        mov     byte ptr [g_0085a208], 0x0
        mov     dword ptr [g_00858ab0], 0x1
        call    FUN_0070a920
        cmp     dword ptr [g_00859ba4], esi
        jz      LB0A3
        mov     ecx, dword ptr [g_00896c88]
        push    0x2721
        push    ecx
        call    FUN_0072d830
        push    eax
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      LB129
        int     3
        /* dead-code epilogue tail after assert trap (hidden by linear disasm) */
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
LB0A3:
        mov     edx, dword ptr [g_00896c88]
        push    0x2722
        push    edx
        call    FUN_0072d830
        push    eax
        call    FUN_006fabf0
        add     esp, 0x4
        test    eax, eax
        jz      LB129
        int     3
        /* dead-code epilogue tail after assert trap (hidden by linear disasm) */
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
LB0C7:
        mov     byte ptr [g_0085a208], 0x0
        call    FUN_0070c540
        mov     eax, dword ptr [g_00858bf8]
        push    eax
        mov     dword ptr [g_00858ab0], 0x1
        call    dword ptr [g_0076b494]
        mov     edx, dword ptr [g_00858bf8]
        lea     ecx, [ebp - 0x10]
        push    ecx
        push    edx
        call    dword ptr [g_0076b56c]
        mov     eax, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [g_00858940]
        mov     edx, dword ptr [ebp - 0xc]
        add     ecx, eax
        mov     eax, dword ptr [g_00858944]
        mov     dword ptr [ebp - 0x8], ecx
        lea     ecx, [ebp - 0x10]
        add     eax, edx
        push    ecx
        mov     dword ptr [ebp - 0x4], eax
        call    dword ptr [g_0076b498]
        call    FUN_0073a2e0
        call    FUN_007333b0
LB129:
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
