/*
 * FUN_10001ca0 (108 B) — delete all critical sections in the table range
 * (skipping the four special ones), then delete the four special ones.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void (__stdcall *g_DeleteCriticalSection)(void *); /* IAT 0x10004038 */

extern void *g_10005134;                              /* 0x10005134 critical section */
extern void *g_10005124;                              /* 0x10005124 critical section */
extern void *g_10005114;                              /* 0x10005114 critical section */
extern void *g_100050f4;                              /* 0x100050f4 critical section */

extern void __cdecl FUN_10001e0f(void *);

__declspec(naked) void __stdcall FUN_10001ca0(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [g_DeleteCriticalSection]
        mov     esi, 0x100050f0
L_cad:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      L_cde
        cmp     esi, 0x10005134
        jz      L_cde
        cmp     esi, 0x10005124
        jz      L_cde
        cmp     esi, 0x10005114
        jz      L_cde
        cmp     esi, 0x100050f4
        jz      L_cde
        push    eax
        call    edi
        push    dword ptr [esi]
        call    FUN_10001e0f
        pop     ecx
L_cde:
        add     esi, 4
        cmp     esi, 0x100051b0
        jl      L_cad
        push    dword ptr [g_10005114]
        call    edi
        push    dword ptr [g_10005124]
        call    edi
        push    dword ptr [g_10005134]
        call    edi
        push    dword ptr [g_100050f4]
        call    edi
        pop     edi
        pop     esi
        ret
    }
}
