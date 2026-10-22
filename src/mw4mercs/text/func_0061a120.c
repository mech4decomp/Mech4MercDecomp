/*
 * FUN_0061a120 (50 B) — __thiscall. Decrements a refcount stored at
 * [*this - 1]; frees the buffer when it hits zero. If (arg & 1) frees
 * this. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void FUN_0061a120(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_skip1
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_skip1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_skip1:
        test    byte ptr [esp + 0x8], 0x1
        jz      L_skip2
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    L_skip2:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
