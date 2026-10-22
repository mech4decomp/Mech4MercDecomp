/*
 * FUN_10017300 (30 B) - __thiscall. Ctor: calls FUN_1001c820(this, 0x520a),
 * stores vtable 0x100499bc at this+0, zeroes this+0x24, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_10017300(void)
{
    __asm {
        push    esi
        push    0x520a
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x100499bc
        mov     dword ptr [esi + 0x24], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
