/*
 * FUN_10012ED0 (218 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001ca20,
 * then dispatches vtable[4] (call [ecx+0x10]) with g_10075060 and GUID
 * 0x10049b60, and vtable[5] (call [ecx+0x14]) with GUID 0x10049c10.
 * On success stores +0x1c/+0x20.  On failure frees via FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca20(void);
extern void __cdecl FUN_10001d60(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10012ED0(void)
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
        jne     L_12efd
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 8
        ret     4
L_12efd:
        push    edi
        call    FUN_1001ca20
        mov     esi, eax
        test    esi, esi
        jl      L_12f8f
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
        je      L_12f35
        test    esi, esi
        jl      L_12f8f
L_12f35:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c10
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, 0xc1120007
        jne     L_12f73
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 0xc]
        xor     esi, esi
        mov     dword ptr [edi + 0x1c], eax
        mov     dword ptr [edi + 0x20], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     4
L_12f73:
        test    esi, esi
        jl      L_12f8f
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [edi + 0x1c], eax
        mov     dword ptr [edi + 0x20], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     4
L_12f8f:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_12fa0
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_12fa0:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     4
    }
}
