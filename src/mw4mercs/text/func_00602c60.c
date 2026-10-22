/*
 * FUN_00602c60 (26 B) — __thiscall: writes this->[0] into [esp+4]->[0]
 * and (1 << this->[1]) into [esp+4]->[1].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00602c60(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, dword ptr [ecx]
        mov     ecx, dword ptr [ecx + 0x4]
        mov     edx, 0x1
        shl     edx, cl
        mov     dword ptr [eax], esi
        pop     esi
        mov     dword ptr [eax + 0x4], edx
        ret     0x4
    }
}
