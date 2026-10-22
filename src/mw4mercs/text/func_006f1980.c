/*
 * FUN_006f1980 (227 B) — Object method.
 *
 * ECX = this. Calls several __thiscall helpers (FUN_0041fd80, FUN_0041fcb0,
 * FUN_0041fcd0, FUN_006f39a0, FUN_006f3960), reads a global, and does an
 * FPU compare against a double constant.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int FUN_0041fd80(void);
extern char __cdecl FUN_00415230(int);
extern void FUN_0041fcb0(void);
extern void FUN_0041fcd0(void *p);
extern float FUN_006f39a0(void);
extern void FUN_006f3960(int a, int b);
extern int g_7f1f84;
extern double g_76d970;

__declspec(naked) void __fastcall FUN_006f1980(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        lea     ebx, [esi + 0x8]
        push    edi
        mov     ecx, ebx
        call    FUN_0041fd80
        mov     ebp, dword ptr [esp + 0x18]
        cmp     eax, ebp
        jnz     loc_6f1a03
        mov     eax, dword ptr [g_7f1f84]
        mov     edi, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      loc_6f1a5c
        mov     ecx, ebx
        call    FUN_0041fd80
        cmp     edi, eax
        jz      loc_6f1a5c
        lea     ebx, [esi + 0x30]
        mov     ecx, ebx
        call    FUN_0041fcb0
        push    edi
        mov     ecx, ebx
        call    FUN_0041fcd0
        lea     ecx, [esi + 0x10]
        call    FUN_0041fd80
        test    eax, eax
        jnz     loc_6f1a4d
        lea     ebx, [esi + 0x28]
        mov     ecx, ebx
        call    FUN_0041fcb0
        push    edi
        mov     ecx, ebx
        call    FUN_0041fcd0
        push    0x3fe99999
        push    0x9999999a
        lea     ecx, [esi + 0xe4]
        jmp     loc_6f1a48
loc_6f1a03:
        mov     ecx, ebx
        call    FUN_0041fd80
        cmp     eax, dword ptr [esp + 0x14]
        jnz     loc_6f1a5c
        lea     ebx, [esi + 0xe4]
        mov     ecx, ebx
        call    FUN_006f39a0
        fcomp   qword ptr [g_76d970]
        __emit  0xDF  /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit  0xE0
        __emit  0xF6  /* test ah,1: MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x01
        jz      loc_6f1a4d
        lea     edi, [esi + 0x28]
        mov     ecx, edi
        call    FUN_0041fcb0
        push    ebp
        mov     ecx, edi
        call    FUN_0041fcd0
        push    0x3fe99999
        push    0x9999999a
        mov     ecx, ebx
loc_6f1a48:
        call    FUN_006f3960
loc_6f1a4d:
        push    0x40340000
        push    0x0
        lea     ecx, [esi + 0x6c]
        call    FUN_006f3960
loc_6f1a5c:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     8
    }
}
