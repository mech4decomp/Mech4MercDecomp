/*
 * FUN_006efe60 (746 B) — Dialog control update routine.
 *
 * Sends a series of WM_SETTEXT (0x14e) messages to dialog controls via
 * GetDlgItem/SendMessageA, computing values with signed-division-by-constant
 * magic and clamping to ranges.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b5a4;   /* IAT: GetDlgItem */
extern void *g_76b560;   /* IAT: SendMessageA */
extern int g_7b6998;
extern int g_848c90;
extern int g_7b69a4;
extern int g_7b699c;
extern int g_7b69a0;
extern char g_7ddd2c;
extern int __cdecl FUN_00512ff0(void);

__declspec(naked) void __cdecl FUN_006efe60(void)
{
    __asm {
        sub     esp, 0x24
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x30]
        push    edi
        mov     edi, dword ptr [g_76b5a4]
        push    0
        push    0
        push    0x147
        push    0x4c4
        push    esi
        call    edi
        mov     ebx, dword ptr [g_76b560]
        push    eax
        call    ebx
        push    0
        push    0
        push    0x146
        push    0x4c4
        push    esi
        mov     dword ptr [esp + 0x48], eax
        call    edi
        push    eax
        call    ebx
        mov     ecx, dword ptr [esp + 0x34]
        dec     eax
        cmp     ecx, eax
        jnz     L_ff32
        mov     eax, dword ptr [g_7b6998]
        push    0
        push    eax
        push    0x14e
        push    0x4c6
        push    esi
        call    edi
        push    eax
        call    ebx
        mov     ecx, dword ptr [g_848c90]
        push    0
        push    ecx
        push    0x14e
        push    0x4c5
        push    esi
        call    edi
        push    eax
        call    ebx
        mov     ecx, dword ptr [g_7b69a4]
        mov     eax, 0x51eb851f
        imul    ecx
        sar     edx, 3
        mov     eax, edx
        push    0
        shr     eax, 0x1f
        lea     ecx, [edx + eax - 1]
        push    ecx
        push    0x14e
        push    0x420
        push    esi
        call    edi
        push    eax
        call    ebx
        mov     edx, dword ptr [g_7b699c]
        push    0
        push    edx
        push    0x14e
        push    0x4d0
        push    esi
        call    edi
        push    eax
        call    ebx
        mov     ecx, dword ptr [g_7b69a0]
        push    0
        jmp     L_0121
    L_ff32:
        lea     ecx, [esp + 0xc]
        mov     dword ptr [esp + 0x24], ecx
        lea     ecx, [esp + 0x24]
        push    ecx
        push    3
        lea     edx, [esp + 0x3c]
        lea     eax, [esp + 0x18]
        push    0
        mov     dword ptr [esp + 0x18], 0x30
        mov     dword ptr [esp + 0x1c], 2
        mov     dword ptr [esp + 0x20], 3
        mov     dword ptr [esp + 0x24], 0xb
        mov     dword ptr [esp + 0x28], 0xc
        mov     dword ptr [esp + 0x2c], 0xd
        mov     dword ptr [esp + 0x34], edx
        mov     dword ptr [esp + 0x38], eax
        call    FUN_00512ff0
        cmp     eax, 0xf
        jge     L_ff94
        mov     eax, 0xf
        jmp     L_ff9e
    L_ff94:
        cmp     eax, 0x64
        jle     L_ff9e
        mov     eax, 0x64
    L_ff9e:
        lea     ecx, [eax - 0xf]
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 1
        mov     eax, edx
        push    0
        shr     eax, 0x1f
        add     edx, eax
        push    edx
        push    0x14e
        push    0x4c5
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     edx, [esp + 0x24]
        push    edx
        push    3
        lea     ecx, [esp + 0x1c]
        push    0
        mov     dword ptr [esp + 0x38], ecx
        call    FUN_00512ff0
        cmp     eax, 0x14
        jge     L_ffe6
        mov     eax, 0x14
        jmp     L_fff0
    L_ffe6:
        cmp     eax, 0x64
        jle     L_fff0
        mov     eax, 0x64
    L_fff0:
        lea     ecx, [eax - 0x14]
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 1
        mov     eax, edx
        push    0
        shr     eax, 0x1f
        add     edx, eax
        push    edx
        push    0x14e
        push    0x4c6
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     edx, [esp + 0x24]
        push    edx
        push    3
        lea     ecx, [esp + 0x20]
        push    0
        mov     dword ptr [esp + 0x38], ecx
        call    FUN_00512ff0
        mov     ecx, eax
        mov     al, byte ptr [g_7ddd2c]
        test    al, al
        jz      L_0052
        cmp     ecx, 0x19
        jge     L_0043
        mov     ecx, 0x19
        jmp     L_006b
    L_0043:
        cmp     ecx, 0x960
        jle     L_006b
        mov     ecx, 0x960
        jmp     L_006b
    L_0052:
        cmp     ecx, 0x19
        jge     L_005e
        mov     ecx, 0x19
        jmp     L_006b
    L_005e:
        cmp     ecx, 0x640
        jle     L_006b
        mov     ecx, 0x640
    L_006b:
        mov     eax, 0x51eb851f
        imul    ecx
        sar     edx, 3
        mov     eax, edx
        push    0
        shr     eax, 0x1f
        lea     ecx, [edx + eax - 1]
        push    ecx
        push    0x14e
        push    0x420
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     eax, [esp + 0x24]
        push    eax
        push    3
        lea     edx, [esp + 0x24]
        push    0
        mov     dword ptr [esp + 0x38], edx
        call    FUN_00512ff0
        mov     ecx, eax
        cmp     ecx, 0x1e8480
        jge     L_00b8
        mov     ecx, 0x1e8480
        jmp     L_00c5
    L_00b8:
        cmp     ecx, 0x2160ec0
        jle     L_00c5
        mov     ecx, 0x2160ec0
    L_00c5:
        mov     eax, 0x431bde83
        imul    ecx
        sar     edx, 0x12
        mov     ecx, edx
        push    0
        shr     ecx, 0x1f
        lea     edx, [edx + ecx - 2]
        push    edx
        push    0x14e
        push    0x4d0
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     ecx, [esp + 0x24]
        push    ecx
        push    3
        lea     eax, [esp + 0x28]
        push    0
        mov     dword ptr [esp + 0x38], eax
        call    FUN_00512ff0
        mov     ecx, eax
        cmp     ecx, 0x1e8480
        jge     L_0112
        mov     ecx, 0x1e8480
        jmp     L_011f
    L_0112:
        cmp     ecx, 0x1dcd6500
        jle     L_011f
        mov     ecx, 0x1dcd6500
    L_011f:
        push    0
    L_0121:
        mov     eax, 0x6b5fca6b
        imul    ecx
        sar     edx, 0x15
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        push    edx
        push    0x14e
        push    0x423
        push    esi
        call    edi
        push    eax
        call    ebx
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x24
        ret
    }
}
