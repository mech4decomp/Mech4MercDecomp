/*
 * FUN_005f2c40 (39 B) — destroy Vehicle::ExecutionStateEngine singleton.
 *
 * If DAT_007f25bc != 0, calls FUN_004dd340 (thiscall, ECX=ESI) then
 * frees the pointer via FUN_004084e0. Clears DAT_007f25bc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004dd340(void);
extern void FUN_004084e0(void);

extern int DAT_007f25bc;

__declspec(naked) void FUN_005f2c40(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [DAT_007f25bc]
        test    esi, esi
        jz      l_done
        mov     ecx, esi
        call    FUN_004dd340
        push    esi
        call    FUN_004084e0
        add     esp, 0x04
    l_done:
        mov     dword ptr [DAT_007f25bc], 0x00000000
        pop     esi
        ret
    }
}
