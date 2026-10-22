/*
 * FUN_10024bd0 (41 B) - __thiscall, RET 0x4. Ctor: calls FUN_1001c870
 * (this, 0x8203, param_1), zeroes fields +0x24/0x28/0x2c, sets vtable
 * 0x1004aba0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c870(void);   /* rel32 call */

__declspec(naked) void FUN_10024bd0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x8203
        mov     esi, ecx
        call    FUN_1001c870
        xor     eax, eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi], 0x1004aba0
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
