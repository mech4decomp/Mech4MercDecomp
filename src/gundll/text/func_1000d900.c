/*
 * FUN_1000d900 (23 B) - __fastcall. Ctor: calls FUN_1001c9a0(this, 0x1301),
 * stores vtable 0x10049674 at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9a0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_1000d900(void)
{
    __asm {
        push    esi
        push    0x1301
        mov     esi, ecx
        call    FUN_1001c9a0
        mov     dword ptr [esi], 0x10049674
        mov     eax, esi
        pop     esi
        ret
    }
}
