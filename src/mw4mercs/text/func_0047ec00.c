/*
 * FUN_0047ec00 (25 B) — __thiscall (RET 0xc): stores 3 dword params into
 * the object at ECX (a 3-float vector). MLR helper.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void FUN_0047ec00(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax + 0x8], ecx
        ret     0xc
    }
}
