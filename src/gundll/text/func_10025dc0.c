/*
 * FUN_10025dc0 (43 B) - __fastcall. Ctor: calls FUN_1001c6e0(this, 0x5150),
 * zeroes this+0x20..0x34, stores vtable 0x1004abe8 at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10025dc0(void)
{
    __asm {
        push    esi
        push    0x5150
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi + 0x30], eax
        mov     dword ptr [esi + 0x34], eax
        mov     dword ptr [esi], 0x1004abe8
        mov     eax, esi
        pop     esi
        ret
    }
}
