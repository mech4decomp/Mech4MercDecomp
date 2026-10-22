/*
 * FUN_10005e20 (27 B) - __thiscall. Calls FUN_10006170, stores arg through
 * this+4 and zeroes the pointed-to dword.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10006170(void);

__declspec(naked) void __cdecl FUN_10005e20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_10006170
        mov     eax, dword ptr [esp + 0x8]
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [eax], 0x0
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
