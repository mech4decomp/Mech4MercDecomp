/*
 * FUN_100213F0 (205 B) - __stdcall, RET 0x10.  Parses/registers a string
 * via FUN_1001c920 / FUN_1002af80 / FUN_1001c660, advancing buffer
 * pointers (ebp/ebx) by parsed counts, then stores the final pointer into
 * *out.  On failure frees the first handle via FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c920(void);
extern void __cdecl FUN_1002af80(void);
extern void __cdecl FUN_1001c660(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_100213F0(void)
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
        push    0x1004a854
        push    ebp
        push    edi
        call    FUN_1001c920
        mov     esi, eax
        test    esi, esi
        jl      L_149f
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x24]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x2c], eax
        lea     ebp, [ebp + eax*2]
        sub     ebx, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_149f
        mov     eax, dword ptr [edi + 0x34]
        mov     ecx, dword ptr [edi + 0x30]
        mov     edx, dword ptr [edi + 0x2c]
        push    eax
        mov     eax, dword ptr [edi + 0x28]
        push    0x10049ca4
        push    ecx
        mov     ecx, dword ptr [esp + 0x20]
        push    0x10049eb4
        push    edx
        push    0x10049eb0
        push    eax
        push    0x10049cb0
        push    ecx
        push    0x10049e50
        push    0x10050eb0
        lea     edx, [esp + 0x3c]
        push    edx
        push    ebx
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x38
        test    esi, esi
        jl      L_149f
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x28]
        add     ecx, eax
        mov     dword ptr [edx], ecx
L_149f:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [edi + 0x24]
        je      L_14b1
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_14b1:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
