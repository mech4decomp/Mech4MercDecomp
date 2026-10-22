/*
 * FUN_006e7190 (332 B) — Populates a dialog's list controls. Sends
 * LB_RESETCONTENT (0x184) to items 0x4b9/0x4bb, queries item 0x4bc
 * (0x147 = LB_GETCURSEL), dispatches on the selection (0..3) to set a
 * start index (EBP) and end index ([esp+0x1c]), then loops adding rows
 * via GetDlgItem/SendMessageA (function pointers from 0x76b5a4/0x76b560)
 * and FUN_0072d830, finishing with FUN_006e72f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_76b5a4;   /* 0x0076b5a4 GetDlgItem fn ptr */
extern unsigned int g_76b560;   /* 0x0076b560 SendMessageA fn ptr */
extern unsigned int g_841838[]; /* 0x00841838 */
extern unsigned int g_841a90[]; /* 0x00841a90 */
extern unsigned int g_841768;   /* 0x00841768 */
extern int __cdecl FUN_0072d830(int, int);
extern void __cdecl FUN_006e72f0(int);

__declspec(naked) void FUN_006e7190(int param_1)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        push    edi
        mov     edi, dword ptr [g_76b5a4]
        xor     ebp, ebp
        push    ebp
        push    ebp
        push    0x184
        push    0x4b9
        push    esi
        call    edi
        mov     ebx, dword ptr [g_76b560]
        push    eax
        call    ebx
        push    ebp
        push    ebp
        push    0x184
        push    0x4bb
        push    esi
        call    edi
        push    eax
        call    ebx
        push    ebp
        push    ebp
        push    0x147
        push    0x4bc
        push    esi
        mov     dword ptr [esp + 0x24], ebp
        mov     dword ptr [esp + 0x28], ebp
        mov     dword ptr [esp + 0x30], ebp
        call    edi
        push    eax
        call    ebx
        cmp     eax, 0x3
        ja      L_722e
        __emit 0xFF  /* __emit: jmp dword ptr [eax*4+imm32] dispatch — MSVC6 re-bases via EBX instead of FF 24 85 */
        __emit 0x24
        __emit 0x85
        __emit 0xDC
        __emit 0x72
        __emit 0x6E
        __emit 0x00

        /* case 0 */
        xor     ebp, ebp
        mov     dword ptr [esp + 0x1c], 0x12
        jmp     L_722e
        /* case 1 */
        mov     ebp, 0x33
        mov     dword ptr [esp + 0x1c], 0x4e
        jmp     L_722e
        /* case 2 */
        mov     ebp, 0x64
        mov     dword ptr [esp + 0x1c], 0x7b
        jmp     L_722e
        /* case 3 */
        mov     ebp, 0x83
        mov     dword ptr [esp + 0x1c], 0x8a

L_722e:
        cmp     ebp, dword ptr [esp + 0x1c]
        jg      L_72cb
L_7238:
        mov     eax, dword ptr [ebp*0x4 + g_841838]
        mov     ecx, dword ptr [g_841768]
        test    eax, eax
        mov     eax, dword ptr [ebp*0x4 + g_841a90]
        push    eax
        push    ecx
        jz      L_7286
        call    FUN_0072d830
        mov     edx, dword ptr [esp + 0x10]
        push    eax
        push    edx
        push    0x181
        push    0x4b9
        push    esi
        call    edi
        push    eax
        call    ebx
        mov     ecx, dword ptr [esp + 0x10]
        push    ebp
        mov     eax, ecx
        push    eax
        inc     ecx
        push    0x19a
        mov     dword ptr [esp + 0x1c], ecx
        push    0x4b9
        jmp     L_72b8
L_7286:
        call    FUN_0072d830
        mov     edx, dword ptr [esp + 0x14]
        push    eax
        push    edx
        push    0x181
        push    0x4bb
        push    esi
        call    edi
        push    eax
        call    ebx
        mov     ecx, dword ptr [esp + 0x14]
        push    ebp
        mov     eax, ecx
        push    eax
        inc     ecx
        push    0x19a
        mov     dword ptr [esp + 0x20], ecx
        push    0x4bb
L_72b8:
        push    esi
        call    edi
        push    eax
        call    ebx
        mov     eax, dword ptr [esp + 0x1c]
        inc     ebp
        cmp     ebp, eax
        jle     L_7238
L_72cb:
        push    esi
        call    FUN_006e72f0
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret
    }
}
