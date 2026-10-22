/*
 * FUN_00565630 (1074 B) — Player stats computation and reporting (variant 2).
 *
 * Processes mission parameters and player stats, computes aggregate values
 * through a loop over unit data, then calls a dispatch function with results.
 *
 * __stdcall (two params: int param_1, char param_2).
 * CFLAGS: /O1
 */

extern int __cdecl FUN_006fab90(const char *msg);
extern int __stdcall FUN_006100a0(void);
extern int __stdcall FUN_00622910(int param, void *ptr);
extern int __stdcall FUN_006234b0(void *ptr);
extern void *__stdcall FUN_004084d0(int size);
extern void __stdcall FUN_004084e0(void *ptr);

/* extern data/function symbols (absolute-address operands) */
extern int DAT_007eebd4;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern float DAT_0076c5b0;
extern double DAT_0077eca8;
extern int *DAT_0076b3e8;   /* IAT */
extern int *DAT_0076b308;   /* IAT */
extern int *DAT_007eebe4;   /* IAT */

__declspec(naked) void __stdcall FUN_00565630(int param_1, char param_2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x468
        mov     eax, dword ptr [DAT_007eebd4]
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
        mov     ecx, dword ptr [eax + 0x20]
        mov     esi, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        xor     esi, 0x85739531
        mov     dword ptr [ebp - 0x1c], ecx
        jz      l_ret
        mov     edx, dword ptr [eax + 0xc]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x50]
        cmp     eax, edi
        mov     dword ptr [ebp - 0xc], eax
        jnz     l_mission_ok
        push    0x77ec8c
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      l_mission_ok
        int     3

l_mission_ok:
        push    ebx
        mov     ebx, dword ptr [ebp + 0x8]
        mov     eax, ebx
        imul    eax, eax, 0x22ac
        mov     dword ptr [ebp - 0x10], edi
        mov     dword ptr [ebp - 0x14], edi
        mov     dword ptr [ebp - 0x20], edi
        mov     dword ptr [ebp - 0x18], edi
        mov     dword ptr [ebp - 0x34], edi
        mov     dword ptr [ebp - 0x2c], edi
        mov     dword ptr [ebp - 0x38], edi
        mov     dword ptr [ebp - 0x24], edi
        mov     dword ptr [ebp - 0x30], edi
        mov     dword ptr [ebp - 0x28], edi
        mov     dword ptr [ebp - 0x60], edi
        lea     edi, [eax + esi]
        push    0x100
        lea     ecx, [edi + 0x205d34]
        push    ecx
        lea     edx, [ebp - 0x468]
        push    edx
        mov     dword ptr [ebp - 0x40], 0x0
        mov     dword ptr [ebp - 0x3c], 0x0
        mov     dword ptr [ebp - 0x48], 0x0
        mov     dword ptr [ebp - 0x44], 0x0
        mov     dword ptr [ebp - 0x58], 0x0
        mov     dword ptr [ebp - 0x54], 0x0
        mov     dword ptr [ebp + 0x8], edi
        call    dword ptr [DAT_0076b3e8]
        mov     eax, dword ptr [edi + 0x205d30]
        mov     ecx, dword ptr [eax + 0x5c]
        push    0x5c
        push    ecx
        call    dword ptr [DAT_0076b308]
        mov     edi, eax
        add     esp, 0x14
        test    edi, edi
        jz      l_no_substr
        inc     edi
        push    0x5c
        push    edi
        call    dword ptr [DAT_0076b308]
        add     esp, 0x8
        test    edi, edi
        jz      l_no_substr
        test    eax, eax
        jz      l_no_substr
        sub     eax, edi
        test    eax, eax
        mov     dword ptr [ebp - 0x8], eax
        jle     l_no_substr
        cmp     eax, 0x1e
        jge     l_no_substr
        push    eax
        lea     edx, [ebp - 0x268]
        push    edi
        push    edx
        call    dword ptr [DAT_0076b3e8]
        mov     eax, dword ptr [ebp - 0x8]
        add     esp, 0xc
        mov     word ptr [ebp + eax*2 - 0x268], 0x0
        jmp     l_substr_done

l_no_substr:
        mov     word ptr [ebp - 0x268], 0x0

