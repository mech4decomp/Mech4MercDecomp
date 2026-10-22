/*
 * FUN_100299f0 (263 B) - __stdcall, RET 0x4 (1 arg). Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001ca20(this),
 * then FUN_1002b210(obj, g_10075060, GUID 0x10049e64, &local1, &arg1), then
 * vtable[4] (call [ecx+0x10]) with GUID 0x10049b60, then vtable[5]
 * (call [ecx+0x14]) with GUID 0x10049bf8. On success stores +0x1c/+0x20/
 * +0x24/+0x28. On failure calls FUN_1002b420(arg1, local0, obj!=0) and frees
 * local1 via FUN_10001d60.
 *
 * CFLAGS: /O1
 * Provenance: gaptext.bin (missed by Ghidra inventory).
 */

extern void __cdecl FUN_1001ca20(void);
extern int __stdcall FUN_1002b210(int a, int b, int c, void *d, void *e);
extern void __cdecl FUN_1002b420(void);
extern void __cdecl FUN_10001d60(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_100299f0(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 8], 0
        mov     dword ptr [esp + 0xc], 0
        mov     dword ptr [esp + 0x10], 0
        jne     L_9a25
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 0xc
        ret     4
L_9a25:
        push    edi
        call    FUN_1001ca20
        mov     esi, eax
        test    esi, esi
        jl      L_9ac0
        mov     edx, dword ptr [g_10075060]
        lea     eax, [esp + 0x18]
        push    eax
        mov     eax, dword ptr [edi + 0xc]
        lea     ecx, [esp + 0xc]
        push    ecx
        push    0x10049e64
        push    edx
        push    eax
        call    FUN_1002b210
        mov     esi, eax
        test    esi, esi
        jl      L_9ac0
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
        test    esi, esi
        jl      L_9ac0
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
        test    esi, esi
        jl      L_9ac0
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 8]
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [edi + 0x1c], eax
        mov     eax, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 0x28], eax
        mov     dword ptr [edi + 0x20], ecx
        mov     dword ptr [edi + 0x24], edx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     4
L_9ac0:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_9adc
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        mov     ecx, dword ptr [edi + 0xc]
        test    ecx, ecx
        setne   dl
        push    eax
        push    edx
        call    FUN_1002b420
L_9adc:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L_9aed
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_9aed:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     4
    }
}
