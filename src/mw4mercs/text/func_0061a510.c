/*
 * FUN_0061a510 (1308 B) — loads game/video/audio/player options from an
 * INI file (via FUN_0040ecc0 section lookup + FUN_00411cb0/FUN_00411d60
 * key reads) and writes them into a stream (param_2) through its vtable
 * method [+0x24]. Also reads a 0x200-entry array from the stream.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411cb0(void);
extern void __cdecl FUN_00411d60(void);
extern void __cdecl FUN_004d1f10(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_004d21c0(void);

extern char g_78c624[];   /* "Game Options" */
extern char g_78c614[];   /* "DifficultyLevel" */
extern char g_78c60c[];   /* "UseHeat" */
extern char g_78c5fc[];   /* "UnlimmitedAmmo" */
extern char g_78c5e8[];   /* "UseInvincibility" */
extern char g_78c5d8[];   /* "FriendlyFire" */
extern char g_78c5c8[];   /* "SplashDamage" */
extern char g_78c5b8[];   /* "DefalultView" */
extern char g_78c5a8[];   /* "Video Options" */
extern char g_78c59c[];   /* "Resolution" */
extern char g_78c590[];   /* "Contrast" */
extern char g_78c584[];   /* "Brightness" */
extern char g_771894[];   /* "Gamma" */
extern char g_78c574[];   /* "Audio Options" */
extern char g_78c564[];   /* "Player Options" */
extern char g_78c554[];   /* "PlayerInsignia" */
extern char g_78c544[];   /* "TeamInsignia" */
extern char g_78c538[];   /* "Player Name" */
extern char g_76b768[];   /* DAT_0076b768 */
extern char g_78c528[];   /* "Company Name" */
extern char g_773040[];   /* DAT_00773040 */

