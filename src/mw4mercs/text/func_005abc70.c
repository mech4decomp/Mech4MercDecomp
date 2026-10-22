/*
 * FUN_005abc70 (30 B) — __thiscall destructor wrapper.
 *
 * Saves this (ECX) in ESI, calls FUN_005abc90() (vtable init),
 * then if (param_2 & 1) calls FUN_004084e0(this) (operator delete).
 * Returns this.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __fastcall FUN_005abc90(void);
extern void __cdecl FUN_004084e0(void *p);

__declspec(naked) void __stdcall FUN_005abc70(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005abc90
        test    byte ptr [esp + 0x8], 0x1
        jz      done
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
