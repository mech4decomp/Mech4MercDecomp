/*
 * FUN_10025890 (219 B) — __stdcall, RET 0x4.
 * Reads three values via vtable dispatch on object at [EDI+0xc], stores
 * them at [EDI+0x1c/0x20/0x24]. Returns -0x3eedfff2 if [EDI+0xc]==0.
 *
 * CFLAGS: /O1
 */

extern unsigned int g_10075060;
extern void __cdecl FUN_1001ca20(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_10025890(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0xc], 0
        mov     dword ptr [esp + 0x8], 0
        mov     dword ptr [esp + 0x10], 0
        jnz     L_c5
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 0xc
        ret     0x4
    L_c5:
        push    edi
        call    FUN_1001ca20
        mov     esi, eax
        test    esi, esi
        jl      L_950
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049bc4
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        test    esi, esi
        jl      L_950
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x8]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049e50
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        test    esi, esi
        jl      L_950
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x10]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049e5c
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        test    esi, esi
        jl      L_950
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 0x1c], eax
        mov     dword ptr [edi + 0x20], ecx
        mov     dword ptr [edi + 0x24], edx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     0x4
    L_950:
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        jz      L_961
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L_961:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     0x4
    }
}
