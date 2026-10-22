/*
 * FUN_00734260 (312 B) — __fastcall (ECX = this). Bounds-check logic
 * against FUN_0075b690 results, then calls FUN_0075b4a0 / FUN_007343a0 /
 * FUN_0075b0d0 / FUN_0075b040 / FUN_00717b30 / FUN_00717ac0.
 *
 * RET.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_8aa288; /* 0x008aa288 */

extern void __cdecl FUN_0075b690(void);
extern void __cdecl FUN_0075b4a0(void);
extern void __cdecl FUN_007343a0(void);
extern void __cdecl FUN_0075b0d0(void);
extern void __cdecl FUN_0075b040(void);
extern void __cdecl FUN_00717b30(void);
extern void __cdecl FUN_00717ac0(void);

__declspec(naked) int __stdcall FUN_00734260(void)
{
    __asm {
        sub     esp, 0x1c
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 4]
        test    eax, eax
        jz      L34302
        mov     al, [g_8aa288]
        test    al, al
        jnz     L34302
        mov     eax, dword ptr [esi + 0xa8]
        cmp     eax, 4
        jz      L3431a
        cmp     eax, 3
        jnz     L3429d
        cmp     dword ptr [esi + 0xac], 1
        jz      L3431a
L3429d:
        mov     ecx, dword ptr [esi + 0x18]
        lea     ebx, [esi + 0xf4]
        push    ebx
        lea     ebp, [esi + 0xfc]
        push    ebp
        lea     eax, [esp + 0x14]
        push    eax
        push    ecx
        call    FUN_0075b690
        mov     eax, dword ptr [ebx + 4]
        cmp     eax, dword ptr [ebp + 4]
        mov     ecx, dword ptr [ebx]
        jg      L342d8
        jl      L342ca
        cmp     ecx, dword ptr [ebp]
        jnc     L342d8
L342ca:
        cmp     eax, dword ptr [esp + 0x10]
        jl      L342d8
        jg      L34302
        cmp     ecx, dword ptr [esp + 0xc]
        ja      L34302
L342d8:
        mov     eax, dword ptr [esi + 0x18]
        push    0
        push    0
        push    0
        push    0
        push    eax
        call    FUN_0075b4a0
        test    eax, eax
        jz      L34387
        mov     eax, dword ptr [esi + 0xac]
        test    eax, eax
        jnz     L3430b
        mov     ecx, esi
        call    FUN_007343a0
L34302:
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x1c
        ret
L3430b:
        cmp     eax, 1
        jnz     L34323
        mov     dword ptr [esi + 0xa8], 3
L3431a:
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x1c
        ret
L34323:
        push    edi
        mov     edi, dword ptr [esi + 4]
        push    0
        push    0
        push    edi
        call    FUN_0075b0d0
        push    1
        push    edi
        call    FUN_0075b040
        mov     eax, dword ptr [esi + 0x18]
        push    ebx
        push    ebp
        lea     edx, [esp + 0x18]
        push    edx
        push    eax
        call    FUN_0075b690
        mov     eax, dword ptr [esi + 0x18]
        push    0
        push    0
        push    0
        push    0
        push    eax
        call    FUN_0075b4a0
        test    eax, eax
        pop     edi
        jnz     L34302
        mov     esi, dword ptr [esi + 0xe8]
        test    esi, esi
        jz      L3437e
        lea     ecx, [esp + 0x14]
        push    ecx
L3436e:
        push    0
        push    0
        push    esi
        call    FUN_00717b30
        push    esi
        call    FUN_00717ac0
L3437e:
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x1c
        ret
L34387:
        mov     esi, dword ptr [esi + 0xe8]
        test    esi, esi
        jz      L3437e
        lea     edx, [esp + 0x14]
        push    edx
        jmp     L3436e
    }
}
