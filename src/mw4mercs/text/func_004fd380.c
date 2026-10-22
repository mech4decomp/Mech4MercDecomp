/*
 * FUN_004FD380 (23 B) — Vtable setter: this[0]=0x76cd64, this[1]=param,
 * this[2]=*param.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_004fd380(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [eax + 4], ecx
        mov     ecx, dword ptr [ecx]
        mov     dword ptr [eax + 8], ecx
        _emit 0xC7
        _emit 0x00
        _emit 0x64
        _emit 0xCD
        _emit 0x76
        _emit 0x00
        ret     4
    }
}
