/*
 * FUN_004E4CF0 (25 B) — Constructor: call FUN_004E4CB0(param),
 * set vtable=0x773f98, return this.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004e4cb0(void);

__declspec(naked) void __fastcall FUN_004e4cf0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    esi
        mov     esi, ecx
        push    eax
        call    FUN_004e4cb0
        _emit 0xC7
        _emit 0x06
        _emit 0x98
        _emit 0x3F
        _emit 0x77
        _emit 0x00
        mov     eax, esi
        pop     esi
        ret     4
    }
}
