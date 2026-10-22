/*
 * FUN_10025800 (41 B) - __thiscall, RET 0x4. Ctor: calls FUN_1001c9e0
 * (this, 0x4603, param_1), zeroes fields +0x1c/0x20/0x24, sets vtable
 * 0x1004abd0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9e0(void);   /* rel32 call */

__declspec(naked) void FUN_10025800(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x4603
        mov     esi, ecx
        call    FUN_1001c9e0
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi], 0x1004abd0
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
