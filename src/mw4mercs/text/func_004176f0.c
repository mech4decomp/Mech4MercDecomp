/*
 * FUN_004176f0 (12 B) — __fastcall container iterator accessor:
 * this->+0x10 = (this->+0x10)->+0x14.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004176f0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [eax+0x10]
        mov     edx, dword ptr [ecx+0x14]
        mov     dword ptr [eax+0x10], edx
        ret
    }
}
