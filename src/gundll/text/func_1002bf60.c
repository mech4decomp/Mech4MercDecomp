/*
 * FUN_1002bf60 (357 B) — __stdcall, RET 0x18.
 * WCHAR-formatting loop: formats a header, then 0x28 sub-entries, then a
 * trailer via FUN_10038141, accumulating the total length.
 */

extern void __stdcall FUN_10038141(void);
extern void __stdcall FUN_1002af80(void);
extern void __cdecl FUN_10001d60(void);
extern char g_10051310;
extern char g_10049c74;
extern char g_10049c70;
extern char g_10051428;
extern char g_10050d08;
extern char g_100502b0;

__declspec(naked) void __stdcall FUN_1002bf60(void)
{
    __asm {
        sub     esp, 0x10
        mov     ecx, dword ptr [esp + 0x28]
        push    ebx
        xor     eax, eax
        cmp     ecx, eax
        push    ebp
        push    esi
        push    edi
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x1c], eax
        jbe     L_1002c0a2
        mov     eax, dword ptr [esp + 0x34]
        mov     ebx, dword ptr [esp + 0x28]
        mov     edi, dword ptr [esp + 0x24]
        lea     esi, [eax + 0x8]
        mov     dword ptr [esp + 0x18], esi
        jmp     L_1002bfa0
    L_1002bf96:
        mov     esi, dword ptr [esp + 0x18]
        __emit 0x8D   /* __emit: lea ebx,[ebx] alignment NOP; MSVC6 emits 8D 1B (2B) not 8D 9B 00000000 (6B) */
        __emit 0x9B
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
    L_1002bfa0:
        mov     ecx, dword ptr [esi - 0x4]
        mov     edx, dword ptr [esi - 0x8]
        mov     eax, dword ptr [esp + 0x30]
        push    ecx
        push    offset g_10049c74
        push    edx
        push    offset g_10049c70
        push    eax
        push    offset g_10051428
        push    ebx
        push    edi
        call    FUN_10038141
        add     esp, 0x20
        test    eax, eax
        jl      L_1002c0b6
        mov     edx, dword ptr [esp + 0x10]
        add     edx, eax
        sub     ebx, eax
        mov     dword ptr [esp + 0x10], edx
        lea     edi, [edi + eax*2]
        mov     dword ptr [esp + 0x34], esi
        xor     ebp, ebp
    L_1002bfe3:
        mov     edx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [edx]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    eax
        call    FUN_1002af80
        test    eax, eax
        mov     dword ptr [esp + 0x28], eax
        jl      L_1002c0ac
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [ebp + g_10051310]
        push    ecx
        push    edx
        push    offset g_10050d08
        push    ebx
        push    edi
        call    FUN_10038141
        mov     ecx, dword ptr [esp + 0x48]
        mov     edx, dword ptr [ecx]
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x28]
        add     esp, 0x14
        cmp     edx, eax
        jz      L_1002c034
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L_1002c034:
        test    esi, esi
        mov     dword ptr [esp + 0x14], 0x0
        jl      L_1002c0b6
        add     dword ptr [esp + 0x10], esi
        mov     ecx, dword ptr [esp + 0x34]
        add     ebp, 0x4
        add     ecx, 0x4
        sub     ebx, esi
        cmp     ebp, 0x28
        lea     edi, [edi + esi*2]
        mov     dword ptr [esp + 0x34], ecx
        jc      L_1002bfe3
        push    offset g_100502b0
        push    ebx
        push    edi
        call    FUN_10038141
        add     esp, 0xc
        test    eax, eax
        jl      L_1002c0b6
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x18]
        add     ecx, eax
        sub     ebx, eax
        lea     edi, [edi + eax*2]
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [esp + 0x38]
        inc     eax
        add     edx, 0x30
        cmp     eax, ecx
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x18], edx
        jc      L_1002bf96
        mov     eax, dword ptr [esp + 0x28]
    L_1002c0a2:
        mov     edx, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [edx], ecx
    L_1002c0ac:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x18
    L_1002c0b6:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120002
        pop     ebx
        add     esp, 0x10
        ret     0x18
    }
}
