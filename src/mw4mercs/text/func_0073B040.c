/*
 * FUN_0073B040 (27 B) — __cdecl (RET 0). Toggles g_7b73d4 between 2 and 3
 * (if it is 2, becomes 3; otherwise becomes 2).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7b73d4;

__declspec(naked) void FUN_0073B040(void)
{
    __asm {
        mov     ecx, dword ptr [g_7b73d4]
        xor     eax, eax
        cmp     ecx, 2
        setne   al
        dec     eax
        and     eax, 0xfffffffd
        add     eax, 2
        mov     dword ptr [g_7b73d4], eax
        ret
    }
}
