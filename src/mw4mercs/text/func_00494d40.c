/*
 * FUN_00494D40 (56 B) — __fastcall (ECX = this).
 * Destructor body: sets vtable to 0x77014c, frees field_288 and
 * field_27c if non-null, then calls FUN_004ab750.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __cdecl FUN_004084e0(void *);
extern void __fastcall FUN_004ab750(void);

__declspec(naked) void __fastcall FUN_00494d40(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        _emit 0xC7  /* mov dword ptr [esi], 0x77014c */
        _emit 0x06
        _emit 0x4C
        _emit 0x01
        _emit 0x77
        _emit 0x00
        mov     eax, dword ptr [esi + 0x288]
        test    eax, eax
        jz      l_skip_free1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_skip_free1:
        mov     eax, dword ptr [esi + 0x27c]
        test    eax, eax
        jz      l_skip_free2
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_skip_free2:
        mov     ecx, esi
        call    FUN_004ab750
        pop     esi
        ret
    }
}
