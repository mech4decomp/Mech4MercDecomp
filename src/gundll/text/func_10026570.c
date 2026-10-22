/*
 * FUN_10026570 (277 B) - __stdcall, RET 0x10.  Parses/registers a string
 * via FUN_1001c7a0 / FUN_1002af80 (x3) / FUN_1001c660, advancing buffer
 * pointers (ebp/ebx) by parsed counts, and stores the final pointer into
 * *out (+0x30).  On failure frees the intermediate buffers via
 * FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);
extern void __cdecl FUN_1002af80(void);
extern void __cdecl FUN_1001c660(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_10026570(void)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        mov     ebx, dword ptr [esp + 0x20]
        push    ebp
        mov     ebp, dword ptr [esp + 0x20]
        push    esi
        xor     eax, eax
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        push    0x1004a45c
        push    ebp
        push    edi
        call    FUN_1001c7a0
        mov     esi, eax
        test    esi, esi
        jl      L_26643
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x20]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x34], eax
        lea     ebp, [ebp + eax*2]
        sub     ebx, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_26643
        mov     ecx, dword ptr [edi + 0x24]
        lea     eax, [esp + 0x18]
        push    eax
        push    ecx
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_26643
        mov     eax, dword ptr [edi + 0x28]
        lea     edx, [esp + 0x1c]
        push    edx
        push    eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_26643
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        push    0x10049b60
        push    edx
        push    0x10049b80
        push    eax
        push    0x10049bf0
        push    0x10050560
        lea     ecx, [esp + 0x2c]
        push    ecx
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x28
        test    esi, esi
        jl      L_26643
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x30]
        add     eax, edx
        mov     dword ptr [ecx], eax
L_26643:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x20]
        je      L_26655
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_26655:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, dword ptr [edi + 0x24]
        je      L_26667
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_26667:
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, dword ptr [edi + 0x28]
        je      L_26679
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_26679:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret     0x10
    }
}