__declspec(naked) void FUN_0061a510(void)
{
    __asm {
        sub     esp, 0x8e4
        push    ebx
        mov     ebx, dword ptr [esp + 0x8ec]
        push    ebp
        push    esi
        push    edi
        xor     esi, esi
        xor     edi, edi
        cmp     ebx, esi
        jz      L_61a537
        push    offset g_78c624
        mov     ecx, ebx
        call    FUN_0040ecc0
        mov     edi, eax
    L_61a537:
        cmp     edi, esi
        mov     ebp, 0x1
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x40], ebp
        mov     dword ptr [esp + 0x1c], esi
        mov     dword ptr [esp + 0x48], esi
        mov     dword ptr [esp + 0x24], ebp
        mov     dword ptr [esp + 0x50], ebp
        mov     dword ptr [esp + 0x2c], ebp
        jz      L_61a5da
        push    esi
        lea     eax, [esp + 0x18]
        push    eax
        push    offset g_78c614
        mov     ecx, edi
        call    FUN_00411cb0
        push    esi
        lea     ecx, [esp + 0x44]
        push    ecx
        push    offset g_78c60c
        mov     ecx, edi
        call    FUN_00411cb0
        push    esi
        lea     edx, [esp + 0x20]
        push    edx
        push    offset g_78c5fc
        mov     ecx, edi
        call    FUN_00411cb0
        push    esi
        lea     eax, [esp + 0x4c]
        push    eax
        push    offset g_78c5e8
        mov     ecx, edi
        call    FUN_00411cb0
        push    esi
        lea     ecx, [esp + 0x28]
        push    ecx
        push    offset g_78c5d8
        mov     ecx, edi
        call    FUN_00411cb0
        push    esi
        lea     edx, [esp + 0x54]
        push    edx
        push    offset g_78c5c8
        mov     ecx, edi
        call    FUN_00411cb0
        push    esi
        lea     eax, [esp + 0x30]
        push    eax
        push    offset g_78c5b8
        mov     ecx, edi
        call    FUN_00411cb0
    L_61a5da:
        lea     ecx, [esp + 0xb0]
        call    FUN_004d1f10
        push    esi
        lea     ecx, [esp + 0x8c]
        call    FUN_0041ee70
        mov     esi, dword ptr [esp + 0x8fc]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x44]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x20]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x4c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x54]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x30]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        test    ebx, ebx
        jz      L_61a66e
        push    offset g_78c5a8
        mov     ecx, ebx
        call    FUN_0040ecc0
        mov     edi, eax
    L_61a66e:
        test    edi, edi
        mov     dword ptr [esp + 0x58], ebp
        mov     dword ptr [esp + 0x34], 0x3f000000
        mov     dword ptr [esp + 0x60], 0x3d99999a
        mov     dword ptr [esp + 0x3c], 0x3df0c34c
        jz      L_61a6da
        push    0x0
        lea     ecx, [esp + 0x5c]
        push    ecx
        push    offset g_78c59c
        mov     ecx, edi
        call    FUN_00411cb0
        push    0x0
        lea     edx, [esp + 0x38]
        push    edx
        push    offset g_78c590
        mov     ecx, edi
        call    FUN_00411d60
        push    0x0
        lea     eax, [esp + 0x64]
        push    eax
        push    offset g_78c584
        mov     ecx, edi
        call    FUN_00411d60
        push    0x0
        lea     ecx, [esp + 0x40]
        push    ecx
        push    offset g_771894
        mov     ecx, edi
        call    FUN_00411d60
    L_61a6da:
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x5c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x38]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x64]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x40]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        test    ebx, ebx
        jz      L_61a724
        push    offset g_78c574
        mov     ecx, ebx
        call    FUN_0040ecc0
        mov     edi, eax
    L_61a724:
        mov     edx, dword ptr [esi]
        mov     eax, 0x50
        mov     dword ptr [esp + 0x64], eax
        mov     dword ptr [esp + 0x6c], eax
        push    0x4
        lea     eax, [esp + 0x68]
        push    eax
        mov     ecx, esi
        mov     dword ptr [esp + 0x8c], ebp
        mov     dword ptr [esp + 0x88], ebp
        mov     dword ptr [esp + 0x7c], ebp
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x70]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x88]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x78]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x84]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        xor     ebp, ebp
        cmp     ebx, ebp
        jz      L_61a7a3
        push    offset g_78c564
        mov     ecx, ebx
        call    FUN_0040ecc0
        mov     edi, eax
    L_61a7a3:
        cmp     edi, ebp
        mov     eax, 0x21
        mov     dword ptr [esp + 0x5c], eax
        mov     dword ptr [esp + 0x44], eax
        jz      L_61a7d8
        push    ebp
        lea     ecx, [esp + 0x60]
        push    ecx
        push    offset g_78c554
        mov     ecx, edi
        call    FUN_00411cb0
        push    ebp
        lea     edx, [esp + 0x48]
        push    edx
        push    offset g_78c544
        mov     ecx, edi
        call    FUN_00411cb0
    L_61a7d8:
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x60]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x48]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    offset g_78c538
        lea     ecx, [esp + 0x34]
        call    FUN_00412570
        push    offset g_76b768
        lea     ecx, [esp + 0x2c]
        call    FUN_00412570
        push    offset g_76b768
        lea     ecx, [esp + 0x24]
        call    FUN_00412570
        lea     ecx, [esp + 0x30]
        push    ecx
        push    esi
        call    FUN_00412a50
        lea     edx, [esp + 0x30]
        push    edx
        push    esi
        call    FUN_00412a50
        lea     eax, [esp + 0x30]
        push    eax
        push    esi
        call    FUN_00412a50
        add     esp, 0x18
        push    offset g_76b768
        lea     ecx, [esp + 0x1c]
        call    FUN_00412570
        lea     ecx, [esp + 0x18]
        push    ecx
        push    esi
        call    FUN_00412a50
        add     esp, 0x8
        push    offset g_78c528
        lea     ecx, [esp + 0x14]
        call    FUN_00412570
        lea     edx, [esp + 0x10]
        push    edx
        push    esi
        mov     dword ptr [esp + 0x5c], 0x13ec
        mov     dword ptr [esp + 0x84], ebp
        mov     dword ptr [esp + 0x70], ebp
        call    FUN_00412a50
        mov     eax, dword ptr [esi]
        add     esp, 0x8
        push    0x4
        lea     ecx, [esp + 0x58]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x80]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [esp + 0x6c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        mov     ecx, dword ptr [esp + 0x54]
        mov     edx, dword ptr [esi]
        add     ecx, 0xffffec15
        push    0x4
        lea     eax, [esp + 0x74]
        mov     dword ptr [esp + 0x74], ecx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    offset g_76b768
        lea     ecx, [esp + 0x3c]
        call    FUN_00412570
        lea     ecx, [esp + 0x38]
        push    ecx
        push    esi
        mov     dword ptr [esp + 0x80], ebp
        call    FUN_00412a50
        mov     edx, dword ptr [esi]
        add     esp, 0x8
        push    0x4
        lea     eax, [esp + 0x7c]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        push    offset g_773040
        lea     ecx, [esp + 0x50]
        call    FUN_00412570
        xor     eax, eax
        mov     ecx, 0x200
        lea     edi, [esp + 0xf4]
        rep stosd
        lea     ecx, [esp + 0x4c]
        push    ecx
        push    esi
        call    FUN_00412a50
        add     esp, 0x8
        lea     edi, [esp + 0xf4]
        mov     ebx, 0x200
    L_61a93f:
        mov     edx, dword ptr [esi]
        push    0x4
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x24]
        add     edi, 0x4
        dec     ebx
        jnz     L_61a93f
        mov     eax, dword ptr [esp + 0x4c]
        cmp     eax, ebp
        jz      L_61a96a
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_61a96a
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_61a96a:
        mov     eax, dword ptr [esp + 0x38]
        cmp     eax, ebp
        jz      L_61a985
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_61a985
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_61a985:
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebp
        jz      L_61a9a0
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_61a9a0
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_61a9a0:
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebp
        jz      L_61a9bb
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_61a9bb
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_61a9bb:
        mov     eax, dword ptr [esp + 0x20]
        cmp     eax, ebp
        jz      L_61a9d6
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_61a9d6
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_61a9d6:
        mov     eax, dword ptr [esp + 0x28]
        cmp     eax, ebp
        jz      L_61a9f1
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_61a9f1
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_61a9f1:
        mov     eax, dword ptr [esp + 0x30]
        pop     edi
        pop     esi
        cmp     eax, ebp
        pop     ebp
        pop     ebx
        jz      L_61aa10
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_61aa10
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    L_61aa10:
        lea     ecx, [esp + 0x78]
        call    FUN_0041ef60
        lea     ecx, [esp + 0xa0]
        call    FUN_004d21c0
        add     esp, 0x8e4
        ret
    }
}
