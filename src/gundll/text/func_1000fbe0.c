/*
 * FUN_1000fbe0 (104 B) - __stdcall, RET 0x4.
 * Config-query helper: if obj->+0xc is null returns 0xc112000e; else calls
 * FUN_1001c8d0(obj), then a virtual call through [obj+0xc]->vtable[0x14]
 * with (obj+0xc, g_10075060, 0x10049c2c, &out). Stores out into obj+0x24.
 * Returns HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int g_10075060;
extern void __cdecl FUN_1001c8d0(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1000fbe0(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0x4], 0
        jne     L_ff
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     0x4
    L_ff:
        push    esi
        call    FUN_1001c8d0
        test    eax, eax
        jl      L_43
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x4]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c2c
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        cmp     eax, 0xc1120007
        jne     L_38
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [esi + 0x24], ecx
        xor     eax, eax
        pop     esi
        pop     ecx
        ret     0x4
    L_38:
        test    eax, eax
        jl      L_43
        mov     ecx, dword ptr [esp + 0x4]
        mov     dword ptr [esi + 0x24], ecx
    L_43:
        pop     esi
        pop     ecx
        ret     0x4
    }
}
