/*
 * FUN_10025f40 (407 B) - __stdcall, RET 0x4.  If this->obj(+0xc) is null
 * returns 0xc112000e; else calls FUN_1001c770(this), then reads six
 * GUID-keyed values from the object via its vtable (call [ecx+0x10] /
 * [ecx+0x14]) using g_10075060 and stores them into this
 * (+0x20..+0x34).  On failure frees the intermediate buffers via
 * FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c770(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10025f40(void)
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
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ebx
        jne     L_25f77
        pop     edi
        pop     esi
        mov     eax, 0xc112000e
        pop     ebx
        add     esp, 0x18
        ret     4
L_25f77:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        cmp     esi, ebx
        jl      L_26088
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049bf0
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_26088
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
        jl      L_26088
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x1c]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c10
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_26088
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
        jl      L_26088
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x14]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b80
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_26088
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x18]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b60
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_26088
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x1c]
        mov     dword ptr [edi + 0x20], eax
        mov     eax, dword ptr [esp + 0x20]
        mov     dword ptr [edi + 0x24], ecx
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [edi + 0x28], edx
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [edi + 0x2c], eax
        mov     dword ptr [edi + 0x30], ecx
        mov     dword ptr [edi + 0x34], edx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x18
        ret     4
L_26088:
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, ebx
        je      L_26099
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_26099:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        je      L_260aa
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_260aa:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        je      L_260bb
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_260bb:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebx
        je      L_260cc
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_260cc:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x18
        ret     4
    }
}
