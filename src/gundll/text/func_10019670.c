/*
 * FUN_10019670 (30 B) — __thiscall, RET 0x4.
 * Object constructor: calls FUN_1001c720(this, 0x7102, param_1), then
 * sets vtable 0x10049a7c.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c720(void);   /* rel32 call */

__declspec(naked) void FUN_10019670(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x7102
        mov     esi, ecx
        call    FUN_1001c720
        mov     dword ptr [esi], 0x10049a7c
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
