/*
 * FUN_10020D10 (300 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c770,
 * dispatches vtable methods (call [ecx+0x10]/[ecx+0x14]) and FUN_1002df70
 * to build four handles, storing them at +0x20/+0x24/+0x28/+0x2c.  On
 * failure frees via FUN_10001d60 and calls FUN_1002e070.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c770(void);
extern void __stdcall FUN_1002df70(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);
extern void __cdecl FUN_1002e070(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10020D10(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    esi
        xor     ebx, ebx
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        cmp     dword ptr [edi + 0xc], ebx
        mov     dword ptr [esp + 0xc], ebx
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x14], ebx
        jne     L_d3f
        pop     edi
        pop     esi
        mov     eax, 0xc112000e
        pop     ebx
        add     esp, 0x10
        ret     4
L_d3f:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        cmp     esi, ebx
        jl      L_dfa
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049cec
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_dfa
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x10]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049cf8
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_dfa
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x18]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049d00
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_dfa
        mov     ecx, dword ptr [g_10075060]
        mov     edx, dword ptr [edi + 0xc]
        lea     eax, [esp + 0x14]
        push    eax
        push    0x10049e48
        push    ecx
        push    edx
        call    FUN_1002df70
        mov     esi, eax
        cmp     esi, ebx
        jl      L_dfa
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [edi + 0x20], eax
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [edi + 0x2c], eax
        mov     dword ptr [edi + 0x24], ecx
        mov     dword ptr [edi + 0x28], edx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     4
L_dfa:
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, ebx
        je      L_e0b
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_e0b:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        je      L_e1c
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_e1c:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        je      L_e31
        cmp     dword ptr [edi + 0xc], ebx
        setne   cl
        push    eax
        push    ecx
        call    FUN_1002e070
L_e31:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     4
    }
}
