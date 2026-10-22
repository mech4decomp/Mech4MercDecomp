/*
 * FUN_10012AE0 (204 B, __stdcall, 2 params) - Worker-thread / event
 * processing loop. Calls into the stats object (param_2) and updates
 * param_1's state fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_10012080(void);
extern void __cdecl FUN_10012190(void);
extern void __cdecl FUN_100121c0(void);
extern void __cdecl FUN_10012250(void);

extern void *g_1002109c;   /* IAT: SetEvent */
extern void *g_100210a0;   /* IAT: ResetEvent */
extern void *g_10021098;   /* IAT: GetLastError */

__declspec(naked) void __cdecl FUN_10012AE0(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     ecx, edi
        call    FUN_10012080
        test    al, al
        jz      L_12b05
        mov     eax, dword ptr [esp + 0x10]
        pop     edi
        pop     esi
        pop     ebx
        mov     dword ptr [eax + 0x1c], 1
        xor     eax, eax
        ret     0x8
    L_12b05:
        mov     ecx, edi
        call    FUN_10012080
        mov     esi, dword ptr [esp + 0x10]
        test    al, al
        jnz     L_12b3c
        lea     ebx, [esi + 0x6c]
    L_12b17:
        mov     ecx, edi
        call    FUN_10012190
        mov     ecx, dword ptr [eax + 4]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_100121c0
        mov     ecx, edi
        call    FUN_10012250
        mov     ecx, edi
        call    FUN_10012080
        test    al, al
        jz      L_12b17
    L_12b3c:
        mov     edx, dword ptr [esi + 0x98]
        push    edx
        call    dword ptr [g_1002109c]      /* SetEvent */
        mov     eax, dword ptr [esi + 0x68]
        mov     eax, dword ptr [eax + 0xc]
        test    eax, eax
        jz      L_12b5a
        push    eax
        call    dword ptr [g_100210a0]      /* ResetEvent */
    L_12b5a:
        mov     ecx, dword ptr [esi + 0x68]
        mov     bl, 1
        mov     al, byte ptr [ecx + 4]
        mov     dword ptr [esi + 0x1c], 7
        __emit 0x84   /* __emit: test bl,al -> MSVC6 emits 84 D8 (test al,bl); ref needs 84 C3 */
        __emit 0xC3
        jz      L_12b7b
        mov     edx, dword ptr [esi]
        push    esi
        call    dword ptr [edx + 0x10]
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x8
    L_12b7b:
        mov     al, byte ptr [esi + 0x60]
        test    al, al
        jnz     L_12ba4
        mov     eax, dword ptr [esi]
        push    0
        push    esi
        call    dword ptr [eax + 8]
        test    al, al
        jnz     L_12ba1
        mov     dword ptr [esi + 0x1c], 6
        call    dword ptr [g_10021098]      /* GetLastError */
        pop     edi
        pop     esi
        pop     ebx
        ret     0x8
    L_12ba1:
        mov     byte ptr [esi + 0x60], bl
    L_12ba4:
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        ret     0x8
    }
}
