/*
 * FUN_10022440 (31 B) - __thiscall ctor.  Calls FUN_1001c6e0(this, 0x8101),
 * zeroes this+0x20/0x24, stores vtable 0x1004aae0 at this+0, returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10022440(void)
{
    __asm {
        push    esi
        push    0x8101
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi+0x20], eax
        mov     dword ptr [esi+0x24], eax
        mov     dword ptr [esi], 0x1004aae0
        mov     eax, esi
        pop     esi
        ret
    }
}
