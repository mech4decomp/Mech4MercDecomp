/*
 * FUN_00546520 (47 B) — Searches for null byte in a table, asserts if not found.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fab90(void);

__declspec(naked) void func_00546520(void)
{
    __asm {
        xor  eax, eax
        add  ecx, 0x205f34
    loop_start:
        cmp  byte ptr [ecx], 0
        je   done
        inc  eax
        add  ecx, 0x22ac
        cmp  eax, 0x18
        jl   loop_start
        push 0x77b878
        call FUN_006fab90
        add  esp, 4
        test eax, eax
        je   skip_int3
        int  3
    skip_int3:
        or   eax, -1
    done:
        ret
    }
}
