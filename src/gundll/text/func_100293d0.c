/*
 * FUN_100293d0 (30 B) — __thiscall, RET 0x4. Ctor.
 * Calls FUN_1001c870(this, 0x525a, param_1), sets vtable 0x1004ace4.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c870(void);

__declspec(naked) void FUN_100293d0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x525a
        mov     esi, ecx
        call    FUN_1001c870
        mov     dword ptr [esi], 0x1004ace4
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
