/*
 * FUN_00725740 (208 B) — Resource manager teardown.
 *
 * Enters a critical section, iterates a resource list clearing a field,
 * then walks a resource lookup chain freeing a matching entry, and finally
 * clears the caller's handle and leaves the critical section.
 *
 * __stdcall, RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_856b94;
extern int g_856a88;
extern int *g_856a80;
extern void *g_76b110;   /* IAT: EnterCriticalSection */
extern void *g_76b100;   /* IAT: LeaveCriticalSection */

extern void __cdecl FUN_00725080(int a, int b);
extern void __cdecl FUN_00755940(void);
extern void __cdecl FUN_007262e0(void);
extern void __cdecl FUN_004084e0(void *p);
extern int __cdecl FUN_006fab90(void);

__declspec(naked) void __stdcall FUN_00725740(void *param)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [g_856b94]
        test    eax, eax
        push    esi
        push    edi
        jz      L_b0
        push    0x858ac8
        call    dword ptr [g_76b110]
        mov     eax, dword ptr [g_856a88]
        xor     edi, edi
        test    eax, eax
        jle     L_b0
        mov     eax, dword ptr [ebp + 8]
        push    ebx
        mov     ebx, dword ptr [eax]
        mov     esi, 0x856a8c
    L_loop:
        mov     ecx, dword ptr [esi]
        cmp     dword ptr [ecx + 0x70], ebx
        jnz     L_a2
        mov     eax, dword ptr [ecx + 0x9c]
        test    eax, eax
        jz      L_9b
        cmp     eax, 2
        jz      L_9b
        cmp     eax, 1
        jz      L_9b
        push    4
        push    edi
        call    FUN_00725080
        mov     ecx, dword ptr [esi]
        call    FUN_00755940
        jmp     L_a2
    L_9b:
        mov     dword ptr [ecx + 0x70], 0
    L_a2:
        mov     eax, dword ptr [g_856a88]
        inc     edi
        add     esi, 4
        cmp     edi, eax
        jl      L_loop
        pop     ebx
    L_b0:
        mov     eax, dword ptr [g_856a80]
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [ebp + 8]
        test    eax, eax
        mov     ecx, eax
        jz      L_e4
    L_ba:
        mov     esi, dword ptr [ecx + 0xc]
        test    esi, esi
        mov     eax, dword ptr [eax + 4]
        jz      L_e4
        cmp     esi, dword ptr [edx]
        __emit 0x75   /* jnz rel8: MSVC6 miscomputes this backward branch offset (off-by-6) */
        __emit 0xEC   /* backward to L_ba */
        test    esi, esi
        jz      L_f6
        mov     ecx, esi
        call    FUN_007262e0
        push    esi
        call    FUN_004084e0
        add     esp, 4
        jmp     L_f6
    L_e4:
        push    0x7a5550
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_f6
        int     3
    L_f6:
        mov     ecx, dword ptr [ebp + 8]
        push    0x858ac8
        mov     dword ptr [ecx], 0
        call    dword ptr [g_76b100]
        pop     edi
        pop     esi
        pop     ebp
        ret     4
    }
}
