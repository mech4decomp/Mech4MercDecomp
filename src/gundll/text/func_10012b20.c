/*
 * FUN_10012B20 (31 B) - __thiscall ctor.  Calls FUN_1001c9a0(this, 0x430c),
 * zeroes this+0x1c/+0x20, stores vtable 0x10049848 at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9a0(void);   /* rel32 call */

__declspec(naked) void FUN_10012B20(void)
{
    __asm {
        push    esi
        push    0x430c
        mov     esi, ecx
        call    FUN_1001c9a0
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi], 0x10049848
        mov     eax, esi
        pop     esi
        ret
    }
}
