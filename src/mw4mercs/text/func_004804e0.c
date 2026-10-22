/*
 * FUN_004804e0 (493 B) — MLR (MidLevelRenderer) global primitive-base
 * initialization. Allocates and wires up the global MLR buffer objects
 * (0x007da698, 0x007da68c, 0x007da688, 0x007da684, 0x007da680,
 * 0x007da608, 0x007da670, 0x007da66c, and the 0x007da65c..0x007da668
 * array), calling per-object constructors.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(int);
extern void  __cdecl FUN_004151c0(void);
extern void  __cdecl FUN_00423ca0(void);
extern void  __cdecl FUN_00481250(void);
extern void  __cdecl FUN_00423bd0(void);
extern void  __cdecl FUN_004806d0(void);
extern void  __cdecl FUN_004802a0(void);

extern int g_007b8c08;
extern int g_007da698;
extern int g_007da68c;
extern int g_007da688;
extern int g_007da684;
extern int g_007da680;
extern int g_007da608;
extern int g_007da670;
extern int g_007da66c;

__declspec(naked) void FUN_004804e0(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        xor     ebp, ebp
        add     esp, 4
        cmp     esi, ebp
        jz      L_80515
        mov     eax, dword ptr [g_007b8c08]
        push    eax
        push    0x76f6e0
        push    0x55
        mov     ecx, esi
        call    FUN_004151c0
        mov     dword ptr [esi+0x14], ebp
        mov     dword ptr [g_007da698], esi
        jmp     L_8051b
    L_80515:
        mov     dword ptr [g_007da698], ebp
    L_8051b:
        push    8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebp
        jz      L_80544
        push    0x100
        mov     ecx, esi
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi+4], ebp
        call    FUN_00423ca0
        mov     dword ptr [g_007da68c], esi
        jmp     L_8054a
    L_80544:
        mov     dword ptr [g_007da68c], ebp
    L_8054a:
        push    8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebp
        jz      L_80574
        mov     ebx, 0x200
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi+4], ebp
        call    FUN_00481250
        mov     dword ptr [g_007da688], esi
        jmp     L_8057f
    L_80574:
        mov     dword ptr [g_007da688], ebp
        mov     ebx, 0x200
    L_8057f:
        push    8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebp
        jz      L_805a4
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi+4], ebp
        call    FUN_00423ca0
        mov     dword ptr [g_007da684], esi
        jmp     L_805aa
    L_805a4:
        mov     dword ptr [g_007da684], ebp
    L_805aa:
        push    8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebp
        jz      L_805cf
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi+4], ebp
        call    FUN_00423bd0
        mov     dword ptr [g_007da680], esi
        jmp     L_805d5
    L_805cf:
        mov     dword ptr [g_007da680], ebp
    L_805d5:
        push    8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebp
        jz      L_80601
        push    0x800
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi+4], ebx
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [esi], eax
        mov     dword ptr [g_007da608], esi
        jmp     L_80607
    L_80601:
        mov     dword ptr [g_007da608], ebp
    L_80607:
        push    8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebp
        jz      L_80633
        push    0x400
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi+4], ebx
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [esi], eax
        mov     dword ptr [g_007da670], esi
        jmp     L_80639
    L_80633:
        mov     dword ptr [g_007da670], ebp
    L_80639:
        push    0x64
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        jz      L_80673
        lea     ebx, [eax+4]
        mov     dword ptr [eax], 2
        mov     esi, ebx
        mov     edi, 2
    L_80657:
        mov     ecx, esi
        call    FUN_004806d0
        add     esi, 0x30
        dec     edi
        jnz     L_80657
        mov     ecx, ebx
        mov     dword ptr [g_007da66c], ecx
        mov     ebx, 0x200
        jmp     L_8067b
    L_80673:
        xor     ecx, ecx
        mov     dword ptr [g_007da66c], ecx
    L_8067b:
        push    8
        call    FUN_004802a0
        mov     ecx, dword ptr [g_007da66c]
        push    8
        add     ecx, 0x30
        call    FUN_004802a0
        mov     edi, 0x7da65c
    L_80697:
        push    8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebp
        jz      L_806b9
        push    ebx
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi+4], ebx
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [esi], eax
        jmp     L_806bb
    L_806b9:
        xor     esi, esi
    L_806bb:
        mov     dword ptr [edi], esi
        add     edi, 4
        cmp     edi, 0x7da66c
        jl      L_80697
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
