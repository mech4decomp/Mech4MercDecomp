/*
 * FUN_005befb0 (253 B) — __thiscall (ECX = this), RET 4 (one stack param).
 *
 * Sets this->[0xb0]=1, calls FUN_004d93a0. If result == DAT_007f1f84, checks
 * param->[0xdc]; if set calls FUN_005bed20(param), then FUN_00415ca0(this+0x4b0,
 * param). Otherwise dispatches on *(*(param+4)) via a jump table into one of 8
 * FUN_004154d0(this+off) calls.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_004d93a0(void);
extern void FUN_005bed20(void);
extern void FUN_00415ca0(void);
extern void FUN_004154d0(void);

__declspec(naked) void __stdcall FUN_005befb0(void *param)
{
    

extern int DAT_007f1f84;
__asm {
push    esi
        mov     esi, dword ptr [esp + 0x8]
        push    edi
        mov     edi, ecx
        mov     ecx, esi
        mov     byte ptr [edi + 0xb0], 0x1
        call    FUN_004d93a0
        cmp eax, dword ptr [DAT_007f1f84]
        jnz     L_5beff1
        mov     al, byte ptr [esi + 0xdc]
        test    al, al
        jz      L_5befe0
        push    esi
        mov     ecx, edi
        call    FUN_005bed20
    L_5befe0:
        push    esi
        lea     ecx, [edi + 0x4b0]
        call    FUN_00415ca0
        pop     edi
        pop     esi
        ret     4
    L_5beff1:
        mov     eax, dword ptr [esi + 0x4]
        mov     eax, dword ptr [eax]
        add     eax, 0xfffffbd6
        cmp     eax, 0x91
        ja      L_5bf0a8
        xor     ecx, ecx
        mov     cl, byte ptr [eax + 0x5bf0d4]
        jmp     dword ptr [ecx*4 + 0x5bf0b0]
    L_5bf015:
        add     edi, 0x4c4
        push    edi
        mov     ecx, esi
        call    FUN_004154d0
        pop     edi
        pop     esi
        ret     4
    L_5bf028:
        add     edi, 0x4cc
        push    edi
        mov     ecx, esi
        call    FUN_004154d0
        pop     edi
        pop     esi
        ret     4
    L_5bf03b:
        add     edi, 0x4d4
        push    edi
        mov     ecx, esi
        call    FUN_004154d0
        pop     edi
        pop     esi
        ret     4
    L_5bf04e:
        add     edi, 0x4dc
        push    edi
        mov     ecx, esi
        call    FUN_004154d0
        pop     edi
        pop     esi
        ret     4
    L_5bf061:
        add     edi, 0x4e4
        push    edi
        mov     ecx, esi
        call    FUN_004154d0
        pop     edi
        pop     esi
        ret     4
    L_5bf074:
        add     edi, 0x4ec
        push    edi
        mov     ecx, esi
        call    FUN_004154d0
        pop     edi
        pop     esi
        ret     4
    L_5bf087:
        add     edi, 0x4f4
        push    edi
        mov     ecx, esi
        call    FUN_004154d0
        pop     edi
        pop     esi
        ret     4
    L_5bf09a:
        add     edi, 0x4fc
        push    edi
        mov     ecx, esi
        call    FUN_004154d0
    L_5bf0a8:
        pop     edi
        pop     esi
        ret     4
    }


}
