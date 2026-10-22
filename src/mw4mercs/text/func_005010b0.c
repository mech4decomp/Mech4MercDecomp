/*
 * FUN_005010B0 (30 B) — Constructor/destructor wrapper pattern
 * Calls init function at 0x00416E50, then conditionally calls cleanup at 0x004084E0
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416e50(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void func_005010b0(void)
{
    __asm {
        push esi
        mov esi, ecx
        call FUN_00416e50
        test byte ptr [esp+0x08], 0x01
        jz skip_cleanup
        push esi
        call FUN_004084e0
        add esp, 0x04
    skip_cleanup:
        mov eax, esi
        pop esi
        ret 0x04
    }
}
