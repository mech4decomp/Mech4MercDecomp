/*
 * FUN_10016940 (172 B) - __stdcall, RET 0x4.  If this->obj(+0xc) is null
 * returns 0xC112000E; else calls FUN_1001c8d0(this), then
 * FUN_1002b210(obj, g_10075060, GUID 0x10049de4, &local, this); on success
 * stores +0x24/+0x28.  On failure calls FUN_1002b420(this, local, obj!=0).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c8d0(void);
extern int g_10075060;
extern int __stdcall FUN_1002b210(int a, int b, int c, void *d, void *e);
extern void __cdecl FUN_1002b420(void);

__declspec(naked) void __stdcall FUN_10016940(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 8], 0
        jne     L_61
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     0x4
L_61:
        push    edi
        call    FUN_1001c8d0
        mov     esi, eax
        test    esi, esi
        jl      L_c8
        mov     edx, dword ptr [g_10075060]
        lea     eax, [esp + 0x10]
        push    eax
        mov     eax, dword ptr [edi + 0xc]
        lea     ecx, [esp + 0xc]
        push    ecx
        push    0x10049de4
        push    edx
        push    eax
        call    FUN_1002b210
        mov     esi, eax
        cmp     esi, 0xc1120007
        jne     L_ae
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 8]
        xor     esi, esi
        mov     dword ptr [edi + 0x24], ecx
        mov     dword ptr [edi + 0x28], edx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x4
L_ae:
        test    esi, esi
        jl      L_c8
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [edi + 0x24], ecx
        mov     dword ptr [edi + 0x28], edx
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x4
L_c8:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_e4
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, dword ptr [edi + 0xc]
        test    ecx, ecx
        setne   dl
        push    eax
        push    edx
        call    FUN_1002b420
L_e4:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x4
    }
}
