/*
 * FUN_10024580 (179 B) - __stdcall, RET 0x4.  COM-style registration helper:
 * if this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c770,
 * then dispatches three vtable methods (call [ecx+0x14] x3) passing
 * g_10075060 and three GUID pointers, storing the three returned handles
 * into this->+0x20/+0x24/+0x28.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void FUN_1001c770(void);
extern int g_10075060;
extern char g_10049bc8[];   /* GUID data, push offset */
extern char g_10049ea0[];   /* GUID data, push offset */
extern char g_10049ea8[];   /* GUID data, push offset */

__declspec(naked) void __stdcall FUN_10024580(void)
{
    __asm {
        sub     esp, 0xc
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 4], 0
        mov     dword ptr [esp + 8], 0
        mov     dword ptr [esp + 0xc], 0
        jne     L_45b3
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 0xc
        ret     4
L_45b3:
        push    esi
        call    FUN_1001c770
        test    eax, eax
        jl      L_462c
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 4]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    offset g_10049bc8
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        test    eax, eax
        jl      L_462c
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 8]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    offset g_10049ea0
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        test    eax, eax
        jl      L_462c
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    offset g_10049ea8
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        test    eax, eax
        jl      L_462c
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [esi + 0x20], ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [esi + 0x24], edx
        mov     dword ptr [esi + 0x28], ecx
L_462c:
        pop     esi
        add     esp, 0xc
        ret     4
    }
}
