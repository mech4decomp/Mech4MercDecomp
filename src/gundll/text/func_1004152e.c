/*
 * FUN_1004152e (14 B) — __cdecl.
 * Increments *param_1 by 4, returns the u16 at (*param_1 - 4).
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_1004152e(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        add     dword ptr [eax], 0x4
        mov     eax, dword ptr [eax]
        mov     ax, word ptr [eax - 0x4]
        ret
    }
}
