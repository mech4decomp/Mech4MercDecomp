/*
 * FUN_100131A0 (142 B) - __stdcall, RET 0x4.  Registration helper: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001ca20,
 * then dispatches vtable[4] (call [ecx+0x10]) with g_10075060 and GUID
 * 0x10049b60.  On success stores +0x1c.  On failure frees via FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca20(void);
extern void __cdecl FUN_10001d60(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_100131A0(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 8], 0
        jne     L_131c1
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     4
L_131c1:
        push    edi
        call    FUN_1001ca20
        mov     esi, eax
        test    esi, esi
        jl      L_13215
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
        jne     L_13202
        mov     eax, dword ptr [esp + 8]
        xor     esi, esi
        mov     dword ptr [edi + 0x1c], eax
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     4
L_13202:
        test    esi, esi
        jl      L_13215
        mov     eax, dword ptr [esp + 8]
        mov     dword ptr [edi + 0x1c], eax
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     4
L_13215:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_13226
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_13226:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     4
    }
}
