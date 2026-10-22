/*
 * FUN_0040c9c0 (25 B) — __thiscall setter. Stores three dword args
 * into the object at offsets 0x0/0x4/0x8. Returns the object pointer.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0040c9c0(void)
{
    __asm {
        mov     edx, dword ptr [esp+8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp+4]
        mov     dword ptr [eax], ecx
        mov     ecx, dword ptr [esp+0xc]
        mov     dword ptr [eax+4], edx
        mov     dword ptr [eax+8], ecx
        ret     0xc
    }
}
