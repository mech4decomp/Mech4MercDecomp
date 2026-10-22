/*
 * FUN_10022160 (34 B) - __thiscall ctor.  Calls FUN_1001c6e0(this, 0x8100),
 * zeroes this+0x20/0x24/0x28, stores vtable 0x1004aad4 at this+0, returns
 * this.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10022160(void)
{
    __asm {
        push    esi
        push    0x8100
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi+0x20], eax
        mov     dword ptr [esi+0x24], eax
        mov     dword ptr [esi+0x28], eax
        mov     dword ptr [esi], 0x1004aad4
        mov     eax, esi
        pop     esi
        ret
    }
}
