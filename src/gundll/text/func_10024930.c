/*
 * FUN_10024930 (236 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c8d0,
 * then dispatches vtable[4]/[5] (call [ecx+0x10]/[ecx+0x14]) with
 * g_10075060 and GUIDs 0x10049e50/0x10049be0/0x10049c54, storing the
 * three returned dwords into +0x24/+0x28/+0x2c.  On failure frees the
 * locals via FUN_10001d60 and returns the error.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8d0(void);
extern void __cdecl FUN_10001d60(void);     /* rel32 call (shared_free) */
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10024930(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 8], 0
        mov     dword ptr [esp + 0x10], 0
        mov     dword ptr [esp + 0xc], 0
        jne     L_965
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 0xc
        ret     4
L_965:
        push    edi
        call    FUN_1001c8d0
        mov     esi, eax
        test    esi, esi
        jl      L_9f0
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 8]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049e50
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        test    esi, esi
        jl      L_9f0
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x10]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049be0
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        test    esi, esi
        jl      L_9f0
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c54
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        test    esi, esi
        jl      L_9f0
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0xc]
        mov     dword ptr [edi + 0x24], eax
        mov     dword ptr [edi + 0x28], ecx
        mov     dword ptr [edi + 0x2c], edx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     4
L_9f0:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_a01
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_a01:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L_a12
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_a12:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     4
    }
}
