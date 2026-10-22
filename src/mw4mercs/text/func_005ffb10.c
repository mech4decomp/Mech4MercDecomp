/*
 * FUN_005ffb10 (29 B) — __thiscall. Computes a capacity/offset from two
 * 8-byte range descriptors (ECX and [ESP+4]): ((a0-b0>>2)*0x20 - b1) + a1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_005ffb10(void)
{
    __asm {
        mov     edx, dword ptr [esp+0x4]
        mov     eax, dword ptr [ecx]
        push    esi
        sub     eax, dword ptr [edx]
        mov     esi, dword ptr [edx+0x4]
        mov     edx, dword ptr [ecx+0x4]
        sar     eax, 0x2
        shl     eax, 0x5
        sub     eax, esi
        add     eax, edx
        pop     esi
        ret     0x4
    }
}
