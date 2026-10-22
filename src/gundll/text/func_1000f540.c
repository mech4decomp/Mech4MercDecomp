/*
 * FUN_1000f540 (104 B) - __stdcall, RET 0x4.
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

__declspec(naked) void __stdcall FUN_1000f540(void)
{
    __asm {
        push    ecx
        push    esi
        mov     esi, dword ptr [esp + 0xc]
        mov     eax, dword ptr [esi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 4], 0
        jne     L55f
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     0x4
    L55f:
        push    esi
        call    FUN_1001c8d0
        test    eax, eax
        jl      L5a3
        mov     eax, dword ptr [esi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 4]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c2c
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        cmp     eax, 0xc1120007
        jne     L598
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [esi + 0x24], ecx
        xor     eax, eax
        pop     esi
        pop     ecx
        ret     0x4
    L598:
        test    eax, eax
        jl      L5a3
        mov     ecx, dword ptr [esp + 4]
        mov     dword ptr [esi + 0x24], ecx
    L5a3:
        pop     esi
        pop     ecx
        ret     0x4
    }
}
