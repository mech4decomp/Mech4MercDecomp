/*
 * FUN_100129E0 (23 B) - __thiscall ctor.  Calls FUN_1001c820(this, 0x420b),
 * stores vtable 0x1004983c at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_100129E0(void)
{
    __asm {
        push    esi
        push    0x420b
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x1004983c
        mov     eax, esi
        pop     esi
        ret
    }
}
