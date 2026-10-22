/*
 * FUN_10029390 (23 B) - __thiscall. Ctor: calls FUN_1001c820(this, 0x525a),
 * stores vtable 0x1004ace4 at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_10029390(void)
{
    __asm {
        push    esi
        push    0x525a
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x1004ace4
        mov     eax, esi
        pop     esi
        ret
    }
}
