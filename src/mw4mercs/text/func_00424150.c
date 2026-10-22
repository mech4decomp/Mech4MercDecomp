/*
 * FUN_00424150 (30 B) — __thiscall, RET 0x4. Scalar deleting destructor:
 * calls FUN_00424220 (dtor), then frees `this` if the flag arg has bit 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00424220(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_00424150(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00424220
        test    byte ptr [esp+0x8], 0x1
        jz      L_68
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_68:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
