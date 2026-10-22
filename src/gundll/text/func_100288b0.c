/*
 * FUN_100288b0 (23 B) - __thiscall. Ctor: calls FUN_1001c820(this, 0x5254),
 * stores vtable 0x1004ac9c at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_100288b0(void)
{
    __asm {
        push    esi
        push    0x5254
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x1004ac9c
        mov     eax, esi
        pop     esi
        ret
    }
}
