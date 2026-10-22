/*
 * FUN_00603710 (30 B) — __thiscall scalar deleting destructor: calls the
 * real dtor (FUN_00603730), then if the deleting flag (arg at [esp+8]) is
 * set, frees the object via FUN_004084e0. Returns this in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00603730(void);
extern void __cdecl FUN_004084e0(int);

__declspec(naked) void FUN_00603710(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_00603730
        test    byte ptr [esp + 0x8], 0x1
        jz      L_skip
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
L_skip:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
