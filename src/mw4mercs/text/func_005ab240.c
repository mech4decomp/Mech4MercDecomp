/*
 * FUN_005ab240 (270 B) — __cdecl, no args.
 *
 * Initialization routine: allocates a ClusterBombWeaponSubsystem object and
 * four 12-byte float-vector globals, storing pointers into globals at
 * 0x007f20b0..0x007f20c0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00501a20(void);

__declspec(naked) void FUN_005ab240(void)
{
    

extern int DAT_007f255c;
extern int DAT_007f2548;
extern int DAT_007f20c0;
extern int DAT_007f20b0;
extern int DAT_007f20b4;
extern int DAT_007f20b8;
extern int DAT_007f20bc;
__asm {
push    esi
        push    edi
        push    0xa8
        call    FUN_004084d0
        mov     edi, eax
        xor     esi, esi
        add     esp, 0x4
        cmp     edi, esi
        jz      L_ab2a8
        mov eax, dword ptr [DAT_007f255c]
        mov ecx, dword ptr [DAT_007f2548]
        push    0x502c60
        push    0x5028b0
        push    0x675a60
        push    esi
        push    0x675a40
        push    eax
        push    0x674b00
        push    0x5ab3a0
        push    esi
        push    esi
        push    ecx
        push    0x78576c
        push    0x4c9
        mov     ecx, edi
        call    FUN_00501a20
        mov     dword ptr [edi + 0xa4], 0x5ef970
        mov dword ptr [DAT_007f20c0], edi
        jmp     L_ab2ae
L_ab2a8:
        mov dword ptr [DAT_007f20c0], esi
L_ab2ae:
        push    0xc
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, esi
        jz      L_ab2cf
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax], 0xbfc00000
        mov     dword ptr [eax + 0x8], esi
        mov dword ptr [DAT_007f20b0], eax
        jmp     L_ab2d5
L_ab2cf:
        mov dword ptr [DAT_007f20b0], esi
L_ab2d5:
        push    0xc
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, esi
        jz      L_ab2f6
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax], 0x3fc00000
        mov     dword ptr [eax + 0x8], esi
        mov dword ptr [DAT_007f20b4], eax
        jmp     L_ab2fc
L_ab2f6:
        mov dword ptr [DAT_007f20b4], esi
L_ab2fc:
        push    0xc
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, esi
        jz      L_ab31d
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax], esi
        mov     dword ptr [eax + 0x8], 0xbfc00000
        mov dword ptr [DAT_007f20b8], eax
        jmp     L_ab323
L_ab31d:
        mov dword ptr [DAT_007f20b8], esi
L_ab323:
        push    0xc
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, esi
        jz      L_ab345
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax], esi
        pop     edi
        mov     dword ptr [eax + 0x8], 0x3fc00000
        mov dword ptr [DAT_007f20bc], eax
        pop     esi
        ret
L_ab345:
        pop     edi
        mov dword ptr [DAT_007f20bc], esi
        pop     esi
        ret
    }


}
