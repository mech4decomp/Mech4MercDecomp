/*
 * FUN_1003b066 (41 B) - __stdcall, RET. GetModuleHandleA("KERNEL32"),
 * GetProcAddress(hModule,"IsProcessorFeaturePresent"); if both succeed,
 * calls the proc with arg 0. Otherwise tail-jumps to FUN_1003b028.
 *
 * CFLAGS: /O1
 */

extern void* g_1004910c;   /* IAT slot at 0x1004910c (GetModuleHandleA) */
extern void* g_10049134;   /* IAT slot at 0x10049134 (GetProcAddress) */
extern void __cdecl FUN_1003b028(void);   /* tail-call target */

__declspec(naked) void __stdcall FUN_1003b066(void)
{
    __asm {
        push    0x1004b784
        call    dword ptr [g_1004910c]
        test    eax, eax
        jz      L_tail
        push    0x1004b768
        push    eax
        call    dword ptr [g_10049134]
        test    eax, eax
        jz      L_tail
        push    0x0
        call    eax
        ret
    L_tail:
        jmp     FUN_1003b028
    }
}
