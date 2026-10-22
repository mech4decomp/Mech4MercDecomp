/*
 * FUN_0051B050 (627 B) — a run of 8 small __cdecl (ret 0xc) accessor/helper
 * functions in one in-.text data block (block 0x51AA7D). All share the
 * obfuscated pointer pattern: read [DAT_007dab44], xor with [DAT_007dab40],
 * deref +0x44, xor 0x85739531. Functions:
 *   0x0051B050  accessor returning [..+0x24]->[+0x18]
 *   0x0051B090  string-copy helper (FUN_006f4230 / FUN_006f3c80 / FUN_004084e0)
 *   0x0051B120  accessor returning [..+0x1c]->[+0x1c] (or DAT_007dd268 path)
 *   0x0051B170  accessor returning [..+0x1c]->[+0x24]
 *   0x0051B1B0  accessor returning [..+0x1c]->[+0x28]
 *   0x0051B1F0  accessor returning [..+0x1c]->[+0x2c]
 *   0x0051B230  accessor returning [..+0x1c]->[+0x30]
 *   0x0051B270  indexed accessor returning [..+0x1c][eax*4+0x34]/[+0x40]
 *
 * __cdecl, ret 0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_7dab44;   /* 0x007dab44 */
extern void *g_7dab40;   /* 0x007dab40 */
extern void *g_7dd268;   /* 0x007dd268 */

extern void __cdecl FUN_006f4230(void *p);
extern void *__cdecl FUN_006f3c80(void *a, void *b);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_0051B050(void)
{
    __asm {
        /* ---- function 1 @ 0x0051B050 ---- */
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        lea     ecx, [edx + 0x44]
        mov     edx, dword ptr [ecx]
        xor     eax, eax
        xor     edx, 0x85739531
        je      L1_51b08b
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        push    esi
        mov     esi, dword ptr [edx + 0x24]
        test    esi, esi
        pop     esi
        je      L1_51b08b
        mov     eax, dword ptr [ecx]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x24]
        mov     eax, dword ptr [ecx + 0x18]
L1_51b08b:
        ret     0xc
        nop
        nop

        /* ---- function 2 @ 0x0051B090 ---- */
        mov     eax, dword ptr [esp + 0xc]
        push    ebx
        push    esi
        mov     esi, dword ptr [eax]
        mov     eax, dword ptr [esi]
        test    eax, eax
        push    edi
        je      L2_51b0a5
        push    eax
        call    FUN_006f4230
L2_51b0a5:
        push    0
        push    0xff
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        mov     ebx, eax
        mov     dword ptr [esi], ebx
        xor     edx, dword ptr [g_7dab40]
        mov     eax, dword ptr [edx + 0x44]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x1c]
        mov     edx, dword ptr [eax + 0x14]
        test    edx, edx
        je      L2_51b0d8
        inc     byte ptr [edx - 1]
L2_51b0d8:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 2
        mov     edi, ebx
        rep movsd
        mov     ecx, eax
        and     ecx, 3
        test    edx, edx
        rep movsb
        pop     edi
        pop     esi
        pop     ebx
        je      L2_51b113
        mov     cl, byte ptr [edx - 1]
        lea     eax, [edx - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jne     L2_51b113
        push    eax
        call    FUN_004084e0
        add     esp, 4
L2_51b113:
        mov     eax, 1
        ret     0xc
        nop
        nop
        nop
        nop
        nop

        /* ---- function 3 @ 0x0051B120 ---- */
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        lea     ecx, [edx + 0x44]
        mov     edx, dword ptr [ecx]
        xor     eax, eax
        xor     edx, 0x85739531
        je      L3_51b15e
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        push    esi
        mov     esi, dword ptr [edx + 0x1c]
        test    esi, esi
        pop     esi
        je      L3_51b16d
        mov     eax, dword ptr [ecx]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x1c]
        mov     eax, dword ptr [ecx + 0x1c]
        ret     0xc
L3_51b15e:
        mov     edx, dword ptr [g_7dd268]
        mov     eax, dword ptr [edx + 0x40ee8]
        mov     eax, dword ptr [eax + 0x70]
L3_51b16d:
        ret     0xc

        /* ---- function 4 @ 0x0051B170 ---- */
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        lea     ecx, [edx + 0x44]
        mov     edx, dword ptr [ecx]
        xor     eax, eax
        xor     edx, 0x85739531
        je      L4_51b1ab
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        push    esi
        mov     esi, dword ptr [edx + 0x1c]
        test    esi, esi
        pop     esi
        je      L4_51b1ab
        mov     eax, dword ptr [ecx]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x1c]
        mov     eax, dword ptr [ecx + 0x24]
L4_51b1ab:
        ret     0xc
        nop
        nop

        /* ---- function 5 @ 0x0051B1B0 ---- */
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        lea     ecx, [edx + 0x44]
        mov     edx, dword ptr [ecx]
        xor     eax, eax
        xor     edx, 0x85739531
        je      L5_51b1eb
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        push    esi
        mov     esi, dword ptr [edx + 0x1c]
        test    esi, esi
        pop     esi
        je      L5_51b1eb
        mov     eax, dword ptr [ecx]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x1c]
        mov     eax, dword ptr [ecx + 0x28]
L5_51b1eb:
        ret     0xc
        nop
        nop

        /* ---- function 6 @ 0x0051B1F0 ---- */
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        lea     ecx, [edx + 0x44]
        mov     edx, dword ptr [ecx]
        xor     eax, eax
        xor     edx, 0x85739531
        je      L6_51b22b
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        push    esi
        mov     esi, dword ptr [edx + 0x1c]
        test    esi, esi
        pop     esi
        je      L6_51b22b
        mov     eax, dword ptr [ecx]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x1c]
        mov     eax, dword ptr [ecx + 0x2c]
L6_51b22b:
        ret     0xc
        nop
        nop

        /* ---- function 7 @ 0x0051B230 ---- */
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_7dab40]
        lea     ecx, [edx + 0x44]
        mov     edx, dword ptr [ecx]
        xor     eax, eax
        xor     edx, 0x85739531
        je      L7_51b26b
        mov     edx, dword ptr [ecx]
        xor     edx, 0x85739531
        push    esi
        mov     esi, dword ptr [edx + 0x1c]
        test    esi, esi
        pop     esi
        je      L7_51b26b
        mov     eax, dword ptr [ecx]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax + 0x1c]
        mov     eax, dword ptr [ecx + 0x30]
L7_51b26b:
        ret     0xc
        nop
        nop

        /* ---- function 8 @ 0x0051B270 ---- */
        mov     edx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [edx]
        mov     eax, dword ptr [eax]
        cmp     eax, 3
        jle     L8_51b282
        xor     eax, eax
        ret     0xc
L8_51b282:
        test    eax, eax
        jge     L8_51b28b
        xor     eax, eax
        ret     0xc
L8_51b28b:
        mov     ecx, dword ptr [g_7dab44]
        mov     ecx, dword ptr [ecx]
        push    esi
        mov     esi, dword ptr [edx + 4]
        mov     edx, dword ptr [edx + 8]
        push    edi
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0x44]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx + 0x1c]
        mov     edi, dword ptr [ecx + eax*4 + 0x34]
        mov     eax, dword ptr [ecx + eax*4 + 0x40]
        mov     dword ptr [esi], edi
        pop     edi
        mov     dword ptr [edx], eax
        mov     eax, 1
        pop     esi
        ret     0xc
    }
}
