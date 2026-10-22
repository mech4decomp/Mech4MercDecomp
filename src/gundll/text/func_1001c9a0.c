/*
 * FUN_1001c9a0 (25 B) — __thiscall, RET 0x4.
 * Calls FUN_1001c3f0(this, param_1), sets vtable ptr 0x1004a8cc at *this,
 * returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c3f0(void);

__declspec(naked) void FUN_1001c9a0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        mov     esi, ecx
        call    FUN_1001c3f0
        mov     dword ptr [esi], 0x1004a8cc
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
