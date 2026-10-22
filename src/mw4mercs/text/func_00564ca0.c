/*
 * FUN_00564ca0 (1126 B) — Stats/scores computation and reporting.
 *
 * Processes mission parameters and player stats, computes aggregate values
 * (damage, kills, etc.) through two nested loops over unit data, then
 * calls a dispatch function with the results.
 *
 * __stdcall (two params: int param_1, char param_2).
 * CFLAGS: /O1
 */

extern int __cdecl FUN_006fab90(const char *msg);
extern int __stdcall FUN_006100a0(void);
extern int __stdcall FUN_00622930(int param, int val);
extern void *__stdcall FUN_004084d0(int size);
extern void __stdcall FUN_004084e0(void *ptr);
extern int DAT_007eebd4;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern double DAT_0076d970;
extern float DAT_0076c5b0;
extern double DAT_0077eca8;
extern int *DAT_007eebdc;

__declspec(naked) void __stdcall FUN_00564ca0(int param_1, char param_2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x58
        mov     eax, dword ptr [DAT_007eebd4]
        push    ebx
        push    esi
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jz      l_ret
        mov     eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x20]
        xor     ecx, 0x85739531
        jz      l_ret
        mov     ebx, dword ptr [eax + 0x20]
        mov     esi, dword ptr [eax + 0xc]
        xor     ebx, 0x85739531
        xor     esi, 0x85739531
        mov     dword ptr [ebp - 0x24], ebx
        jz      l_ret
        mov     edx, dword ptr [eax + 0xc]
        xor     edx, 0x85739531
        cmp     dword ptr [edx + 0x50], edi
        jnz     l_mission_ok
        push    0x77ec8c
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      l_mission_ok
        int     3

l_mission_ok:
        mov     al, byte ptr [ebx + 0x2214]
        fld     qword ptr [DAT_0076d970]
        test    al, al
        fst     qword ptr [ebp - 0x50]
        mov     dword ptr [ebp - 0x1c], 0x0
        mov     dword ptr [ebp - 0x18], 0x0
        mov     dword ptr [ebp - 0x48], 0x0
        mov     dword ptr [ebp - 0x44], 0x0
        mov     dword ptr [ebp - 0x10], edi
        mov     dword ptr [ebp - 0xc], edi
        mov     dword ptr [ebp - 0x8], edi
        mov     dword ptr [ebp - 0x40], edi
        mov     dword ptr [ebp - 0x3c], edi
        mov     dword ptr [ebp - 0x38], edi
        mov     dword ptr [ebp - 0x34], edi
        mov     dword ptr [ebp - 0x30], edi
        mov     dword ptr [ebp - 0x2c], edi
        mov     dword ptr [ebp - 0x28], edi
        mov     dword ptr [ebp - 0x14], edi
        jnz     l_has_weapon
        fld     dword ptr [DAT_0076c5b0]
        jmp     l_weapon_done

l_has_weapon:
        lea     ecx, [ebx + 0x21e8]
        fstp    st(0)
        call    FUN_006100a0
        fstp    dword ptr [ebp - 0x20]
        fld     qword ptr [ebp - 0x50]
        fld     dword ptr [ebp - 0x20]

l_weapon_done:
        fmul    qword ptr [DAT_0077eca8]
        lea     edi, [esi + 0x55bc]
        mov     dword ptr [ebp - 0x4], 0x1
        mov     edx, 0x1a1f
        fstp    qword ptr [ebp - 0x58]
        mov     dword ptr [ebp - 0x20], edi
        fld     qword ptr [ebp - 0x1c]
        fld     qword ptr [ebp - 0x48]

l_outer_loop1:
        mov     al, byte ptr [edi - 0x4c]
        test    al, al
        jz      l_outer_next1
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      l_outer_next1
        mov     ecx, dword ptr [eax + 0x170]
        test    ecx, ecx
        jz      l_outer_next1
        mov     eax, dword ptr [ebp + 0x8]
        cmp     dword ptr [edi - 0x3c], eax
        jnz     l_outer_next1
        xor     ecx, ecx
        add     edi, 0xe64
        mov     dword ptr [ebp - 0x18], edi

l_inner_loop1:
        fld     dword ptr [edi]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      l_inner_skip1
        lea     eax, [edx + ecx]
        fld     dword ptr [esi + eax*4]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      l_inner_skip1
        lea     eax, [edx + ecx]
        mov     ebx, dword ptr [esi + eax*4 + 0x45c]
        test    ebx, ebx
        jnz     l_inner_skip1
        lea     eax, [edx + ecx]
        mov     ebx, dword ptr [esi + eax*4 + 0x8b8]
        test    ebx, ebx
        jz      l_inner_cont1

