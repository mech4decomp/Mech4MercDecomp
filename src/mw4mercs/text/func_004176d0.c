/*
 * FUN_004176d0 (12 B) — __fastcall container iterator accessor:
 * this->+0x10 = (this->+0x4)->+0xc.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_004176d0(void)
{
    __asm {
        mov     eax, ecx
        mov     ecx, dword ptr [eax+0x4]
        mov     edx, dword ptr [ecx+0xc]
        mov     dword ptr [eax+0x10], edx
        ret
    }
}
