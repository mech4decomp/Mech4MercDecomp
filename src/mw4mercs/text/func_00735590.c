/*
 * FUN_00735590 (55 B) — Virtual-method wrapper (__stdcall, 1 arg).
 *   Calls vtable[0x6c] (Restore) on param_1; on failure logs
 *   "FAILED (0x%x - %s) - Restore(0x%x)" via FUN_006FABF0 and traps.
 *
 * Match: target 100%
 */

extern int __stdcall FUN_0073E160(int);
extern int __cdecl  FUN_006FABF0(const char *fmt, int, int, void *);

__declspec(naked) int __stdcall FUN_00735590(void *param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 8]
        mov     eax, dword ptr [edi]
        push    edi
        call    dword ptr [eax + 0x6c]
        mov     esi, eax
        test    esi, esi
        jge     L_bf
        push    edi
        push    esi
        call    FUN_0073E160
        push    eax
        push    esi
        push    0x7a64f0
        call    FUN_006FABF0
        add     esp, 0x10
        test    eax, eax
        jz      L_bf
        int     3
    L_bf:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     4
    }
}
