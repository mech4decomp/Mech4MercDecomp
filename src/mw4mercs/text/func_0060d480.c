/*
 * FUN_0060d480 (36 B) — Constructor. Sets vtable pointer at this to
 * 0x78c0ac, calls FUN_00415380(), then if (param & 1) calls
 * FUN_004084e0(this). Returns this.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00415380(void);
extern void __cdecl FUN_004084e0(void *param);

__declspec(naked) void *__stdcall FUN_0060d480(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     dword ptr [esi], 0x78c0ac
        call    FUN_00415380
        test    byte ptr [esp + 0x8], 0x1
        jz      l_done
        push    esi
        call    FUN_004084e0
        add     esp, 0x4
    l_done:
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
