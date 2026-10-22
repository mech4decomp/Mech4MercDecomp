/*
 * FUN_00501530 (30 B) — Constructor/destructor wrapper pattern
 * Calls init function at 0x00501550, then conditionally calls cleanup at 0x004084E0
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00501530(void)
{
    

extern void __cdecl FUN_00501552(void);
extern void __cdecl FUN_1004084d5(void);
__asm {
push esi
        mov esi, ecx
        call FUN_00501552
        test byte ptr [esp+0x08], 0x01
        jz skip_cleanup
        push esi
        call FUN_1004084d5
        add esp, 0x04
skip_cleanup:
        mov eax, esi
        pop esi
        ret 0x04
    }


}
