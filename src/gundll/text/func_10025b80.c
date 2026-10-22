/*
 * FUN_10025b80 (262 B) - __stdcall, RET 0x4.  If this->obj(+0xc) is null
 * returns 0xc112000e; else calls FUN_1001ca20(this), then reads four
 * GUID-keyed values from the object via its vtable (call [ecx+0x14] /
 * [ecx+0x10]) using g_10075060 and stores them into this
 * (+0x1c/+0x20/+0x24/+0x28).  On failure frees the intermediate buffer via
 * FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca20(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10025b80(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    esi
        xor     ebx, ebx
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        cmp     dword ptr [edi + 0xc], ebx
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0xc], ebx
        jne     L_25baf
        pop     edi
        pop     esi
        mov     eax, 0xc112000e
        pop     ebx
        add     esp, 0x10
        ret     4
L_25baf:
        push    edi
        call    FUN_1001ca20
        mov     esi, eax
        cmp     esi, ebx
        jl      L_25c6a
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x10]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049bc4
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_25c6a
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x14]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c2c
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_25c6a
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x18]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049e5c
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_25c6a
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049e74
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_25c6a
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [edi + 0x1c], eax
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [edi + 0x28], eax
        mov     dword ptr [edi + 0x20], ecx
        mov     dword ptr [edi + 0x24], edx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     4
L_25c6a:
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, ebx
        je      L_25c7b
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_25c7b:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     4
    }
}
