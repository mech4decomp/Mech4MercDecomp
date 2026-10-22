/*
 * FUN_10021020 (23 B) - __fastcall. Ctor: calls FUN_1001c6e0(0xa105),
 * stores vtable 0x1004aa74 at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10021020(void)
{
    __asm {
        push    esi
        push    0xa105
        mov     esi, ecx
        call    FUN_1001c6e0
        mov     dword ptr [esi], 0x1004aa74
        mov     eax, esi
        pop     esi
        ret
    }
}
