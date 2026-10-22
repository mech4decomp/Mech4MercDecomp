/*
 * FUN_1002a200 (172 B) - __stdcall, RET 0x4 (1 arg). Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001ca20(this),
 * then vtable[4] (call [ecx+0x10]) with GUID 0x10049b60, then vtable[5]
 * (call [ecx+0x14]) with GUID 0x10049bf8. On success stores +0x1c/+0x20.
 * On failure frees local0 via FUN_10001d60.
 *
 * CFLAGS: /O1
 * Provenance: gaptext.bin (missed by Ghidra inventory).
 */

extern void __cdecl FUN_1001ca20(void);
extern void __cdecl FUN_10001d60(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_1002a200(void)
{
    __asm {
        sub     esp, 8
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 8], 0
        mov     dword ptr [esp + 0xc], 0
        jne     L_a22d
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 8
        ret     4
L_a22d:
        push    edi
        call    FUN_1001ca20
        mov     esi, eax
        test    esi, esi
        jl      L_a291
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
        test    esi, esi
        jl      L_a291
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
        test    esi, esi
        jl      L_a291
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [edi + 0x1c], eax
        mov     dword ptr [edi + 0x20], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     4
L_a291:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_a2a2
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_a2a2:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     4
    }
}
