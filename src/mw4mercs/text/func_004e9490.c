/*
 * FUN_004e9490 (496 B) — __thiscall, RET 0x4. MLR/Adept core: "set renderer
 * object" dispatcher. If param_1 == this->0x17c, frees it (FUN_004c4570).
 * Otherwise reads the object's renderer (param_1->0x14), and if its
 * 0x10>>10&1 flag is clear frees it; else registers it via FUN_00419480 /
 * FUN_004b6ca0 / a virtual call and FUN_004179b0. Then dispatches on the
 * interest-level switch key (like FUN_004e92c0) calling FUN_004179b0 /
 * virtual methods / FUN_004ea3d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004c4570(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_004b6ca0(void);
extern void __cdecl FUN_004179b0(void);
extern void __cdecl FUN_004e9cd0(void);
extern int  __cdecl FUN_006fab90(int);
extern void __cdecl FUN_004ea3d0(void);

extern char g_773358[];   /* string @ 0x773358 */

__declspec(naked) void FUN_004e9490(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        push    esi
        push    edi
        mov     edi, ecx
        mov     eax, dword ptr [edi + 0x17c]
        cmp     ebx, eax
        jnz     L94B7
        push    ebx
        call    FUN_004c4570
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L94B7:
        mov     esi, dword ptr [ebx + 0x14]
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0xa
        test    al, 0x1
        jnz     L94CE
        push    ebx
        mov     ecx, edi
        call    FUN_004c4570
        jmp     L9515
L94CE:
        lea     ecx, [ebx + 0x20]
        push    ecx
        lea     ecx, [ebp + -0xc]
        call    FUN_00419480
        mov     edx, dword ptr [ebp + -0xc]
        mov     eax, dword ptr [ebp + -0x4]
        mov     ecx, dword ptr [edi + 0x17c]
        push    edx
        push    eax
        call    FUN_004b6ca0
        mov     ecx, dword ptr [edi + 0x17c]
        mov     ecx, dword ptr [ecx + 0x144]
        push    ebx
        and     eax, 0xffff
        mov     eax, dword ptr [ecx + eax*0x4]
        mov     edx, dword ptr [eax]
        mov     ecx, eax
        call    dword ptr [edx + 0x8]
        push    ebx
        lea     ecx, [edi + 0x174]
        call    FUN_004179b0
L9515:
        mov     eax, dword ptr [edi + 0x14c]
        mov     ecx, dword ptr [esi + 0x10]
        and     eax, 0x180
        shl     eax, 0x2
        and     ecx, 0x180
        or      eax, ecx
        cmp     eax, 0x280
        jg      L95BB
        jz      L959B
        cmp     eax, 0x100
        jg      L957E
        jz      L9553
        test    eax, eax
        jz      L9553
        cmp     eax, 0x80
        jnz     L963A
L9553:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x74]
        test    al, al
        jnz     L9680
        mov     ecx, edi
        call    FUN_004e9cd0
        push    esi
        lea     ecx, [edi + 0x154]
        call    FUN_004179b0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L957E:
        cmp     eax, 0x200
        jnz     L963A
        push    esi
        lea     ecx, [edi + 0x164]
        call    FUN_004179b0
        mov     eax, dword ptr [esi]
        push    0x0
        jmp     L95E2
L959B:
        push    esi
        lea     ecx, [edi + 0x164]
        call    FUN_004179b0
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x74]
        test    al, al
        jnz     L9678
        jmp     L966C
L95BB:
        cmp     eax, 0x480
        jg      L9633
        jz      L9611
        cmp     eax, 0x300
        jz      L95F8
        cmp     eax, 0x400
        jnz     L963A
        push    esi
        lea     ecx, [edi + 0x16c]
        call    FUN_004179b0
        mov     eax, dword ptr [esi]
        push    0x1
L95E2:
        mov     ecx, esi
        call    dword ptr [eax + 0x34]
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x74]
        test    al, al
        jnz     L9678
        jmp     L966C
L95F8:
        push    esi
        lea     ecx, [edi + 0x164]
        call    FUN_004179b0
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x74]
        test    al, al
        jnz     L9678
        jmp     L966C
L9611:
        push    esi
        lea     ecx, [edi + 0x16c]
        call    FUN_004179b0
        mov     edx, dword ptr [esi]
        push    0x1
        mov     ecx, esi
        call    dword ptr [edx + 0x34]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x74]
        test    al, al
        jnz     L9678
        jmp     L966C
L9633:
        cmp     eax, 0x500
        jz      L9655
L963A:
        push    offset g_773358
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L9680
        int     3
        /* assert-fail fall-through: duplicated epilogue (unreachable after INT3) */
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
L9655:
        push    esi
        lea     ecx, [edi + 0x16c]
        call    FUN_004179b0
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x74]
        test    al, al
        jnz     L9678
L966C:
        push    esi
        lea     ecx, [edi + 0x154]
        call    FUN_004179b0
L9678:
        push    esi
        mov     ecx, edi
        call    FUN_004ea3d0
L9680:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
