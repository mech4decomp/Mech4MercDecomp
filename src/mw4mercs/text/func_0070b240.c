/*
 * FUN_0070b240 (493 B) — __cdecl RET 0.
 *
 * Display/backbuffer refresh. If DAT_0085a1f9 set and DAT_00858ab0==1
 * (and DAT_0085a0d8/DAT_0085b218 conditions), sets DAT_0087dd0a and
 * either blits the backbuffer (DAT_0085a210 path via virtual +0x34,
 * FUN_007355d0 / FUN_007356b0) or does a GetDC/StretchBlt/BitBlt blit
 * (DAT_0085a210==0 path), then calls FUN_007477b0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char DAT_0085a1f9;
extern int  DAT_00858ab0;
extern int  DAT_0085a0d8;
extern int  DAT_0085b218;
extern char DAT_00858ab5;
extern char DAT_0087dd0a;
extern int  DAT_0085a210;
extern int  DAT_0085a254;
extern char DAT_00858954;
extern int  DAT_00858aac;
extern int  DAT_007b7064;
extern int  DAT_0085895c;
extern int  DAT_00858c10;
extern int  DAT_00858940;
extern int  DAT_00858944;
extern int  DAT_00858c14;
extern int  DAT_0085a214;
extern int  DAT_00858bf8;
extern int  DAT_00858ba0;
extern char DAT_0085a1dc;

extern void *DAT_0076b484;
extern void *DAT_0076b050;
extern void *DAT_0076b054;
extern void *DAT_0076b058;
extern void *DAT_0076b488;

extern void __cdecl FUN_007356b0(void);
extern void __cdecl FUN_007355d0(void);
extern void __cdecl FUN_00735310(void);
extern void __cdecl FUN_00735350(void);
extern void __cdecl FUN_007477b0(void);

__declspec(naked) void __cdecl func_0070b240(void)
{
    __asm {
        mov     al, byte ptr [DAT_0085a1f9]
        sub     esp, 0x14
        test    al, al
        jz      L_429
        mov     eax, dword ptr [DAT_00858ab0]
        mov     ecx, 0x1
        cmp     eax, ecx
        jnz     L_41d
        mov     eax, dword ptr [DAT_0085a0d8]
        test    eax, eax
        jnz     L_27c
        mov     eax, dword ptr [DAT_0085b218]
        test    eax, eax
        jz      L_27c
        cmp     eax, ecx
        jnz     L_41d
L_27c:
        mov     al, byte ptr [DAT_00858ab5]
        test    al, al
        push    ebx
        push    esi
        mov     byte ptr [DAT_0087dd0a], cl
        mov     dword ptr [DAT_0085a0d8], 0x0
        jz      L_414
        mov     esi, dword ptr [DAT_0085a210]
        test    esi, esi
        jz      L_373
        mov     eax, dword ptr [DAT_0085a254]
        test    eax, eax
        mov     bl, byte ptr [DAT_00858954]
        jz      L_2e5
        test    bl, bl
        jz      L_2e5
        mov     eax, dword ptr [DAT_00858aac]
        test    eax, eax
        jnz     L_2e5
        mov     eax, dword ptr [DAT_007b7064]
        test    eax, eax
        jnz     L_2e5
        mov     eax, dword ptr [DAT_0085895c]
        test    eax, eax
        jnz     L_2e5
        push    ecx
        push    0x0
        push    esi
        call    FUN_007356b0
        jmp     L_414
L_2e5:
        mov     eax, dword ptr [DAT_00858c10]
        mov     ecx, dword ptr [DAT_00858940]
        mov     edx, dword ptr [DAT_00858944]
        mov     dword ptr [esp + 0xc], eax
        add     eax, ecx
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [DAT_00858c14]
        mov     dword ptr [esp + 0x10], eax
        add     eax, edx
        test    bl, bl
        mov     dword ptr [esp + 0x18], eax
        jz      L_32b
        mov     dword ptr [esp + 0xc], 0x0
        mov     dword ptr [esp + 0x14], ecx
        mov     dword ptr [esp + 0x10], 0x0
        mov     dword ptr [esp + 0x18], edx
L_32b:
        mov     ecx, dword ptr [esi]
        push    0x2
        push    esi
        call    dword ptr [ecx + 0x34]
        cmp     eax, 0x8876021c
        jnz     L_34e
L_33a:
        mov     eax, dword ptr [DAT_0085a210]
        mov     edx, dword ptr [eax]
        push    0x2
        push    eax
        call    dword ptr [edx + 0x34]
        cmp     eax, 0x8876021c
        jz      L_33a
L_34e:
        mov     eax, dword ptr [DAT_0085a214]
        mov     edx, dword ptr [DAT_0085a210]
        push    0x0
        push    0x1000000
        push    0x0
        push    eax
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    edx
        call    FUN_007355d0
        jmp     L_414
L_373:
        mov     ecx, dword ptr [DAT_0085a214]
        lea     eax, [esp + 0x8]
        push    eax
        push    ecx
        call    FUN_00735310
        mov     edx, dword ptr [DAT_00858bf8]
        push    edx
        call    dword ptr [DAT_0076b484]
        mov     esi, eax
        cmp     dword ptr [DAT_00858ba0], 0x8
        jnz     L_3cf
        push    0x4
        push    esi
        call    dword ptr [DAT_0076b050]
        mov     eax, dword ptr [DAT_00858944]
        mov     ecx, dword ptr [DAT_00858940]
        mov     edx, dword ptr [esp + 0x8]
        push    0xcc0020
        push    eax
        push    ecx
        push    0x0
        push    0x0
        push    edx
        push    eax
        push    ecx
        push    0x0
        push    0x0
        push    esi
        call    dword ptr [DAT_0076b054]
        jmp     L_3f6
L_3cf:
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, dword ptr [DAT_00858944]
        mov     edx, dword ptr [DAT_00858940]
        push    0xcc0020
        push    0x0
        push    0x0
        push    eax
        push    ecx
        push    edx
        push    0x0
        push    0x0
        push    esi
        call    dword ptr [DAT_0076b058]
L_3f6:
        mov     eax, dword ptr [DAT_00858bf8]
        push    esi
        push    eax
        call    dword ptr [DAT_0076b488]
        mov     ecx, dword ptr [esp + 0x8]
        mov     edx, dword ptr [DAT_0085a214]
        push    ecx
        push    edx
        call    FUN_00735350
L_414:
        pop     esi
        mov     byte ptr [DAT_0087dd0a], 0x0
        pop     ebx
L_41d:
        call    FUN_007477b0
        mov     byte ptr [DAT_0085a1dc], 0x0
L_429:
        add     esp, 0x14
        ret
    }
}
