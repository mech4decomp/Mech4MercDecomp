/*
 * FUN_10021e70 (330 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001ca20, then
 * dispatches vtable methods (call [ecx+0x10]/[ecx+0x14]) and FUN_1002df70
 * with g_10075060 and various GUIDs, storing five handles into this+0x1c..
 * +0x2c.  On failure frees via FUN_10001d60 / FUN_1002e070.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca20(void);   /* rel32 call */
extern int g_10075060;
extern void __stdcall FUN_1002df70(void); /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */
extern void __stdcall FUN_1002e070(void); /* rel32 call */

__declspec(naked) void __stdcall FUN_10021e70(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    esi
        xor     ebx, ebx
        push    edi
        mov     edi, dword ptr [esp+0x24]
        cmp     dword ptr [edi+0xc], ebx
        mov     dword ptr [esp+0x14], ebx
        mov     dword ptr [esp+0xc], ebx
        mov     dword ptr [esp+0x18], ebx
        mov     dword ptr [esp+0x10], ebx
        mov     dword ptr [esp+0x1c], ebx
        jne     L_ea3
        pop     edi
        pop     esi
        mov     eax, 0xc112000e
        pop     ebx
        add     esp, 0x14
        ret     4
L_ea3:
        push    edi
        call    FUN_1001ca20
        mov     esi, eax
        cmp     esi, ebx
        jl      L_f89
        mov     eax, dword ptr [edi+0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp+0x14]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049d10
        push    edx
        push    eax
        call    dword ptr [ecx+0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_f89
        mov     eax, dword ptr [edi+0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp+0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049cf8
        push    edx
        push    eax
        call    dword ptr [ecx+0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_f89
        mov     eax, dword ptr [edi+0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp+0x18]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049d00
        push    edx
        push    eax
        call    dword ptr [ecx+0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_f89
        mov     ecx, dword ptr [g_10075060]
        mov     edx, dword ptr [edi+0xc]
        lea     eax, [esp+0x10]
        push    eax
        push    0x10049e48
        push    ecx
        push    edx
        call    FUN_1002df70
        mov     esi, eax
        cmp     esi, ebx
        jl      L_f89
        mov     eax, dword ptr [edi+0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp+0x1c]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049eb0
        push    edx
        push    eax
        call    dword ptr [ecx+0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_f89
        mov     eax, dword ptr [esp+0x14]
        mov     ecx, dword ptr [esp+0xc]
        mov     edx, dword ptr [esp+0x18]
        mov     dword ptr [edi+0x1c], eax
        mov     eax, dword ptr [esp+0x10]
        mov     dword ptr [edi+0x20], ecx
        mov     ecx, dword ptr [esp+0x1c]
        mov     dword ptr [edi+0x28], eax
        mov     dword ptr [edi+0x24], edx
        mov     dword ptr [edi+0x2c], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x14
        ret     4
L_f89:
        mov     eax, dword ptr [esp+0xc]
        cmp     eax, ebx
        je      L_f9a
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_f9a:
        mov     eax, dword ptr [esp+0x10]
        cmp     eax, ebx
        je      L_faf
        cmp     dword ptr [edi+0xc], ebx
        setne   dl
        push    eax
        push    edx
        call    FUN_1002e070
L_faf:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x14
        ret     4
    }
}
