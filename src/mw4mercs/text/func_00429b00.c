/*
 * FUN_00429b00 (30 B) — __thiscall dtor: calls FUN_00429e60 (base dtor),
 * then if (param_1 & 1) frees the object; returns `this`.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00429e60(void);
extern void __cdecl FUN_004084e0(void *);

__declspec(naked) void FUN_00429b00(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00429e60
        test    byte ptr [esp+8], 1
        jz      L_429b18
        push    esi
        call    FUN_004084e0
        add     esp, 4
L_429b18:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
