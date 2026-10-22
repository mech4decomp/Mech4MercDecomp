/*
 * FUN_0040a810 (30 B) — __thiscall destructor: calls base dtor FUN_0040a080,
 * then if (flag & 1) calls operator delete FUN_004084e0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040a080(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_0040a810(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0040a080
        test    byte ptr [esp+0x8], 0x1
        jz      L1
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L1:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
