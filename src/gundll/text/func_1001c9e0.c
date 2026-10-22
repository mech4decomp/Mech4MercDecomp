/*
 * FUN_1001c9e0 (32 B) - __thiscall, RET 0x8. Root shared constructor:
 * calls base ctor FUN_1001c3a0(this, param_1, param_2), sets vtable ptr
 * 0x1004a8cc, returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c3a0(void);   /* rel32 call */

__declspec(naked) void FUN_1001c9e0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 8]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_1001c3a0
        mov     dword ptr [esi], 0x1004a8cc
        mov     eax, esi
        pop     esi
        ret     8
    }
}
