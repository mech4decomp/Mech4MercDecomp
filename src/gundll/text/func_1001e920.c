/*
 * FUN_1001e920 (309 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c770,
 * then a sequence of vtable dispatches (vtable[5]/[4]) with g_10075060 and
 * various GUIDs, storing five handles into this->+0x20/+0x24/+0x28/+0x2c/
 * +0x30.  On failure frees the last handle via FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c770(void);
extern void __cdecl FUN_10001d60(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_1001e920(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    esi
        xor     ebx, ebx
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        cmp     dword ptr [edi + 0xc], ebx
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0xc], ebx
        jne     L_e953
        pop     edi
        pop     esi
        mov     eax, 0xc112000e
        pop     ebx
        add     esp, 0x14
        ret     4
L_e953:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        cmp     esi, ebx
        jl      L_ea39
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x10]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b34
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_ea39
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x14]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c70
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_ea39
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x18]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c68
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_ea39
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x1c]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b58
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_ea39
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b5c
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_ea39
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [edi + 0x20], eax
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [edi + 0x24], ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [edi + 0x2c], eax
        mov     dword ptr [edi + 0x28], edx
        mov     dword ptr [edi + 0x30], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x14
        ret     4
L_ea39:
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, ebx
        je      L_ea4a
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_ea4a:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x14
        ret     4
    }
}
