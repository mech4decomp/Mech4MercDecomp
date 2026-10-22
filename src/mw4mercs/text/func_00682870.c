/*
 * FUN_00682870 (10 B) — getter: returns float at [[ecx+4]+0x574].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00682870(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 4]
        fld     dword ptr [eax + 0x574]
        ret
    }
}
