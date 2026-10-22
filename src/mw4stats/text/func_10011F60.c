/*
 * FUN_10011f60 (17 B) - critical-section teardown: calls FUN_10011f90 then
 * DeleteCriticalSection (IAT 0x10021038).
 *
 * __fastcall (ECX = param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10011f90(void);
extern void *g_DeleteCriticalSection; /* IAT slot (0x10021038) */

__declspec(naked) void __cdecl FUN_10011f60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10011f90
        push    esi
        call    dword ptr [g_DeleteCriticalSection]
        pop     esi
        ret
    }
}
