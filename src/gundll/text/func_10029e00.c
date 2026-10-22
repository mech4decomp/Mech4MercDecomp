/*
 * FUN_10029e00 (319 B) - __stdcall, RET 0x4 (1 arg). Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001ca20(this),
 * then FUN_1002b210(obj, g_10075060, GUID 0x10049e64, &local1, &arg1), then
 * vtable[4] (call [ecx+0x10]) with GUID 0x10049b60, vtable[4] with GUID
 * 0x10049c00, and vtable[5] (call [ecx+0x14]) with GUID 0x10049bf8. On
 * success stores +0x1c/+0x20/+0x24/+0x28/+0x2c. On failure calls
 * FUN_1002b420(arg1, local0, obj!=0) and frees local1/local2 via
 * FUN_10001d60.
 *
 * CFLAGS: /O1
 * Provenance: gaptext.bin (missed by Ghidra inventory).
 */

extern void __cdecl FUN_1001ca20(void);
extern int __stdcall FUN_1002b210(int a, int b, int c, void *d, void *e);
extern void __cdecl FUN_1002b420(void);
extern void __cdecl FUN_10001d60(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10029e00(void)
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
        jne     L_9e2f
        pop     edi
        pop     esi
        mov     eax, 0xc112000e
        pop     ebx
        add     esp, 0x10
        ret     4
L_9e2f:
        push    edi
        call    FUN_1001ca20
        mov     esi, eax
        cmp     esi, ebx
        jl      L_9ef6
        mov     edx, dword ptr [g_10075060]
        lea     eax, [esp + 0x20]
        push    eax
        mov     eax, dword ptr [edi + 0xc]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    0x10049e64
        push    edx
        push    eax
        call    FUN_1002b210
        mov     esi, eax
        cmp     esi, ebx
        jl      L_9ef6
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x10]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b60
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_9ef6
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x14]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c00
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, ebx
        jl      L_9ef6
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
        jl      L_9ef6
        mov     eax, dword ptr [esp + 0x20]
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 0x1c], eax
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [edi + 0x20], ecx
        mov     ecx, dword ptr [esp + 0x18]
        mov     dword ptr [edi + 0x28], eax
        mov     dword ptr [edi + 0x24], edx
        mov     dword ptr [edi + 0x2c], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     4
L_9ef6:
        mov     eax, dword ptr [esp + 0xc]
        cmp     eax, ebx
        je      L_9f12
        mov     edx, dword ptr [esp + 0x20]
        push    edx
        mov     edx, dword ptr [edi + 0xc]
        push    eax
        cmp     edx, ebx
        setne   al
        push    eax
        call    FUN_1002b420
L_9f12:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        je      L_9f23
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_9f23:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, ebx
        je      L_9f34
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_9f34:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x10
        ret     4
    }
}
