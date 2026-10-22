/*
 * FUN_005C0640 (30 B) — MechAI destructor (__thiscall, RET 4). Calls
 * FUN_005C0660, then if (param & 1) frees this via FUN_004084E0.
 * Returns this.
 *
 * __thiscall (ECX = this), RET 4.
 * CFLAGS: /O1
 */

extern void FUN_005c0660(void);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __stdcall FUN_005c0640(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005c0660
        test    byte ptr [esp + 8], 1
        jz      l_done
        push    esi
        call    FUN_004084e0
        add     esp, 4
    l_done:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
