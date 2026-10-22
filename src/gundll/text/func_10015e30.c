/*
 * FUN_10015E30 (268 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c770,
 * then vtable[5]/[4]/[4] dispatches with g_10075060 and GUIDs 0x10049bf8 /
 * 0x10049b60 / 0x10049c00, storing three handles into this->+0x20/+0x24/
 * +0x28.  On failure frees the temp buffers via FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c770(void);
extern void __cdecl FUN_10001d60(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10015E30(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 8], 0
        mov     dword ptr [esp + 0xc], 0
        jne     L_15e65
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 0xc
        ret     4
L_15e65:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        test    esi, esi
        jl      L_15f10
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x10]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049bf8
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, 0xc1120007
        je      L_15e9d
        test    esi, esi
        jl      L_15f10
L_15e9d:
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
        je      L_15ec5
        test    esi, esi
        jl      L_15f10
L_15ec5:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c00
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, 0xc1120007
        jne     L_15eed
        xor     esi, esi
        jmp     L_15ef1
L_15eed:
        test    esi, esi
        jl      L_15f10
L_15ef1:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [edi + 0x20], eax
        mov     dword ptr [edi + 0x24], ecx
        mov     dword ptr [edi + 0x28], edx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     4
L_15f10:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_15f21
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_15f21:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L_15f32
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_15f32:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     4
    }
}
