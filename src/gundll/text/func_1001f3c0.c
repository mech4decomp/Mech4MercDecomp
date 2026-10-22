/*
 * FUN_1001f3c0 (138 B) - __stdcall, RET 0x4 (1 arg).
 * Registration helper: if this->obj(+0xc) is null returns 0xC112000E;
 * else calls FUN_1001c8d0(this), then FUN_1002c0d0(obj, g_10075060,
 * GUID 0x10049e3c, &local, &arg1); on success stores +0x24/+0x28.  On
 * failure calls FUN_1002c390(arg1, local, obj!=0).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8d0(void);
extern void __stdcall FUN_1002c0d0(void);
extern void __cdecl FUN_1002c390(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_1001f3c0(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 8], 0
        jne     L_f3e1
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     4
L_f3e1:
        push    edi
        call    FUN_1001c8d0
        mov     esi, eax
        test    esi, esi
        jl      L_f426
        mov     edx, dword ptr [g_10075060]
        lea     eax, [esp + 0x10]
        push    eax
        mov     eax, dword ptr [edi + 0xc]
        lea     ecx, [esp + 0xc]
        push    ecx
        push    0x10049e3c
        push    edx
        push    eax
        call    FUN_1002c0d0
        mov     esi, eax
        test    esi, esi
        jl      L_f426
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [edi + 0x24], ecx
        mov     dword ptr [edi + 0x28], edx
        pop     edi
        pop     esi
        pop     ecx
        ret     4
L_f426:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_f442
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, dword ptr [edi + 0xc]
        test    ecx, ecx
        setne   dl
        push    eax
        push    edx
        call    FUN_1002c390
L_f442:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     4
    }
}
