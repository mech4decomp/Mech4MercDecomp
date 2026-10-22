/*
 * FUN_1002a530 (313 B) — __stdcall, RET 0x4.
 * Reads four string properties from an object via a vtable dispatch and
 * stores them into the object; frees partial results on failure.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001CA20(void);
extern void __cdecl FUN_10001d60(void);

extern int  g_10075060;
extern char g_10049b60;
extern char g_10049bf0;
extern char g_10049c3c;
extern char g_10049ccc;

__declspec(naked) void __stdcall FUN_1002a530(void)
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
        jnz     L_a55f
        pop     edi
        pop     esi
        mov     eax, 0xc112000e
        pop     ebx
        add     esp, 0x10
        ret     4
    L_a55f:
        push    edi
        call    FUN_1001CA20
        mov     esi, eax
        cmp     esi, ebx
        jl      L_a61a
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    offset g_10049b60
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_a61a
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x10]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    offset g_10049bf0
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_a61a
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x14]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    offset g_10049c3c
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_a61a
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x18]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    offset g_10049ccc
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_a61a
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [edi + 0x1c], eax
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [edi + 0x28], eax
        mov     dword ptr [edi + 0x20], ecx
        mov     dword ptr [edi + 0x24], edx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     4
    L_a61a:
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, ebx
        jz      L_a62b
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L_a62b:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        jz      L_a63c
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L_a63c:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        jz      L_a64d
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L_a64d:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebx
        jz      L_a65e
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L_a65e:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     4
    }
}
