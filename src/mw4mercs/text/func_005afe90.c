/*
 * FUN_005afe90 (44 B) — __thiscall, RET 8.
 *
 * Asserts via FUN_006fab90("Not implemented"); if the assert returns
 * non-zero, traps with INT3. Otherwise calls FUN_005b1300(param_1, param_2)
 * (thiscall, ECX=this).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fab90(const char *msg);
extern void FUN_005b1300(void *this, int a, int b);

__declspec(naked) void __stdcall FUN_005afe90(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        push    0x76d414
        mov     esi, ecx
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      cont
        int     3
cont:
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005b1300
        pop     esi
        pop     ebp
        ret     8
    }
}