l_inner_skip1:
        fld     dword ptr [edi]
        mov     ebx, dword ptr [ebp - 0x10]
        lea     edi, [edx + ecx]
        faddp   st(2), st(0)
        mov     edi, dword ptr [esi + edi*4 + 0x45c]
        add     ebx, edi
        mov     dword ptr [ebp - 0x10], ebx
        mov     ebx, dword ptr [ebp - 0xc]
        lea     edi, [edx + ecx]
        mov     edi, dword ptr [esi + edi*4 + 0x8b8]
        add     ebx, edi
        lea     eax, [edx + ecx]
        fadd    dword ptr [esi + eax*4]
        mov     dword ptr [ebp - 0xc], ebx
        cmp     dword ptr [ebp - 0x4], ecx
        lea     eax, [esi + eax*4]
        jnz     l_inner_cont1
        fld     dword ptr [eax]
        mov     eax, dword ptr [ebp - 0x8]
        add     eax, edi
        faddp   st(3), st(0)
        mov     dword ptr [ebp - 0x8], eax

l_inner_cont1:
        mov     edi, dword ptr [ebp - 0x18]
        inc     ecx
        add     edi, 0x4
        cmp     ecx, 0x117
        mov     dword ptr [ebp - 0x18], edi
        jl      l_inner_loop1
        mov     edi, dword ptr [ebp - 0x20]
        mov     ebx, dword ptr [ebp - 0x24]

l_outer_next1:
        mov     ecx, dword ptr [ebp - 0x4]
        inc     ecx
        add     edi, 0x2038
        add     edx, 0x80e
        cmp     edx, 0x81803
        mov     dword ptr [ebp - 0x4], ecx
        mov     dword ptr [ebp - 0x20], edi
        jl      l_outer_loop1

        fxch    st(2)
        lea     edi, [esi + 0x205f34]
        fst     qword ptr [ebp - 0x50]
        mov     dword ptr [ebp - 0x4], 0x0
        fxch    st(2)
        mov     edx, 0x81cac
        fst     qword ptr [ebp - 0x48]
        fxch    st(1)
        fst     qword ptr [ebp - 0x1c]
        mov     dword ptr [ebp - 0x18], edi
        fxch    st(1)

l_outer_loop2:
        mov     eax, dword ptr [edi - 0x204]
        test    eax, eax
        jz      l_outer_next2
        cmp     byte ptr [edi], 0x0
        jz      l_outer_next2
        mov     ecx, dword ptr [ebp + 0x8]
        cmp     dword ptr [edi + 0x4], ecx
        jnz     l_outer_next2
        xor     ecx, ecx
        add     edi, 0xf20
        mov     dword ptr [ebp - 0x20], edi

l_inner_loop2:
        fld     dword ptr [edi]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      l_inner_skip2
        lea     eax, [edx + ecx]
        fld     dword ptr [esi + eax*4]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      l_inner_skip2
        lea     eax, [edx + ecx]
        mov     ebx, dword ptr [esi + eax*4 + 0x45c]
        test    ebx, ebx
        jnz     l_inner_skip2
        lea     eax, [edx + ecx]
        mov     ebx, dword ptr [esi + eax*4 + 0x8b8]
        test    ebx, ebx
        jz      l_inner_cont2

l_inner_skip2:
        fld     dword ptr [edi]
        mov     ebx, dword ptr [ebp - 0x10]
        lea     edi, [edx + ecx]
        faddp   st(2), st(0)
        mov     edi, dword ptr [esi + edi*4 + 0x45c]
        add     ebx, edi
        mov     dword ptr [ebp - 0x10], ebx
        mov     ebx, dword ptr [ebp - 0xc]
        lea     edi, [edx + ecx]
        mov     edi, dword ptr [esi + edi*4 + 0x8b8]
        add     ebx, edi
        lea     eax, [edx + ecx]
        fadd    dword ptr [esi + eax*4]
        mov     dword ptr [ebp - 0x44], edi
        mov     dword ptr [ebp - 0xc], ebx
        mov     ebx, dword ptr [ebp - 0x4]
        lea     edi, [ecx - 0xff]
        cmp     ebx, edi
        lea     eax, [esi + eax*4]
        jnz     l_inner_cont2
        fld     dword ptr [eax]
        mov     edi, dword ptr [ebp - 0x8]
        mov     eax, dword ptr [ebp - 0x44]
        faddp   st(3), st(0)
        add     edi, eax
        mov     dword ptr [ebp - 0x8], edi

