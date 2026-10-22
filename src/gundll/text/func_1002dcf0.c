/*
 * FUN_1002dcf0 (296 B) — __stdcall, RET 0x14.
 * Serializes a list of wide strings into a buffer via FUN_10038141.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10038141(void);
extern void __stdcall FUN_1002af80(void);
extern void __cdecl FUN_10001d60(void);

extern char g_10050c18;
extern char g_100514d4;
extern char g_10050d08;
extern char g_100502b0;

__declspec(naked) void __stdcall FUN_1002dcf0(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x20]
        push    esi
        xor     esi, esi
        cmp     ebp, esi
        push    edi
        mov     dword ptr [esp + 0x10], esi
        jnz     L_dd13
        mov     eax, dword ptr [esp + 0x20]
        pop     edi
        mov     dword ptr [eax], esi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x14
    L_dd13:
        mov     ecx, dword ptr [esp + 0x24]
        mov     ebx, dword ptr [esp + 0x1c]
        mov     edi, dword ptr [esp + 0x18]
        push    ecx
        push    offset g_10050c18
        push    ebx
        push    edi
        call    FUN_10038141
        add     esp, 0x10
        test    eax, eax
        jge     L_dd40
    L_dd33:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120002
        pop     ebx
        pop     ecx
        ret     0x14
    L_dd40:
        sub     ebx, eax
        mov     dword ptr [esp + 0x24], eax
        lea     edi, [edi + eax*2]
        cmp     dword ptr [ebp], 0
        mov     dword ptr [esp + 0x1c], 0
        jbe     L_dde2
        add     ebp, 4
        mov     edi, edi
    L_dd60:
        mov     eax, dword ptr [ebp]
        lea     edx, [esp + 0x10]
        push    edx
        push    eax
        call    FUN_1002af80
        test    eax, eax
        mov     dword ptr [esp + 0x18], eax
        jl      L_de10
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    offset g_100514d4
        push    offset g_10050d08
        push    ebx
        push    edi
        call    FUN_10038141
        mov     ecx, dword ptr [ebp]
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x24]
        add     esp, 0x14
        cmp     ecx, eax
        jz      L_dda9
        push    eax
        call    FUN_10001d60
        add     esp, 4
    L_dda9:
        test    esi, esi
        mov     dword ptr [esp + 0x10], 0
        jl      L_dd33
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [ecx]
        add     eax, esi
        mov     dword ptr [esp + 0x24], eax
        mov     eax, dword ptr [esp + 0x1c]
        sub     ebx, esi
        inc     eax
        add     ebp, 4
        cmp     eax, edx
        lea     edi, [edi + esi*2]
        mov     dword ptr [esp + 0x1c], eax
        jc      L_dd60
        mov     esi, dword ptr [esp + 0x18]
    L_dde2:
        push    offset g_100502b0
        push    ebx
        push    edi
        call    FUN_10038141
        add     esp, 0xc
        test    eax, eax
        jge     L_de02
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120002
        pop     ebx
        pop     ecx
        ret     0x14
    L_de02:
        mov     edx, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x20]
        add     eax, edx
        mov     dword ptr [ecx], eax
        mov     eax, esi
    L_de10:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x14
    }
}
