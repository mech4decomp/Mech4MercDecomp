/*
 * FUN_0068df20 (19 B) — __thiscall: copies an 8-byte struct from arg1
 * into the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0068df20(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     edx, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + 0x4]
        mov     dword ptr [eax], edx
        mov     dword ptr [eax + 0x4], ecx
        ret     0x4
    }
}
