/*
 * FUN_0065e530 (28 B) — __thiscall wrapper. Calls FUN_0064e100(this),
 * derefs the returned pointer twice, pushes the result, then calls
 * FUN_0064dda0(this, arg). RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0064e100(void);
extern void __cdecl FUN_0064dda0(void);

__declspec(naked) void FUN_0065e530(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     ecx, esi
        call    FUN_0064e100
        mov     eax, dword ptr [eax]
        mov     eax, dword ptr [eax]
        push    eax
        mov     ecx, esi
        call    FUN_0064dda0
        pop     esi
        ret     0x4
    }
}
