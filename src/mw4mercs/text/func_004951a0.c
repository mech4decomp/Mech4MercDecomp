/*
 * FUN_004951A0 (53 B) — __fastcall (ECX = this).
 * Destructor body: sets vtable to 0x770170, calls vtable[0] on
 * field_b0 with arg 1 if non-null, frees field_a8 if non-null,
 * then calls FUN_00494140.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __cdecl FUN_004084e0(void *);
extern void __fastcall FUN_00494140(void);

__declspec(naked) void __fastcall FUN_004951a0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0xb0]
        test    ecx, ecx
        _emit 0xC7  /* mov dword ptr [esi], 0x770170 */
        _emit 0x06
        _emit 0x70
        _emit 0x01
        _emit 0x77
        _emit 0x00
        jz      l_skip_vcall
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax]
    l_skip_vcall:
        mov     eax, dword ptr [esi + 0xa8]
        test    eax, eax
        jz      l_skip_free
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_skip_free:
        mov     ecx, esi
        call    FUN_00494140
        pop     esi
        ret
    }
}
