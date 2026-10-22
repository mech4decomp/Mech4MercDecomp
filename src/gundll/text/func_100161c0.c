/*
 * FUN_100161C0 (274 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c8d0,
 * then vtable[5] dispatches with g_10075060 and GUIDs 0x10049c20 /
 * 0x10049c24, then FUN_1002b860, storing four handles into this->+0x24/
 * +0x28/+0x2c/+0x30.  On failure frees via FUN_1002bb80.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8d0(void);
extern void __stdcall FUN_1002b860(void);
extern void __stdcall FUN_1002bb80(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_100161C0(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0xc], 0
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 8], 0
        jne     L_161f5
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 0xc
        ret     4
L_161f5:
        push    edi
        call    FUN_1001c8d0
        mov     esi, eax
        test    esi, esi
        jl      L_162ac
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c20
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, 0xc1120007
        je      L_1622d
        test    esi, esi
        jl      L_162ac
L_1622d:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x10]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c24
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, 0xc1120007
        je      L_16255
        test    esi, esi
        jl      L_162ac
L_16255:
        mov     edx, dword ptr [g_10075060]
        lea     eax, [esp + 0x18]
        push    eax
        mov     eax, dword ptr [edi + 0xc]
        lea     ecx, [esp + 0xc]
        push    ecx
        push    0x10049dec
        push    edx
        push    eax
        call    FUN_1002b860
        mov     esi, eax
        cmp     esi, 0xc1120007
        jne     L_16282
        xor     esi, esi
        jmp     L_16286
L_16282:
        test    esi, esi
        jl      L_162ac
L_16286:
        mov     ecx, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 0x24], ecx
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [edi + 0x2c], eax
        mov     dword ptr [edi + 0x28], edx
        mov     dword ptr [edi + 0x30], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     4
L_162ac:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_162c8
        mov     edx, dword ptr [esp + 0x18]
        push    edx
        mov     edx, dword ptr [edi + 0xc]
        push    eax
        test    edx, edx
        setne   al
        push    eax
        call    FUN_1002bb80
L_162c8:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     4
    }
}
