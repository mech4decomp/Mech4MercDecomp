/*
 * FUN_1000d5c0 (30 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0x1203),
 * stores vtable 0x1004965c at this+0, zeroes this+0x24, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_1000d5c0(void)
{
    __asm {
        push    esi
        push    0x1203
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x1004965c
        mov     dword ptr [esi + 0x24], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
