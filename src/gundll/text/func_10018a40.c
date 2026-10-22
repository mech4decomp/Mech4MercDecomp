/*
 * FUN_10018a40 (38 B) — __thiscall ctor, RET 0x4.
 * Calls base ctor FUN_1001c9e0(this, 0x5315, param_1), zeroes +0x1c/+0x20,
 * sets vtable 0x10049a40, returns this.
 */

extern void __cdecl FUN_1001c9e0(void);

__declspec(naked) void func_10018a40(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x5315
        mov     esi, ecx
        call    FUN_1001c9e0
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi], 0x10049a40
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
