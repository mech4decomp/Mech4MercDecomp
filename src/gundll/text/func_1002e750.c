/*
 * FUN_1002e750 (244 B) — __fastcall.
 * State-machine dispatcher with a 10-entry jump table at 0x1002e844.
 */

extern void FUN_1002e650(void);
extern void FUN_1002e6a0(void);
extern void FUN_1002e6d0(void);
extern void FUN_1002e450(void);
extern void FUN_1002e490(void);
extern void FUN_1002e4e0(void);
extern void FUN_1002e560(void);
extern void FUN_1002e580(void);
extern void FUN_1002e5e0(void);
extern unsigned int g_1002e844[];

__declspec(naked) void __fastcall FUN_1002e750(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x8]
        push    edi
        mov     edi, 0x1007546c
        cmp     eax, edi
        jz      loc_1002e80f
    loc_1002e764:
        mov     eax, dword ptr [esi + 0x10]
        mov     ecx, dword ptr [esi + 0xC]
        inc     eax
        cmp     eax, ecx
        jl      loc_1002e774
        mov     dword ptr [esi + 0x8], edi
        jmp     loc_1002e780
    loc_1002e774:
        mov     ecx, dword ptr [esi + 0x4]
        lea     edx, [ecx + eax*0x2]
        mov     dword ptr [esi + 0x10], eax
        mov     dword ptr [esi + 0x8], edx
    loc_1002e780:
        mov     eax, dword ptr [esi + 0x8]
        cmp     word ptr [eax], 0xA
        jnz     loc_1002e793
        inc     dword ptr [esi + 0x14]
        mov     ecx, dword ptr [esi + 0x10]
        dec     ecx
        mov     dword ptr [esi + 0x18], ecx
    loc_1002e793:
        mov     eax, dword ptr [esi]
        cmp     eax, 0x9
        ja      loc_1002e829
        jmp     dword ptr [eax*0x4 + g_1002e844]
    loc_1002e7a5:
        mov     ecx, esi
        call    FUN_1002e650
        jmp     loc_1002e801
    loc_1002e7ae:
        mov     ecx, esi
        call    FUN_1002e6a0
        jmp     loc_1002e801
    loc_1002e7b7:
        mov     ecx, esi
        call    FUN_1002e6d0
        jmp     loc_1002e801
    loc_1002e7c0:
        mov     ecx, esi
        call    FUN_1002e450
        jmp     loc_1002e801
    loc_1002e7c9:
        mov     ecx, esi
        call    FUN_1002e490
        jmp     loc_1002e801
    loc_1002e7d2:
        mov     ecx, esi
        call    FUN_1002e4e0
        jmp     loc_1002e801
    loc_1002e7db:
        mov     ecx, esi
        call    FUN_1002e560
        jmp     loc_1002e801
    loc_1002e7e4:
        push    0x4
        mov     ecx, esi
        call    FUN_1002e580
        jmp     loc_1002e801
    loc_1002e7ef:
        push    0x2
        mov     ecx, esi
        call    FUN_1002e580
        jmp     loc_1002e801
    loc_1002e7fa:
        mov     ecx, esi
        call    FUN_1002e5e0
    loc_1002e801:
        cmp     eax, 0xB
        jnz     loc_1002e841
        cmp     dword ptr [esi + 0x8], edi
        jnz     loc_1002e764
    loc_1002e80f:
        mov     eax, dword ptr [esi]
        sub     eax, 0x0
        jz      loc_1002e839
        sub     eax, 0x2
        jz      loc_1002e831
        pop     edi
        mov     dword ptr [esi], 0x2
        mov     eax, 0xC
        pop     esi
        ret
    loc_1002e829:
        pop     edi
        mov     eax, 0xC
        pop     esi
        ret
    loc_1002e831:
        pop     edi
        mov     eax, 0xA
        pop     esi
        ret
    loc_1002e839:
        xor     eax, eax
        mov     dword ptr [esi], 0x2
    loc_1002e841:
        pop     edi
        pop     esi
        ret
    }
}
