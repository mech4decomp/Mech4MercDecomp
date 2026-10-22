/*
 * FUN_005a3ee0 (44 B) — Constructor with 2 params.
 *
 * Calls FUN_006fab90("Not implemented"), asserts result == 0,
 * then calls FUN_005f3760(this, param1, param2).
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_006fab90(const char *s);
extern void __stdcall FUN_005f3760(void *this, int param1, int param2);

__declspec(naked) void __stdcall FUN_005a3ee0(void *this, int param1, int param2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        push    0x0076d414
        mov     esi, ecx
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      skip_int3
        int     3
skip_int3:
        mov     eax, dword ptr [ebp + 0x0c]
        mov     ecx, dword ptr [ebp + 0x08]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005f3760
        pop     esi
        pop     ebp
        ret     8
    }
}
