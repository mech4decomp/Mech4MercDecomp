/*
 * FUN_10022480 (38 B) — __thiscall ctor, RET 0x4.
 * Calls shared root ctor FUN_1001c720(this, 0x8101, param_1), zeroes
 * +0x20/+0x24, sets vtable 0x1004aae0, returns this.
 */

extern void __cdecl FUN_1001c720(void);

__declspec(naked) void func_10022480(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x8101
        mov     esi, ecx
        call    FUN_1001c720
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi], 0x1004aae0
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
