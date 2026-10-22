/*
 * FUN_0041ccb0 (40 B) — copy a 3x4 matrix (12 floats) from [esp+4] into
 * ECX, then set the 4th row to identity (0,0,0,1). __thiscall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041ccb0(void)
{
    __asm {
        mov     eax, ecx
        push    esi
        mov     esi, dword ptr [esp+0x8]
        push    edi
        mov     ecx, 0xc
        mov     edi, eax
        rep movsd
        xor     ecx, ecx
        mov     dword ptr [eax+0x30], ecx
        mov     dword ptr [eax+0x34], ecx
        pop     edi
        mov     dword ptr [eax+0x38], ecx
        mov     dword ptr [eax+0x3c], 0x3f800000
        pop     esi
        ret     0x4
    }
}
