/*
 * FUN_00415920 (32 B) — __thiscall (RET 4, 1 stack arg): constructor.
 * Calls FUN_00415c10(arg), sets vtable ptr 0x76d424, calls FUN_004159a0,
 * returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415c10(void);
extern void __cdecl FUN_004159a0(void);

__declspec(naked) void FUN_00415920(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_00415c10
        mov     ecx, esi
        mov     dword ptr [esi], 0x76d424
        call    FUN_004159a0
        mov     eax, esi
        pop     esi
        ret     4
    }
}
