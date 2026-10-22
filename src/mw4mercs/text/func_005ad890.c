/*
 * FUN_005AD890 (30 B) — __thiscall (ECX = this), RET 4 (byte flags). Destructor.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_005AD8B0(void);
extern void __cdecl FUN_004084E0(void *param);

__declspec(naked) void __stdcall FUN_005AD890(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_005AD8B0
        test    byte ptr [esp + 0x8], 0x1
        jz      L8A8
        push    esi
        call    FUN_004084E0
        add     esp, 0x4
L8A8:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
