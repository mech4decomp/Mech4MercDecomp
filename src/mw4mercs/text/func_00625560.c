/*
 * FUN_00625560 (19 B) — __thiscall copy of a 5-byte struct
 * (dword + byte) from the stack argument into *this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00625560(void)
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
