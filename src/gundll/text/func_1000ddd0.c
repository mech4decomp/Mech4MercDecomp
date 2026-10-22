/*
 * FUN_1000ddd0 (31 B) - __fastcall ctor. Calls FUN_1001c6e0(this,0x2100),
 * zeroes [this+0x20]/[this+0x24], sets vtable ptr 0x10049698.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_1000ddd0(void)
{
    __asm {
        push    esi
        push    0x2100
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi], 0x10049698
        mov     eax, esi
        pop     esi
        ret
    }
}
