/*
 * FUN_10013290 (168 B) - __stdcall, RET 0x10.  Parses/registers a string
 * via FUN_1001ca30 / FUN_1002af80 / FUN_1001c660, advancing buffer
 * pointers (ebx/edi) by parsed counts.  On success stores the final
 * pointer into *arg4.  Frees partial handles via FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca30(void);
extern void __cdecl FUN_1002af80(void);
extern void __cdecl FUN_1001c660(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_10013290(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [esp + 0x14]
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        xor     eax, eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    edi
        push    0x1004a1c8
        push    ebx
        push    ebp
        call    FUN_1001ca30
        mov     esi, eax
        test    esi, esi
        jl      L_1331a
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebp + 0x1c]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x2c], eax
        lea     ebx, [ebx + eax*2]
        sub     edi, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_1331a
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        push    0x10049b60
        push    0x10050228
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    edi
        push    ebx
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x18
        test    esi, esi
        jl      L_1331a
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x24]
        mov     ecx, dword ptr [esp + 0x28]
        add     eax, edx
        mov     dword ptr [ecx], eax
L_1331a:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [ebp + 0x1c]
        je      L_1332c
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_1332c:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
