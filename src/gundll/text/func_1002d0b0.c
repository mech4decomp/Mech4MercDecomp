/*
 * FUN_1002d0b0 (332 B) — __stdcall, RET 0x14. String tokenizer/parser.
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10038141(void);
extern void __cdecl FUN_1002c860(void);
extern void __cdecl FUN_1002b470(void);

__declspec(naked) void __stdcall FUN_1002d0b0(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x10]
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        push    edi
        push    eax
        push    0x100514a4
        push    esi
        push    ebx
        call    FUN_10038141
        mov     edi, eax
        add     esp, 0x10
        test    edi, edi
        jge     Ld0e2
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120002
        pop     ebx
        ret     0x14
    Ld0e2:
        lea     ebp, [ebx + edi*0x2]
        mov     ebx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [ebx]
        push    eax
        push    0x10049e1c
        lea     ecx, [esp + 0x20]
        push    ecx
        sub     esi, edi
        push    esi
        push    ebp
        mov     dword ptr [esp + 0x2c], edi
        call    FUN_1002c860
        test    eax, eax
        jl      Ld1f5
        mov     eax, dword ptr [esp + 0x18]
        sub     esi, eax
        lea     ebp, [ebp + eax*0x2]
        add     edi, eax
        mov     eax, dword ptr [ebx + 0x4]
        push    eax
        push    0x10049e20
        lea     edx, [esp + 0x20]
        push    edx
        push    esi
        push    ebp
        call    FUN_1002c860
        test    eax, eax
        jl      Ld1f5
        mov     eax, dword ptr [esp + 0x18]
        push    0x10049e24
        sub     esi, eax
        push    0x100514a4
        lea     ebp, [ebp + eax*0x2]
        push    esi
        push    ebp
        add     edi, eax
        call    FUN_10038141
        add     esp, 0x10
        test    eax, eax
        jge     Ld164
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120002
        pop     ebx
        ret     0x14
    Ld164:
        sub     esi, eax
        lea     ebp, [ebp + eax*0x2]
        mov     dword ptr [esp + 0x18], eax
        add     edi, eax
        mov     eax, dword ptr [ebx + 0xc]
        mov     ebx, dword ptr [ebx + 0x8]
        push    eax
        push    ebx
        push    0x10049e28
        lea     eax, [esp + 0x24]
        push    eax
        push    esi
        push    ebp
        call    FUN_1002b470
        mov     ebx, eax
        test    ebx, ebx
        jl      Ld1f3
        mov     eax, dword ptr [esp + 0x18]
        push    0x10049e24
        sub     esi, eax
        push    0x10050244
        lea     ebp, [ebp + eax*0x2]
        push    esi
        push    ebp
        add     edi, eax
        call    FUN_10038141
        add     esp, 0x10
        test    eax, eax
        jge     Ld1bf
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120002
        pop     ebx
        ret     0x14
    Ld1bf:
        mov     ecx, dword ptr [esp + 0x20]
        push    ecx
        push    0x10050244
        sub     esi, eax
        lea     edx, [ebp + eax*0x2]
        push    esi
        push    edx
        add     edi, eax
        call    FUN_10038141
        add     esp, 0x10
        test    eax, eax
        jge     Ld1eb
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 0xc1120002
        pop     ebx
        ret     0x14
    Ld1eb:
        mov     ecx, dword ptr [esp + 0x1c]
        add     eax, edi
        mov     dword ptr [ecx], eax
    Ld1f3:
        mov     eax, ebx
    Ld1f5:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x14
    }
}
