/*
 * FUN_006C9770 (55 B) — __stdcall, 1 param (pointer to a pointer).
 *
 * Calls FUN_006F4950(g_0082e22c). If *param_1 is non-null, invokes
 * FUN_006CA0E0 (thiscall) on it and frees it via FUN_004084E0. Then calls
 * FUN_006F49A0 and clears *param_1.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_0082e22c;
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006ca0e0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void __stdcall FUN_006c9770(void)
{
    __asm {
        mov     eax, dword ptr [g_0082e22c]
        push    esi
        push    edi
        push    eax
        call    FUN_006f4950
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, dword ptr [edi]
        test    esi, esi
        jz      done
        mov     ecx, esi
        call    FUN_006ca0e0
        push    esi
        call    FUN_004084e0
        add     esp, 4
done:
        call    FUN_006f49a0
        mov     dword ptr [edi], 0
        pop     edi
        pop     esi
        ret     4
    }
}
