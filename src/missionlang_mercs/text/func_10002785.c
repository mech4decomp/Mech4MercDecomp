/*
 * FUN_10002785 (62 B) — allocate a 0x140-byte block from the private heap
 * (0x100057a8) and initialize the 0x10005568 state block.
 *
 * __stdcall, 0 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * --  Semantics folded from former cpp/ translation (deleted 2026-08).
 * FUN_10002785 (62 B) -- __cdecl allocate the heap bookkeeping table:
 * g_1000557c = HeapAlloc(g_heap, 0, 0x140); if null return 0; init the
 * four globals; return 1. IAT fn-ptr form for FF 15.
 */

extern void *g_100057a8;                              /* 0x100057a8 heap handle */
extern void *(__stdcall *g_10004074)(void *, unsigned int, unsigned int); /* IAT 0x10004074 */
extern int g_1000557c;                                /* 0x1000557c */
extern int g_10005574;                                /* 0x10005574 */
extern int g_10005578;                                /* 0x10005578 */
extern int g_10005570;                                /* 0x10005570 */
extern int g_10005568;                                /* 0x10005568 */

__declspec(naked) void __stdcall FUN_10002785(void)
{
    __asm {
        push    0x140
        push    0
        push    dword ptr [g_100057a8]
        call    dword ptr [g_10004074]
        test    eax, eax
        mov     dword ptr [g_1000557c], eax
        jnz     L27A2
        ret
L27A2:
        and     dword ptr [g_10005574], 0
        and     dword ptr [g_10005578], 0
        push    1
        mov     dword ptr [g_10005570], eax
        mov     dword ptr [g_10005568], 0x10
        pop     eax
        ret
    }
}
