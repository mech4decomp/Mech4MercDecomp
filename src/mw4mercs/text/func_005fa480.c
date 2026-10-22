/*
 * FUN_005fa480 (398 B) — __thiscall, three stack args (param_1, param_2,
 * param_3). Sibling of FUN_005fa300: same magic-word early return, same
 * object-build pipeline (FUN_004d1f80 / FUN_004da920 / FUN_005347f0 /
 * FUN_00767400 / FUN_0041e690 / FUN_004cec10 / FUN_004d9910), but the
 * optional second matrix comes from FUN_00507f90 and the post-build helpers
 * are FUN_004f5060 / FUN_004f5630. Returns the new object pointer in EAX.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned short DAT_007db0ac;
extern unsigned short DAT_007db0ae;
extern int DAT_007db098;
extern int DAT_007dab44;
extern int DAT_007dab40;

extern void FUN_004d1f80(void);
extern void FUN_004da920(void);
extern void FUN_00507f90(void);
extern void FUN_005347f0(void);
extern void FUN_00767400(void);
extern void FUN_0041e690(void);
extern void FUN_004cec10(void);
extern void FUN_004d9910(void);
extern void FUN_004f5060(void);
extern void FUN_004f5630(void);
extern void FUN_0041e710(void);
extern void FUN_004d21c0(void);

__declspec(naked) void FUN_005fa480(void)
{
    __asm {
        sub     esp, 0x15c
        push    ebx
        mov     ebx, dword ptr [esp+0x164]
        mov     ax, word ptr [ebx]
        cmp     ax, word ptr [DAT_007db0ac]
        push    esi
        mov     esi, ecx
        jnz     L_a4b7
        mov     cx, word ptr [ebx+0x2]
        cmp     cx, word ptr [DAT_007db0ae]
        jnz     L_a4b7
        pop     esi
        xor     eax, eax
        pop     ebx
        add     esp, 0x15c
        ret     0xc
    L_a4b7:
        push    ebp
        push    edi
        push    0x1
        push    ebx
        lea     ecx, [esp+0x100]
        call    FUN_004d1f80
        push    ebx
        call    FUN_004da920
        mov     esi, dword ptr [esi+0xd8]
        mov     ebp, dword ptr [esp+0x178]
        add     esi, 0x80
        add     esp, 0x4
        test    ebp, ebp
        mov     ecx, 0xc
        lea     edi, [esp+0x38]
        mov     dword ptr [esp+0x14], eax
        rep movsd
        jz      L_a513
        lea     edx, [esp+0x13c]
        push    edx
        mov     ecx, ebp
        call    FUN_00507f90
        mov     ecx, 0xc
        mov     esi, eax
        lea     edi, [esp+0x38]
        rep movsd
    L_a513:
        mov     ecx, dword ptr [esp+0x14]
        push    0
        push    -0x1
        push    0x2
        push    0
        lea     eax, [esp+0x48]
        push    eax
        push    ebx
        push    0x2
        push    ecx
        push    0
        push    0x2
        push    0x90
        lea     ecx, [esp+0x94]
        call    FUN_005347f0
        push    0x8bd5e8
        lea     ecx, [esp+0xcc]
        call    FUN_00767400
        push    0x8bd5e8
        lea     ecx, [esp+0xe4]
        call    FUN_00767400
        mov     edx, dword ptr [esp+0x68]
        push    0
        push    edx
        lea     eax, [esp+0x70]
        push    eax
        lea     ecx, [esp+0x24]
        call    FUN_0041e690
        mov     ecx, dword ptr [DAT_007db098]
        call    FUN_004cec10
        mov     cl, byte ptr [eax]
        mov     byte ptr [esp+0x10], cl
        mov     dx, word ptr [eax+0x2]
        push    0
        lea     eax, [esp+0x14]
        push    eax
        lea     ecx, [esp+0x20]
        push    ecx
        mov     word ptr [esp+0x1e], dx
        call    FUN_004d9910
        mov     edx, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [DAT_007dab40]
        mov     esi, eax
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax+0x1c]
        add     esp, 0xc
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    esi
        call    dword ptr [edx+0x28]
        test    ebp, ebp
        jz      L_a5e1
        mov     al, byte ptr [esp+0x178]
        test    al, al
        jz      L_a5e1
        push    ebp
        mov     ecx, esi
        call    FUN_004f5060
        mov     ecx, esi
        call    FUN_004f5630
    L_a5e1:
        mov     eax, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [eax+0x48]
        lea     ecx, [esp+0x18]
        call    FUN_0041e710
        lea     ecx, [esp+0xf8]
        call    FUN_004d21c0
        pop     edi
        pop     ebp
        mov     eax, esi
        pop     esi
        pop     ebx
        add     esp, 0x15c
        ret     0xc
    }
}
