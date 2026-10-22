/*
 * FUN_0070c540 (1041 B) — __cdecl. gosScript display/device teardown &
 * re-init. Picks a rasterizer mode, builds a gamma table via _CIpow/_ftol,
 * queries device caps through a vtable, releases surfaces, and re-acquires
 * the window DC. Contains FPU compares (fnstsw/test ah) and IAT calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_00858950;             /* DAT_00858950 */
extern int  g_008abe50;             /* DAT_008abe50 */
extern char g_00858954;             /* DAT_00858954 (byte) */
extern int  g_00858ba0;             /* DAT_00858ba0 */
extern char g_00859b9c;             /* DAT_00859b9c (byte) */
extern int  g_007b6fc0;             /* DAT_007b6fc0 */
extern char g_00859afd;             /* DAT_00859afd (byte) */
extern int  g_0087dbf0;             /* DAT_0087dbf0 */
extern int  g_0087dbfc;             /* DAT_0087dbfc */
extern int  g_008abe54;             /* DAT_008abe54 */
extern int  g_0085894c;             /* DAT_0085894c */
extern char g_00858957;             /* DAT_00858957 (byte) */
extern int  g_0085a220;             /* DAT_0085a220 */
extern int  g_008b2520;             /* DAT_008b2520 */
extern int  g_0085a210;             /* DAT_0085a210 */
extern int  g_00859db0;             /* DAT_00859db0 */
extern char g_0087dd0a;             /* DAT_0087dd0a (byte) */
extern float g_007b7010;            /* DAT_007b7010 (float) */
extern char g_0085a26c;             /* DAT_0085a26c (byte) */
extern float g_0085a268;            /* DAT_0085a268 (float) */
extern float g_0076d064;            /* DAT_0076d064 (float) */
extern float g_007a1678;            /* DAT_007a1678 (float) */
extern double g_007a1668;           /* DAT_007a1668 (double) */
extern char g_00859c2c[];           /* DAT_00859c2c (gamma table) */
extern char g_0087c0e2;             /* DAT_0087c0e2 (byte) */
extern int  g_0085a1fc;             /* DAT_0085a1fc */
extern int  g_0085a200;             /* DAT_0085a200 */
extern int  g_0085a224;             /* DAT_0085a224 */
extern int  g_0085a248;             /* DAT_0085a248 */
extern int  g_0085a250;             /* DAT_0085a250 */
extern int  g_0085a244;             /* DAT_0085a244 */
extern int  g_0085a234;             /* DAT_0085a234 */
extern int  g_0085a214;             /* DAT_0085a214 */
extern int  g_0085a228;             /* DAT_0085a228 */
extern char g_0085a1f8;             /* DAT_0085a1f8 (byte) */
extern int  g_0085a204;             /* DAT_0085a204 */
extern char g_0087c5b1;             /* DAT_0087c5b1 (byte) */
extern char g_0085a1dc;             /* DAT_0085a1dc (byte) */
extern char g_00858958;             /* DAT_00858958 (byte) */
extern int  g_00858c00;             /* DAT_00858c00 (hdc) */

