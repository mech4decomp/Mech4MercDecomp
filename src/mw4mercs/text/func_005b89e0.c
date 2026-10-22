/*
 * FUN_005b89e0 (21 B) — __thiscall (ECX = this), RET 8 (two stack params).
 *
 * Copies a byte from param_1 and a dword from param_2 into this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_005b89e0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dl, byte ptr [ecx]
        mov     ecx, dword ptr [esp + 0x8]
        mov     byte ptr [eax], dl
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        ret     8
    }
}
