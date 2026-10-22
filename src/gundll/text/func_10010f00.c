/*
 * FUN_10010f00 (208 B) - __stdcall, RET 0x4.
 * Config-query helper: if obj->+0xc is null returns 0xc112000e; else calls
 * FUN_1001c770(obj), then three virtual calls through [obj+0xc]->vtable[0x14]
 * with (obj+0xc, g_10075060, 0x10049bc8/0x10049bcc/0x10049be0, &out1/2/3).
 * Stores out1/out2/out3 into obj+0x20/0x24/0x28. Returns HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int g_10075060;
extern void __cdecl FUN_1001c770(void);

__declspec(naked) void __stdcall FUN_10010f00(void)
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
        jne     L33
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 0xc
        ret     0x4
    L33:
        push    esi
        call    FUN_1001c770
        test    eax, eax
        jl      Lc9
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 4]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049bc8
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        cmp     eax, 0xc1120007
        je      L66
        test    eax, eax
        jl      Lc9
    L66:
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 8]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049bcc
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        cmp     eax, 0xc1120007
        je      L8b
        test    eax, eax
        jl      Lc9
    L8b:
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xc]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049be0
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        cmp     eax, 0xc1120007
        jne     Lb0
        xor     eax, eax
        jmp     Lb4
    Lb0:
        test    eax, eax
        jl      Lc9
    Lb4:
        mov     ecx, dword ptr [esp + 4]
        mov     edx, dword ptr [esp + 8]
        mov     dword ptr [esi + 0x20], ecx
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [esi + 0x24], edx
        mov     dword ptr [esi + 0x28], ecx
    Lc9:
        pop     esi
        add     esp, 0xc
        ret     0x4
    }
}
