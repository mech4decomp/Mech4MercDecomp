/*
 * FUN_10025680 (300 B) - __stdcall, RET 0x10.  Parses/registers a string
 * via FUN_1001ca30 / FUN_1002af80 / FUN_1001c660 / FUN_1002b470, advancing
 * buffer pointers (ebp/edi) by parsed counts, and stores the final pointer
 * into *out (+0x28).  On failure paths frees the intermediate buffer via
 * FUN_10001d60.
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001ca30(void);
extern void __cdecl FUN_1002af80(void);
extern void __cdecl FUN_1001c660(void);
extern void __cdecl FUN_1002b470(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __stdcall FUN_10025680(void)
{
    __asm {
        sub     esp, 8
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        mov     ebp, dword ptr [esp + 0x18]
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x24]
        xor     eax, eax
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [esp + 0x10], eax
        lea     eax, [esp + 0x10]
        push    eax
        push    edi
        push    0x1004a7c4
        push    ebp
        push    ebx
        call    FUN_1001ca30
        mov     esi, eax
        test    esi, esi
        jl      L_2578e
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [ebx + 0x20]
        lea     ecx, [esp + 0x14]
        push    ecx
        push    edx
        mov     dword ptr [esp + 0x2c], eax
        lea     ebp, [ebp + eax*2]
        sub     edi, eax
        call    FUN_1002af80
        mov     esi, eax
        test    esi, esi
        jl      L_2578e
        mov     eax, dword ptr [ebx + 0x28]
        mov     ecx, dword ptr [ebx + 0x24]
        mov     edx, dword ptr [esp + 0x14]
        push    eax
        mov     eax, dword ptr [ebx + 0x1c]
        push    0x10049c50
        push    ecx
        push    0x10049c2c
        push    edx
        push    0x10049e50
        push    eax
        push    0x10049bc4
        push    0x10050f18
        lea     ecx, [esp + 0x34]
        push    ecx
        push    edi
        push    ebp
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x30
        test    esi, esi
        jl      L_2578e
        mov     eax, dword ptr [esp + 0x10]
        add     dword ptr [esp + 0x24], eax
        mov     edx, dword ptr [ebx + 0x28]
        push    edx
        lea     ebp, [ebp + eax*2]
        sub     edi, eax
        mov     eax, dword ptr [ebx + 0x2c]
        push    eax
        push    0x10049e64
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    edi
        push    ebp
        call    FUN_1002b470
        mov     esi, eax
        test    esi, esi
        jl      L_2578e
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x24]
        push    0x1004a7c4
        push    0x10050244
        lea     edx, [esp + 0x18]
        push    edx
        sub     edi, eax
        lea     ebp, [ebp + eax*2]
        add     ecx, eax
        push    edi
        push    ebp
        mov     dword ptr [esp + 0x38], ecx
        call    FUN_1001c660
        mov     esi, eax
        add     esp, 0x14
        test    esi, esi
        jl      L_2578e
        mov     eax, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x28]
        add     ecx, eax
        mov     dword ptr [edx], ecx
L_2578e:
        mov     eax, dword ptr [esp + 0x14]
        cmp     eax, dword ptr [ebx + 0x20]
        je      L_257a0
        push    eax
        call    FUN_10001d60
        add     esp, 4
L_257a0:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     0x10
    }
}
