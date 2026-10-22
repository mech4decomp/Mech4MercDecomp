/*
 * FUN_00627390 (45 B) — __thiscall.
 *
 * Computes (arg / this->[0x6c]) * g_76d048, converts to int via _ftol,
 * stores it in this->[0x7c], and stores the float form in
 * (this->[0x110])->[0x54]. Returns with RET 0x4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76d048;
extern long __cdecl _ftol(void);

__declspec(naked) void FUN_00627390(void)
{
    __asm {
        fld     dword ptr [esp + 0x4]
        push    esi
        mov     esi, ecx
        fdiv    dword ptr [esi + 0x6c]
        fmul    dword ptr [g_76d048]
        call    _ftol
        mov     dword ptr [esp + 0x8], eax
        fild    dword ptr [esp + 0x8]
        mov     dword ptr [esi + 0x7c], eax
        mov     eax, dword ptr [esi + 0x110]
        pop     esi
        fstp    dword ptr [eax + 0x54]
        ret     0x4
    }
}
