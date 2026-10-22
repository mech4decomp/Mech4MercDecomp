/*
 * FUN_005fcc50 (44 B) — __thiscall. Calls the assert helper FUN_006fab90
 * with a message string; traps (int 3) if it returns nonzero, then
 * forwards two args to FUN_004faa50.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_004faa50(void);

__declspec(naked) void FUN_005fcc50(void)
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
        jz      L1
        int     3
L1:
        mov     eax, dword ptr [ebp+0xc]
        mov     ecx, dword ptr [ebp+0x8]
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_004faa50
        pop     esi
        pop     ebp
        ret     0x8
    }
}
