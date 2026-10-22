/*
 * FUN_004f2370 (45 B) -- MLR/Adept object constructor (__fastcall, ECX=this).
 * Zeroes 8 dwords (offsets 0x00..0x1c), a byte at 0x24, and sets 0x28=1.0f
 * (0x3f800000) and 0x20=0xffffffff.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_004f2370(void)
{
    __asm {
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax], ecx
        mov     dword ptr [eax + 0xc], ecx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0x14], ecx
        mov     dword ptr [eax + 0x10], ecx
        mov     dword ptr [eax + 0x1c], ecx
        mov     dword ptr [eax + 0x18], ecx
        mov     byte ptr [eax + 0x24], cl
        mov     dword ptr [eax + 0x28], 0x3f800000
        mov     dword ptr [eax + 0x20], 0xffffffff
        ret
    }
}
