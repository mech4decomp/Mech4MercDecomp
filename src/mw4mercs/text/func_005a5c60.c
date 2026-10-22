/*
 * FUN_005a5c60 (44 B) — Assert-like function with "Not implemented" message.
 *
 * Calls FUN_006fab90("Not implemented"), if result != 0 triggers INT3,
 * then calls FUN_005f3760(this, param1, param2).
 *
 * __thiscall (ECX = this), RET 8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_006fab90(const char *msg);
extern void __stdcall FUN_005f3760(void *this, void *p1, void *p2);

__declspec(naked) void __stdcall FUN_005a5c60(void *param1, void *param2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        push    0x76d414
        mov     esi, ecx
        call    FUN_006fab90
        add     esp, 0x04
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
        ret     0x08
    }
}
