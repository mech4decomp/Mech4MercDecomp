/*
 * FUN_00417720 (20 B) — __fastcall container iterator pop-front (variant):
 * if this->+0x10 != 0, return its +0xc and advance this->+0x10 to
 * (this->+0x10)->+0x14; else return 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_00417720(void)
{
    __asm {
        mov     edx, dword ptr [ecx+0x10]
        test    edx, edx
        jz      label1
        mov     eax, dword ptr [edx+0xc]
        mov     edx, dword ptr [edx+0x14]
        mov     dword ptr [ecx+0x10], edx
        ret
label1:
        xor     eax, eax
        ret
    }
}
