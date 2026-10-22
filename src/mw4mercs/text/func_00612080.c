/*
 * FUN_00612080 (25 B) — __thiscall constructor: calls base ctor
 * FUN_00609d20, sets vtable 0x78c1bc and field 0x40 = 1, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00609d20(void);

__declspec(naked) void FUN_00612080(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00609d20
        mov     dword ptr [esi], 0x78c1bc
        mov     dword ptr [esi+0x40], 1
        mov     eax, esi
        pop     esi
        ret
    }
}
