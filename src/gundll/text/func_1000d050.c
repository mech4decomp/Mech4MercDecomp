/*
 * FUN_1000D050 (189 B) - __stdcall, RET 0x10.  Parses/registers a string
 * via FUN_1001c920 / FUN_1001c660 / FUN_1002e090 / FUN_1001c660,
 * advancing buffer pointers (ebx/esi/edi) by parsed counts.  On success
 * stores the final pointer into *out (+0x24).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c920(void);
extern void __cdecl FUN_1001c660(void);
extern void __cdecl FUN_1002e090(void);

__declspec(naked) void __stdcall FUN_1000D050(void)
{
    __asm {
        push    ecx
        push    ebx
        mov     ebx, dword ptr [esp + 0x10]
        push    ebp
        mov     ebp, dword ptr [esp + 0x10]
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        push    edi
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        push    0x10049ec0
        push    ebx
        push    ebp
        mov     dword ptr [esp + 0x24], 0
        call    FUN_1001c920
        test    eax, eax
        jl      L_d105
        mov     ecx, dword ptr [ebp + 0x24]
        mov     edi, dword ptr [esp + 0x10]
        push    ecx
        push    0x10049b3c
        push    0x10050254
        lea     edx, [esp + 0x1c]
        push    edx
        sub     esi, edi
        lea     ebx, [ebx + edi*2]
        push    esi
        push    ebx
        call    FUN_1001c660
        add     esp, 0x18
        test    eax, eax
        jl      L_d105
        mov     eax, dword ptr [esp + 0x10]
        lea     ebx, [ebx + eax*2]
        sub     esi, eax
        add     edi, eax
        mov     eax, dword ptr [ebp + 0x28]
        push    eax
        push    0x10049d98
        lea     ecx, [esp + 0x18]
        push    ecx
        push    esi
        push    ebx
        call    FUN_1002e090
        test    eax, eax
        jl      L_d105
        mov     eax, dword ptr [esp + 0x10]
        push    0x10049ec0
        push    0x10050244
        lea     edx, [esp + 0x18]
        push    edx
        sub     esi, eax
        lea     ebx, [ebx + eax*2]
        push    esi
        push    ebx
        add     edi, eax
        call    FUN_1001c660
        add     esp, 0x14
        test    eax, eax
        jl      L_d105
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        add     edi, ecx
        mov     dword ptr [edx], edi
L_d105:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
