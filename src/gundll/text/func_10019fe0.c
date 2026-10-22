/*
 * FUN_10019fe0 (38 B) — __thiscall ctor, RET 0x4.
 * Calls base ctor FUN_1001c870(this, 0x7202, param_1), zeroes +0x24/+0x28,
 * sets vtable 0x10049aac, returns this.
 */

extern void __cdecl FUN_1001c870(void);

__declspec(naked) void func_10019fe0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x7202
        mov     esi, ecx
        call    FUN_1001c870
        xor     eax, eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi], 0x10049aac
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
