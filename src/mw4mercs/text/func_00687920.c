/*
 * FUN_00687920 (21 B) — __thiscall, RET 0x8. Copies a byte from param_1
 * then a dword from param_2 into this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00687920(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp+0x4]
        mov     dl, byte ptr [ecx]
        mov     ecx, dword ptr [esp+0x8]
        mov     byte ptr [eax], dl
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        ret     0x8
    }
}
