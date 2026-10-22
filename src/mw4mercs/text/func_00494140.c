/*
 * FUN_00494140 (37 B) — __fastcall (ECX = this).
 * Destructor body: sets vtable to 0x77012c, calls cleanup on this+0x14,
 * then calls base destructor FUN_00415380.
 *
 * CFLAGS: /O1
 */

#include <windows.h>

extern void __fastcall FUN_004179f0(void *param_1);
extern void __fastcall FUN_00417980(void *param_1);
extern void __fastcall FUN_00415380(void);

__declspec(naked) void __fastcall FUN_00494140(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi + 0x14]
        mov     ecx, edi
        _emit 0xC7  /* mov dword ptr [esi], 0x77012c */
        _emit 0x06
        _emit 0x2C
        _emit 0x01
        _emit 0x77
        _emit 0x00
        call    FUN_004179f0
        mov     ecx, edi
        call    FUN_00417980
        mov     ecx, esi
        call    FUN_00415380
        pop     edi
        pop     esi
        ret
    }
}
