/*
 * FUN_10022bd0 (37 B) - __thiscall ctor.  Calls FUN_1001c6e0(this, 0x8107),
 * zeroes this+0x20/0x24/0x28/0x2c, stores vtable 0x1004ab04 at this+0,
 * returns this.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10022bd0(void)
{
    __asm {
        push    esi
        push    0x8107
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi+0x20], eax
        mov     dword ptr [esi+0x24], eax
        mov     dword ptr [esi+0x28], eax
        mov     dword ptr [esi+0x2c], eax
        mov     dword ptr [esi], 0x1004ab04
        mov     eax, esi
        pop     esi
        ret
    }
}
