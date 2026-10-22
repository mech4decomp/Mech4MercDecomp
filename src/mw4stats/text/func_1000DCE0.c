/*
 * FUN_1000dce0 (20 B) - vtable init: sets vtable ptr 0x100214e4 and zeroes
 * fields at +4/+8/+0xc.
 *
 * __fastcall (ECX = this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_1000dce0(void)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], 0x100214e4
        mov     dword ptr [eax+4], ecx
        mov     dword ptr [eax+0xc], ecx
        mov     dword ptr [eax+8], ecx
        ret
    }
}
