/*
 * FUN_1004518e (428 B) — __cdecl.
 * Time-window / calibration check using global config words + FUN_1004533a.
 *
 * CFLAGS: /O1
 */

extern int g_10054c44;
extern int g_10054cd8;
extern int g_10054ce8;
extern int g_10075750;
extern unsigned short g_100757fe;
extern unsigned short g_100757fc;
extern unsigned short g_100757fa;
extern unsigned short g_100757f8;
extern unsigned short g_100757f0;
extern unsigned short g_100757f4;
extern unsigned short g_100757f6;
extern unsigned short g_100757f2;
extern unsigned short g_100757aa;
extern unsigned short g_100757a8;
extern unsigned short g_100757a6;
extern unsigned short g_100757a4;
extern unsigned short g_1007579c;
extern unsigned short g_100757a0;
extern unsigned short g_100757a2;
extern unsigned short g_1007579e;
extern int g_10054cdc;
extern int g_10054cec;
extern int g_10054ce0;
extern int g_10054cf0;
extern void __cdecl FUN_1004533a(void);

__declspec(naked) void FUN_1004518e(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        xor     edi, edi
        cmp     dword ptr [g_10054c44], edi
        jnz     L_100451a2
    L_1004519b:
        xor     eax, eax
        jmp     L_100452ee
    L_100451a2:
        mov     esi, dword ptr [esp + 0x10]
        push    0x1
        pop     ebx
        mov     eax, dword ptr [esi + 0x14]
        cmp     eax, dword ptr [g_10054cd8]
        jnz     L_100451c0
        cmp     eax, dword ptr [g_10054ce8]
        jz      L_100452c2
    L_100451c0:
        cmp     dword ptr [g_10075750], edi
        jz      L_10045298
        movzx   ecx, word ptr [g_100757fe]
        push    ecx
        cmp     word ptr [g_100757f0], di
        movzx   ecx, word ptr [g_100757fc]
        push    ecx
        movzx   ecx, word ptr [g_100757fa]
        push    ecx
        movzx   ecx, word ptr [g_100757f8]
        push    ecx
        jnz     L_10045212
        movzx   ecx, word ptr [g_100757f4]
        push    edi
        push    ecx
        movzx   ecx, word ptr [g_100757f6]
        push    ecx
        movzx   ecx, word ptr [g_100757f2]
        push    ecx
        push    eax
        push    ebx
        jmp     L_10045226
    L_10045212:
        movzx   ecx, word ptr [g_100757f6]
        push    ecx
        push    edi
        movzx   ecx, word ptr [g_100757f2]
        push    edi
        push    ecx
        push    eax
        push    edi
    L_10045226:
        push    ebx
        call    FUN_1004533a
        movzx   eax, word ptr [g_100757aa]
        add     esp, 0x2c
        cmp     word ptr [g_1007579c], di
        push    eax
        movzx   eax, word ptr [g_100757a8]
        push    eax
        movzx   eax, word ptr [g_100757a6]
        push    eax
        movzx   eax, word ptr [g_100757a4]
        push    eax
        jnz     L_10045280
        movzx   eax, word ptr [g_100757a0]
        push    edi
        push    eax
        movzx   eax, word ptr [g_100757a2]
        push    eax
        movzx   eax, word ptr [g_1007579e]
        push    eax
        push    dword ptr [esi + 0x14]
        push    ebx
    L_10045275:
        push    edi
        call    FUN_1004533a
        add     esp, 0x2c
        jmp     L_100452c2
    L_10045280:
        movzx   eax, word ptr [g_100757a2]
        push    eax
        push    edi
        movzx   eax, word ptr [g_1007579e]
        push    edi
        push    eax
        push    dword ptr [esi + 0x14]
        push    edi
        jmp     L_10045275
    L_10045298:
        push    edi
        push    edi
        push    edi
        push    0x2
        push    edi
        push    edi
        push    ebx
        push    0x4
        push    eax
        push    ebx
        push    ebx
        call    FUN_1004533a
        push    edi
        push    edi
        push    edi
        push    0x2
        push    edi
        push    edi
        push    0x5
        push    0xa
        push    dword ptr [esi + 0x14]
        push    ebx
        push    edi
        call    FUN_1004533a
        add     esp, 0x58
    L_100452c2:
        mov     edx, dword ptr [g_10054cdc]
        mov     eax, dword ptr [g_10054cec]
        mov     ecx, dword ptr [esi + 0x1c]
        cmp     edx, eax
        jge     L_100452f2
        cmp     ecx, edx
        jl      L_1004519b
        cmp     ecx, eax
        jg      L_1004519b
        cmp     ecx, edx
        jle     L_10045306
        cmp     ecx, eax
        jge     L_10045306
    L_100452ec:
        mov     eax, ebx
    L_100452ee:
        pop     edi
        pop     esi
        pop     ebx
        ret
    L_100452f2:
        cmp     ecx, eax
        jl      L_100452ec
        cmp     ecx, edx
        jg      L_100452ec
        cmp     ecx, eax
        jle     L_10045306
        cmp     ecx, edx
        jl      L_1004519b
    L_10045306:
        mov     eax, dword ptr [esi + 0x8]
        imul    eax, eax, 0x3c
        add     eax, dword ptr [esi + 0x4]
        imul    eax, eax, 0x3c
        add     eax, dword ptr [esi]
        imul    eax, eax, 0x3e8
        cmp     ecx, edx
        jnz     L_1004532d
        xor     ecx, ecx
        cmp     eax, dword ptr [g_10054ce0]
        setge   cl
    L_10045329:
        mov     eax, ecx
        jmp     L_100452ee
    L_1004532d:
        xor     ecx, ecx
        cmp     eax, dword ptr [g_10054cf0]
        setl    cl
        jmp     L_10045329
    }
}
