/*
 * FUN_1000bf00 (278 B) - __fastcall. Constructor for a stats object
 * (ECX = this). Initializes a set of growable-buffer triplets
 * (len/cap/granularity) to 0/0x400, sets the vtable pointer @ 0x100214c8,
 * and zeroes the header fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_100214c8;   /* vtable @ 0x100214c8 */

__declspec(naked) void __cdecl FUN_1000bf00(void)
{
    __asm {
        mov     eax, ecx
        mov     edx, 0x400
        xor     ecx, ecx
        mov     dword ptr [eax + 0x4c], ecx
        mov     dword ptr [eax + 0x50], ecx
        mov     dword ptr [eax + 0x54], ecx
        mov     dword ptr [eax + 0x58], ecx
        mov     dword ptr [eax + 0x5c], ecx
        mov     dword ptr [eax + 0x60], edx
        mov     dword ptr [eax + 0xe4], ecx
        mov     dword ptr [eax + 0xe8], ecx
        mov     dword ptr [eax + 0xec], ecx
        mov     dword ptr [eax + 0xf0], ecx
        mov     dword ptr [eax + 0xf4], ecx
        mov     dword ptr [eax + 0xf8], edx
        mov     dword ptr [eax + 0x17c], ecx
        mov     dword ptr [eax + 0x180], ecx
        mov     dword ptr [eax + 0x184], ecx
        mov     dword ptr [eax + 0x188], ecx
        mov     dword ptr [eax + 0x18c], ecx
        mov     dword ptr [eax + 0x190], edx
        mov     dword ptr [eax + 0x214], ecx
        mov     dword ptr [eax + 0x218], ecx
        mov     dword ptr [eax + 0x21c], ecx
        mov     dword ptr [eax + 0x220], ecx
        mov     dword ptr [eax + 0x224], ecx
        mov     dword ptr [eax + 0x228], edx
        mov     dword ptr [eax + 0x2ac], ecx
        mov     dword ptr [eax + 0x2b0], ecx
        mov     dword ptr [eax + 0x2b4], ecx
        mov     dword ptr [eax + 0x2b8], ecx
        mov     dword ptr [eax + 0x2bc], ecx
        mov     dword ptr [eax + 0x2c0], edx
        mov     dword ptr [eax + 0x344], ecx
        mov     dword ptr [eax + 0x348], ecx
        mov     dword ptr [eax + 0x34c], ecx
        mov     dword ptr [eax + 0x350], ecx
        mov     dword ptr [eax + 0x354], ecx
        mov     dword ptr [eax + 0x358], edx
        mov     dword ptr [eax + 0x3dc], ecx
        mov     dword ptr [eax + 0x3e0], ecx
        mov     dword ptr [eax + 0x3e4], ecx
        mov     dword ptr [eax + 0x3e8], ecx
        mov     dword ptr [eax + 0x3ec], ecx
        mov     dword ptr [eax + 0x3f0], edx
        mov     dword ptr [eax], offset g_100214c8
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], ecx
        mov     dword ptr [eax + 0x3c], ecx
        mov     dword ptr [eax + 0x48], ecx
        mov     dword ptr [eax + 0x40], 0x1
        mov     dword ptr [eax + 0x30], ecx
        mov     dword ptr [eax + 0x34], ecx
        mov     dword ptr [eax + 0x38], ecx
        ret
    }
}
