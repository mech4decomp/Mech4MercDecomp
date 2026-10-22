/*
 * FUN_004EBA90 (23 B) — Constructor: set vtable, call two init funcs.
 *
 * __fastcall (ECX = this), RET (no stack params).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004ec2e0(void);
extern void __fastcall FUN_004ec270(void);

__declspec(naked) void __fastcall FUN_004eba90(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        _emit 0xC7
        _emit 0x06
        _emit 0xE8
        _emit 0x46
        _emit 0x77
        _emit 0x00
        call    FUN_004ec2e0
        mov     ecx, esi
        call    FUN_004ec270
        pop     esi
        ret
    }
}
