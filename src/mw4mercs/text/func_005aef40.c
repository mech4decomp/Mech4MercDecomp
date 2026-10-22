/*
 * FUN_005aef40 (30 B) — scalar deleting destructor, __thiscall (ECX = this), RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_0041fc90(void *ecx);
extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005aef40(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_0041fc90
        test    byte ptr [esp + 0x8], 0x1
        jz      skip
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
skip:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
