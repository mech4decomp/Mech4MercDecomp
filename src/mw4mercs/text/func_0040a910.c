/*
 * FUN_0040a910 (30 B) — __thiscall destructor: calls base dtor FUN_00416e50,
 * then if (flag & 1) calls operator delete FUN_004084e0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00416e50(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void FUN_0040a910(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00416e50
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
