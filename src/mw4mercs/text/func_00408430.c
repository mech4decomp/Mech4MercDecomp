/*
 * FUN_00408430 (35 B) — __thiscall, RET 0x4: allocates a 0x18-byte node,
 * copies a byte from the argument into the node, and returns the node.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);

__declspec(naked) void FUN_00408430(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        mov     cl, byte ptr [eax]
        mov     byte ptr [esi], cl
        push    0x18
        mov     dword ptr [esi], 0
        call    FUN_004084d0
        mov     dword ptr [esi], eax
        add     esp, 0x4
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
