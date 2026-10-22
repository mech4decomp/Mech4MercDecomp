/*
 * FUN_0041fcb0 (26 B) — __thiscall. If the +0x4 member is non-null, calls its
 * virtual method at vtable+0x4 with arg 1, then nulls the +0x4 member.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void FUN_0041fcb0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [esi + 0x4]
        test    ecx, ecx
        jz      LFCC8
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax + 0x4]
        mov     dword ptr [esi + 0x4], 0x0
LFCC8:
        pop     esi
        ret
    }
}
