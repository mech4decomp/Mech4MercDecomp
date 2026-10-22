/*
 * FUN_00708880 (167 B) — Registers several config keys via FUN_007089b0,
 * opens the executable (CreateFileA on pgmptr), reads its file time, and
 * conditionally registers a flag key.
 *
 * __stdcall, no params, plain RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_007089b0(void *key, void *val, int size);

extern void *g_76b368;    /* IAT __p__pgmptr 0x0076b368 */
extern void *g_76b0e8;    /* IAT CreateFileA  0x0076b0e8 */
extern void *g_76b1f0;    /* IAT GetFileTime  0x0076b1f0 */
extern void *g_76b0ec;    /* IAT CloseHandle  0x0076b0ec */
extern int g_858924;      /* 0x00858924 */

__declspec(naked) void __stdcall FUN_00708880(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        push    0x4
        push    0x7b6fb8
        push    0x7a14dc
        call    FUN_007089b0
        push    0x4
        push    0x7b6fbc
        push    0x7a14d0
        call    FUN_007089b0
        push    0x4
        push    0x7b73fc
        push    0x7a14c4
        call    FUN_007089b0
        push    0x0
        push    0x0
        push    0x3
        push    0x0
        push    0x1
        push    0x80000000
        call    dword ptr [g_76b368]
        mov     eax, dword ptr [eax]
        push    eax
        call    dword ptr [g_76b0e8]
        lea     ecx, [esp + 0x8]
        push    ecx
        push    0x0
        mov     esi, eax
        push    0x0
        push    esi
        call    dword ptr [g_76b1f0]
        push    esi
        call    dword ptr [g_76b0ec]
        push    0x4
        lea     edx, [esp + 0xc]
        push    edx
        push    0x7a14e8
        call    FUN_007089b0
        mov     eax, dword ptr [g_858924]
        test    eax, eax
        pop     esi
        jz      L_708923
        cmp     byte ptr [eax], 0x0
        jz      L_708923
        push    0x4
        lea     ecx, [esp + 0x4]
        push    ecx
        push    eax
        mov     dword ptr [esp + 0xc], 0x1
        call    FUN_007089b0
    L_708923:
        add     esp, 0xc
        ret
    }
}
