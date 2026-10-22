/*
 * FUN_1001a640 (325 B) — __stdcall, RET 0x4.
 * CFLAGS: /O1
 */

extern int g_10075060;
extern void __cdecl FUN_1001c8d0(void);
extern void __cdecl FUN_1002da70(void);
extern void __cdecl FUN_1002dcb0(void);

__declspec(naked) void __stdcall FUN_1001a640(void)
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
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ebx
        jnz     L66f
        pop     edi
        pop     esi
        mov     eax, 0xc112000e
        pop     ebx
        add     esp, 0x10
        ret     0x4
    L66f:
        push    edi
        call    FUN_1001c8d0
        mov     esi, eax
        cmp     esi, ebx
        jl      L75e
        mov     edx, dword ptr [g_10075060]
        lea     eax, [esp + 0x20]
        push    eax
        mov     eax, dword ptr [edi + 0xc]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x10049e30
        push    edx
        push    eax
        call    FUN_1002da70
        mov     esi, eax
        cmp     esi, 0xc1120007
        jz      L6b0
        cmp     esi, ebx
        jl      L75e
    L6b0:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x10]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c70
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, 0xc1120007
        jz      L6dc
        cmp     esi, ebx
        jl      L75e
    L6dc:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x14]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c84
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, 0xc1120007
        jz      L704
        cmp     esi, ebx
        jl      L75e
    L704:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x18]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c8c
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, 0xc1120007
        jnz     L72c
        xor     esi, esi
        jmp     L730
    L72c:
        cmp     esi, ebx
        jl      L75e
    L730:
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 0x24], eax
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [edi + 0x28], ecx
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [edi + 0x30], eax
        mov     dword ptr [edi + 0x2c], edx
        mov     dword ptr [edi + 0x34], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     0x4
    L75e:
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, ebx
        jz      L77a
        mov     edx, dword ptr [esp + 0x20]
        push    edx
        mov     edx, dword ptr [edi + 0xc]
        push    eax
        cmp     edx, ebx
        setnz   al
        push    eax
        call    FUN_1002dcb0
    L77a:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     0x4
    }
}
