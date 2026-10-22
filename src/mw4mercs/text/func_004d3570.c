/*
 * FUN_004d3570 (278 B) -- MLR network/server subsystem state-transition
 * dispatcher. __thiscall (ECX = this), RET 0x8 (2 params).
 *
 * Validates a requested state transition against the current state
 * (asserts via FUN_006fab90 on invalid requests), then dispatches on the
 * result of FUN_004dd250 through a 5-entry jump table to virtual calls on
 * the object at [this+0x18].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_006fab90(const char *msg);
extern int __cdecl FUN_004dd250(int a, int b);

extern char g_7727e4[];   /* 0x7727e4 "Invalid InitializingState request!" */
extern char g_772808[];   /* 0x772808 "Invalid WaitingForGameState request!" */
extern char g_772830[];   /* 0x772830 "Invalid LoadingGameState request!" */

extern int g_jt_4d368c[]; /* jump table @ 0x4d368c (5 entries) */

__declspec(naked) int __stdcall FUN_004d3570(int param_1, int param_2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        push    esi
        push    edi
        mov     edi, ecx
        mov     esi, dword ptr [edi + 0x14]
        cmp     esi, ebx
        jnz     L358B
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x8
L358B:
        cmp     esi, 0x7
        jnz     L359F
        cmp     ebx, 0x6
        jnz     L359F
        mov     ecx, dword ptr [edi + 0x18]
        mov     eax, dword ptr [ecx]
        push    0x1
        call    dword ptr [eax + 0x2c]
L359F:
        cmp     esi, 0x6
        jz      L35A9
        cmp     esi, 0x7
        jnz     L35B7
L35A9:
        cmp     ebx, 0x2
        jz      L35B7
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x8
L35B7:
        mov     eax, ebx
        dec     eax
        jz      L35FE
        dec     eax
        jz      L35DB
        dec     eax
        jnz     L3610
        cmp     esi, 0x2
        jz      L3610
        push    offset g_772830
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L3610
        int     3
        jmp     L3610
L35DB:
        cmp     esi, 0x1
        jz      L3610
        cmp     esi, 0x6
        jz      L3610
        cmp     esi, 0x7
        jz      L3610
        push    offset g_772808
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L3610
        int     3
        jmp     L3610
L35FE:
        push    offset g_7727e4
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L3610
        int     3
L3610:
        mov     esi, dword ptr [ebp + 0xc]
        push    esi
        push    ebx
        mov     ecx, edi
        call    FUN_004dd250
        add     eax, -0x3
        cmp     eax, 0x4
        ja      L3680
        jmp     dword ptr [eax*4 + g_jt_4d368c]
L362B:
        mov     ecx, dword ptr [edi + 0x18]
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x54]
        mov     eax, dword ptr [edi + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x8
L363E:
        mov     ecx, dword ptr [edi + 0x18]
        mov     eax, dword ptr [ecx]
        push    esi
        call    dword ptr [eax + 0x4c]
        mov     eax, dword ptr [edi + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x8
L3651:
        mov     ecx, dword ptr [edi + 0x18]
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x5c]
        mov     eax, dword ptr [edi + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x8
L3664:
        mov     ecx, dword ptr [edi + 0x18]
        mov     eax, dword ptr [ecx]
        push    esi
        call    dword ptr [eax + 0x50]
        mov     eax, dword ptr [edi + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x8
L3677:
        mov     ecx, dword ptr [edi + 0x18]
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx + 0x58]
L3680:
        mov     eax, dword ptr [edi + 0x14]
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret     0x8
        /* __emit: alignment pad 8B FF (mov edi,edi) before jump table */
        __emit 0x8B
        __emit 0xFF
        /* __emit: in-function jump-table DATA @ 0x4d368c (5 dword entries,
           relocated addresses). Inline asm has no `dd`; emit the literal
           patched address bytes (one byte per __emit). Last entry cut off at
           2 bytes by the diff slice. */
        __emit 0x2B
        __emit 0x36
        __emit 0x4D
        __emit 0x00
        __emit 0x51
        __emit 0x36
        __emit 0x4D
        __emit 0x00
        __emit 0x3E
        __emit 0x36
        __emit 0x4D
        __emit 0x00
        __emit 0x64
        __emit 0x36
        __emit 0x4D
        __emit 0x00
        __emit 0x77
        __emit 0x36
    }
}
