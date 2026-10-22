/*
 * FUN_00619930 (85 B) — __thiscall destructor/refcount wrapper.
 *
 * Same shape as FUN_00609c30 but operates on globals 0x007f292c /
 * 0x007f2928. Saves this (ECX) in ESI, calls FUN_004169c0(). If the
 * stack flag (param & 1) is set, calls FUN_00416130(this), decrements
 * the refcount at 0x007f2928, and when it hits zero frees the object at
 * 0x007f292c (FUN_00415e30 + FUN_004084e0) and nulls the global.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416130(void *param);
extern void __cdecl FUN_00415e30(void);
extern void __cdecl FUN_004084e0(void *param);
extern int g_007f292c;
extern int g_007f2928;

__declspec(naked) void __stdcall FUN_00619930(void *param)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 8], 1
        jz      L_ret
        mov     ecx, dword ptr [g_007f292c]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007f2928]
        jnz     L_ret
        push    edi
        mov     edi, dword ptr [g_007f292c]
        test    edi, edi
        jz      L_skip
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 4
L_skip:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007f292c], 0
        pop     esi
        ret     4
L_ret:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
