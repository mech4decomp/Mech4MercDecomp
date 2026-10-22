/*
 * FUN_1000e1b0 (30 B) - __thiscall. Ctor: calls FUN_1001c720(this, 0x2101,
 * param_1), stores vtable 0x100496a4 at this+0, returns this. RET 0x4.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c720(void);   /* rel32 call */

__declspec(naked) void FUN_1000e1b0(void)
{
    __asm {
        mov     eax, dword ptr [esp+4]
        push    esi
        push    eax
        push    0x2101
        mov     esi, ecx
        call    FUN_1001c720
        mov     dword ptr [esi], 0x100496a4
        mov     eax, esi
        pop     esi
        ret     4
    }
}
