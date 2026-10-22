/*
 * FUN_1000efb0 (30 B) - __fastcall. Ctor: calls FUN_1001c6e0(this, 0x2105),
 * stores vtable 0x100496d4 at this+0 and 0 at this+0x20, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_1000efb0(void)
{
    __asm {
        push    esi
        push    0x2105
        mov     esi, ecx
        call    FUN_1001c6e0
        mov     dword ptr [esi], 0x100496d4
        mov     dword ptr [esi+0x20], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
