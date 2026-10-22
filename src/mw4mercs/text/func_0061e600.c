/*
 * FUN_0061e600 (71 B) — Conditional dispatch on param_1[0x1c] and param_2.
 *
 * Reads param_1[0x1c]; if it is 0, 1, or 2, or param_2==0, calls
 * FUN_0061e650(param_1,param_2); otherwise calls FUN_00667660(param_1).
 * Restores global DAT_008058e0 (saved in ESI) in both paths.
 *
 * __cdecl, RET (no stack cleanup).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_8058e0;                 /* DAT_008058e0 */
extern void __cdecl FUN_00667660(void *param);
extern void __cdecl FUN_0061e650(void *param1, void *param2);

__declspec(naked) void __cdecl FUN_0061e600(void *param1, void *param2)
{
    __asm {
        mov     ecx, dword ptr [esp + 0x4]
        mov     eax, dword ptr [ecx + 0x1c]
        test    eax, eax
        mov     edx, dword ptr [esp + 0x8]
        push    esi
        mov     esi, dword ptr [g_8058e0]
        jz      L_635
        cmp     eax, 0x2
        jz      L_635
        cmp     eax, 0x1
        jz      L_635
        test    edx, edx
        jz      L_635
        push    ecx
        call    FUN_00667660
        add     esp, 0x4
        mov     dword ptr [g_8058e0], esi
        pop     esi
        ret
    L_635:
        push    edx
        push    ecx
        call    FUN_0061e650
        add     esp, 0x8
        mov     dword ptr [g_8058e0], esi
        pop     esi
        ret
    }
}
