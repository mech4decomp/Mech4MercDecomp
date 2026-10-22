/*
 * FUN_006edc80 (1148 B) — Dialog/control population routine.
 * Uses IAT function pointers (GetDlgItem/SendMessageA/atoi/SetDlgItemInt/
 * EnableWindow) + several globals. No vtable reconstruction, no .txt2.
 * In scope.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_76b5a4;   /* IAT: GetDlgItem */
extern void *g_76b560;   /* IAT: SendMessageA */
extern void *g_76b318;   /* IAT: atoi */
extern void *g_76b520;   /* IAT: SetDlgItemInt */
extern void *g_76b544;   /* IAT: EnableWindow */
extern int g_7b6a4c;
extern int g_7b6a48;
extern int g_7dd268;

extern void __cdecl FUN_00523ba0(void);
extern void __cdecl FUN_00512510(void);
extern void __cdecl FUN_00519cd0(void);
extern void __cdecl FUN_00512ff0(void);
extern void __cdecl FUN_006efe60(void);
extern void __cdecl FUN_005290a0(void);
extern void __cdecl FUN_00518100(void);

__declspec(naked) void __cdecl FUN_006edc80(void)
{
    __asm {
        sub     esp, 0x820
        push    ebx
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x830]
        push    edi
        mov     edi, dword ptr [g_76b5a4]
        push    0x0
        push    0x0
        push    0x147
        push    0x413
        push    esi
        call    edi
        mov     ebx, dword ptr [g_76b560]
        push    eax
        call    ebx
        mov     ecx, dword ptr [g_7b6a4c]
        or      ebp, 0xffffffff
        cmp     ecx, eax
        mov     dword ptr [esp + 0x1c], eax
        jnz     L_006edcca
        cmp     eax, ebp
        jnz     L_006ee0f1
L_006edcca:
        xor     ecx, ecx
        mov     dword ptr [g_7b6a4c], eax
        mov     dword ptr [esp + 0x24], ecx
L_006edcd5:
        mov     edx, dword ptr [ecx*0x4 + 0x841ec8]
        test    edx, edx
        jz      L_006edd1c
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x1
        lea     eax, [esp + 0x2c]
        push    0x0
        mov     dword ptr [esp + 0x20], eax
        call    FUN_00523ba0
        mov     ecx, dword ptr [esp + 0x24]
        xor     eax, eax
        mov     dword ptr [ecx*0x4 + 0x842710], eax
        mov     dword ptr [ecx*0x4 + 0x841ec8], eax
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [ecx*0x4 + 0x842b10], ebp
        mov     dword ptr [ecx*0x4 + 0x842310], ebp
L_006edd1c:
        inc     ecx
        cmp     ecx, 0xff
        mov     dword ptr [esp + 0x24], ecx
        jl      L_006edcd5
        cmp     eax, ebp
        jz      L_006ee0f1
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x2
        lea     edx, [esp + 0x18]
        lea     eax, [esp + 0x24]
        push    0x0
        mov     dword ptr [esp + 0x1c], 0x22
        mov     dword ptr [esp + 0x20], edx
        mov     dword ptr [esp + 0x24], eax
        call    FUN_00512510
        mov     edx, dword ptr [g_7dd268]
        mov     dword ptr [edx + 0x54], ebp
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        call    FUN_00519cd0
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x1
        push    0x0
        mov     dword ptr [esp + 0x1c], 0x2f
        call    FUN_00512ff0
        test    eax, eax
        jz      L_006edd8d
        push    esi
        call    FUN_006efe60
        add     esp, 0x4
L_006edd8d:
        mov     eax, dword ptr [g_7b6a48]
        test    eax, eax
        jl      L_006edd9b
        cmp     eax, 0x3
        jle     L_006eddaa
L_006edd9b:
        cmp     eax, 0x6
        jl      L_006edda5
        cmp     eax, 0x9
        jle     L_006eddaa
L_006edda5:
        cmp     eax, 0x12
        jl      L_006ede0b
L_006eddaa:
        mov     ecx, dword ptr [esp + 0x1c]
        lea     edx, [esp + 0x430]
        push    edx
        lea     eax, [esp + 0x34]
        push    eax
        push    ecx
        call    FUN_005290a0
        add     esp, 0xc
        xor     edx, edx
        test    eax, eax
        jle     L_006ede0b
L_006eddca:
        mov     ecx, dword ptr [esp + edx*0x4 + 0x30]
        test    ecx, ecx
        jl      L_006ede06
        cmp     ecx, 0x18
        jge     L_006ede06
        mov     ebp, dword ptr [esp + edx*0x4 + 0x430]
        mov     dword ptr [ecx*0x4 + 0x841ec8], 0x1
        mov     dword ptr [ecx*0x4 + 0x842b10], ebp
        mov     dword ptr [ecx*0x4 + 0x842710], 0x4
        mov     dword ptr [ecx*0x4 + 0x842310], 0xff
L_006ede06:
        inc     edx
        cmp     edx, eax
        jl      L_006eddca
L_006ede0b:
        lea     edx, [esp + 0x14]
        push    edx
        push    0x1
        push    0x0
        mov     dword ptr [esp + 0x1c], 0x26
        call    FUN_00512ff0
        push    0x0
        push    eax
        push    0x14e
        push    0x419
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     eax, [esp + 0x14]
        push    eax
        push    0x1
        push    0x0
        mov     dword ptr [esp + 0x1c], 0x27
        call    FUN_00512ff0
        push    0x0
        push    eax
        push    0x14e
        push    0x414
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x1
        push    0x0
        mov     dword ptr [esp + 0x1c], 0x24
        call    FUN_00512ff0
        mov     ecx, dword ptr [g_7dd268]
        push    0x2
        lea     edx, [esp + 0x18]
        mov     ebp, eax
        push    edx
        mov     dword ptr [esp + 0x18], 0x7
        mov     dword ptr [esp + 0x24], ebp
        call    FUN_00518100
        push    0x0
        push    ebp
        push    0x14e
        push    0x41a
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     eax, [esp + 0x14]
        push    eax
        push    0x1
        push    0x0
        mov     dword ptr [esp + 0x1c], 0x1d
        call    FUN_00512ff0
        mov     ebp, eax
        test    ebp, ebp
        jnz     L_006edec6
        push    eax
        push    eax
        jmp     L_006edf11
L_006edec6:
        mov     dword ptr [esp + 0x20], 0x0
L_006edece:
        mov     edx, dword ptr [esp + 0x20]
        lea     ecx, [esp + 0x28]
        push    ecx
        push    edx
        push    0x148
        push    0x3f6
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     eax, [esp + 0x28]
        push    eax
        call    dword ptr [g_76b318]
        add     esp, 0x4
        cmp     eax, ebp
        jge     L_006edf0a
        mov     eax, dword ptr [esp + 0x20]
        inc     eax
        cmp     eax, 0x9
        mov     dword ptr [esp + 0x20], eax
        jl      L_006edece
        jmp     L_006edf21
L_006edf0a:
        mov     ecx, dword ptr [esp + 0x20]
        push    0x0
        push    ecx
L_006edf11:
        push    0x14e
        push    0x3f6
        push    esi
        call    edi
        push    eax
        call    ebx
L_006edf21:
        lea     edx, [esp + 0x14]
        push    edx
        push    0x1
        push    0x0
        mov     dword ptr [esp + 0x1c], 0x3d
        call    FUN_00512ff0
        push    0x0
        push    eax
        push    0x14e
        push    0x4dc
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     eax, [esp + 0x14]
        push    eax
        push    0x1
        push    0x0
        mov     dword ptr [esp + 0x1c], 0x8
        call    FUN_00512ff0
        test    eax, eax
        jg      L_006edf69
        mov     eax, 0x1
L_006edf69:
        push    0x0
        push    eax
        push    0x416
        push    esi
        call    dword ptr [g_76b520]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    0x1
        push    0x0
        mov     dword ptr [esp + 0x1c], 0x15
        call    FUN_00512ff0
        push    0x0
        push    eax
        push    0x14e
        push    0x41b
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     edx, [esp + 0x14]
        push    edx
        push    0x1
        push    0x0
        mov     dword ptr [esp + 0x1c], 0x20
        call    FUN_00512ff0
        push    0x0
        push    eax
        push    0x14e
        push    0x41e
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     eax, [esp + 0x14]
        push    eax
        push    0x1
        push    0x0
        mov     dword ptr [esp + 0x1c], 0x17
        call    FUN_00512ff0
        lea     ecx, [eax + -0x14]
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x1
        mov     ecx, edx
        push    0x0
        shr     ecx, 0x1f
        add     edx, ecx
        push    edx
        push    0x14e
        push    0x41c
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     edx, [esp + 0x14]
        push    edx
        push    0x1
        push    0x0
        mov     dword ptr [esp + 0x1c], 0x3c
        call    FUN_00512ff0
        mov     ecx, eax
        mov     eax, 0x431bde83
        imul    ecx
        sar     edx, 0x12
        mov     eax, edx
        push    0x0
        shr     eax, 0x1f
        lea     ecx, [edx + eax*0x1 + -0x2]
        push    ecx
        push    0x14e
        push    0x421
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     edx, [esp + 0x14]
        push    edx
        push    0x1
        push    0x0
        mov     dword ptr [esp + 0x1c], 0x7
        call    FUN_00512ff0
        xor     ecx, ecx
        test    eax, eax
        setg    cl
        push    0x0
        mov     ebp, ecx
        push    ebp
        push    0xf1
        push    0x415
        push    esi
        call    edi
        push    eax
        call    ebx
        push    ebp
        push    0x416
        push    esi
        call    edi
        push    eax
        call    dword ptr [g_76b544]
        lea     edx, [esp + 0x14]
        push    edx
        push    0x1
        push    0x0
        mov     dword ptr [esp + 0x1c], 0x9
        call    FUN_00512ff0
        xor     ecx, ecx
        test    eax, eax
        setg    cl
        push    0x0
        mov     ebp, ecx
        push    ebp
        push    0xf1
        push    0x417
        push    esi
        call    edi
        push    eax
        call    ebx
        push    ebp
        push    0x4dc
        push    esi
        call    edi
        push    eax
        call    dword ptr [g_76b544]
        lea     edx, [esp + 0x14]
        push    edx
        push    0x1
        push    0x0
        mov     dword ptr [esp + 0x1c], 0x38
        call    FUN_00512ff0
        push    0x0
        push    eax
        push    0x14e
        push    0x41d
        push    esi
        call    edi
        push    eax
        call    ebx
L_006ee0f1:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x820
        ret
    }
}
