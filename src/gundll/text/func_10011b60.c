/*
 * FUN_10011B60 (23 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0x4201),
 * sets vtable 0x100497dc, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_10011B60(void)
{
    __asm {
        push    esi
        push    0x4201
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x100497dc
        mov     eax, esi
        pop     esi
        ret
    }
}
