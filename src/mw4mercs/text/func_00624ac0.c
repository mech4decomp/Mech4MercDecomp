/*
 * FUN_00624ac0 (21 B) — __thiscall copy helper: writes a byte from arg1 and
 * a dword from arg2 into the object (this). RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00624ac0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dl, byte ptr [ecx]
        mov     ecx, dword ptr [esp + 0x8]
        mov     byte ptr [eax], dl
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        ret     0x8
    }
}
