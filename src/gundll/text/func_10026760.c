/*
 * FUN_10026760 (117 B) - __stdcall, RET 0x4.  If this->obj(+0xc) is null
 * returns 0xc112000e; else calls FUN_1001c770(this), then reads one
 * GUID-keyed value from the object via its vtable (call [ecx+0x10]) using
 * g_10075060 and stores it into this+0x20.  On failure frees the
 * intermediate buffer via FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c770(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call */
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10026760(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 8], 0
        jne     L_26781
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     4
L_26781:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        test    esi, esi
        jl      L_267bc
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
        jl      L_267bc
        mov     eax, dword ptr [esp + 8]
        mov     dword ptr [edi + 0x20], eax
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     4
L_267bc:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_267cd
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_267cd:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     4
    }
}
