/*
 * FUN_10015780 (251 B) — __stdcall, RET 0x4.
 * Reads RoomId/Password/Name fields via a vtable dispatch.
 */

extern void FUN_1001c770(void);
extern void FUN_10001d60(void);
extern int g_10075060;

__declspec(naked) void __stdcall FUN_10015780(void)
{
    __asm {
        sub     esp, 0xC
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [edi + 0xC]
        test    eax, eax
        mov     dword ptr [esp + 0xC], 0x0
        mov     dword ptr [esp + 0x10], 0x0
        mov     dword ptr [esp + 0x8], 0x0
        jnz     loc_100157b5
        pop     edi
        mov     eax, 0xC112000E
        pop     esi
        add     esp, 0xC
        ret     0x4
    loc_100157b5:
        push    edi
        call    FUN_1001c770
        mov     esi, eax
        test    esi, esi
        jl      loc_10015860
        mov     eax, dword ptr [edi + 0xC]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0xC]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049bf8
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, 0xC1120007
        jz      loc_100157ed
        test    esi, esi
        jl      loc_10015860
    loc_100157ed:
        mov     eax, dword ptr [edi + 0xC]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x10]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049c10
        push    edx
        push    eax
        call    dword ptr [ecx + 0x14]
        mov     esi, eax
        cmp     esi, 0xC1120007
        jz      loc_10015815
        test    esi, esi
        jl      loc_10015860
    loc_10015815:
        mov     eax, dword ptr [edi + 0xC]
        mov     ecx, dword ptr [eax]
        lea     edx, [esp + 0x8]
        push    edx
        mov     edx, dword ptr [g_10075060]
        push    0x10049b80
        push    edx
        push    eax
        call    dword ptr [ecx + 0x10]
        mov     esi, eax
        cmp     esi, 0xC1120007
        jnz     loc_1001583d
        xor     esi, esi
        jmp     loc_10015841
    loc_1001583d:
        test    esi, esi
        jl      loc_10015860
    loc_10015841:
        mov     eax, dword ptr [esp + 0xC]
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x8]
        mov     dword ptr [edi + 0x20], eax
        mov     dword ptr [edi + 0x24], ecx
        mov     dword ptr [edi + 0x28], edx
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xC
        ret     0x4
    loc_10015860:
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        jz      loc_10015871
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    loc_10015871:
        pop     edi
        mov     eax, esi
        pop     esi
        add     esp, 0xC
        ret     0x4
    }
}
