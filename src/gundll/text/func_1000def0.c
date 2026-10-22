/*
 * FUN_1000def0 (241 B) - __stdcall, RET 0x4.
 * Config-query helper: if obj->+0xc is null returns 0xc112000e; else calls
 * FUN_1001c770(obj), then virtual call through [obj+0xc]->vtable[0x10] with
 * (obj+0xc, g_10075060, 0x10049b60, &out1), then FUN_1002e100 with
 * (obj+0xc, g_10075060, 0x10049da8, &out2). Stores out1/out2 into obj+0x20/
 * +0x24. On failure frees via FUN_10001d60 / FUN_1002e220. Returns HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int g_10075060;
extern void __cdecl FUN_1001c770(void);   /* rel32 call */
extern void __cdecl FUN_1002e100(void);   /* rel32 call */
extern void __cdecl FUN_10001d60(void);   /* rel32 call (shared_free) */
extern void __cdecl FUN_1002e220(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1000def0(void)
{
    __asm {
        sub     esp, 8
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 8], 0
        mov     dword ptr [esp + 0xc], 0
        jne     L1d
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 8
        ret     0x4
    L1d:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        test    esi, esi
        jl      Laf
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
        je      L55
        test    esi, esi
        jl      Laf
    L55:
        mov     ecx, dword ptr [g_10075060]
        mov     edx, dword ptr [edi + 0xc]
        lea     eax, [esp + 0xc]
        push    eax
        push    0x10049da8
        push    ecx
        push    edx
        call    FUN_1002e100
        mov     esi, eax
        cmp     esi, 0xc1120007
        jne     L93
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 0xc]
        xor     esi, esi
        mov     dword ptr [edi + 0x20], eax
        mov     dword ptr [edi + 0x24], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     0x4
    L93:
        test    esi, esi
        jl      Laf
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [edi + 0x20], eax
        mov     dword ptr [edi + 0x24], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     0x4
    Laf:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      Lc0
        push    eax
        call    FUN_10001d60
        add     esp, 4
    Lc0:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      Ld7
        mov     ecx, dword ptr [edi + 0xc]
        test    ecx, ecx
        setne   dl
        push    eax
        push    edx
        call    FUN_1002e220
    Ld7:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     0x4
    }
}
