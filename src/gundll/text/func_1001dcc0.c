/*
 * FUN_1001dcc0 (34 B) - __fastcall thiscall ctor. Calls base ctor
 * FUN_1001c6e0(this, 0xc100), zeroes fields +0x20/+0x24/+0x28, stores
 * vtable 0x1004a990 at this+0, returns this.
 * (Transcribed from reference bytes; gaptext. Leading data 0x1001dc8b..0x1001dcbf skipped.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_1001dcc0(void)
{
    __asm {
        push    esi
        push    0xc100
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi], 0x1004a990
        mov     eax, esi
        pop     esi
        ret
    }
}
