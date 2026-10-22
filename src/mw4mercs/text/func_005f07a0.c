/*
 * FUN_005f07a0 (30 B) — __thiscall (ECX=this), RET 4 (one stack param).
 *
 * Calls FUN_005f07e0 (vtable init), then if (param & 1) frees this via
 * FUN_004084e0. Returns this.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005f07e0(void *this);
extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005f07a0(void *p)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005f07e0
        test    byte ptr [esp + 0x8], 0x1
        jz      L1
        push    esi
        call    FUN_004084e0
        add     esp, 4
L1:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
