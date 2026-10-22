/*
 * FUN_00625540 (22 B) — __thiscall copy helper: writes a dword from arg1
 * and a byte from arg2 into the object (this). RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00625540(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [esp + 0x8]
        mov     dword ptr [eax], edx
        mov     dl, byte ptr [ecx]
        mov     byte ptr [eax + 0x4], dl
        ret     0x8
    }
}
