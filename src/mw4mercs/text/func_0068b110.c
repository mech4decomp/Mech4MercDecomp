/*
 * FUN_0068b110 (127 B) — __thiscall HUD element update. Checks flags at
 * +0x19/+0x1a, virtual call, builds a vector, calls FUN_0068b500 /
 * FUN_00551870 / FUN_00707e70 / FUN_005d9ac0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f2438;
extern void __cdecl FUN_0068b500(void);
extern void __cdecl FUN_00551870(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_005d9ac0(void);

__declspec(naked) void FUN_0068b110(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi+0x19]
        test    al, al
        push    edi
        jnz     L_68b122
        xor     eax, eax
        pop     edi
        pop     esi
        ret     8
    L_68b122:
        mov     al, byte ptr [esi+0x1a]
        test    al, al
        jz      L_68b130
        xor     eax, eax
        pop     edi
        pop     esi
        ret     8
    L_68b130:
        mov     edi, dword ptr [esi+0x4]
        mov     eax, dword ptr [edi]
        mov     ecx, edi
        mov     byte ptr [esi+0x30], 1
        call    dword ptr [eax+0x168]
        mov     ecx, dword ptr [esp+0x10]
        mov     edx, dword ptr [esi+0x40]
        push    eax
        push    edi
        push    ecx
        push    edx
        lea     ecx, [esi+0x34]
        call    FUN_0068b500
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     eax, dword ptr [esp+0x24]
        sub     esp, 0xc
        mov     ecx, esp
        push    eax
        call    FUN_00551870
        mov     ecx, dword ptr [esi+0x10]
        push    ecx
        push    0
        call    FUN_00707e70
        mov     ecx, dword ptr [g_007f2438]
        sub     esp, 8
        fstp    qword ptr [esp]
        call    FUN_005d9ac0
        pop     edi
        pop     esi
        ret     8
    }
}
