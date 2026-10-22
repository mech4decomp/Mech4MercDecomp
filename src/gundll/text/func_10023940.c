/*
 * FUN_10023940 (262 B) - __stdcall, RET 0x4 (1 arg).
 * Registration helper: if edi->+0xc is null returns 0xc112000e. Else calls
 * FUN_1001c770(edi), then dispatches vtable[5] (call [ecx+0x14]) three times
 * and vtable[4] (call [ecx+0x10]) once, each with g_10075060 and a GUID,
 * collecting four outputs into edi->{0x20,0x24,0x28,0x2c}. On failure frees
 * the last output via FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c770(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10023940(void)
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
        jne     L_96f
        pop     edi
        pop     esi
        mov     eax, 0xc112000e
        pop     ebx
        add     esp, 0x10
        ret     4
L_96f:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        cmp     esi, ebx
        jl      L_a2a
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
        jl      L_a2a
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
        jl      L_a2a
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
        jl      L_a2a
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
        jl      L_a2a
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [edi + 0x20], eax
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [edi + 0x2c], eax
        mov     dword ptr [edi + 0x24], ecx
        mov     dword ptr [edi + 0x28], edx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     4
L_a2a:
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, ebx
        je      L_a3b
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_a3b:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     4
    }
}
