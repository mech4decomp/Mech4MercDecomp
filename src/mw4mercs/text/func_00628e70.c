/*
 * FUN_00628e70 (27 B) -- ABL setter: if this+0x14c is non-null, stores two
 * stack args into obj+0x74/0x78. __thiscall, RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00628e70(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x14c]
        test    eax, eax
        jz      L28E88
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [eax + 0x74], ecx
        mov     dword ptr [eax + 0x78], edx
L28E88:
        ret     0x8
    }
}
