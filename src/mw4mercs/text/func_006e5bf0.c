/*
 * FUN_006e5bf0 (507 B) — __cdecl RET 0 (1 param).
 *
 * Enables/disables a large set of dialog items on DAT_00841760 via
 * GetDlgItem (DAT_0076b5a4) / EnableWindow (DAT_0076b544), queries a
 * selection via SendMessageA (DAT_0076b560), indexes DAT_00841d88, and
 * finally calls FUN_006ee660 / FUN_006ee5e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  DAT_00841760;
extern int  DAT_0076b5a4;
extern int  DAT_0076b544;
extern void *DAT_0076b560;
extern int  DAT_00841d88;
extern char DAT_00848c94;

extern void __cdecl FUN_006ee660(void);
extern void __cdecl FUN_006ee5e0(void);

__declspec(naked) void __cdecl func_006e5bf0(int param)
{
    __asm {
        mov     eax, dword ptr [DAT_00841760]
        push    ebx
        mov     ebx, dword ptr [esp + 0x8]
        push    ebp
        push    esi
        mov     esi, dword ptr [DAT_0076b5a4]
        push    edi
        push    ebx
        push    0x40a
        push    eax
        call    esi
        mov     edi, dword ptr [DAT_0076b544]
        push    eax
        call    edi
        mov     ecx, dword ptr [DAT_00841760]
        push    ebx
        push    0x3f6
        push    ecx
        call    esi
        push    eax
        call    edi
        mov     edx, dword ptr [DAT_00841760]
        push    ebx
        push    0x4c5
        push    edx
        call    esi
        push    eax
        call    edi
        mov     eax, dword ptr [DAT_00841760]
        push    ebx
        push    0x4c6
        push    eax
        call    esi
        push    eax
        call    edi
        mov     ecx, dword ptr [DAT_00841760]
        push    ebx
        push    0x420
        push    ecx
        call    esi
        push    eax
        call    edi
        mov     edx, dword ptr [DAT_00841760]
        push    ebx
        push    0x424
        push    edx
        call    esi
        push    eax
        call    edi
        mov     eax, dword ptr [DAT_00841760]
        push    ebx
        push    0x426
        push    eax
        call    esi
        push    eax
        call    edi
        mov     ecx, dword ptr [DAT_00841760]
        push    ebx
        push    0x427
        push    ecx
        call    esi
        push    eax
        call    edi
        mov     edx, dword ptr [DAT_00841760]
        push    ebx
        push    0x499
        push    edx
        call    esi
        push    eax
        call    edi
        mov     eax, dword ptr [DAT_00841760]
        push    ebx
        push    0x4d8
        push    eax
        call    esi
        push    eax
        call    edi
        mov     ecx, dword ptr [DAT_00841760]
        push    ebx
        push    0x4d0
        push    ecx
        call    esi
        push    eax
        call    edi
        mov     edx, dword ptr [DAT_00841760]
        push    ebx
        push    0x423
        push    edx
        call    esi
        push    eax
        call    edi
        mov     eax, dword ptr [DAT_00841760]
        push    ebx
        push    0x4cd
        push    eax
        call    esi
        push    eax
        call    edi
        mov     ecx, dword ptr [DAT_00841760]
        push    ebx
        push    0x421
        push    ecx
        call    esi
        push    eax
        call    edi
        mov     ebp, 0x412
L_5d00:
        mov     edx, dword ptr [DAT_00841760]
        push    ebx
        push    ebp
        push    edx
        call    esi
        push    eax
        call    edi
        inc     ebp
        cmp     ebp, 0x41f
        jle     L_5d00
        mov     eax, dword ptr [DAT_00841760]
        push    0x0
        push    0x0
        push    0x147
        push    0x412
        push    eax
        call    esi
        push    eax
        call    dword ptr [DAT_0076b560]
        cmp     eax, -0x1
        jz      L_5d99
        mov     eax, dword ptr [eax*4 + DAT_00841d88]
        cmp     eax, 0x4
        jz      L_5d74
        cmp     eax, 0xa
        jz      L_5d74
        cmp     byte ptr [DAT_00848c94], 0x1
        jz      L_5d74
        mov     ecx, dword ptr [DAT_00841760]
        push    ebx
        push    0x417
        push    ecx
        call    esi
        push    eax
        call    edi
        mov     edx, dword ptr [DAT_00841760]
        push    ebx
        push    0x4dc
        push    edx
        jmp     L_5d94
L_5d74:
        mov     eax, dword ptr [DAT_00841760]
        push    0x0
        push    0x417
        push    eax
        call    esi
        push    eax
        call    edi
        mov     ecx, dword ptr [DAT_00841760]
        push    0x0
        push    0x4dc
        push    ecx
L_5d94:
        call    esi
        push    eax
        call    edi
L_5d99:
        mov     ebp, 0x49b
L_5d9e:
        mov     eax, dword ptr [DAT_00841760]
        push    ebx
        lea     edx, [ebp - 0x72]
        push    edx
        push    eax
        call    esi
        push    eax
        call    edi
        mov     ecx, dword ptr [DAT_00841760]
        push    ebx
        push    ebp
        push    ecx
        call    esi
        push    eax
        call    edi
        inc     ebp
        lea     edx, [ebp - 0x49b]
        cmp     edx, 0x18
        jl      L_5d9e
        pop     edi
        pop     esi
        pop     ebp
        test    ebx, ebx
        pop     ebx
        jz      L_5dea
        mov     eax, dword ptr [DAT_00841760]
        push    eax
        call    FUN_006ee660
        mov     ecx, dword ptr [DAT_00841760]
        push    ecx
        call    FUN_006ee5e0
        add     esp, 0x8
L_5dea:
        ret
    }
}
