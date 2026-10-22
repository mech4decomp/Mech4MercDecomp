/*
 * FUN_004DF900 (23 B) — Vtable setter: this[0]=0x77392c, this[1]=param,
 * this[2]=*param.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004df900(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax + 8], ecx
        _emit 0xC7
        _emit 0x00
        _emit 0x2C
        _emit 0x39
        _emit 0x77
        _emit 0x00
        ret     4
    }
}
