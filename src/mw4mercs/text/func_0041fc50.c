/*
 * FUN_0041fc50 (33 B) — object destructor (__thiscall). Sets vtable 0x76d960,
 * nulls the +0x4 member's +0x4 field, calls FUN_00415d00 then FUN_00415cd0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415d00(void);
extern void __cdecl FUN_00415cd0(void);

__declspec(naked) void FUN_0041fc50(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [esi], 0x76d960
        mov     dword ptr [eax + 0x4], 0x0
        call    FUN_00415d00
        mov     ecx, esi
        call    FUN_00415cd0
        pop     esi
        ret
    }
}
