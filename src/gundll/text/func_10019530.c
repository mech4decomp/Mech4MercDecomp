/*
 * FUN_10019530 (30 B) — __thiscall, RET 0x4.
 * Object constructor: calls FUN_1001c870(this, 0x7200, param_1), then
 * sets vtable 0x10049a70.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c870(void);   /* rel32 call */

__declspec(naked) void FUN_10019530(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x7200
        mov     esi, ecx
        call    FUN_1001c870
        mov     dword ptr [esi], 0x10049a70
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
