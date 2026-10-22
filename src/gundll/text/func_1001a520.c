/*
 * FUN_1001a520 (40 B) - __thiscall. Ctor: calls FUN_1001c820(this, 0x7204),
 * zeroes this->+0x24..+0x34, stores vtable 0x10049ac4 at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void FUN_1001a520(void)
{
    __asm {
        push    esi
        push    0x7204
        mov     esi, ecx
        call    FUN_1001c820
        xor     eax, eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi + 0x30], eax
        mov     dword ptr [esi + 0x34], eax
        mov     dword ptr [esi], 0x10049ac4
        mov     eax, esi
        pop     esi
        ret
    }
}
