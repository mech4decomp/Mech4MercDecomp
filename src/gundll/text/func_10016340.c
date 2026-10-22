/*
 * FUN_10016340 (214 B) - __stdcall, RET 0x10.  Parses/registers a string
 * via FUN_1001c920 / FUN_1001c660 / FUN_1002b6f0 / FUN_1001c660,
 * advancing buffer pointers (ebp += count*2, esi -= count, ebx += count).
 * On success stores the resulting pointer into *out (+0x24).
 * (Transcribed from reference bytes; gaptext.)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1001c920(void);
extern void __cdecl FUN_1001c660(void);
extern void __stdcall FUN_1002b6f0(void);

__declspec(naked) void __stdcall FUN_10016340(void)
{
    __asm {
        push    ecx
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x14]
        push    esi
        mov     esi, dword ptr [esp + 0x1c]
        push    edi
        mov     edi, dword ptr [esp + 0x18]
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        push    0x1004a1fc
        push    ebp
        push    edi
        mov     dword ptr [esp + 0x24], 0
        call    FUN_1001c920
        test    eax, eax
        jl      L_1640e
        mov     ecx, dword ptr [edi + 0x2c]
        mov     edx, dword ptr [edi + 0x28]
        mov     eax, dword ptr [edi + 0x24]
        mov     ebx, dword ptr [esp + 0x10]
        push    ecx
        push    0x10049c50
        push    edx
        push    0x10049c24
        push    eax
        push    0x10049c20
        push    0x10050520
        lea     ecx, [esp + 0x2c]
        push    ecx
        sub     esi, ebx
        lea     ebp, [ebp + ebx*2]
        push    esi
        push    ebp
        call    FUN_1001c660
        add     esp, 0x28
        test    eax, eax
        jl      L_1640e
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [edi + 0x2c]
        push    edx
        lea     ebp, [ebp + eax*2]
        sub     esi, eax
        add     ebx, eax
        mov     eax, dword ptr [edi + 0x30]
        push    eax
        push    0x10049dec
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    esi
        push    ebp
        call    FUN_1002b6f0
        test    eax, eax
        jl      L_1640e
        mov     eax, dword ptr [esp + 0x10]
        push    0x1004a1fc
        push    0x10050244
        lea     edx, [esp + 0x18]
        push    edx
        sub     esi, eax
        lea     ebp, [ebp + eax*2]
        push    esi
        push    ebp
        add     ebx, eax
        call    FUN_1001c660
        add     esp, 0x14
        test    eax, eax
        jl      L_1640e
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x24]
        add     ebx, ecx
        mov     dword ptr [edx], ebx
L_1640e:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     0x10
    }
}
