/*
 * FUN_100289f0 (23 B) - __thiscall. Ctor: calls FUN_1001c820(this, 0x5255),
 * stores vtable 0x1004aca8 at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_100289f0(void)
{
    __asm {
        push    esi
        push    0x5255
        mov     esi, ecx
        call    FUN_1001c820
        mov     dword ptr [esi], 0x1004aca8
        mov     eax, esi
        pop     esi
        ret
    }
}
