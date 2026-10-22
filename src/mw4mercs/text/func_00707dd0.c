/*
 * FUN_00707dd0 (37 B) — gosScript timing init: if the refcount
 * g_00858b60 is zero, snapshots the RDTSC counter (FUN_00707f50) into
 * g_00858b20/b24 and bumps the refcount.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_00858b60;
extern int g_00858b20;
extern int g_00858b24;
extern void __cdecl FUN_00707f50(void);

__declspec(naked) void FUN_00707dd0(void)
{
    __asm {
        mov     eax, dword ptr [g_00858b60]
        test    eax, eax
        jnz     L_df4
        call    FUN_00707f50
        mov     dword ptr [g_00858b20], eax
        mov     eax, dword ptr [g_00858b60]
        inc     eax
        mov     dword ptr [g_00858b24], edx
        mov     dword ptr [g_00858b60], eax
L_df4:
        ret
    }
}