extern void __cdecl FUN_0070b6c0(void);
extern void __cdecl FUN_0072fed0(void);
extern void __cdecl FUN_0070c960(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_0070c270(void);
extern void __cdecl FUN_00740d60(void);
extern void __cdecl FUN_00709d40(void);
extern void __cdecl FUN_0075db86(void);   /* _CIpow */
extern void __cdecl FUN_0075db4a(void);   /* _ftol */
extern void __cdecl FUN_00717d80(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_0074b0f0(void);
extern void __cdecl FUN_00735850(void);
extern void __cdecl FUN_007358a0(void);
extern void __cdecl FUN_0074aa20(void);
extern void __cdecl FUN_00742ae0(void);
extern void __cdecl FUN_00723cd0(void);

extern int (*g_0076b488)(void);     /* IAT: ReleaseDC */
extern int (*g_0076b484)(void);     /* IAT: GetDC */

__declspec(naked) void FUN_0070c540(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x30
        mov     eax, dword ptr [g_00858950]
        push    ebx
        xor     ebx, ebx
        cmp     eax, ebx
        push    esi
        jnz     LC583
        cmp     dword ptr [g_008abe50], ebx
        jz      LC583
        mov     cl, byte ptr [g_00858954]
        cmp     cl, bl
        jnz     LC574
        mov     eax, dword ptr [g_00858ba0]
        cmp     eax, 0x10
        jz      LC574
        cmp     eax, 0x20
        jnz     LC583
LC574:
        push    ebx
        push    ecx
        call    FUN_0070b6c0
        cmp     al, bl
        jnz     LC66A
LC583:
        cmp     byte ptr [g_00859b9c], bl
        jnz     LC61F
        mov     eax, dword ptr [g_00858950]
        cmp     eax, ebx
        jnz     LC62D
        cmp     dword ptr [g_007b6fc0], ebx
        jz      LC628
        cmp     dword ptr [g_008abe50], ebx
        jz      LC628
        mov     eax, dword ptr [g_00858ba0]
        cmp     eax, 0x10
        jz      LC5BF
        cmp     eax, 0x20
        jnz     LC628
LC5BF:
        cmp     byte ptr [g_00859afd], bl
        mov     dword ptr [g_0087dbf0], 0x7a1798
        jnz     LC628
        call    FUN_0072fed0
        cmp     dword ptr [g_0087dbfc], -0x1
        jnz     LC5E4
        call    FUN_0070c960
LC5E4:
        cmp     dword ptr [g_0087dbfc], 0x1
        jnz     LC61F
        mov     edx, dword ptr [g_008abe54]
        xor     eax, eax
        cmp     edx, ebx
        jbe     LC618
        mov     ecx, 0x8ac41c
LC5FE:
        test    dword ptr [ecx], 0x80000
        jnz     LC613
        inc     eax
        add     ecx, 0xcd8
        cmp     eax, edx
        jc      LC5FE
        jmp     LC618
LC613:
        mov     dword ptr [g_0085894c], eax
LC618:
        mov     byte ptr [g_00859b9c], 0x1
LC61F:
        mov     eax, dword ptr [g_00858950]
        cmp     eax, ebx
        jnz     LC62D
LC628:
        mov     eax, 0x3
LC62D:
        push    eax
        xor     eax, eax
        mov     al, byte ptr [g_00858954]
        push    eax
        call    FUN_0070b6c0
        cmp     al, bl
        jnz     LC66A
        cmp     byte ptr [g_00858957], bl
        jz      LC66A
        mov     eax, dword ptr [g_00858950]
        cmp     eax, ebx
        mov     byte ptr [g_00858957], bl
        jnz     LC65B
        mov     eax, 0x3
LC65B:
        xor     ecx, ecx
        mov     cl, byte ptr [g_00858954]
        push    eax
        push    ecx
        call    FUN_0070b6c0
LC66A:
        cmp     al, bl
        mov     dword ptr [g_007b6fc0], ebx
        jnz     LC686
        push    0x7a1774
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      LC686
        int     3
LC686:
        call    FUN_0070c270
        test    dword ptr [g_008b2520], 0x1000000
        mov     dword ptr [g_0085a220], ebx
        jnz     LC6F9
        mov     eax, dword ptr [g_0085a210]
        cmp     eax, ebx
        jz      LC6F9
        cmp     byte ptr [g_00858954], bl
        jz      LC6F9
        test    dword ptr [g_00859db0], 0x20000
        jz      LC6F9
        push    0x85a220
        push    0x7a2da0
        push    eax
        mov     byte ptr [g_0087dd0a], 0x1
        call    FUN_00740d60
        cmp     eax, ebx
        mov     byte ptr [g_0087dd0a], bl
        jl      LC6ED
        mov     edx, dword ptr [g_007b7010]
        push    edx
        call    FUN_00709d40
        mov     byte ptr [g_0085a26c], bl
LC6ED:
        cmp     dword ptr [g_0085a220], ebx
        jnz     LC779
LC6F9:
        fld     dword ptr [g_0085a268]
        fcomp   dword ptr [g_007b7010]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0; MSVC6 adds 9B WAIT) */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40 (MSVC6 rejects test ah,imm8) */
        __emit 0xC4
        __emit 0x40
        jnz     LC779
        fld     dword ptr [g_0076d064]
        mov     eax, dword ptr [g_007b7010]
        fdiv    dword ptr [g_007b7010]
        xor     esi, esi
        mov     dword ptr [g_0085a268], eax
        mov     dword ptr [ebp - 0x4], esi
        fstp    dword ptr [ebp - 0x8]
LC72A:
        fild    dword ptr [ebp - 0x4]
        fmul    dword ptr [g_007a1678]
        fld     dword ptr [ebp - 0x8]
        call    FUN_0075db86
        fmul    qword ptr [g_007a1668]
        call    FUN_0075db4a
        mov     byte ptr [esi + g_00859c2c], al
        inc     esi
        cmp     esi, 0x100
        mov     dword ptr [ebp - 0x4], esi
        jl      LC72A
        fld     dword ptr [g_007b7010]
        fcomp   dword ptr [g_0076d064]
        __emit 0xDF   /* fnstsw ax (no-WAIT DF E0; MSVC6 adds 9B WAIT) */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x40 (MSVC6 rejects test ah,imm8) */
        __emit 0xC4
        __emit 0x40
        jnz     LC772
        mov     byte ptr [g_0085a26c], 0x1
LC772:
        mov     byte ptr [g_0087c0e2], 0x1
LC779:
        test    dword ptr [g_008b2520], 0x1000000
        mov     dword ptr [g_0085a1fc], ebx
        mov     dword ptr [g_0085a200], ebx
        mov     dword ptr [g_0085a224], ebx
        jnz     LC7F6
        mov     eax, dword ptr [g_0085a210]
        cmp     eax, ebx
        jz      LC7F6
        push    0x85a224
        push    0x7a2d90
        push    eax
        mov     byte ptr [g_0087dd0a], 0x1
        call    FUN_00740d60
        cmp     eax, ebx
        mov     byte ptr [g_0087dd0a], bl
        jl      LC7F6
        mov     eax, dword ptr [g_0085a224]
        lea     edx, [ebp - 0x30]
        push    edx
        mov     dword ptr [ebp - 0x30], 0x28
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0xc]
        mov     al, byte ptr [ebp - 0x2c]
        test    al, 0x1
        jz      LC7E8
        mov     dword ptr [g_0085a1fc], 0x1
LC7E8:
        test    al, 0x2
        jz      LC7F6
        mov     dword ptr [g_0085a200], 0x1
LC7F6:
        call    FUN_00717d80
        test    al, al
        jnz     LC8FD
        cmp     dword ptr [g_00858950], 0x3
        jz      LC8FD
        mov     eax, dword ptr [g_0085a248]
        cmp     eax, ebx
        jz      LC82B
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_0085a248], ebx
        mov     dword ptr [g_0085a250], ebx
