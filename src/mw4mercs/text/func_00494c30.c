/*
 * FUN_00494C30 (115 B) — __thiscall (ECX = this), RET 8 (2 stack params).
 * Constructor: calls FUN_004ab1e0(0x531, param1, param2), initializes
 * sub-objects at +0x278 and +0x284 via FUN_004ae3c0, zeroes fields,
 * sets vtable to 0x77014c, sets field_26c=0x50, field_270=0x30.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern int __fastcall FUN_004ab1e0(int type, int param1, int param2);
extern void __fastcall FUN_004ae3c0(void);

__declspec(naked) void __fastcall FUN_00494c30(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esp + 0x8]
        push    eax
        push    ecx
        push    0x531
        mov     ecx, esi
        call    FUN_004ab1e0
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
        ret     0x8
    }
}
