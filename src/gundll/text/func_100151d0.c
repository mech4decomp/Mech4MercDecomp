/*
 * FUN_100151D0 (218 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c770,
 * then vtable[5]/[4] dispatches with g_10075060 and GUIDs 0x10049bf8 /
 * 0x10049b60, storing two handles into this->+0x20/+0x24.  On failure
 * frees the temp buffer via FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c770(void);
extern void __cdecl FUN_10001d60(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_100151D0(void)
{
    __asm {
        sub     esp, 8
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0xc], 0
        mov     dword ptr [esp + 8], 0
        jne     L_151fd
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 8
        ret     4
L_151fd:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        test    esi, esi
        jl      L_1528f
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049bf8
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, 0xc1120007
        je      L_15235
        test    esi, esi
        jl      L_1528f
L_15235:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 8]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b60
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, 0xc1120007
        jne     L_15273
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 8]
        xor     esi, esi
        mov     dword ptr [edi + 0x20], eax
        mov     dword ptr [edi + 0x24], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     4
L_15273:
        test    esi, esi
        jl      L_1528f
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 8]
        mov     dword ptr [edi + 0x20], eax
        mov     dword ptr [edi + 0x24], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     4
L_1528f:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_152a0
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_152a0:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     4
    }
}
