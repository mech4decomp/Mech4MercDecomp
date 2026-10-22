/*
 * FUN_00694640 (44 B) — Decrement refcount at [g_0082db18+0x48]; when it
 * reaches zero, call FUN_006941b0(this) and free via FUN_004084e0, then
 * clear global g_0082db18.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006941b0(void);
extern void __cdecl FUN_004084e0(void *a);
extern int *g_0082db18;

__declspec(naked) void FUN_00694640(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [g_0082db18]
        dec     dword ptr [esi + 0x48]
        jnz     L_done
        test    esi, esi
        jz      L_clear
        mov     ecx, esi
        call    FUN_006941b0
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_clear:
        mov     dword ptr [g_0082db18], 0
    L_done:
        pop     esi
        ret
    }
}
