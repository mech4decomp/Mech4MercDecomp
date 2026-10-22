/*
 * FUN_100257b0 (34 B) - __fastcall. Ctor: calls FUN_1001c9a0(this, 0x4603),
 * zeroes this+0x1c/0x20/0x24, stores vtable 0x1004abd0 at this+0, returns this.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9a0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_100257b0(void)
{
    __asm {
        push    esi
        push    0x4603
        mov     esi, ecx
        call    FUN_1001c9a0
        xor     eax, eax
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi], 0x1004abd0
        mov     eax, esi
        pop     esi
        ret
    }
}
