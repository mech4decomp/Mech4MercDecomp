/*
 * FUN_1001F670 (123 B) - __stdcall, RET 0x4.  COM factory-style init: if
 * this->obj(+0xc) is null returns 0xC112000E; else calls FUN_1001c8d0, then
 * FUN_1002de20(this->obj, g_10075060, GUID 0x10049e34, &local); on success
 * stores local into this+0x24.  On failure calls FUN_1002ded0(local,
 * this->obj!=0).  (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8d0(void);
extern void __stdcall FUN_1002de20(void);
extern void __stdcall FUN_1002ded0(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_1001F670(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 8], 0
        jne     L_1001f691
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     0x4
L_1001f691:
        push    edi
        call    FUN_1001c8d0
        mov     esi, eax
        test    esi, esi
        jl      L_1001f6cc
        mov     ecx, dword ptr [g_10075060]
        mov     edx, dword ptr [edi + 0xc]
        lea     eax, [esp + 8]
        push    eax
        push    0x10049e34
        push    ecx
        push    edx
        call    FUN_1002de20
        mov     esi, eax
        test    esi, esi
        jl      L_1001f6cc
        mov     eax, dword ptr [esp + 8]
        mov     dword ptr [edi + 0x24], eax
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x4
L_1001f6cc:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_1001f6e3
        mov     ecx, dword ptr [edi + 0xc]
        test    ecx, ecx
        setne   cl
        push    eax
        push    ecx
        call    FUN_1002ded0
L_1001f6e3:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x4
    }
}
