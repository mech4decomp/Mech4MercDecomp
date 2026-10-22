/*
 * FUN_0048a540 (493 B) MLR subsystem initializer: allocates and wires the
 * global light/texture/geometry tables (0x7da7xx) and slot arrays.
 *
 * CFLAGS: /O1
 */

extern int g_007b8c08;
extern int g_007da7fc;
extern int g_007b9560;
extern int g_007da7ec;
extern int g_007da7e4;
extern int g_007da7e8;
extern int g_007da7e0;
extern int g_007b955c;
extern int g_007da7d4;
extern int g_007da7dc;
extern int g_007da794[];
extern int g_007da744[];
extern int g_007b9558;
extern int g_007da788;
extern int g_007da78c;
extern int g_007da784;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004151c0(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_0048bb60(void);
extern void __cdecl FUN_0048a480(void);

__declspec(naked) void FUN_0048a540(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    0x14
        call    FUN_004084d0
        xor     ebp, ebp
        add     esp, 4
        cmp     eax, ebp
        jz      loc_48a570
        mov     ecx, dword ptr [g_007b8c08]
        push    ecx
        push    0x76fde0
        push    0x43
        mov     ecx, eax
        call    FUN_004151c0
        mov     dword ptr [g_007da7fc], eax
        jmp     loc_48a576
loc_48a570:
        mov     dword ptr [g_007da7fc], ebp
loc_48a576:
        mov     eax, dword ptr [g_007b9560]
        lea     edx, [eax+eax*2]
        shl     edx, 1
        push    8
        mov     dword ptr [g_007da7ec], edx
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebp
        mov     ebx, 3
        jz      loc_48a5d4
        push    0x60
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi+4], ebx
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        cmp     edi, ebp
        jz      loc_48a5c8
        push    0x491b20
        push    ebx
        push    0x20
        push    edi
        call    FUN_00406c90
        mov     dword ptr [esi], edi
        mov     dword ptr [g_007da7e4], esi
        jmp     loc_48a5da
loc_48a5c8:
        xor     edi, edi
        mov     dword ptr [esi], edi
        mov     dword ptr [g_007da7e4], esi
        jmp     loc_48a5da
loc_48a5d4:
        mov     dword ptr [g_007da7e4], ebp
loc_48a5da:
        mov     eax, dword ptr [g_007b9560]
        lea     eax, [eax+eax*2]
        shl     eax, 1
        push    8
        mov     dword ptr [g_007da7e8], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebp
        jz      loc_48a635
        push    0x90
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi+4], ebx
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        cmp     edi, ebp
        jz      loc_48a629
        push    0x491d50
        push    ebx
        push    0x30
        push    edi
        call    FUN_00406c90
        mov     dword ptr [esi], edi
        mov     dword ptr [g_007da7e0], esi
        jmp     loc_48a63b
loc_48a629:
        xor     edi, edi
        mov     dword ptr [esi], edi
        mov     dword ptr [g_007da7e0], esi
        jmp     loc_48a63b
loc_48a635:
        mov     dword ptr [g_007da7e0], ebp
loc_48a63b:
        mov     ecx, dword ptr [g_007b955c]
        push    8
        mov     dword ptr [g_007da7d4], ecx
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebp
        mov     ebx, 1
        jz      loc_48a671
        push    ebx
        mov     ecx, esi
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi+4], ebp
        call    FUN_0048bb60
        mov     dword ptr [g_007da7dc], esi
        jmp     loc_48a677
loc_48a671:
        mov     dword ptr [g_007da7dc], ebp
loc_48a677:
        xor     edi, edi
loc_48a679:
        push    8
        mov     dword ptr [edi + g_007da794], ebp
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebp
        jz      loc_48a6a2
        push    8
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi+4], ebx
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [esi], eax
        jmp     loc_48a6a4
loc_48a6a2:
        xor     esi, esi
loc_48a6a4:
        mov     dword ptr [edi + g_007da744], esi
        add     edi, 4
        cmp     edi, 0x40
        jl      loc_48a679
        mov     eax, dword ptr [g_007b955c]
        mov     edx, dword ptr [g_007b9558]
        add     edx, eax
        push    8
        mov     dword ptr [g_007da788], edx
        mov     dword ptr [g_007da78c], eax
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 4
        cmp     esi, ebp
        jz      loc_48a722
        push    0xc8
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi+4], ebx
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, ebp
        jz      loc_48a713
        push    0x48a480
        push    ebx
        lea     edi, [eax+4]
        push    0xc4
        push    edi
        mov     dword ptr [eax], ebx
        call    FUN_00406c90
        mov     dword ptr [esi], edi
        pop     edi
        mov     dword ptr [g_007da784], esi
        pop     esi
        pop     ebp
        pop     ebx
        ret
loc_48a713:
        xor     edi, edi
        mov     dword ptr [esi], edi
        pop     edi
        mov     dword ptr [g_007da784], esi
        pop     esi
        pop     ebp
        pop     ebx
        ret
loc_48a722:
        pop     edi
        pop     esi
        mov     dword ptr [g_007da784], ebp
        pop     ebp
        pop     ebx
        ret
    }
}
