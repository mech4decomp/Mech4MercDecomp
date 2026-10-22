/*
 * FUN_005a4d40 (44 B) — __thiscall with assert check.
 *
 * Calls FUN_006fab90("Not implemented"), if non-zero triggers INT3,
 * otherwise calls FUN_005a50e0 with two stack params.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_006fab90(char *msg);
extern void __stdcall FUN_005a50e0(int a, int b);

void __declspec(naked) __stdcall FUN_005a4d40(int a, int b)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        push    0x76d414
        mov     esi, ecx
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      skip_assert
        int     3
skip_assert:
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005a50e0
        pop     esi
        pop     ebp
        ret     0x8
    }
}
