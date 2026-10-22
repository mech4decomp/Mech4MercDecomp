/*
 * FUN_005b23d0 (30 B) — __thiscall (ECX=this), RET 4. Calls FUN_005b23f0
 * (destructor), then frees `this` via FUN_004084e0 if the low bit of the
 * stack flag param is set.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_005b23f0(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_005b23d0(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005b23f0
        test    byte ptr [esp + 0x8], 0x1
        jz      L23E8
        push    esi
        call    FUN_004084e0
        add     esp, 4
L23E8:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
