/*
 * FUN_006a0650 (22 B) — __thiscall RET 0x8. Copies a 5-byte struct
 * (dword from arg0 + byte from arg1) into *this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006a0650(void)
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
