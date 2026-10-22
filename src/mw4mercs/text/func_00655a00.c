/*
 * FUN_00655a00 (30 B) — __thiscall accessor: returns a float from a
 * 2D-indexed array at this+0x400004. RET 0x8 (2 stack args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00655a00(void)
{
    __asm {
        mov     eax, dword ptr [esp+0x4]
        mov     ecx, dword ptr [ecx+0x400004]
        lea     edx, [eax+eax*2]
        mov     eax, dword ptr [esp+0x8]
        mov     ecx, dword ptr [ecx+edx*4]
        lea     eax, [eax+eax*4]
        fld     dword ptr [ecx+eax*8+0xc]
        ret     0x8
    }
}
