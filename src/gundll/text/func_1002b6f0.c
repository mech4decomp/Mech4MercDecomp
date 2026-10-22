/*
 * FUN_1002b6f0 (354 B) — __stdcall, RET 0x18.
 * WCHAR-formatting loop (0x14-byte stride): fetch two strings via FUN_1002af80,
 * format via FUN_10038141, free temporaries, accumulate length.
 */

extern void __stdcall FUN_1002af80(void);
extern void __stdcall FUN_10038141(void);
extern void __cdecl FUN_10001d60(void);
extern char g_10049c18;
extern char g_10049c50;
extern char g_10049c10;
extern char g_10049c08;
extern char g_10049bf0;
extern char g_10051380;

__declspec(naked) void __stdcall FUN_1002b6f0(void)
{
    __asm {
        sub     esp, 0x10
        mov     ecx, dword ptr [esp + 0x28]
        push    ebx
        xor     ebx, ebx
        push    ebp
        push    esi
        xor     eax, eax
        cmp     ecx, ebx
        push    edi
        mov     dword ptr [esp + 0x1c], ebx
        mov     dword ptr [esp + 0x14], ebx
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x18], ebx
        jbe     L_1002b806
        mov     eax, dword ptr [esp + 0x34]
        mov     ebp, dword ptr [esp + 0x24]
        lea     esi, [eax + 0xc]
        jmp     L_1002b726
    L_1002b724:
        xor     ebx, ebx
    L_1002b726:
        mov     edx, dword ptr [esi - 0xc]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        call    FUN_1002af80
        cmp     eax, ebx
        jl      L_1002b839
        mov     ecx, dword ptr [esi - 0x8]
        lea     eax, [esp + 0x10]
        push    eax
        push    ecx
        call    FUN_1002af80
        mov     edi, eax
        cmp     edi, ebx
        mov     dword ptr [esp + 0x24], edi
        jl      L_1002b81a
        mov     edx, dword ptr [esi + 0x4]
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [esi - 0x4]
        mov     ebx, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        push    offset g_10049c18
        push    eax
        mov     eax, dword ptr [esp + 0x3c]
        push    offset g_10049c50
        push    ecx
        mov     ecx, dword ptr [esp + 0x3c]
        push    offset g_10049c10
        push    edx
        push    offset g_10049c08
        push    ebx
        push    offset g_10049bf0
        push    eax
        push    offset g_10051380
        push    ecx
        push    ebp
        call    FUN_10038141
        mov     edi, eax
        mov     eax, dword ptr [esi - 0xc]
        add     esp, 0x38
        cmp     eax, ebx
        jz      L_1002b7b0
        push    ebx
        call    FUN_10001d60
        add     esp, 0x4
    L_1002b7b0:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esi - 0x8]
        xor     ebx, ebx
        cmp     ecx, eax
        mov     dword ptr [esp + 0x14], ebx
        jz      L_1002b7ca
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L_1002b7ca:
        cmp     edi, ebx
        mov     dword ptr [esp + 0x10], ebx
        jl      L_1002b843
        mov     eax, dword ptr [esp + 0x1c]
        mov     ebx, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x38]
        add     eax, edi
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [esp + 0x18]
        sub     ebx, edi
        inc     eax
        add     esi, 0x14
        cmp     eax, ecx
        mov     dword ptr [esp + 0x28], ebx
        lea     ebp, [ebp + edi*2]
        mov     dword ptr [esp + 0x18], eax
        jc      L_1002b724
        mov     eax, dword ptr [esp + 0x24]
    L_1002b806:
        mov     edx, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x1c]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [edx], ecx
        pop     ebx
        add     esp, 0x10
        ret     0x18
    L_1002b81a:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x34]
        lea     edx, [eax + eax*4]
        mov     eax, dword ptr [esp + 0x14]
        cmp     dword ptr [ecx + edx*4], eax
        jz      L_1002b837
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L_1002b837:
        mov     eax, edi
    L_1002b839:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x18
    L_1002b843:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120002
        pop     ebx
        add     esp, 0x10
        ret     0x18
    }
}
