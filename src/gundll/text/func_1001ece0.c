/*
 * FUN_1001ece0 (394 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c770,
 * then a sequence of vtable dispatches (vtable[5]/[4]) and FUN_1002b210
 * with g_10075060 and various GUIDs, storing six handles into
 * this->+0x20..+0x38.  On failure frees via FUN_1002b420 / FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c770(void);
extern int __stdcall FUN_1002b210(int a, int b, int c, void *d, void *e);
extern void __cdecl FUN_1002b420(void);
extern void __cdecl FUN_10001d60(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_1001ece0(void)
{
    __asm {
        sub     esp, 0x18
        push    ebx
        xor     ebx, ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x28]
        cmp     dword ptr [edi + 0xc], ebx
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0xc], ebx
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x20], ebx
        mov     dword ptr [esp + 0x10], ebx
        jne     L_ed17
        pop     edi
        pop     esi
        mov     eax, 0xc112000e
        pop     ebx
        add     esp, 0x18
        ret     4
L_ed17:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        cmp     esi, ebx
        jl      L_ee34
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x14]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b34
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_ee34
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x18]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c70
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_ee34
        mov     edx, dword ptr [g_10075060]
        lea     eax, [esp + 0x28]
        push    eax
        mov     eax, dword ptr [edi + 0xc]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x10049dd4
        push    edx
        push    eax
        call    FUN_1002b210
        mov     esi, eax
        cmp     esi, ebx
        jl      L_ee34
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x1c]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c7c
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_ee34
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x20]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b58
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_ee34
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x10]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b5c
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_ee34
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x28]
        mov     dword ptr [edi + 0x20], eax
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [edi + 0x2c], eax
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 0x24], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [edi + 0x28], edx
        mov     edx, dword ptr [esp + 0x20]
        mov     dword ptr [edi + 0x38], eax
        mov     dword ptr [edi + 0x30], ecx
        mov     dword ptr [edi + 0x34], edx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x18
        ret     4
L_ee34:
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, ebx
        je      L_ee4e
        mov     ecx, dword ptr [esp + 0x28]
        push    ecx
        cmp     dword ptr [edi + 0xc], ebx
        setne   dl
        push    eax
        push    edx
        call    FUN_1002b420
L_ee4e:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        je      L_ee5f
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_ee5f:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x18
        ret     4
    }
}
