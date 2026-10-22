/*
 * FUN_00421100 (25 B) — __thiscall (RET 0x4). Copies a 3-dword struct
 * from [ECX+0x4] to [EAX=this].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00421100(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [ecx + 0x4]
        mov     ecx, dword ptr [ecx + 0x8]
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], ecx
        ret     0x4
    }
}
