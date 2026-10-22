/*
 * FUN_10028c90 (390 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E.  Else calls FUN_1001c8d0,
 * then dispatches vtable[4]/[5] (call [ecx+0x10]/[ecx+0x14]) six times with
 * g_10075060 and GUIDs (0x10049e50, 0x10049c08, 0x10049cb8, 0x10049c10,
 * 0x10049cc0, 0x10049c18), storing the six results at this+0x24..0x38.
 * On failure frees any non-null results via FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8d0(void);
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10028c90(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        xor     ebx, ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x28]
        cmp     dword ptr [edi + 0xc], ebx
        mov     dword ptr [esp + 0xc], ebx
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x20], ebx
        jne     L_go
        pop     edi
        pop     esi
        mov     eax, 0xc112000e
        pop     ebx
        add     esp, 0x18
        ret     0x4
L_go:
        push    edi
        call    FUN_1001c8d0
        mov     esi, eax
        cmp     esi, ebx
        jl      L_fail
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049e50
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_fail
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x10]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c08
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_fail
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x14]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049cb8
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_fail
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x18]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c10
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_fail
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x1c]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049cc0
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_fail
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x20]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c18
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_fail
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [edi + 0x24], eax
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [edi + 0x28], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [edi + 0x2c], edx
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [edi + 0x30], eax
        mov     dword ptr [edi + 0x34], ecx
        mov     dword ptr [edi + 0x38], edx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x18
        ret     0x4
L_fail:
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, ebx
        je      L_f1
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_f1:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        je      L_f2
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_f2:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        je      L_f3
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_f3:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x18
        ret     0x4
    }
}
