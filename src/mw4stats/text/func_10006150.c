/*
 * FUN_10006150 (26 B) - __thiscall. Calls FUN_10005db0 with a fixed vtable
 * pointer, storing the result through this[0].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10005db0(void);

__declspec(naked) void __cdecl FUN_10006150(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        push    eax
        mov     ecx, 0x10027530
        call    FUN_10005db0
        mov     dword ptr [esi], eax
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
