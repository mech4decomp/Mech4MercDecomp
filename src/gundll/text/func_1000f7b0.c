/*
 * FUN_1000f7b0 (30 B) - __thiscall, RET 0x4. Constructor: calls
 * FUN_1001c870(this, 0x2202, param_1), stores vtable 0x10049704,
 * returns this.
 *
 * __thiscall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c870(void);   /* rel32 call */

__declspec(naked) void FUN_1000f7b0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    eax
        push    0x2202
        mov     esi, ecx
        call    FUN_1001c870
        mov     dword ptr [esi], 0x10049704
        mov     eax, esi
        pop     esi
        ret     4
    }
}