LC82B:
        mov     eax, dword ptr [g_0085a244]
        cmp     eax, ebx
        jz      LC840
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_0085a244], ebx
LC840:
        call    FUN_0074b0f0
        mov     eax, dword ptr [g_0085a234]
        cmp     eax, ebx
        jz      LC87A
        push    eax
        mov     eax, dword ptr [g_0085a214]
        push    ebx
        push    eax
        mov     byte ptr [g_0087dd0a], 0x1
        call    FUN_00735850
        mov     ecx, dword ptr [g_0085a234]
        push    ecx
        mov     byte ptr [g_0087dd0a], bl
        call    FUN_00740db0
        mov     dword ptr [g_0085a234], ebx
LC87A:
        cmp     dword ptr [g_0085a228], ebx
        jz      LC8A4
        mov     eax, dword ptr [g_0085a210]
        cmp     eax, ebx
        jz      LC892
        push    ebx
        push    eax
        call    FUN_007358a0
LC892:
        mov     edx, dword ptr [g_0085a228]
        push    edx
        call    FUN_00740db0
        mov     dword ptr [g_0085a228], ebx
LC8A4:
        mov     eax, dword ptr [g_0085a214]
        cmp     eax, ebx
        jz      LC8B9
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_0085a214], ebx
LC8B9:
        mov     eax, dword ptr [g_0085a210]
        cmp     eax, ebx
        jz      LC8CE
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_0085a210], ebx
LC8CE:
        xor     eax, eax
        mov     al, byte ptr [g_00858954]
        push    0x3
        push    eax
        call    FUN_0070b6c0
        test    al, al
        jnz     LC8F3
        push    0x7a1774
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      LC8F3
        int     3
LC8F3:
        call    FUN_0070c270
        call    FUN_00717d80
LC8FD:
        cmp     byte ptr [g_0085a1f8], bl
        mov     dword ptr [g_0085a204], ebx
        mov     byte ptr [g_0087c5b1], 0x1
        mov     byte ptr [g_0085a1dc], 0x1
        jnz     LC91F
        mov     byte ptr [g_00858958], bl
LC91F:
        call    FUN_0074aa20
        call    FUN_00742ae0
        mov     eax, dword ptr [g_00858c00]
        cmp     eax, ebx
        jz      LC946
        push    eax
        push    ebx
        call    dword ptr [g_0076b488]
        push    ebx
        call    dword ptr [g_0076b484]
        mov     dword ptr [g_00858c00], eax
LC946:
        call    FUN_00723cd0
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
