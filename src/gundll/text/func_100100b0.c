/*
 * FUN_100100b0 (37 B) - __thiscall, RET 0x4. Constructor: calls
 * FUN_1001c9e0(this, 0x2301, param_1), stores vtable 0x1004974c, zeroes
 * this+0x1c, returns this.
 *
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9e0(void);   /* rel32 call */

__declspec(naked) void FUN_100100b0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        push    eax
        push    0x2301
        mov     esi, ecx
        call    FUN_1001c9e0
        mov     dword ptr [esi], 0x1004974c
        mov     dword ptr [esi+0x1c], 0x0
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
