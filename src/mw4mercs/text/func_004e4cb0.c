/*
 * FUN_004E4CB0 (25 B) — Constructor: call FUN_004E4C40(param),
 * set vtable=0x773f8c, return this.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004e4c40(void);

__declspec(naked) void __fastcall FUN_004e4cb0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_004e4c40
        _emit 0xC7
        _emit 0x06
        _emit 0x8C
        _emit 0x3F
        _emit 0x77
        _emit 0x00
        mov     eax, esi
        pop     esi
        ret     4
    }
}
