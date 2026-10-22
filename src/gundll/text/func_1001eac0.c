/*
 * FUN_1001eac0 (205 B) - __stdcall, RET 0x10 (4 args).
 * Parses/registers a string via FUN_1001c7a0 / FUN_1002af80 / FUN_1001c660,
 * advancing buffer pointers (ebp += count*2, ebx -= count).  On success
 * stores (arg3 + count) into *arg4.  Frees a temp buffer via FUN_10001d60
 * when it differs from this->+0x30.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c7a0(void);
extern void __cdecl FUN_1002af80(void);
extern void __cdecl FUN_1001c660(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_1001eac0(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [esp + 0x18]
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x1c]
        xor     eax, eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        push    0x1004a670
        push    ebp
        push    edi
        call    FUN_1001c7a0
        mov     esi, eax
        test    esi, esi
        jl      L_eb6f
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x30]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x2c], eax
        lea     ebp, [ebp + eax*2]
        sub     ebx, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_eb6f
        mov     eax, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi + 0x2c]
        mov     edx, dword ptr [edi + 0x28]
        push    eax
        mov     eax, dword ptr [edi + 0x24]
        push    0x10049b5c
        push    ecx
        mov     ecx, dword ptr [edi + 0x20]
        push    0x10049b58
        push    edx
        push    0x10049c68
        push    eax
        push    0x10049c70
        push    ecx
        push    0x10049b34
        push    0x10050d50
        lea     edx, [esp + 0x3c]
        push    edx
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x38
        test    esi, esi
        jl      L_eb6f
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x28]
        add     ecx, eax
        mov     dword ptr [edx], ecx
L_eb6f:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x30]
        je      L_eb81
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_eb81:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
