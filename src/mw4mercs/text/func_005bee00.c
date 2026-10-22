/*
 * FUN_005bee00 (223 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Sets this->[0xb0]=1, calls FUN_004d93a0(this). If result == DAT_007f1f84,
 * calls FUN_00416a90(this+0x4b0, param, param+0x14). Otherwise dispatches on
 * *(*(param+4)) via a jump table into one of 8 FUN_004179b0(this+off) calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004d93a0(void);
extern void FUN_00416a90(void);
extern void FUN_004179b0(void);
extern int DAT_007f1f84;   /* 0x007F1F84 — compared against FUN_004d93a0 result */

__declspec(naked) void __stdcall FUN_005bee00(void *param)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, ecx
        mov     ecx, esi
        mov     byte ptr [edi + 0xb0], 0x1
        call    FUN_004d93a0
        cmp     eax, dword ptr [DAT_007f1f84]
        jnz     L_5bee33
        lea     eax, [esi + 0x14]
        push    eax
        push    esi
        lea     ecx, [edi + 0x4b0]
        call    FUN_00416a90
        pop     edi
        pop     esi
        ret     4
    L_5bee33:
        mov     ecx, dword ptr [esi + 0x4]
        mov     eax, dword ptr [ecx]
        add     eax, 0xfffffbd6
        cmp     eax, 0xa0
        ja      L_5beeda
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x5bef04]
        jmp     dword ptr [edx*4 + 0x5beee0]
    L_5bee57:
        push    esi
        lea     ecx, [edi + 0x4c4]
        call    FUN_004179b0
        pop     edi
        pop     esi
        ret     4
    L_5bee68:
        push    esi
        lea     ecx, [edi + 0x4cc]
        call    FUN_004179b0
        pop     edi
        pop     esi
        ret     4
    L_5bee79:
        push    esi
        lea     ecx, [edi + 0x4d4]
        call    FUN_004179b0
        pop     edi
        pop     esi
        ret     4
    L_5bee8a:
        push    esi
        lea     ecx, [edi + 0x4dc]
        call    FUN_004179b0
        pop     edi
        pop     esi
        ret     4
    L_5bee9b:
        push    esi
        lea     ecx, [edi + 0x4e4]
        call    FUN_004179b0
        pop     edi
        pop     esi
        ret     4
    L_5beeac:
        push    esi
        lea     ecx, [edi + 0x4ec]
        call    FUN_004179b0
        pop     edi
        pop     esi
        ret     4
    L_5beebd:
        push    esi
        lea     ecx, [edi + 0x4f4]
        call    FUN_004179b0
        pop     edi
        pop     esi
        ret     4
    L_5beece:
        push    esi
        lea     ecx, [edi + 0x4fc]
        call    FUN_004179b0
    L_5beeda:
        pop     edi
        pop     esi
        ret     4
    }
}
