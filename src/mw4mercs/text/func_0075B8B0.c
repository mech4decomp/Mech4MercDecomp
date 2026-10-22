/*
 * FUN_0075B8B0 (55 B) — Virtual-method wrapper (__stdcall, 1 arg).
 *   Calls vtable[0x20] (Pause) on param_1; on failure logs
 *   "FAILED (0x%x - %s) - Pause(0x%x)" via FUN_006FABF0 and traps.
 *
 * Match: target 100%
 */

extern int __stdcall FUN_0073E160(int);
extern int __cdecl  FUN_006FABF0(const char *fmt, int, int, void *);

__declspec(naked) int __stdcall FUN_0075B8B0(void *param_1)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 8]
        mov     eax, dword ptr [edi]
        push    edi
        call    dword ptr [eax + 0x20]
        mov     esi, eax
        test    esi, esi
        jge     L_df
        push    edi
        push    esi
        call    FUN_0073E160
        push    eax
        push    esi
        push    0x7af7d0
        call    FUN_006FABF0
        add     esp, 0x10
        test    eax, eax
        jz      L_df
        int     3
    L_df:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     4
    }
}
