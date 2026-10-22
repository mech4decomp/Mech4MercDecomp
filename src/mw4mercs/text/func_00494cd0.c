/*
 * FUN_00494CD0 (101 B) — __fastcall (ECX = this).
 * Constructor: calls FUN_004ab5c0(0x531), initializes sub-objects
 * at +0x278 and +0x284 via FUN_004ae3c0, zeroes fields,
 * sets vtable to 0x77014c, sets field_26c=0x50, field_270=0x30.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern int __fastcall FUN_004ab5c0(int type);
extern void __fastcall FUN_004ae3c0(void);

__declspec(naked) void __fastcall FUN_00494cd0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    0x531
        call    FUN_004ab5c0
        lea     ecx, [esi + 0x278]
        mov     dword ptr [esi + 0x274], 0x5
        call    FUN_004ae3c0
        lea     ecx, [esi + 0x284]
        call    FUN_004ae3c0
        xor     eax, eax
        mov     dword ptr [esi + 0x294], eax
        mov     dword ptr [esi + 0x29c], eax
        mov     dword ptr [esi + 0x2a4], eax
        mov     dword ptr [esi + 0x2ac], eax
        _emit 0xC7  /* mov dword ptr [esi], 0x77014c */
        _emit 0x06
        _emit 0x4C
        _emit 0x01
        _emit 0x77
        _emit 0x00
        mov     dword ptr [esi + 0x26c], 0x50
        mov     dword ptr [esi + 0x270], 0x30
        mov     eax, esi
        pop     esi
        ret
    }
}
