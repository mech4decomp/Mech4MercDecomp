/*
 * FUN_00602c20 (18 B) — __thiscall: writes two dword args into this[0]
 * and this[1]. Returns 8 bytes of args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00602c20(void)
{
    __asm {
        mov     edx, dword ptr [esp+8]
        mov     eax, ecx
        mov     ecx, dword ptr [esp+4]
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax+4], edx
        ret     8
    }
}
