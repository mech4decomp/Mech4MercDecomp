/*
 * FUN_00647f70 (22 B) -- __thiscall copy ctor (RET 0x8). Copies the 4-byte
 * value at *param_1 into *this and the byte at *param_2 into this[4].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00647f70(void)
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
