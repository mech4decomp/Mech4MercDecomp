/*
 * FUN_1001ddf0 (242 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c770,
 * then vtable dispatches (vtable[4]/[5]) and FUN_1002d200 with
 * g_10075060 and GUIDs 0x10049b78/0x10049e10/0x10049d1c, storing three
 * handles into this->+0x20/+0x24/+0x28.  On failure frees via
 * FUN_10001d60 / FUN_1002d770.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c770(void);                 /* rel32 call */
extern int g_10075060;                          /* module data */
extern void __stdcall FUN_1002d200(void);       /* rel32 call */
extern void __cdecl FUN_10001d60(void);         /* rel32 call */
extern void __stdcall FUN_1002d770(void);       /* rel32 call */

__declspec(naked) void __stdcall FUN_1001ddf0(void)
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
        jne     L25
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 0xc
        ret     4
L25:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        test    esi, esi
        jl      Lb0
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 8]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b78
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        test    esi, esi
        jl      Lb0
        mov     ecx, dword ptr [g_10075060]
        mov     edx, dword ptr [edi + 0xc]
        lea     eax, [esp + 0xc]
        push    eax
        push    0x10049e10
        push    ecx
        push    edx
        call    FUN_1002d200
        mov     esi, eax
        test    esi, esi
        jl      Lb0
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x10]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049d1c
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        test    esi, esi
        jl      Lb0
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
Lb0:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      Lc1
        push    eax
        call    FUN_10001d60
        add     esp, 4
Lc1:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      Ld8
        mov     edx, dword ptr [edi + 0xc]
        push    eax
        test    edx, edx
        setne   al
        push    eax
        call    FUN_1002d770
Ld8:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xc
        ret     4
    }
}
