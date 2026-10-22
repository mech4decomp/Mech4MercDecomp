/*
 * FUN_00661c90 (18 B) — __thiscall ctor. Calls base ctor FUN_006a22a0 then
 * installs vtable 0x795284.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006a22a0(void);

__declspec(naked) void FUN_00661c90(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_006a22a0
        mov     dword ptr [esi], 0x795284
        mov     eax, esi
        pop     esi
        ret
    }
}
