/*
 * FUN_10020630 (117 B) - __stdcall, RET 0x4.  Config-query helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c770(obj),
 * then a virtual call through [obj+0xc]->vtable[0x10] with
 * (obj+0xc, g_10075060, 0x10049e50, &out).  On success stores out into
 * this->+0x20.  On failure frees the local via FUN_10001d60.  Returns
 * HRESULT.  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int g_10075060;
extern void __cdecl FUN_1001c770(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_10020630(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 8], 0
        jne     L_20651
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     0x4
L_20651:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        test    esi, esi
        jl      L_2068c
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
        jl      L_2068c
        mov     eax, dword ptr [esp + 8]
        mov     dword ptr [edi + 0x20], eax
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x4
L_2068c:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_2069d
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_2069d:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x4
    }
}
