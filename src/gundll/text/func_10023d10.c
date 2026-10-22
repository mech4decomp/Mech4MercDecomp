/*
 * FUN_10023D10 (30 B) - __fastcall. Ctor: calls FUN_1001c6e0(0x810a),
 * stores vtable 0x1004ab58 at this+0 and 0 at this+0x20, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10023D10(void)
{
    __asm {
        push    esi
        push    0x810a
        mov     esi, ecx
        call    FUN_1001c6e0
        mov     dword ptr [esi], 0x1004ab58
        mov     dword ptr [esi+0x20], 0
        mov     eax, esi
        pop     esi
        ret
    }
}
