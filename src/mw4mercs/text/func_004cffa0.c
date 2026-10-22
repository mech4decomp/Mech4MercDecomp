/*
 * FUN_004cffa0 (352 B) — MLR network subsystem: game-model load/update
 * (__stdcall, RET 0xc). Parses "{GameModel}" section, tries to load a
 * model; on failure falls back to an "update" path with an assert guard.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007db0b0;
extern int g_007b8c08;
extern void FUN_00412570(void);
extern void FUN_004125e0(void);
extern void FUN_00412740(void);
extern void FUN_004084e0(void);
extern void FUN_004d2000(void);
extern void FUN_004d24f0(void);
extern void FUN_004d2840(void);
extern void FUN_004d21c0(void);
extern void FUN_00415260(void);
extern void FUN_0041ee70(void);
extern void FUN_004d2680(void);
extern void FUN_006fab90(void);
extern void FUN_0041ef60(void);

__declspec(naked) void FUN_004cffa0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x7c
        mov     eax, dword ptr [ebp + 0xc]
        push    eax
        lea     ecx, [ebp + 0xc]
        call    FUN_00412570
        mov     ecx, dword ptr [ebp + 0xc]
        push    0x7723c8
        push    ecx
        lea     ecx, [ebp - 0x4]
        call    FUN_004125e0
        push    eax
        lea     ecx, [ebp + 0xc]
        call    FUN_00412740
        mov     eax, dword ptr [ebp - 0x4]
        test    eax, eax
        jz      loc_e6
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_e6
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
loc_e6:
        mov     edx, dword ptr [ebp + 0xc]
        push    esi
        push    0x0
        push    edx
        lea     ecx, [ebp - 0x7c]
        call    FUN_004d2000
        mov     eax, dword ptr [ebp - 0x40]
        test    eax, eax
        jz      loc_66
        mov     eax, dword ptr [ebp - 0x60]
        test    eax, eax
        jbe     loc_66
        lea     ecx, [ebp - 0x7c]
        call    FUN_004d24f0
        test    al, al
        jz      loc_66
        mov     eax, dword ptr [g_007db0b0]
        test    eax, eax
        jz      loc_21
        push    eax
        lea     ecx, [ebp - 0x7c]
        call    FUN_004d2840
loc_21:
        mov     cx, word ptr [ebp - 0x3a]
        mov     esi, dword ptr [ebp + 0x8]
        mov     ax, word ptr [ebp - 0x3c]
        mov     word ptr [esi + 0x2], cx
        lea     ecx, [ebp - 0x7c]
        mov     word ptr [esi], ax
        call    FUN_004d21c0
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jz      loc_f7
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_f7
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
        mov     eax, esi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0xc
loc_66:
        mov     edx, dword ptr [ebp + 0x10]
        mov     ecx, dword ptr [g_007b8c08]
        push    edx
        call    FUN_00415260
        push    0x0
        lea     ecx, [ebp - 0x38]
        mov     esi, eax
        call    FUN_0041ee70
        lea     ecx, [ebp - 0x10]
        lea     eax, [ebp - 0x38]
        push    ecx
        mov     dword ptr [ebp - 0x10], eax
        mov     dword ptr [ebp - 0xc], 0x0
        mov     dword ptr [ebp - 0x8], esi
        call    dword ptr [esi + 0x2c]
        add     esp, 0x4
        push    0x0
        lea     edx, [ebp - 0x38]
        push    edx
        lea     ecx, [ebp - 0x7c]
        call    FUN_004d2680
        push    0x7723bc
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      loc_bb
        int     3
loc_bb:
        mov     cx, word ptr [ebp - 0x3a]
        mov     esi, dword ptr [ebp + 0x8]
        mov     ax, word ptr [ebp - 0x3c]
        mov     word ptr [esi + 0x2], cx
        lea     ecx, [ebp - 0x38]
        mov     word ptr [esi], ax
        call    FUN_0041ef60
        lea     ecx, [ebp - 0x7c]
        call    FUN_004d21c0
        mov     eax, dword ptr [ebp + 0xc]
        test    eax, eax
        jz      loc_f7
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     loc_f7
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
loc_f7:
        mov     eax, esi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
