/*
 * FUN_00493160 (22 B) — __thiscall (ECX = this), RET 8 (2 stack params).
 * Copies *param_1 into *this, copies *param_2 into this[4] (byte).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00493160(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [eax], edx
        mov     dl, byte ptr [ecx]
        mov     byte ptr [eax + 4], dl
        ret     8
    }
}
