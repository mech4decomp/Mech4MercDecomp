/*
 * FUN_00658eb0 (49 B) — __thiscall. Frees a buffer at [this+0x14] if set,
 * then pops a node from a linked list at [this+0x1c] and updates the
 * free-list head/end pointers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_00658eb0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x14]
        test    eax, eax
        jz      L_skip
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_skip:
        mov     eax, dword ptr [esi + 0x1c]
        sub     eax, 0x4
        mov     dword ptr [esi + 0x1c], eax
        mov     eax, dword ptr [eax]
        mov     dword ptr [esi + 0x14], eax
        add     eax, 0x200
        mov     dword ptr [esi + 0x18], eax
        sub     eax, 0x8
        mov     dword ptr [esi + 0x10], eax
        pop     esi
        ret
    }
}
