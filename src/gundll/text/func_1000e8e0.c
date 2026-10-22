/*
 * FUN_1000e8e0 (247 B) - __stdcall, RET 0x4.
 * Config-query helper: if obj->+0xc is null returns 0xc112000e; else calls
 * FUN_1001c770(obj), then two FUN_1002e100 calls with g_10075060 and keys
 * 0x10049dbc / 0x10049dc8, storing results into obj+0x20/+0x24. On failure
 * frees via FUN_1002e220. Returns HRESULT.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern int g_10075060;
extern void __cdecl FUN_1001c770(void);   /* rel32 call */
extern void __cdecl FUN_1002e100(void);   /* rel32 call */
extern void __cdecl FUN_1002e220(void);   /* rel32 call */

__declspec(naked) void __stdcall FUN_1000e8e0(void)
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
        jne     L90d
        pop     edi
        mov     eax, 0xc112000e
        pop     esi
        add     esp, 8
        ret     0x4
    L90d:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        test    esi, esi
        jl      L99f
        mov     ecx, dword ptr [g_10075060]
        mov     edx, dword ptr [edi + 0xc]
        lea     eax, [esp + 8]
        push    eax
        push    0x10049dbc
        push    ecx
        push    edx
        call    FUN_1002e100
        mov     esi, eax
        cmp     esi, 0xc1120007
        je      L945
        test    esi, esi
        jl      L99f
    L945:
        mov     ecx, dword ptr [g_10075060]
        mov     edx, dword ptr [edi + 0xc]
        lea     eax, [esp + 0xc]
        push    eax
        push    0x10049dc8
        push    ecx
        push    edx
        call    FUN_1002e100
        mov     esi, eax
        cmp     esi, 0xc1120007
        jne     L983
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
    L983:
        test    esi, esi
        jl      L99f
        mov     eax, dword ptr [esp + 8]
        mov     ecx, dword ptr [esp + 0xc]
        mov     dword ptr [edi + 0x20], eax
        mov     dword ptr [edi + 0x24], ecx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     0x4
    L99f:
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        je      L9b6
        mov     ecx, dword ptr [edi + 0xc]
        test    ecx, ecx
        setne   dl
        push    eax
        push    edx
        call    FUN_1002e220
    L9b6:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        je      L9cd
        mov     edx, dword ptr [edi + 0xc]
        push    eax
        test    edx, edx
        setne   al
        push    eax
        call    FUN_1002e220
    L9cd:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 8
        ret     0x4
    }
}
