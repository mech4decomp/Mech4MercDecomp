/*
 * FUN_1001c820 (33 B) - __thiscall, RET 0x4. Root shared constructor:
 * calls base ctor FUN_1001c3f0(this, param_1), zeroes this->0x1c and
 * this->0x20, sets vtable ptr 0x1004a8c0, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c3f0(void);   /* rel32 call */

__declspec(naked) void FUN_1001c820(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    eax
        mov     esi, ecx
        call    FUN_1001c3f0
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi], 0x1004a8c0
        mov     eax, esi
        pop     esi
        ret     4
    }
}
