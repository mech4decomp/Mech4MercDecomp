/*
 * FUN_00414B40 (23 B) — __cdecl (RET 0). Fills a dword buffer with the
 * pattern 0xffb1ffb1 using rep stosd.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00414B40(void)
{
    __asm {
        mov     ecx, dword ptr [esp + 8]
        shr     ecx, 2
        je      L_414b56
        push    edi
        mov     edi, dword ptr [esp + 8]
        mov     eax, 0xffb1ffb1
        rep stosd
        pop     edi
L_414b56:
        ret
    }
}
