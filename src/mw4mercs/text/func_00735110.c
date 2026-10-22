/*
 * FUN_00735110 (56 B) — Virtual-method wrapper (__stdcall, 2 args).
 *   Calls vtable[0x30] (GetDisplayMode) on param_1 with param_2; on
 *   failure logs "FAILED (0x%x - %s) - GetDisplayMode()" via
 *   FUN_006FABF0 and traps.
 *
 * Match: target 100%
 */

extern int __stdcall FUN_0073E160(int);
extern int __cdecl  FUN_006FABF0(const char *fmt, int, int);

__declspec(naked) int __stdcall FUN_00735110(void *param_1, void *param_2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     edx, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 8]
        mov     ecx, dword ptr [eax]
        push    esi
        push    edx
        push    eax
        call    dword ptr [ecx + 0x30]
        mov     esi, eax
        test    esi, esi
        jge     L_41
        push    esi
        call    FUN_0073E160
        push    eax
        push    esi
        push    0x7a62b4
        call    FUN_006FABF0
        add     esp, 0xc
        test    eax, eax
        jz      L_41
        int     3
    L_41:
        mov     eax, esi
        pop     esi
        pop     ebp
        ret     8
    }
}
