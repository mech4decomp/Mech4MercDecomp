/*
 * FUN_10021250 (309 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c8d0,
 * then dispatches vtable[4]/vtable[5] (call [ecx+0x10]/[ecx+0x14]) with
 * g_10075060 and various GUIDs (0x10049e50, 0x10049cb0, 0x10049eb0,
 * 0x10049eb4, 0x10049ca4), storing five handles into +0x24..+0x34.
 * On failure frees the first handle via FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8d0(void);
extern void __cdecl FUN_10001d60(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10021250(void)
{
    __asm {
        sub     esp, 0x14
        push    ebx
        push    esi
        xor     ebx, ebx
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        cmp     dword ptr [edi + 0xc], ebx
        mov     dword ptr [esp + 0xc], ebx
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x1c], ebx
        jne     L_1283
        pop     edi
        pop     esi
        mov     eax, 0xc112000e
        pop     ebx
        add     esp, 0x14
        ret     4
L_1283:
        push    edi
        call    FUN_1001c8d0
        mov     esi, eax
        cmp     esi, ebx
        jl      L_1369
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049e50
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_1369
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x10]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049cb0
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_1369
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x14]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049eb0
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_1369
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x18]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049eb4
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_1369
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x1c]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049ca4
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_1369
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [edi + 0x24], eax
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [edi + 0x28], ecx
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [edi + 0x30], eax
        mov     dword ptr [edi + 0x2c], edx
        mov     dword ptr [edi + 0x34], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x14
        ret     4
L_1369:
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, ebx
        je      L_137a
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_137a:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x14
        ret     4
    }
}
