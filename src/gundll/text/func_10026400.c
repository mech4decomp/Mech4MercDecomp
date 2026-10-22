/*
 * FUN_10026400 (253 B) - __stdcall, RET 0x4.  If this->obj(+0xc) is null
 * returns 0xc112000e; else calls FUN_1001c770(this), then reads three
 * GUID-keyed values from the object via its vtable (call [ecx+0x10]) using
 * g_10075060 and stores them into this (+0x20/+0x24/+0x28).  On failure
 * frees the intermediate buffers via FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c770(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10026400(void)
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
        jne     L_26435
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 0xc
        ret     4
L_26435:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        test    esi, esi
        jl      L_264c0
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 8]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049bf0
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        test    esi, esi
        jl      L_264c0
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b80
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        test    esi, esi
        jl      L_264c0
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
        test    esi, esi
        jl      L_264c0
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [edi + 0x20], eax
        mov     dword ptr [edi + 0x24], ecx
        mov     dword ptr [edi + 0x28], edx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     4
L_264c0:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_264d1
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_264d1:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L_264e2
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_264e2:
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_264f3
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_264f3:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     4
    }
}
