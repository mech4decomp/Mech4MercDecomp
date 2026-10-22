/*
 * FUN_10010120 (104 B) - __stdcall, RET 0x4.
 * Config-query helper: if obj->+0xc is null returns 0xc112000e; else calls
 * FUN_1001ca20(obj), then a virtual call through [obj+0xc]->vtable[0x14]
 * with (obj+0xc, g_10075060, 0x10049c34, &out). Stores out into obj+0x1c.
 * Returns HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int g_10075060;
extern void __cdecl FUN_1001ca20(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_10010120(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 4], 0
        jne     L3f
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     0x4
    L3f:
        push    esi
        call    FUN_1001ca20
        test    eax, eax
        jl      L83
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 4]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c34
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        cmp     eax, 0xc1120007
        jne     L78
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [esi + 0x1c], ecx
        xor     eax, eax
        pop     esi
        pop     ecx
        ret     0x4
    L78:
        test    eax, eax
        jl      L83
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [esi + 0x1c], ecx
    L83:
        pop     esi
        pop     ecx
        ret     0x4
    }
}
