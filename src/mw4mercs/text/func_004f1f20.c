/*
 * FUN_004f1f20 (85 B) -- MLR/Adept object refcount release (__thiscall,
 * RET 4, 1 stack param). Calls FUN_004169c0, and if param_1 & 1, releases
 * via FUN_00416130, decrements global refcount g_007dc858, and when it hits
 * zero destroys the shared object (g_007dc85c) via FUN_00415e30 + free.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004169c0(void);
extern void __cdecl FUN_00416130(void);
extern void __cdecl FUN_00415e30(void);
extern void __stdcall FUN_004084e0(void *ptr);

extern int g_007dc85c;   /* DAT_007dc85c */
extern int g_007dc858;   /* DAT_007dc858 */

__declspec(naked) void func_004f1f20(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        call    FUN_004169c0
        test    byte ptr [esp + 0x8], 1
        jz      l_ret2
        mov     ecx, dword ptr [g_007dc85c]
        push    esi
        call    FUN_00416130
        dec     dword ptr [g_007dc858]
        jnz     l_ret2
        push    edi
        mov     edi, dword ptr [g_007dc85c]
        test    edi, edi
        jz      l_skip
        mov     ecx, edi
        call    FUN_00415e30
        push    edi
        call    FUN_004084e0
        add     esp, 4
    l_skip:
        pop     edi
        mov     eax, esi
        mov     dword ptr [g_007dc85c], 0
        pop     esi
        ret     4
    l_ret2:
        mov     eax, esi
        pop     esi
        ret     4
    }
}
