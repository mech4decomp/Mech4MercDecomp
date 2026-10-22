/*
 * FUN_1001c6e0 (32 B) - __thiscall, RET 0x4. Root shared constructor:
 * calls base ctor FUN_1001c3f0(this, param_1), sets vtable ptr
 * 0x1004a8b4, zeroes this->0x1c, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c3f0(void);   /* rel32 call */

__declspec(naked) void FUN_1001c6e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        push    eax
        mov     esi, ecx
        call    FUN_1001c3f0
        mov     dword ptr [esi], 0x1004a8b4
        mov     dword ptr [esi + 0x1c], 0
        mov     eax, esi
        pop     esi
        ret     4
    }
}
