/*
 * FUN_0041fc90 (15 B) — __thiscall. If the +0x4 member is non-null, calls its
 * virtual method at vtable+0x4 with arg 1 (a virtual "release/delete" call).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041fc90(void)
{
    __asm {
        mov     ecx, dword ptr [ecx + 0x4]
        test    ecx, ecx
        jz      LFC9E
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax + 0x4]
LFC9E:
        ret
    }
}
