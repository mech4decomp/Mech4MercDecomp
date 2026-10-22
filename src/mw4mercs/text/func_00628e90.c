/*
 * FUN_00628e90 (20 B) -- ABL setter: if this+0x104 is non-null, stores the
 * byte stack arg into obj+0x68. __thiscall, RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00628e90(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x104]
        test    eax, eax
        jz      L28EA1
        mov     cl, byte ptr [esp + 0x4]
        mov     byte ptr [eax + 0x68], cl
L28EA1:
        ret     0x4
    }
}
