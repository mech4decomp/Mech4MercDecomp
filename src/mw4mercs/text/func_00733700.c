/*
 * FUN_00733700 (383 B) — __stdcall (RET 8). Initializes a 0x3c-byte
 * structure at param_2 from fields of param_1, with FPU-scaled values
 * and conditional FUN_0070e220 / FUN_0070e1b0 calls based on global
 * DAT_0085b4a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned char g_008aa288;
extern float         g_007a5564;
extern unsigned int  g_0085b4a0;

extern void __cdecl FUN_0075b6e0(void *a, void *b);
extern int  __cdecl FUN_0070e220(int a, int b);
extern void __cdecl FUN_0070e1b0(int a, int b, int c);

__declspec(naked) void __stdcall FUN_00733700(void)
{
    __asm {
        sub     esp, 0x8
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x18]
        push    edi
        xor     eax, eax
        mov     ecx, 0xf
        mov     edi, esi
        rep stosd
        mov     al, byte ptr [g_008aa288]
        xor     ecx, ecx
        cmp     al, cl
        jz      L_33775
        mov     eax, 0x3f800000
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [eax + 0x3c]
        mov     dword ptr [esi + 0x24], ecx
        mov     dword ptr [esi + 0x28], ecx
        mov     dword ptr [esi + 0x2c], ecx
        mov     dword ptr [esi + 0x38], ecx
        mov     dword ptr [esi + 0x34], ecx
        mov     ecx, 0x42c80000
        mov     dword ptr [esi + 0x30], edx
        mov     edx, dword ptr [eax + 0xd4]
        mov     dword ptr [esi + 0x14], ecx
        mov     dword ptr [esi + 0x18], ecx
        mov     ecx, dword ptr [eax + 0xd0]
        mov     eax, 0x3
        pop     edi
        mov     dword ptr [esi + 0xc], ecx
        mov     dword ptr [esi + 0x10], edx
        mov     dword ptr [esi + 0x4], eax
        mov     dword ptr [esi + 0x8], eax
        pop     esi
        pop     ebx
        add     esp, 0x8
        ret     0x8
L_33775:
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [eax + 0x4]
        cmp     edx, ecx
        jnz     L_33794
        mov     eax, 0x3f800000
        pop     edi
        mov     dword ptr [esi + 0x1c], eax
        mov     dword ptr [esi + 0x20], eax
        pop     esi
        pop     ebx
        add     esp, 0x8
        ret     0x8
L_33794:
        mov     edi, dword ptr [eax + 0x50]
        fild    qword ptr [eax + 0xec]
        mov     dword ptr [esi + 0x24], edi
        mov     edi, dword ptr [eax + 0x38]
        mov     ebx, dword ptr [eax + 0xa8]
        mov     dword ptr [esi + 0x28], edi
        mov     edi, dword ptr [eax + 0x34]
        mov     dword ptr [esi + 0x2c], edi
        mov     edi, dword ptr [eax + 0x3c]
        mov     dword ptr [esi + 0x30], edi
        mov     edi, dword ptr [eax + 0xbc]
        mov     dword ptr [esi + 0x38], edi
        mov     edi, dword ptr [eax + 0xb8]
        mov     dword ptr [esi + 0x34], edi
        mov     edi, dword ptr [eax + 0xd8]
        mov     dword ptr [esi + 0x14], edi
        mov     edi, dword ptr [eax + 0xdc]
        mov     dword ptr [esi + 0x18], edi
        mov     edi, dword ptr [eax + 0xd0]
        mov     dword ptr [esi + 0xc], edi
        mov     edi, dword ptr [eax + 0xd4]
        mov     dword ptr [esi + 0x10], edi
        mov     edi, dword ptr [eax + 0xac]
        lea     eax, [esp + 0xc]
        fmul    dword ptr [g_007a5564]
        push    eax
        push    edx
        fstp    dword ptr [esi + 0x1c]
        mov     dword ptr [esi + 0x4], edi
        mov     dword ptr [esi + 0x8], ebx
        mov     dword ptr [esi], ecx
        call    FUN_0075b6e0
        fild    qword ptr [esp + 0xc]
        cmp     dword ptr [g_0085b4a0], 0x1
        fmul    dword ptr [g_007a5564]
        push    0xb
        push    0x20
        fstp    dword ptr [esi + 0x20]
        jnz     L_33859
        call    FUN_0070e220
        push    0xb
        mov     ecx, eax
        push    0x4
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esi + 0x20], ecx
        call    FUN_0070e220
        push    0xb
        push    0x4
        mov     dword ptr [esi + 0x4], eax
        call    FUN_0070e220
        pop     edi
        mov     dword ptr [esi + 0x8], eax
        pop     esi
        pop     ebx
        add     esp, 0x8
        ret     0x8
L_33859:
        mov     edx, dword ptr [esi + 0x20]
        push    edx
        call    FUN_0070e1b0
        push    0xb
        push    0x4
        push    edi
        call    FUN_0070e1b0
        push    0xb
        push    0x4
        push    ebx
        call    FUN_0070e1b0
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x8
        ret     0x8
    }
}