l_inner_cont2:
        mov     edi, dword ptr [ebp - 0x20]
        inc     ecx
        add     edi, 0x4
        cmp     ecx, 0x117
        mov     dword ptr [ebp - 0x20], edi
        jl      l_inner_loop2
        mov     edi, dword ptr [ebp - 0x18]
        mov     ebx, dword ptr [ebp - 0x24]

l_outer_next2:
        mov     ecx, dword ptr [ebp - 0x4]
        inc     ecx
        add     edi, 0x22ac
        add     edx, 0x8ab
        cmp     edx, 0x8ecb4
        mov     dword ptr [ebp - 0x4], ecx
        mov     dword ptr [ebp - 0x18], edi
        jl      l_outer_loop2

        mov     ebx, dword ptr [ebx + 0x225c]
        fstp    qword ptr [ebp - 0x48]
        test    ebx, ebx
        fstp    qword ptr [ebp - 0x1c]
        fstp    qword ptr [ebp - 0x50]
        jz      l_skip_team_stats

        mov     edx, dword ptr [ebp + 0x8]
        or      edi, 0xffffffff
        sub     edi, edx
        push    edi
        push    0x2b
        mov     ecx, ebx
        call    FUN_00622930
        push    edi
        push    0x8
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x40], eax
        call    FUN_00622930
        push    edi
        push    0x2
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x3c], eax
        call    FUN_00622930
        push    edi
        push    0x9
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x38], eax
        call    FUN_00622930
        push    edi
        push    0x3
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x34], eax
        call    FUN_00622930
        push    edi
        push    0x34
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x30], eax
        call    FUN_00622930
        push    edi
        push    0x35
        mov     ecx, ebx
        mov     dword ptr [ebp - 0x2c], eax
        call    FUN_00622930
        mov     dword ptr [ebp - 0x28], eax

l_skip_team_stats:
        mov     ebx, dword ptr [ebp + 0x8]
        lea     ecx, [ebx + ebx*2 + 0x8e75b]
        mov     edi, dword ptr [esi + ecx*4 + 0x4]
        mov     edx, dword ptr [esi + ecx*4]
        lea     eax, [esi + ecx*4]
        sub     edi, edx
        sar     edi, 0x2
        test    edi, edi
        mov     dword ptr [ebp - 0x4], 0x0
        mov     dword ptr [ebp + 0x8], eax
        jle     l_skip_copy

        lea     edx, [edi*4]
        push    edx
        call    FUN_004084d0
        mov     dword ptr [ebp - 0x14], eax
        mov     eax, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [eax]
        lea     ecx, [ebx + ebx*2]
        mov     esi, dword ptr [esi + ecx*4 + 0x239d70]
        add     esp, 0x4
        cmp     eax, esi
        jz      l_skip_copy

        mov     edx, dword ptr [ebp - 0x14]
l_copy_loop:
        mov     ecx, dword ptr [eax]
        mov     dword ptr [edx], ecx
        mov     ecx, dword ptr [ebp - 0x4]
        add     eax, 0x4
        inc     ecx
        add     edx, 0x4
        cmp     ecx, edi
        mov     dword ptr [ebp - 0x4], ecx
        jge     l_skip_copy
        cmp     eax, esi
        jnz     l_copy_loop

l_skip_copy:
        mov     edx, dword ptr [ebp + 0xc]
        mov     esi, dword ptr [ebp - 0x14]
        mov     eax, dword ptr [ebp - 0x28]
        mov     ecx, dword ptr [ebp - 0x2c]
        and     edx, 0xff
        push    edx
        mov     edx, dword ptr [ebp - 0x30]
        push    edi
        push    esi
        push    eax
        mov     eax, dword ptr [ebp - 0x34]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x38]
        push    edx
        mov     edx, dword ptr [ebp - 0x3c]
        push    eax
        mov     eax, dword ptr [ebp - 0x40]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x8]
        push    edx
        mov     edx, dword ptr [ebp - 0xc]
        push    eax
        mov     eax, dword ptr [ebp - 0x10]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x4c]
        push    edx
        mov     edx, dword ptr [ebp - 0x50]
        push    eax
        mov     eax, dword ptr [ebp - 0x44]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x48]
        push    edx
        mov     edx, dword ptr [ebp - 0x18]
        push    eax
        mov     eax, dword ptr [ebp - 0x1c]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x54]
        push    edx
        mov     edx, dword ptr [ebp - 0x58]
        push    eax
        push    ecx
        push    edx
        push    ebx
        call    dword ptr [DAT_007eebdc]
        push    esi
        call    FUN_004084e0
        add     esp, 0x4

l_ret:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
