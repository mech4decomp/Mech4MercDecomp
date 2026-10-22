/*
 * FUN_0069fd30 (14 B) — __thiscall (RET 0x4): reads a pointer field at
 * offset 0x8 of *(*this) and stores it into *arg0 (a getter).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0069fd30(void)
{
    __asm {
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [eax + 0x8]
        mov     eax, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        ret     0x4
    }
}
