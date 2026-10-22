/*
 * FUN_00402D10 (90 B) — .text data block containing 2 sub-functions:
 *   [0x402D10] __cdecl (3 args, RET 0xC): calls FUN_006F89F0 twice and
 *             FUN_006F5B70 if non-null.
 *   [0x402D30] __cdecl (3 args, RET 0xC): calls FUN_006F89F0, FUN_006F5ED0,
 *             FUN_006F8430 (storing to g_7B7DD8), FUN_006F5EE0; returns 1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006F89F0(void);
extern void __cdecl FUN_006F5B70(void);
extern void __cdecl FUN_006F5ED0(void);
extern void __cdecl FUN_006F8430(void);
extern void __cdecl FUN_006F5EE0(void);
extern int g_7b7dd8;

__declspec(naked) void FUN_00402D10(void)
{
    __asm {
        call    FUN_006F89F0
        test    eax, eax
        jne     loc_402d1c
        ret     0xc
loc_402d1c:
        call    FUN_006F89F0
        mov     ecx, eax
        call    FUN_006F5B70
        ret     0xc
        nop
        nop
        nop
        nop
        nop
        call    FUN_006F89F0
        test    eax, eax
        jne     loc_402d3c
        ret     0xc
loc_402d3c:
        call    FUN_006F89F0
        call    FUN_006F5ED0
        call    FUN_006F89F0
        mov     ecx, dword ptr [eax + 0x3c]
        call    FUN_006F8430
        mov     dword ptr [g_7b7dd8], eax
        call    FUN_006F89F0
        call    FUN_006F5EE0
        mov     eax, 1
        ret     0xc
    }
}
