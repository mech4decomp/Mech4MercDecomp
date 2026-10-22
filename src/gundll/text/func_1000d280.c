/*
 * FUN_1000D280 (340 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c770,
 * then a sequence of vtable dispatches (vtable[5]/[4]) and FUN_1002e100
 * calls with g_10075060 and various GUIDs, storing four handles into
 * this->+0x20/+0x24/+0x28/+0x2c.  On failure frees via FUN_1002e220 /
 * FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c770(void);
extern void __cdecl FUN_1002e100(void);
extern void __stdcall FUN_1002e220(int, void *);
extern void __cdecl FUN_10001d60(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_1000D280(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    esi
        xor     ebx, ebx
        push    edi
        mov     edi, dword ptr [esp + 0x20]
        cmp     dword ptr [edi + 0xc], ebx
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0xc], ebx
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], ebx
        jne     L_d2af
        pop     edi
        pop     esi
        mov     eax, 0xc112000e
        pop     ebx
        add     esp, 0x10
        ret     4
L_d2af:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        cmp     esi, ebx
        jl      L_d38e
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x18]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b34
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, 0xc1120007
        je      L_d2eb
        cmp     esi, ebx
        jl      L_d38e
L_d2eb:
        mov     ecx, dword ptr [g_10075060]
        mov     edx, dword ptr [edi + 0xc]
        lea     eax, [esp + 0xc]
        push    eax
        push    0x10049da0
        push    ecx
        push    edx
        call    FUN_1002e100
        mov     esi, eax
        cmp     esi, 0xc1120007
        je      L_d313
        cmp     esi, ebx
        jl      L_d38e
L_d313:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x10]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b2c
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, 0xc1120007
        je      L_d33b
        cmp     esi, ebx
        jl      L_d38e
L_d33b:
        mov     ecx, dword ptr [g_10075060]
        mov     edx, dword ptr [edi + 0xc]
        lea     eax, [esp + 0x14]
        push    eax
        push    0x10049d90
        push    ecx
        push    edx
        call    FUN_1002e100
        mov     esi, eax
        cmp     esi, 0xc1120007
        jne     L_d363
        xor     esi, esi
        jmp     L_d367
L_d363:
        cmp     esi, ebx
        jl      L_d38e
L_d367:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x10]
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
L_d38e:
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, ebx
        je      L_d3a3
        cmp     dword ptr [edi + 0xc], ebx
        setne   cl
        push    eax
        push    ecx
        call    FUN_1002e220
L_d3a3:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        je      L_d3b4
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_d3b4:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        je      L_d3c9
        cmp     dword ptr [edi + 0xc], ebx
        setne   dl
        push    eax
        push    edx
        call    FUN_1002e220
L_d3c9:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     4
    }
}
