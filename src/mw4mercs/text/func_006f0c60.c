/*
 * FUN_006f0c60 (500 B) — __cdecl RET 0 (1 param: HWND).
 *
 * Dialog setup routine. Calls FUN_00518bf0 / FUN_00512ff0 /
 * FUN_00522f40 to query state, enables/disables dialog items via
 * GetDlgItem (DAT_0076b5a4) / EnableWindow (DAT_0076b544) /
 * SendMessageA (DAT_0076b560), indexes tables DAT_00841e28 /
 * DAT_007b6a50 / DAT_00841ce8, and calls FUN_006ed920.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  DAT_00841760;
extern int  DAT_0076b5a4;
extern int  DAT_0076b544;
extern int  DAT_0076b560;
extern char DAT_00848c94;
extern int  DAT_00841e28;
extern int  DAT_007b6a50;
extern int  DAT_00841768;
extern int  DAT_007b6a48;
extern int  DAT_007b6a4c;
extern int  DAT_00841ce8;

extern void __cdecl FUN_00518bf0(void);
extern void __cdecl FUN_00512ff0(void);
extern void __cdecl FUN_00522f40(void);
extern void __cdecl FUN_0072d830(void);
extern void __cdecl FUN_006ed920(void);

__declspec(naked) void __cdecl func_006f0c60(int param)
{
    __asm {
        sub     esp, 0x10
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x0
        push    0x0
        push    0x0
        call    FUN_00518bf0
        lea     edx, [esp + 0x18]
        push    edx
        push    0x1
        lea     eax, [esp + 0x18]
        lea     ecx, [esp + 0x1c]
        push    0x0
        mov     dword ptr [esp + 0x24], eax
        mov     dword ptr [esp + 0x28], ecx
        mov     dword ptr [esp + 0x1c], 0x32
        call    FUN_00512ff0
        test    eax, eax
        lea     eax, [esp + 0x18]
        push    eax
        push    0x1
        mov     dword ptr [esp + 0x18], 0x21
        push    0x0
        jz      L_dc5
        call    FUN_00512ff0
        mov     ebp, eax
        cmp     ebp, 0x4
        jz      L_cf6
        cmp     ebp, 0xa
        jz      L_cf6
        mov     ecx, dword ptr [DAT_00841760]
        mov     edi, dword ptr [DAT_0076b5a4]
        push    0x1
        push    0x417
        push    ecx
        call    edi
        mov     esi, dword ptr [DAT_0076b544]
        push    eax
        call    esi
        mov     edx, dword ptr [DAT_00841760]
        push    0x1
        push    0x4dc
        push    edx
        call    edi
        push    eax
        call    esi
        jmp     L_d2e
L_cf6:
        mov     eax, dword ptr [DAT_00841760]
        mov     edi, dword ptr [DAT_0076b5a4]
        push    0x0
        push    0x417
        push    eax
        call    edi
        mov     esi, dword ptr [DAT_0076b544]
        push    eax
        call    esi
        mov     ecx, dword ptr [DAT_00841760]
        push    0x0
        push    0x4dc
        push    ecx
        call    edi
        push    eax
        call    esi
        mov     byte ptr [DAT_00848c94], 0x1
L_d2e:
        mov     esi, dword ptr [esp + 0x24]
        push    0x0
        push    0x0
        push    0x14b
        push    0x412
        push    esi
        call    edi
        mov     ebx, dword ptr [DAT_0076b560]
        push    eax
        call    ebx
        mov     edx, dword ptr [ebp*4 + DAT_00841e28]
        mov     eax, dword ptr [edx*4 + DAT_007b6a50]
        mov     ecx, dword ptr [DAT_00841768]
        push    eax
        push    ecx
        call    FUN_0072d830
        push    eax
        push    0x0
        push    0x143
        push    0x412
        push    esi
        call    edi
        push    eax
        call    ebx
        push    0x0
        push    0x0
        push    0x14e
        push    0x412
        push    esi
        call    edi
        push    eax
        call    ebx
        lea     edx, [esp + 0x18]
        push    edx
        push    0x1
        push    0x0
        mov     dword ptr [esp + 0x1c], ebp
        call    FUN_00522f40
        push    esi
        mov     dword ptr [DAT_007b6a48], 0xffffffff
        mov     dword ptr [DAT_007b6a4c], 0x0
        call    FUN_006ed920
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret
L_dc5:
        call    FUN_00512ff0
        mov     esi, dword ptr [esp + 0x24]
        mov     ebx, dword ptr [DAT_0076b5a4]
        push    0x0
        mov     edi, eax
        mov     ecx, dword ptr [edi*4 + DAT_00841ce8]
        push    ecx
        push    0x14e
        push    0x412
        push    esi
        call    ebx
        mov     ebp, dword ptr [DAT_0076b560]
        push    eax
        call    ebp
        lea     edx, [esp + 0x18]
        push    edx
        push    0x1
        push    0x0
        mov     dword ptr [esp + 0x1c], edi
        call    FUN_00522f40
        lea     eax, [esp + 0x18]
        push    eax
        push    0x1
        push    0x0
        mov     dword ptr [esp + 0x1c], 0x22
        call    FUN_00512ff0
        push    0x0
        mov     edi, eax
        push    edi
        push    0x14e
        push    0x413
        push    esi
        call    ebx
        push    eax
        call    ebp
        push    esi
        mov     dword ptr [DAT_007b6a48], 0xffffffff
        mov     dword ptr [DAT_007b6a4c], edi
        call    FUN_006ed920
        add     esp, 0x4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret
    }
}
