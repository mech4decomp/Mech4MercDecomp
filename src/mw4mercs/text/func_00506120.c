/*
 * FUN_00506120 (32 B) — Bit manipulation helper
 * Takes a parameter, calls a function, shifts result right 16, masks to 5 bits
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00506120(void)
{
    

/* extern data/function symbols for __emit replacements */
extern void __cdecl FUN_00722f68(void);
__asm {
mov ecx, [esp+0x04]
        sub esp, 0x08
        // __emit: MSVC6 drops displacement 0 for lea eax,[esp+0] (encodes 8D 04 24)
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x00
        push eax
        push ecx
        call FUN_00722f68
        mov eax, [esp+0x04]
        shr eax, 0x10
        and eax, 0x1F
        add esp, 0x08
        ret
    }


}
