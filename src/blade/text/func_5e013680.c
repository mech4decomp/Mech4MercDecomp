/*
 * FUN_5e013680 (48 B) — DirectDraw caps setter (__thiscall, ECX=this).
 *
 * __thiscall, RET 0x4 (1 stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a838;
extern int g_5e77a840;

extern int __cdecl FUN_5e00e670(void);

__declspec(naked) void __fastcall FUN_5e013680(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     dword ptr [ecx + 0x14], esi
        mov     ecx, dword ptr [ecx + 0x64]
        call    FUN_5e00e670
        test    eax, eax
        jz      L_a6
        lea     eax, [esi + esi*1]
        mov     dword ptr [g_5e77a838], esi
        mov     dword ptr [g_5e77a840], eax
        pop     esi
        ret     0x4
L_a6:
        mov     dword ptr [g_5e77a840], esi
        pop     esi
        ret     0x4
    }
}
