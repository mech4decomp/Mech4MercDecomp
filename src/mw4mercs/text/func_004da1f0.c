/*
 * FUN_004DA1F0 (23 B) — Thunk: loads ECX from [this+0xd8]->[ECX+0x10],
 * then calls FUN_004E92C0(this, param).
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_004e92c0(void);

__declspec(naked) void __fastcall FUN_004da1f0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    eax
        push    ecx
        mov     ecx, dword ptr [ecx + 0xd8]
        mov     ecx, dword ptr [ecx + 0x10]
        call    FUN_004e92c0
        ret     4
    }
}
