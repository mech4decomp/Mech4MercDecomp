/*
 * FUN_0070c960 (577 B) — application shutdown sequence. Sets a "current
 * shutdown step" string pointer (g_007b6ed4) before each subsystem teardown
 * call, then terminates the process (GetCurrentProcess/TerminateProcess) or
 * exits depending on the shutdown mode (g_00859278) and player count
 * (g_00849eb8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_00858954;          /* 0x00858954 */
extern int  g_00858ac0;          /* 0x00858ac0 */
extern char g_00859afc;          /* 0x00859afc */
extern int  g_007b6ed4;          /* 0x007b6ed4 current shutdown step string */
extern int  g_00849eb8;          /* 0x00849eb8 */
extern int  g_00859278;          /* 0x00859278 */
extern int  g_00858c00;          /* 0x00858c00 */
extern int  g_00858c08;          /* 0x00858c08 */

extern void *g_76b488;           /* IAT: ReleaseDC */
extern void *g_76b38c;           /* IAT: exit */
extern void *g_76b23c;           /* IAT: GetCurrentProcess */
extern void *g_76b240;           /* IAT: TerminateProcess */

extern void __cdecl FUN_006faa30(void);
extern void __cdecl FUN_0070a920(void);
extern void __cdecl FUN_00749df0(void);
extern void __cdecl FUN_0074ab00(void);
extern void __cdecl FUN_0070e170(void);
extern void __cdecl FUN_00701b70(void);
extern void __cdecl FUN_00729a30(void);
extern void __cdecl FUN_00747730(void);
extern void __cdecl FUN_00739fc0(void);
extern void __cdecl FUN_007335f0(void);
extern void __cdecl FUN_007222e0(void);
extern void __cdecl FUN_00707b30(void);
extern void __cdecl FUN_00717590(void);
extern void __cdecl FUN_0070a820(void);
extern void __cdecl FUN_00708880(void);
extern void __cdecl FUN_00733300(void);
extern void __cdecl FUN_00746f30(void);
extern void __cdecl FUN_00747c30(void);
extern void __cdecl FUN_0070f960(void);
extern void __cdecl FUN_006fb2c0(void);
extern void __cdecl FUN_006fac50(void);
extern void __cdecl FUN_0070f970(void);
extern void __cdecl FUN_0072d400(void);
extern void __cdecl FUN_006f3b80(void);
extern void __cdecl FUN_0070d1c0(void);
extern void __cdecl FUN_00738960(void);
extern void __cdecl FUN_00737cc0(void);
extern void __cdecl FUN_007083e0(void);

__declspec(naked) void FUN_0070c960(void)
{
    __asm {
        push    0x0
        push    0x0
        call    FUN_006faa30
        mov     al, byte ptr [g_00858954]
        test    al, al
        mov     dword ptr [g_00858ac0], 0x1
        mov     byte ptr [g_00859afc], 0x0
        jz      L1
        mov     dword ptr [g_007b6ed4], 0x7a1a58
        call    FUN_0070a920
L1:
        mov     dword ptr [g_007b6ed4], 0x7a1a44
        call    FUN_00749df0
        mov     dword ptr [g_007b6ed4], 0x7a1a28
        mov     edx, dword ptr [g_00849eb8]
        test    edx, edx
        setnz   al
        push    eax
        call    FUN_0074ab00
        mov     dword ptr [g_007b6ed4], 0x7a1a14
        call    FUN_0070e170
        mov     dword ptr [g_007b6ed4], 0x7a19fc
        call    FUN_00701b70
        mov     dword ptr [g_007b6ed4], 0x7a19e8
        call    FUN_00729a30
        mov     dword ptr [g_007b6ed4], 0x7a19cc
        call    FUN_00747730
        mov     dword ptr [g_007b6ed4], 0x7a19b0
        call    FUN_00739fc0
        mov     dword ptr [g_007b6ed4], 0x7a1994
        call    FUN_007335f0
        mov     dword ptr [g_007b6ed4], 0x7a1980
        call    FUN_007222e0
        mov     dword ptr [g_007b6ed4], 0x7a1964
        call    FUN_00707b30
        mov     dword ptr [g_007b6ed4], 0x7a1954
        call    FUN_00717590
        cmp     dword ptr [g_00859278], 0x2
        mov     dword ptr [g_007b6ed4], 0x7a1938
        jz      L2
        call    FUN_0070a820
L2:
        mov     dword ptr [g_007b6ed4], 0x7a1918
        call    FUN_00708880
        mov     dword ptr [g_007b6ed4], 0x7a1900
        call    FUN_00733300
        mov     dword ptr [g_007b6ed4], 0x7a18dc
        call    FUN_00746f30
        mov     dword ptr [g_007b6ed4], 0x7a18bc
        call    FUN_00747c30
        mov     dword ptr [g_007b6ed4], 0x7a18a4
        call    FUN_0070f960
        mov     dword ptr [g_007b6ed4], 0x7a188c
        mov     eax, dword ptr [g_00849eb8]
        test    eax, eax
        setnz   cl
        push    ecx
        call    FUN_006fb2c0
        mov     dword ptr [g_007b6ed4], 0x7a1874
        call    FUN_006fac50
        mov     dword ptr [g_007b6ed4], 0x7a185c
        call    FUN_0070f970
        mov     dword ptr [g_007b6ed4], 0x7a1840
        call    FUN_0072d400
        mov     dword ptr [g_007b6ed4], 0x7a182c
        call    FUN_006f3b80
        mov     dword ptr [g_007b6ed4], 0x7a1818
        call    FUN_0070d1c0
        mov     eax, dword ptr [g_00858c00]
        test    eax, eax
        jz      L3
        push    eax
        push    0x0
        call    dword ptr [g_76b488]   /* ReleaseDC */
L3:
        mov     dword ptr [g_007b6ed4], 0x7a1800
        call    FUN_00738960
        mov     dword ptr [g_007b6ed4], 0x7a17e8
        call    FUN_00737cc0
        mov     dword ptr [g_007b6ed4], 0x7a17d4
        call    FUN_007083e0
        mov     eax, dword ptr [g_00859278]
        cmp     eax, 0x1
        mov     dword ptr [g_007b6ed4], 0x7a17c4
        jz      L4
        cmp     eax, 0x2
        jz      L4
        mov     dword ptr [g_00858c08], 0x5
        cmp     dword ptr [g_00849eb8], 0x1
        jg      L5
        push    0x0
        call    dword ptr [g_76b38c]   /* exit */
L4:
        mov     eax, dword ptr [g_00849eb8]
        test    eax, eax
        jz      L6
        mov     dword ptr [g_00858c08], 0x5
L5:
        push    0x1
        call    dword ptr [g_76b23c]   /* GetCurrentProcess */
        push    eax
        call    dword ptr [g_76b240]   /* TerminateProcess */
L6:
        ret
    }
}
