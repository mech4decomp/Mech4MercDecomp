/*
 * FUN_10017e80 (218 B) - __stdcall, RET 0x4.  Object-registration helper.
 * If this->obj(+0xc) is null returns 0xC112000E.  Else calls FUN_1001ca20(this);
 * then invokes two vtable methods on the object (vtable[+0x14] with GUID
 * 0x10049bf8, vtable[+0x10] with GUID 0x10049b60), passing g_10075060 and an
 * out-param; stores the two returned handles into this->+0x1c/+0x20.  On
 * failure frees the first handle via FUN_10001d60 and returns the error.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca20(void);   /* rel32 call (callee cleans) */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10017e80(void)
{
    __asm {
        sub     esp, 8
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0xc], 0
        mov     dword ptr [esp + 0x8], 0
        jne     short L_reg
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 8
        ret     0x4
L_reg:
        push    edi
        call    FUN_1001ca20
        mov     esi, eax
        test    esi, esi
        jl      L_fail
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
        cmp     esi, 0xc1120007
        je      short L_second
        test    esi, esi
        jl      L_fail
L_second:
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x8]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b60
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, 0xc1120007
        jne     short L_check
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x8]
        xor     esi, esi
        mov     dword ptr [edi + 0x1c], eax
        mov     dword ptr [edi + 0x20], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     0x4
L_check:
        test    esi, esi
        jl      L_fail
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, dword ptr [esp + 0x8]
        mov     dword ptr [edi + 0x1c], eax
        mov     dword ptr [edi + 0x20], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     0x4
L_fail:
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        je      short L_done
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_done:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     0x4
    }
}
