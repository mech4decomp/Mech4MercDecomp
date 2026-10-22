/*
 * FUN_00500B40 (30 B) — __thiscall (RET 0x8). Copies a 12-byte struct
 * from [arg1] to [this+0x1c]+arg0. (Identical to FUN_00500A20.)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00500B40(void)
{
    __asm {
        mov     eax, dword ptr [ecx + 0x1c]
        add     eax, dword ptr [esp + 4]
        mov     ecx, dword ptr [esp + 8]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 4]
        mov     ecx, dword ptr [ecx + 8]
        mov     dword ptr [eax + 4], edx
        mov     dword ptr [eax + 8], ecx
        ret     8
    }
}
