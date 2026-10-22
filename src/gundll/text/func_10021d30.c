/*
 * FUN_10021d30 (40 B) - __thiscall ctor.  Calls FUN_1001c9a0(this, 0xa300),
 * zeroes this+0x1c..+0x2c, stores vtable 0x1004aac8 at this+0, returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c9a0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_10021d30(void)
{
    __asm {
        push    esi
        push    0xa300
        mov     esi, ecx
        call    FUN_1001c9a0
        xor     eax, eax
        mov     dword ptr [esi+0x1c], eax
        mov     dword ptr [esi+0x20], eax
        mov     dword ptr [esi+0x24], eax
        mov     dword ptr [esi+0x28], eax
        mov     dword ptr [esi+0x2c], eax
        mov     dword ptr [esi], 0x1004aac8
        mov     eax, esi
        pop     esi
        ret
    }
}
