/*
 * FUN_00415140 (63 B) — archive/database subsystem: teardown/free helper.
 * If the registered-class object (0x7b8c08) is non-null, unregisters it
 * via FUN_00415200 and frees it (FUN_004084e0); then frees the table at
 * 0x7b8c0c and clears both globals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c08;
extern int g_007b8c0c;
extern void FUN_00415200(void);
extern void FUN_004084e0(void *);

__declspec(naked) void FUN_00415140(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_007b8c08]
        test    esi, esi
        jz      free_table
        mov     ecx, esi
        call    FUN_00415200
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    free_table:
        mov     eax, dword ptr [g_007b8c0c]
        push    eax
        mov     dword ptr [g_007b8c08], 0
        call    FUN_004084e0
        add     esp, 0x4
        mov     dword ptr [g_007b8c0c], 0
        pop     esi
        ret
    }
}
