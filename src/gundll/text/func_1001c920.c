/*
 * FUN_1001c920 (126 B) — __stdcall, RET 0x14. Shared command dispatcher:
 * calls FUN_1001c6a0, then FUN_10038141 with format strings at
 * 0x10050c3c / 0x10049b8c / 0x10049b90; returns error 0xc1120002 on failure.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c6a0(void);
extern void __cdecl FUN_10038141(void);

__declspec(naked) void __stdcall FUN_1001c920(void)
{
    __asm {
        push    ecx
        mov     ecx, dword ptr [esp + 0x10]
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x20]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        push    ecx
        push    ebx
        push    edi
        mov     dword ptr [esp + 0x24], 0
        call    FUN_1001c6a0
        mov     ebp, eax
        test    ebp, ebp
        jl      L_994
        mov     edx, dword ptr [edi + 0x20]
        mov     eax, dword ptr [edi + 0x1c]
        mov     edi, dword ptr [esp + 0x10]
        push    edx
        push    0x10049b90
        push    eax
        push    0x10049b8c
        push    0x10050c3c
        sub     esi, edi
        lea     ecx, [ebx + edi*2]
        push    esi
        push    ecx
        call    FUN_10038141
        add     esp, 0x1c
        test    eax, eax
        jge     L_98c
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120002
        pop     ebx
        pop     ecx
        ret     0x14
    L_98c:
        mov     edx, dword ptr [esp + 0x28]
        add     edi, eax
        mov     dword ptr [edx], edi
    L_994:
        pop     edi
        pop     esi
        mov     eax, ebp
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x14
    }
}
