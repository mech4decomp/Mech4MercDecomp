/*
 * FUN_00611820 (408 B) - Global state initializer.
 *
 * __cdecl, no params, RET. Initializes a large block of global float/int
 * state at 0x007f28xx, calls FUN_00707e70 for a double, and constructs
 * several 0x50/0xc0-byte objects stored into global pointers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0061bf80(void);
extern void *__cdecl FUN_004084d0(unsigned int);
extern void __cdecl FUN_006102c0(void);
extern void __cdecl FUN_00611580(void);
extern void __cdecl FUN_006105f0(void);

extern int g_7f2874;
extern int g_7f28b0;
extern int g_7f28ac;
extern int g_7f28a8;
extern int g_7f28a4;
extern int g_7f28a0;
extern int g_7f289c;
extern int g_7f2880;
extern int g_7f287c;
extern int g_7f2898;
extern int g_7f2894;
extern char g_7f2872;
extern char g_7f2870;
extern char g_7f2871;
extern int g_7f2878;
extern int g_7f2888;
extern int g_7f2884;
extern int g_7f2890;
extern int g_7f288c;
extern int g_7f28b4;
extern int g_7f28b8;
extern int g_7f28bc;
extern int g_7f28c0;
extern int g_7f28c4;
extern double g_7f28c8;
extern int g_7dab44;
extern int g_7dab40;
extern int g_7f28d0;
extern int g_7f28d4;

__declspec(naked) void __cdecl FUN_00611820(void)
{
    __asm {
        push    ebx
        xor     ebx, ebx
        push    esi
        push    edi
        push    ebx
        mov     dword ptr [g_7f2874], 0xffffffff
        mov     dword ptr [g_7f28b0], 0x41b80000
        mov     dword ptr [g_7f28ac], 0x41200000
        mov     dword ptr [g_7f28a8], 0x43c80000
        mov     dword ptr [g_7f28a4], 0x43c80000
        mov     dword ptr [g_7f28a0], 0x0
        mov     dword ptr [g_7f289c], 0x0
        mov     dword ptr [g_7f2880], 0x0
        mov     dword ptr [g_7f287c], 0x0
        mov     dword ptr [g_7f2898], 0x45a00000
        mov     dword ptr [g_7f2894], 0x45a00000
        mov     byte ptr [g_7f2872], bl
        mov     byte ptr [g_7f2870], bl
        mov     byte ptr [g_7f2871], bl
        mov     dword ptr [g_7f2878], ebx
        mov     dword ptr [g_7f2888], 0x447a0000
        mov     dword ptr [g_7f2884], 0x447a0000
        mov     dword ptr [g_7f2890], 0x3ecccccd
        mov     dword ptr [g_7f288c], 0x3ecccccd
        mov     dword ptr [g_7f28b4], ebx
        mov     dword ptr [g_7f28b8], ebx
        mov     dword ptr [g_7f28bc], ebx
        mov     dword ptr [g_7f28c0], ebx
        mov     dword ptr [g_7f28c4], 0x3f800000
        call    FUN_00707e70
        fstp    qword ptr [g_7f28c8]
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     edx, dword ptr [ecx + 0xc]
        push    0x7f28c0
        push    0x7f28bc
        xor     edx, 0x85739531
        mov     ecx, dword ptr [edx + 0x3080]
        push    0x7f28b8
        call    FUN_0061bf80
        push    0x50
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L1948
        mov     ecx, eax
        call    FUN_006102c0
        jmp     L194a
L1948:
        xor     eax, eax
L194a:
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        mov     dword ptr [g_7f28d0], eax
        call    dword ptr [edx + 0x10]
        push    0x50
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L196d
        mov     ecx, eax
        call    FUN_00611580
        jmp     L196f
L196d:
        xor     eax, eax
L196f:
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        mov     dword ptr [g_7f28d4], eax
        call    dword ptr [edx + 0x10]
        xor     edi, edi
        mov     esi, 0x7f28d8
L1982:
        push    0xc0
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L199d
        push    edi
        mov     ecx, eax
        call    FUN_006105f0
        jmp     L199f
L199d:
        xor     eax, eax
L199f:
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        mov     dword ptr [esi], eax
        call    dword ptr [edx + 0x10]
        add     esi, 0x4
        inc     edi
        cmp     esi, 0x7f2918
        jl      L1982
        pop     edi
        pop     esi
        pop     ebx
        ret
    }
}
