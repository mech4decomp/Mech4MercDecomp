/*
 * FUN_1000de40 (166 B) — __stdcall, RET 0x10.
 * Object init/load: allocates a buffer, fills object fields, returns an
 * HRESULT-style status.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c760(void);
extern void __cdecl FUN_10001dd0(void);
extern void __cdecl FUN_10001d60(void);
extern void __cdecl FUN_1002e220(void);
extern void __cdecl FUN_1002e1c0(void);

__declspec(naked) void __stdcall FUN_1000de40(void)
{
    __asm {
        push    ecx
        push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi + 0xc]
        test    eax, eax
        mov     dword ptr [esp + 0xc], 0x0
        jz      L_63
        pop     edi
        pop     esi
        mov     eax, 0xc112000d
        pop     ebx
        pop     ecx
        ret     0x10
    L_63:
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        push    edi
        call    FUN_1001c760
        mov     esi, eax
        test    esi, esi
        jl      L_9a
        mov     esi, dword ptr [esp + 0x1c]
        push    esi
        call    FUN_10001dd0
        mov     ebx, eax
        test    ebx, ebx
        jnz     L_ba
        test    esi, esi
        jz      L_ba
        mov     esi, 0x8007000e
    L_8d:
        test    ebx, ebx
        jz      L_9a
        push    ebx
        call    FUN_10001d60
        add     esp, 0x4
    L_9a:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      L_b1
        mov     ecx, dword ptr [edi + 0xc]
        test    ecx, ecx
        setnz   cl
        push    eax
        push    ecx
        call    FUN_1002e220
    L_b1:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x10
    L_ba:
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        call    FUN_1002e1c0
        mov     esi, eax
        test    esi, esi
        jl      L_8d
        mov     eax, dword ptr [esp + 0xc]
        mov     dword ptr [edi + 0x20], ebx
        mov     dword ptr [edi + 0x24], eax
        mov     byte ptr [edi + 0x4], 0x1
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
