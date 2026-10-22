/*
 * FUN_0062baa0 (24 B) — ABL/game-logic small-object initializer.
 * Zeroes a 0xc-byte struct at ECX and stores a byte flag read from
 * the pointer arg ([ESP+4]) into [ECX+8]. Returns ECX in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0062baa0(void)
{
    __asm {
        mov     edx, dword ptr [esp + 0x4]
        mov     dl, byte ptr [edx]
        mov     eax, ecx
        xor     ecx, ecx
        mov     dword ptr [eax], ecx
        mov     byte ptr [eax + 0x8], dl
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [eax + 0x8], ecx
        ret     0x4
    }
}
