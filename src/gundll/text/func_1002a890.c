/*
 * FUN_1002a890 (41 B) - __thiscall, RET 0x4. Ctor: calls FUN_1001c9e0
 * (this, 0x5355, param_1), zeroes fields +0x1c/0x20/0x24, sets vtable
 * 0x1004ad2c, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9e0(void);   /* rel32 call */

__declspec(naked) void FUN_1002a890(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x5355
        mov     esi, ecx
        call    FUN_1001c9e0
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi], 0x1004ad2c
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
