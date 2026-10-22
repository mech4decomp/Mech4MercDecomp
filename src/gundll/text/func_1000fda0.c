/*
 * FUN_1000fda0 (142 B) - __stdcall, RET 0x4.
 * Config-query helper: if obj->+0xc is null returns 0xc112000e; else calls
 * FUN_1001c8d0(obj), then a virtual call through [obj+0xc]->vtable[0x10]
 * with (obj+0xc, g_10075060, 0x10049b94, &out). Stores out into obj+0x24.
 * On failure frees via FUN_10001d60. Returns HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int g_10075060;
extern void __cdecl FUN_1001c8d0(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */

__declspec(naked) void __stdcall FUN_1000fda0(void)
{
    __asm {
        push    ecx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x10]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 8], 0
        jne     L_c1
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        pop     ecx
        ret     0x4
    L_c1:
        push    edi
        call    FUN_1001c8d0
        mov     esi, eax
        test    esi, esi
        jl      L_15
        mov     eax, dword ptr [edi + 0xc]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 8]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b94
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, 0xc1120007
        jne     L_02
        mov     eax, dword ptr [esp + 8]
        xor     esi, esi
        mov     dword ptr [edi + 0x24], eax
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x4
    L_02:
        test    esi, esi
        jl      L_15
        mov     eax, dword ptr [esp + 8]
        mov     dword ptr [edi + 0x24], eax
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x4
    L_15:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L_26
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L_26:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ecx
        ret     0x4
    }
}
