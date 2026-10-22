/*
 * FUN_100174A0 (31 B) - __thiscall. Ctor: calls FUN_1001c820(this, 0x520b),
 * zeroes this+0x24/+0x28, stores vtable 0x100499c8 at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_100174A0(void)
{
    __asm {
        push    esi
        push    0x520b
        mov     esi, ecx
        call    FUN_1001c820
        xor     eax, eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi], 0x100499c8
        mov     eax, esi
        pop     esi
        ret
    }
}
