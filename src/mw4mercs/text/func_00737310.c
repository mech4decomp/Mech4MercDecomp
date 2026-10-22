/*
 * FUN_00737310 (410 B) — __stdcall, RET 4 (1 param). Message-pump /
 * input handler. Calls an IAT fn (0x76b0f4) with (DAT_008aa9f0, 0x1388);
 * if it returns 0x102, runs a state machine that (guarded by several
 * globals) builds a 0xb3-dword table, calls FUN_00736c50 / FUN_00736cd0
 * and several IAT fns, and loops back. Returns 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b0f4;   /* IAT fn ptr 0x0076b0f4 */
extern void *g_76b420;   /* IAT fn ptr 0x0076b420 */
extern void *g_76b47c;   /* IAT fn ptr 0x0076b47c */
extern void *g_76b0fc;   /* IAT fn ptr 0x0076b0fc */
extern void *g_76b1e0;   /* IAT fn ptr 0x0076b1e0 */
extern void *g_76b1e4;   /* IAT fn ptr 0x0076b1e4 */
extern void *g_76b598;   /* IAT fn ptr 0x0076b598 */
extern void *g_76b154;   /* IAT fn ptr 0x0076b154 */
extern void *g_76b1e8;   /* IAT fn ptr 0x0076b1e8 */
extern void *g_76b1ec;   /* IAT fn ptr 0x0076b1ec */

extern int g_8aa9f0;     /* DAT_008aa9f0 */
extern int g_849eb8;     /* DAT_00849eb8 */
extern int g_858af8;     /* DAT_00858af8 */
extern int g_7b72dc;     /* DAT_007b72dc */
extern int g_8aa9e8;     /* DAT_008aa9e8 */
extern int g_8aaa04;     /* DAT_008aaa04 */
extern int g_858c08;     /* DAT_00858c08 */
extern char g_8aa718;    /* DAT_008aa718 (table) */

extern char g_7a6a00;    /* .rdata string 0x007a6a00 */
extern char g_7a69cc;    /* .rdata string 0x007a69cc */
extern char g_7a69bc;    /* .rdata string 0x007a69bc */

extern void __cdecl FUN_00736c50(void);
extern void __cdecl FUN_00736cd0(void);
extern void FUN_007372c0(void);

__declspec(naked) void __stdcall FUN_00737310(void)
{
    __asm {
        mov     eax, dword ptr [g_8aa9f0]
        sub     esp, 0x6e0
        push    0x1388
        push    eax
        call    dword ptr [g_76b0f4]
        cmp     eax, 0x102
        jne     L_49f
        push    ebx
        push    ebp
        mov     ebp, dword ptr [g_76b420]
        push    esi
        push    edi
        mov     ebx, 1
L_341:
        mov     eax, dword ptr [g_849eb8]
        test    eax, eax
        jne     L_468
        mov     ecx, dword ptr [g_858af8]
        cmp     ecx, dword ptr [g_7b72dc]
        jne     L_468
        push    0x91
        call    dword ptr [g_76b47c]
        test    ah, 0x80
        je      L_468
        push    offset g_7a6a00
        call    dword ptr [g_76b0fc]
        mov     edx, dword ptr [g_8aa9e8]
        push    edx
        call    dword ptr [g_76b1e0]
        xor     eax, eax
        mov     ecx, 0xb3
        lea     edi, [esp + 0x24]
        rep     stosd
        mov     ecx, dword ptr [g_8aa9e8]
        lea     eax, [esp + 0x24]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x2c], 0xffffffff
        call    dword ptr [g_76b1e4]
        cmp     dword ptr [g_8aaa04], ebx
        mov     ecx, 0xb3
        lea     esi, [esp + 0x24]
        mov     edi, offset g_8aa718
        rep     movsd
        jne     L_439
        mov     edx, dword ptr [esp + 0xdc]
        push    edx
        lea     eax, [esp + 0x5f4]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        call    FUN_00736c50
        push    eax
        mov     eax, dword ptr [esp + 0xe0]
        push    eax
        push    eax
        lea     edx, [esp + 0x2fc]
        push    edx
        call    FUN_00736cd0
        push    eax
        lea     eax, [esp + 0x3fc]
        push    offset g_7a69cc
        push    eax
        call    ebp
        add     esp, 0x14
        push    0
        push    offset g_7a69bc
        lea     ecx, [esp + 0x3f8]
        push    ecx
        push    0
        call    dword ptr [g_76b598]
        push    ebx
        mov     dword ptr [g_858c08], 5
        call    dword ptr [g_76b154]
        jmp     L_468
L_439:
        mov     eax, dword ptr [g_8aa9e8]
        lea     edx, [esp + 0x24]
        push    edx
        push    eax
        mov     dword ptr [g_8aaa04], ebx
        mov     dword ptr [esp + 0xe4], offset FUN_007372c0
        call    dword ptr [g_76b1e8]
        mov     ecx, dword ptr [g_8aa9e8]
        push    ecx
        call    dword ptr [g_76b1ec]
L_468:
        mov     eax, dword ptr [g_8aa9f0]
        mov     edx, dword ptr [g_858af8]
        push    0x1388
        push    eax
        mov     dword ptr [g_7b72dc], edx
        call    dword ptr [g_76b0f4]
        cmp     eax, 0x102
        je      L_341
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0x6e0
        ret     4
L_49f:
        xor     eax, eax
        add     esp, 0x6e0
        ret     4
    }
}
