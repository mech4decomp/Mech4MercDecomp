/*
 * FUN_10004589 (111 B, __cdecl) — ASCII-to-uppercase with a locale-aware
 * path. If the default LCID (g_10008c24) is 0, do a fast ASCII range check
 * (0x61..0x7a -> -0x20). Otherwise take a critical-section-guarded path that
 * calls the thiscall FUN_100045f8 to do the conversion.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_10008c24;                       /* default LCID */
extern long g_10008d94;                      /* InterlockedIncrement/Decrement target */
extern int g_10008d90;                       /* guard flag */

extern long (__stdcall *g_InterlockedIncrement)(long *); /* IAT 0x100050c4 */
extern long (__stdcall *g_InterlockedDecrement)(long *); /* IAT 0x100050c0 */

extern void __cdecl FUN_10001f46(void);      /* EnterCriticalSection */
extern void __cdecl FUN_10001fa7(void);      /* LeaveCriticalSection */
extern void __cdecl FUN_100045f8(void);      /* thiscall converter */

__declspec(naked) unsigned int __cdecl FUN_10004589(void)
{
    __asm {
        push    ebx
        xor     ebx, ebx
        cmp     dword ptr [g_10008c24], ebx
        jnz     L_a7
        mov     eax, dword ptr [esp + 8]
        cmp     eax, 0x61
        jl      L_f6
        cmp     eax, 0x7a
        jg      L_f6
        sub     eax, 0x20
        pop     ebx
        ret
L_a7:
        push    esi
        mov     esi, OFFSET g_10008d94
        push    edi
        push    esi
        call    dword ptr [g_InterlockedIncrement]
        cmp     dword ptr [g_10008d90], ebx
        mov     edi, dword ptr [g_InterlockedDecrement]
        jz      L_d1
        push    esi
        call    edi
        push    0x13
        call    FUN_10001f46
        pop     ecx
        push    1
        pop     ebx
L_d1:
        push    dword ptr [esp + 0x10]
        call    FUN_100045f8
        test    ebx, ebx
        pop     ecx
        mov     dword ptr [esp + 0x10], eax
        jz      L_ed
        push    0x13
        call    FUN_10001fa7
        pop     ecx
        jmp     L_f0
L_ed:
        push    esi
        call    edi
L_f0:
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
L_f6:
        pop     ebx
        ret
    }
}
