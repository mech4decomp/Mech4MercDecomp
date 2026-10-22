/*
 * FUN_1001e4d0 (40 B) - __fastcall thiscall ctor. Calls base ctor
 * FUN_1001c6e0(this, 0xc104), zeroes fields +0x20..+0x30, stores vtable
 * 0x1004a9c0 at this+0, returns this.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6e0(void);   /* rel32 call */

__declspec(naked) void __fastcall FUN_1001e4d0(void)
{
    __asm {
        push    esi
        push    0xc104
        mov     esi, ecx
        call    FUN_1001c6e0
        xor     eax, eax
        mov     dword ptr [esi + 0x20], eax
        mov     dword ptr [esi + 0x24], eax
        mov     dword ptr [esi + 0x28], eax
        mov     dword ptr [esi + 0x2c], eax
        mov     dword ptr [esi + 0x30], eax
        mov     dword ptr [esi], 0x1004a9c0
        mov     eax, esi
        pop     esi
        ret
    }
}
