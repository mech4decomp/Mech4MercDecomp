/*
 * FUN_00493180 (19 B) — __thiscall (ECX = this), RET 4 (1 stack param).
 * Copies *param_1 into *this, copies param_1[4] (byte) into this[4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __fastcall FUN_00493180(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [ecx]
        mov     cl, byte ptr [ecx + 4]
        mov     dword ptr [eax], edx
        mov     byte ptr [eax + 4], cl
        ret     4
    }
}
