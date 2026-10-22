/*
 * FUN_1002c3f0 (335 B) — __stdcall, RET 0x18.
 * WCHAR-formatting loop: for each of param_6 entries, fetch two strings via
 * FUN_1002af80, format via FUN_10038141, free temporaries, accumulate length.
 */

extern void __stdcall FUN_1002af80(void);
extern void __stdcall FUN_10038141(void);
extern void __cdecl FUN_10001d60(void);
extern char g_10049c54;
extern char g_10049c10;
extern char g_10049b60;
extern char g_10051458;

__declspec(naked) void __stdcall FUN_1002c3f0(void)
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
        jbe     L_1002c4f3
        mov     eax, dword ptr [esp + 0x34]
        mov     ebp, dword ptr [esp + 0x24]
        lea     esi, [eax + 0x8]
        jmp     L_1002c426
    L_1002c424:
        xor     ebx, ebx
    L_1002c426:
        mov     edx, dword ptr [esi - 0x8]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        call    FUN_1002af80
        cmp     eax, ebx
        jl      L_1002c526
        mov     ecx, dword ptr [esi]
        lea     eax, [esp + 0x10]
        push    eax
        push    ecx
        call    FUN_1002af80
        mov     edi, eax
        cmp     edi, ebx
        mov     dword ptr [esp + 0x24], edi
        jl      L_1002c507
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esi - 0x4]
        mov     ebx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [esp + 0x30]
        push    edx
        mov     edx, dword ptr [esp + 0x2c]
        push    offset g_10049c54
        push    eax
        push    offset g_10049c10
        push    ebx
        push    offset g_10049b60
        push    ecx
        push    offset g_10051458
        push    edx
        push    ebp
        call    FUN_10038141
        mov     edi, eax
        mov     eax, dword ptr [esi - 0x8]
        add     esp, 0x28
        cmp     eax, ebx
        jz      L_1002c49e
        push    ebx
        call    FUN_10001d60
        add     esp, 0x4
    L_1002c49e:
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esi]
        xor     ebx, ebx
        cmp     ecx, eax
        mov     dword ptr [esp + 0x14], ebx
        jz      L_1002c4b7
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L_1002c4b7:
        cmp     edi, ebx
        mov     dword ptr [esp + 0x10], ebx
        jl      L_1002c530
        mov     eax, dword ptr [esp + 0x1c]
        mov     ebx, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [esp + 0x38]
        add     eax, edi
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [esp + 0x18]
        sub     ebx, edi
        inc     eax
        add     esi, 0xc
        cmp     eax, ecx
        mov     dword ptr [esp + 0x28], ebx
        lea     ebp, [ebp + edi*0x2]
        mov     dword ptr [esp + 0x18], eax
        jc      L_1002c424
        mov     eax, dword ptr [esp + 0x24]
    L_1002c4f3:
        mov     ecx, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [esp + 0x1c]
        pop     edi
        pop     esi
        pop     ebp
        mov     dword ptr [ecx], edx
        pop     ebx
        add     esp, 0x10
        ret     0x18
    L_1002c507:
        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x34]
        lea     ecx, [eax + eax*0x2]
        mov     eax, dword ptr [esp + 0x14]
        cmp     dword ptr [edx + ecx*0x4], eax
        jz      L_1002c524
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
    L_1002c524:
        mov     eax, edi
    L_1002c526:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x18
    L_1002c530:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120002
        pop     ebx
        add     esp, 0x10
        ret     0x18
    }
}
