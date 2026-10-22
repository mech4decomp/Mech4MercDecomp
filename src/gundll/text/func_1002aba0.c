/*
 * FUN_1002ABA0 (31 B) - __thiscall (this in ecx).  Constructor: calls
 * FUN_1001c6e0(this,0x2107), zeroes this->+0x20/+0x24, sets the vtable
 * pointer to 0x1004ad38, returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call (root ctor) */

__declspec(naked) void FUN_1002ABA0(void)
{
    __asm {
        push    esi
        push    0x2107
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi], 0x1004ad38
        mov     eax, esi
        pop     esi
        ret
    }
}
