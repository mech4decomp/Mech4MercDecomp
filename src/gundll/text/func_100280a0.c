/*
 * FUN_100280a0 (296 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c770,
 * then a sequence of vtable dispatches (vtable[5]/[4]/[4]/[4]) with
 * g_10075060 and GUIDs 0x10049bf8/0x10049b60/0x10049c34/0x10049ccc,
 * storing four handles into this->+0x20/+0x24/+0x28/+0x2c.  On failure
 * frees the three later locals via FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_1001c770(void);
extern void __cdecl FUN_10001d60(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_100280a0(void)
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
        jne     L_cf
        pop     edi
        pop     esi
        mov     eax, 0xc112000e
        pop     ebx
        add     esp, 0x10
        ret     4
L_cf:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        cmp     esi, ebx
        jl      L_18a
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x18]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049bf8
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_18a
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b60
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_18a
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x10]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c34
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_18a
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x14]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049ccc
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_18a
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
L_18a:
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, ebx
        je      L_19b
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_19b:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        je      L_1ac
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_1ac:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        je      L_1bd
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_1bd:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     4
    }
}
