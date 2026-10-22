/*
 * FUN_10025a90 (37 B) - __fastcall. Ctor: calls FUN_1001c9a0(this, 0x4604),
 * zeroes this+0x1c/0x20/0x24/0x28, stores vtable 0x1004abdc at this+0,
 * returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9a0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10025a90(void)
{
    __asm {
        push    esi
        push    0x4604
        mov     esi, ecx
        call    FUN_1001c9a0
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi], 0x1004abdc
        mov     eax, esi
        pop     esi
        ret
    }
}
