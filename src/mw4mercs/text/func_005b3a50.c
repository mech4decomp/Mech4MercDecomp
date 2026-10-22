/*
 * FUN_005b3a50 (30 B) — __thiscall destructor-ish: call FUN_004dd1c0();
 * if (param & 1) FUN_004084e0(this); return this. RET 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004dd1c0(void);
extern void __stdcall FUN_004084e0(void *param);

__declspec(naked) void __stdcall FUN_005b3a50(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004dd1c0
        test    byte ptr [esp + 0x8], 0x1
        jz      skip
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
skip:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