l_substr_done:
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi + 0x205d30]
        mov     ecx, dword ptr [eax + 0x3b8]
        mov     dword ptr [ebp - 0x5c], eax
        mov     eax, dword ptr [edi + 0x206070]
        test    eax, eax
        mov     dword ptr [ebp - 0x68], ecx
        jnz     l_has_damage
        cmp     dword ptr [edi + 0x206074], 0xbff00000
        jz      l_zero_damage

l_has_damage:
        mov     eax, dword ptr [ebp - 0x1c]
        mov     cl, byte ptr [eax + 0x2214]
        test    cl, cl
        jnz     l_has_weapon
        fld     dword ptr [DAT_0076c5b0]
        fsub    qword ptr [edi + 0x206070]
        fmul    qword ptr [DAT_0077eca8]
        fstp    qword ptr [ebp - 0x50]
        jmp     l_damage_done

l_has_weapon:
        lea     ecx, [eax + 0x21e8]
        call    FUN_006100a0
        fsub    qword ptr [edi + 0x206070]
        fmul    qword ptr [DAT_0077eca8]
        fstp    qword ptr [ebp - 0x50]
        jmp     l_damage_done

l_zero_damage:
        mov     dword ptr [ebp - 0x50], 0x0
        mov     dword ptr [ebp - 0x4c], 0x0

l_damage_done:
        mov     ecx, dword ptr [edi + 0x205f38]
        fld     qword ptr [ebp - 0x40]
        mov     edx, dword ptr [ebp - 0xc]
        fld     qword ptr [ebp - 0x48]
        mov     eax, dword ptr [edx + 0xe4]
        mov     dword ptr [ebp - 0x64], ecx
        xor     ecx, ecx
        add     edi, 0x206e54
        mov     dword ptr [ebp - 0x8], eax
        mov     dword ptr [ebp - 0xc], edi

l_inner_loop:
        fld     dword ptr [edi]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      l_inner_next
        mov     edx, ebx
        imul    edx, edx, 0x8ab
        lea     eax, [edx + ecx]
        fld     dword ptr [esi + eax*4 + 0x2072b0]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      l_inner_next
        lea     eax, [edx + ecx]
        cmp     dword ptr [esi + eax*4 + 0x20770c], 0x0
        jnz     l_inner_next
        add     edx, ecx
        mov     eax, dword ptr [esi + edx*4 + 0x207b68]
        test    eax, eax
        jz      l_inner_cont

l_inner_next:
        fld     dword ptr [edi]
        mov     edi, dword ptr [ebp - 0x10]
        mov     eax, ebx
        faddp   st(2), st(0)
        imul    eax, eax, 0x8ab
        lea     edx, [eax + ecx]
        fadd    dword ptr [esi + edx*4 + 0x2072b0]
        lea     edx, [eax + ecx]
        mov     edx, dword ptr [esi + edx*4 + 0x20770c]
        add     edi, edx
        mov     edx, dword ptr [ebp - 0x14]
        add     eax, ecx
        mov     eax, dword ptr [esi + eax*4 + 0x207b68]
        add     edx, eax
        mov     dword ptr [ebp - 0x14], edx
        lea     edx, [ecx - 0xff]
        cmp     ebx, edx
        mov     dword ptr [ebp - 0x10], edi
        jnz     l_inner_cont
        mov     eax, ebx
        shl     eax, 0x7
        add     eax, ebx
        shl     eax, 0x3
        sub     eax, ebx
        shl     eax, 0x1
        lea     edx, [eax + ecx]
        fld     dword ptr [esi + edx*4 + 0x4844]
        add     eax, ecx
        mov     eax, dword ptr [esi + eax*4 + 0x50fc]
        fstp    qword ptr [ebp - 0x58]
        mov     dword ptr [ebp - 0x20], eax

