/*
 * FUN_0064C960 (115 B) — __cdecl, 2 stack params (param_1, param_2).
 *
 * Compares two objects for "equality" via a series of checks against
 * globals DAT_0080d9bc / DAT_0080d9b4 / DAT_0080d9b8 and field
 * comparisons. If no match, calls FUN_00562F40(0x10).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00562F40(int param);
extern int g_80d9bc;   /* DAT_0080d9bc */
extern int g_80d9b4;   /* DAT_0080d9b4 */
extern int g_80d9b8;   /* DAT_0080d9b8 */

__declspec(naked) void __cdecl FUN_0064c960(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        test    eax, eax
        push    esi
        jz      L_call
        mov     ecx, dword ptr [esp + 0xC]
        test    ecx, ecx
        jz      L_call
        cmp     eax, ecx
        jnz     L_globals
        mov     edx, dword ptr [eax + 4]
        cmp     edx, 1
        jz      L_ret
        cmp     edx, 2
        jz      L_ret
L_globals:
        mov     edx, dword ptr [g_80d9bc]
        cmp     eax, edx
        mov     esi, dword ptr [g_80d9b4]
        jnz     L_g2
        cmp     ecx, esi
        jz      L_ret
L_g2:
        cmp     ecx, edx
        jnz     L_g3
        cmp     eax, esi
        jz      L_ret
L_g3:
        mov     esi, dword ptr [eax + 4]
        mov     edx, 3
        cmp     esi, edx
        jnz     L_call
        cmp     dword ptr [ecx + 4], edx
        jnz     L_call
        mov     edx, dword ptr [g_80d9b8]
        cmp     dword ptr [eax + 0x14], edx
        jnz     L_call
        cmp     dword ptr [ecx + 0x14], edx
        jnz     L_call
        mov     eax, dword ptr [eax + 0x18]
        cmp     eax, dword ptr [ecx + 0x18]
        jz      L_ret
L_call:
        push    0x10
        call    FUN_00562F40
        add     esp, 4
L_ret:
        pop     esi
        ret
    }
}
