/*
 * FUN_100178B0 (23 B) - __thiscall. Ctor: calls FUN_1001c820(this, 0x520e),
 * stores vtable 0x100499e0 at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_100178B0(void)
{
    __asm {
        push    esi
        push    0x520e
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x100499e0
        mov     eax, esi
        pop     esi
        ret
    }
}
