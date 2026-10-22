/*
 * FUN_10021150 (40 B) - __fastcall. Ctor: calls FUN_1001c820(0xa200),
 * zeroes this+0x24..+0x34, stores vtable 0x1004aa80 at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c820(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10021150(void)
{
    __asm {
        push    esi
        push    0xa200
        mov     esi, ecx
        call    FUN_1001c820
        xor     eax, eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi + 0x30], eax
        mov     dword ptr [esi + 0x34], eax
        mov     dword ptr [esi], 0x1004aa80
        mov     eax, esi
        pop     esi
        ret
    }
}
