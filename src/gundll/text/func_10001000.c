/*
 * FUN_10001000 (24 B) — __stdcall, RET 0xC.
 * Init helper: if param_2 == 1, store param_1 into global 0x10055020.
 * Always returns 1.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10055020;

__declspec(naked) void __stdcall FUN_10001000(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        dec     eax
        jnz     done
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [g_10055020], eax
    done:
        mov     eax, 1
        ret     0xC
    }
}
