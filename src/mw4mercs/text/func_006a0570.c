/*
 * FUN_006a0570 (19 B) — __thiscall RET 0x4. Copies a 5-byte struct
 * (dword + byte) from arg0 into *this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_006a0570(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     cl, byte ptr [ecx + 0x4]
        mov     dword ptr [eax], edx
        mov     byte ptr [eax + 0x4], cl
        ret     0x4
    }
}
