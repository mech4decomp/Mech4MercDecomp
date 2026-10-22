/*
 * FUN_005a02f0 (44 B) — __thiscall with assertion and delegation.
 * Asserts via FUN_006fab90 (checking a global flag), then calls
 * FUN_005a0ed0 with two params. Returns void.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_006fab90(int);
extern void __stdcall FUN_005a0ed0(void);

__declspec(naked) void __stdcall FUN_005a02f0(int param1, int param2)
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
        jz      label_ok
        int     3

label_ok:
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp + 8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_005a0ed0
        pop     esi
        pop     ebp
        ret     8
    }
}