l_inner_cont:
        mov     edi, dword ptr [ebp - 0xc]
        inc     ecx
        add     edi, 0x4
        cmp     ecx, 0x117
        mov     dword ptr [ebp - 0xc], edi
        jl      l_inner_loop

        mov     eax, dword ptr [ebp - 0x5c]
        fstp    qword ptr [ebp - 0x48]
        mov     cl, byte ptr [eax + 0x14]
        mov     byte ptr [ebp - 0x4], cl
        fstp    qword ptr [ebp - 0x40]
        mov     dx, word ptr [eax + 0x16]
        mov     eax, dword ptr [ebp - 0x1c]
        mov     word ptr [ebp - 0x2], dx
        mov     esi, dword ptr [eax + 0x225c]
        test    esi, esi
        jz      l_skip_team_stats

        lea     ecx, [ebp - 0x4]
        push    ecx
        mov     ecx, esi
        call    FUN_006234b0
        lea     edx, [ebp - 0x4]
        push    edx
        push    0x8
        mov     ecx, esi
        mov     dword ptr [ebp - 0x18], eax
        call    FUN_00622910
        mov     dword ptr [ebp - 0x34], eax
        lea     eax, [ebp - 0x4]
        push    eax
        push    0x2
        mov     ecx, esi
        call    FUN_00622910
        lea     ecx, [ebp - 0x4]
        push    ecx
        push    0x9
        mov     ecx, esi
        mov     dword ptr [ebp - 0x2c], eax
        call    FUN_00622910
        mov     dword ptr [ebp - 0x38], eax
        mov     eax, dword ptr [ebp - 0x8]
        test    eax, eax
        jz      l_skip_team_stats
        lea     edx, [ebp - 0x4]
        push    edx
        push    0x3
        mov     ecx, esi
        call    FUN_00622910
        mov     dword ptr [ebp - 0x24], eax
        lea     eax, [ebp - 0x4]
        push    eax
        push    0x34
        mov     ecx, esi
        call    FUN_00622910
        lea     ecx, [ebp - 0x4]
        push    ecx
        push    0x35
        mov     ecx, esi
        mov     dword ptr [ebp - 0x30], eax
        call    FUN_00622910
        mov     dword ptr [ebp - 0x28], eax

l_skip_team_stats:
        mov     eax, dword ptr [ebp + 0x8]
        mov     esi, dword ptr [eax + 0x20607c]
        sub     esi, dword ptr [eax + 0x206078]
        sar     esi, 0x2
        xor     edi, edi
        test    esi, esi
        jle     l_skip_copy

        lea     edx, [esi*4]
        push    edx
        call    FUN_004084d0
        mov     ecx, dword ptr [ebp + 0x8]
        mov     ebx, eax
        mov     eax, dword ptr [ecx + 0x206078]
        mov     ecx, dword ptr [ecx + 0x20607c]
        add     esp, 0x4
        cmp     eax, ecx
        mov     dword ptr [ebp + 0x8], ecx
        jz      l_copy_done

        mov     ecx, ebx
l_copy_loop:
        mov     edx, dword ptr [eax]
        add     eax, 0x4
        mov     dword ptr [ecx], edx
        inc     edi
        add     ecx, 0x4
        cmp     edi, esi
        jge     l_copy_done
        cmp     eax, dword ptr [ebp + 0x8]
        jnz     l_copy_loop
        jmp     l_copy_done

l_skip_copy:
        mov     ebx, dword ptr [ebp - 0x60]

l_copy_done:
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp - 0x28]
        mov     edx, dword ptr [ebp - 0x30]
        and     eax, 0xff
        push    eax
        mov     eax, dword ptr [ebp - 0x24]
        push    esi
        push    ebx
        push    ecx
        mov     ecx, dword ptr [ebp - 0x38]
        push    edx
        mov     edx, dword ptr [ebp - 0x2c]
        push    eax
        mov     eax, dword ptr [ebp - 0x34]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x18]
        push    edx
        mov     edx, dword ptr [ebp - 0x20]
        push    eax
        mov     eax, dword ptr [ebp - 0x14]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x10]
        push    edx
        mov     edx, dword ptr [ebp - 0x54]
        push    eax
        mov     eax, dword ptr [ebp - 0x58]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x44]
        push    edx
        mov     edx, dword ptr [ebp - 0x48]
        push    eax
        mov     eax, dword ptr [ebp - 0x3c]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x40]
        push    edx
        mov     edx, dword ptr [ebp - 0x64]
        push    eax
        mov     eax, dword ptr [ebp - 0x8]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x4c]
        push    edx
        mov     edx, dword ptr [ebp - 0x50]
        push    eax
        mov     eax, dword ptr [ebp - 0x68]
        push    ecx
        push    edx
        push    eax
        lea     ecx, [ebp - 0x268]
        push    ecx
        lea     edx, [ebp - 0x468]
        push    edx
        call    dword ptr [DAT_007eebe4]
        push    ebx
        call    FUN_004084e0
        add     esp, 0x4
        pop     ebx

l_ret:
        pop     edi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }
}
