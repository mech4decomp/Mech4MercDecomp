/*
 * FUN_00565110 (1285 B) — Player stats computation and reporting.
 *
 * Processes mission parameters and player stats, computes aggregate values
 * (damage, kills, etc.) through a loop over unit data, then calls a dispatch
 * function with the results.
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
extern int __stdcall _ftol(void);
extern int DAT_007eebd4;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int *DAT_0076b3e8;
extern int *DAT_0076b308;
extern float DAT_0076c5b0;
extern double DAT_0077eca8;
extern double DAT_0077ed38;
extern int *DAT_007eebe0;

__declspec(naked) void __stdcall FUN_00565110(int param_1, char param_2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x480
        mov     eax, dword ptr [DAT_007eebd4]
        push    ebx
        xor     ebx, ebx
        cmp     eax, ebx
        push    esi
        push    edi
        jz      l_ret
        mov     eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x20]
        xor     ecx, 0x85739531
        jz      l_ret
        mov     ecx, dword ptr [eax + 0x20]
        mov     edi, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        xor     edi, 0x85739531
        mov     dword ptr [ebp - 0x44], ecx
        jz      l_ret
        mov     edx, dword ptr [eax + 0xc]
        xor     edx, 0x85739531
        mov     esi, dword ptr [edx + 0x50]
        cmp     esi, ebx
        mov     dword ptr [ebp - 0x50], esi
        jnz     l_mission_ok
        push    0x77ec8c
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      l_mission_ok
        int     3

l_mission_ok:
        mov     eax, dword ptr [esi + 0xa4]
        mov     esi, dword ptr [ebp + 0x8]
        mov     ecx, esi
        shl     ecx, 0x7
        add     ecx, esi
        shl     ecx, 0x3
        sub     ecx, esi
        mov     dword ptr [ebp - 0x14], ebx
        mov     dword ptr [ebp - 0xc], ebx
        mov     dword ptr [ebp - 0x3c], ebx
        mov     dword ptr [ebp - 0x20], ebx
        mov     dword ptr [ebp - 0x24], ebx
        mov     dword ptr [ebp - 0x28], ebx
        mov     dword ptr [ebp - 0x38], ebx
        mov     dword ptr [ebp - 0x40], ebx
        mov     dword ptr [ebp - 0x30], ebx
        mov     dword ptr [ebp - 0x2c], ebx
        mov     dword ptr [ebp - 0x10], ebx
        mov     dword ptr [ebp - 0x78], ebx
        mov     dword ptr [ebp - 0x70], ebx
        mov     dword ptr [ebp - 0x8], ebx
        lea     ebx, [edi + ecx*8]
        mov     dword ptr [ebp - 0x64], eax
        mov     eax, dword ptr [ebx + 0x3610]
        test    eax, eax
        mov     dword ptr [ebp - 0x4c], 0x0
        mov     dword ptr [ebp - 0x48], 0x0
        mov     dword ptr [ebp - 0x1c], 0x0
        mov     dword ptr [ebp - 0x18], 0x0
        mov     dword ptr [ebp - 0x60], 0x0
        mov     dword ptr [ebp - 0x5c], 0x0
        mov     dword ptr [ebp - 0x34], ebx
        mov     dword ptr [ebp - 0x80], eax
        push    0x100
        jnz     l_has_name
        mov     edx, dword ptr [ebx + 0x3588]
        push    edx
        lea     eax, [ebp - 0x480]
        push    eax
        jmp     l_name_done

l_has_name:
        mov     ecx, dword ptr [ebx + 0x3614]
        push    ecx
        lea     edx, [ebp - 0x480]
        push    edx

l_name_done:
        call    dword ptr [DAT_0076b3e8]
        mov     eax, dword ptr [ebx + 0x3584]
        mov     ecx, dword ptr [eax + 0x170]
        mov     edx, dword ptr [ecx + 0x5c]
        add     esp, 0xc
        push    0x5c
        push    edx
        call    dword ptr [DAT_0076b308]
        add     esp, 0x8
        test    eax, eax
        jz      l_no_substr
        inc     eax
        push    0x5c
        push    eax
        mov     dword ptr [ebp + 0x8], eax
        call    dword ptr [DAT_0076b308]
        mov     ecx, dword ptr [ebp + 0x8]
        add     esp, 0x8
        test    ecx, ecx
        jz      l_no_substr
        test    eax, eax
        jz      l_no_substr
        sub     eax, ecx
        test    eax, eax
        mov     dword ptr [ebp + 0x8], eax
        jle     l_no_substr
        cmp     eax, 0x1e
        jge     l_no_substr
        push    eax
        push    ecx
        lea     eax, [ebp - 0x280]
        push    eax
        call    dword ptr [DAT_0076b3e8]
        mov     ecx, dword ptr [ebp + 0x8]
        add     esp, 0xc
        mov     word ptr [ebp + ecx*2 - 0x280], 0x0
        jmp     l_substr_done

l_no_substr:
        mov     word ptr [ebp - 0x280], 0x0

l_substr_done:
        mov     edx, dword ptr [ebx + 0x3584]
        mov     eax, dword ptr [edx + 0x170]
        mov     dword ptr [ebp - 0x68], eax
        mov     eax, dword ptr [eax + 0x3b8]
        mov     dword ptr [ebp - 0x74], eax
        mov     eax, dword ptr [ebx + 0x35f4]
        test    eax, eax
        jnz     l_has_damage
        cmp     dword ptr [ebx + 0x35f8], 0xbff00000
        jz      l_zero_damage

l_has_damage:
        mov     eax, dword ptr [ebp - 0x44]
        mov     cl, byte ptr [eax + 0x2214]
        test    cl, cl
        jnz     l_has_weapon
        fld     dword ptr [DAT_0076c5b0]
        fsub    qword ptr [ebx + 0x35f4]
        fmul    qword ptr [DAT_0077eca8]
        fstp    qword ptr [ebp - 0x58]
        jmp     l_damage_done

l_has_weapon:
        lea     ecx, [eax + 0x21e8]
        call    FUN_006100a0
        fsub    qword ptr [ebx + 0x35f4]
        fmul    qword ptr [DAT_0077eca8]
        fstp    qword ptr [ebp - 0x58]
        jmp     l_damage_done

l_zero_damage:
        mov     dword ptr [ebp - 0x58], 0x0
        mov     dword ptr [ebp - 0x54], 0x0

l_damage_done:
        mov     ecx, dword ptr [ebp - 0x50]
        fld     qword ptr [ebp - 0x4c]
        mov     edx, dword ptr [ecx + 0xe4]
        fld     qword ptr [ebp - 0x1c]
        mov     eax, dword ptr [ebx + 0x3548]
        mov     dword ptr [ebp - 0x7c], edx
        lea     edx, [ebx + 0x43e8]
        mov     dword ptr [ebp - 0x6c], eax
        xor     ecx, ecx
        mov     dword ptr [ebp + 0x8], edx

l_inner_loop:
        mov     eax, dword ptr [ebp + 0x8]
        fld     dword ptr [eax]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      l_inner_next
        mov     edx, esi
        shl     edx, 0x7
        add     edx, esi
        shl     edx, 0x3
        sub     edx, esi
        shl     edx, 0x1
        lea     eax, [edx + ecx]
        fld     dword ptr [edi + eax*4 + 0x4844]
        fcomp   dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      l_inner_next
        lea     eax, [edx + ecx]
        cmp     dword ptr [edi + eax*4 + 0x4ca0], 0x0
        jnz     l_inner_next
        add     edx, ecx
        mov     eax, dword ptr [edi + edx*4 + 0x50fc]
        test    eax, eax
        jz      l_inner_cont

l_inner_next:
        mov     edx, dword ptr [ebp + 0x8]
        fld     dword ptr [edx]
        mov     ebx, dword ptr [ebp - 0x14]
        mov     eax, esi
        faddp   st(2), st(0)
        shl     eax, 0x7
        add     eax, esi
        shl     eax, 0x3
        sub     eax, esi
        shl     eax, 0x1
        lea     edx, [eax + ecx]
        fadd    dword ptr [edi + edx*4 + 0x4844]
        lea     edx, [edi + edx*4 + 0x4844]
        mov     dword ptr [ebp - 0x18], edx
        lea     edx, [eax + ecx]
        mov     edx, dword ptr [edi + edx*4 + 0x4ca0]
        add     ebx, edx
        add     eax, ecx
        mov     eax, dword ptr [edi + eax*4 + 0x50fc]
        mov     dword ptr [ebp - 0x14], ebx
        mov     ebx, dword ptr [ebp - 0xc]
        add     ebx, eax
        cmp     esi, ecx
        mov     dword ptr [ebp - 0xc], ebx
        jnz     l_skip_self
        mov     edx, dword ptr [ebp - 0x18]
        fld     dword ptr [edx]
        mov     dword ptr [ebp - 0x3c], eax
        fstp    qword ptr [ebp - 0x60]

l_skip_self:
        mov     ebx, dword ptr [ebp - 0x34]

l_inner_cont:
        mov     edx, dword ptr [ebp + 0x8]
        inc     ecx
        add     edx, 0x4
        cmp     ecx, 0x117
        mov     dword ptr [ebp + 0x8], edx
        jl      l_inner_loop

        mov     eax, dword ptr [ebp - 0x68]
        fstp    qword ptr [ebp - 0x1c]
        mov     cl, byte ptr [eax + 0x14]
        mov     byte ptr [ebp - 0x4], cl
        fstp    qword ptr [ebp - 0x4c]
        mov     dx, word ptr [eax + 0x16]
        mov     eax, dword ptr [ebp - 0x44]
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
        mov     dword ptr [ebp - 0x20], eax
        call    FUN_00622910
        mov     dword ptr [ebp - 0x24], eax
        lea     eax, [ebp - 0x4]
        push    eax
        push    0x2
        mov     ecx, esi
        call    FUN_00622910
        lea     ecx, [ebp - 0x4]
        push    ecx
        push    0x9
        mov     ecx, esi
        mov     dword ptr [ebp - 0x28], eax
        call    FUN_00622910
        mov     edx, dword ptr [ebp - 0x50]
        mov     dword ptr [ebp - 0x38], eax
        mov     eax, dword ptr [edx + 0xe4]
        test    eax, eax
        jz      l_skip_team_stats
        lea     eax, [ebp - 0x4]
        push    eax
        push    0x3
        mov     ecx, esi
        call    FUN_00622910
        lea     ecx, [ebp - 0x4]
        push    ecx
        push    0x34
        mov     ecx, esi
        mov     dword ptr [ebp - 0x40], eax
        call    FUN_00622910
        lea     edx, [ebp - 0x4]
        push    edx
        push    0x35
        mov     ecx, esi
        mov     dword ptr [ebp - 0x30], eax
        call    FUN_00622910
        mov     dword ptr [ebp - 0x2c], eax

l_skip_team_stats:
        fld     qword ptr [ebx + 0x35f4]
        fmul    qword ptr [DAT_0077ed38]
        call    _ftol
        mov     esi, dword ptr [ebx + 0x3600]
        mov     edi, eax
        sub     esi, dword ptr [ebx + 0x35fc]
        sar     esi, 0x2
        add     esi, edi
        test    esi, esi
        mov     dword ptr [ebp + 0x8], edi
        jle     l_skip_copy

        lea     eax, [esi*4]
        push    eax
        call    FUN_004084d0
        add     esp, 0x4
        test    edi, edi
        mov     edx, eax
        mov     dword ptr [ebp - 0x10], edx
        jle     l_copy_check
        mov     ecx, edi
        xor     eax, eax
        mov     edi, edx
        rep stosd
        mov     edi, dword ptr [ebp + 0x8]

l_copy_check:
        mov     eax, dword ptr [ebx + 0x35fc]
        cmp     eax, dword ptr [ebx + 0x3600]
        jz      l_skip_copy

        lea     ecx, [edx + edi*4]
l_copy_loop:
        mov     edx, dword ptr [eax]
        add     eax, 0x4
        mov     dword ptr [ecx], edx
        inc     edi
        add     ecx, 0x4
        cmp     edi, esi
        jge     l_skip_copy
        cmp     eax, dword ptr [ebx + 0x3600]
        jnz     l_copy_loop

l_skip_copy:
        mov     edx, dword ptr [ebp - 0x64]
        cmp     edx, 0x4
        jnz     l_not_team
        mov     eax, dword ptr [ebx + 0x3608]
        mov     ecx, dword ptr [ebx + 0x360c]
        jmp     l_team_done

l_not_team:
        mov     ecx, dword ptr [ebp - 0x70]
        mov     eax, dword ptr [ebp - 0x78]

l_team_done:
        mov     ebx, dword ptr [ebx + 0x3590]
        test    ebx, ebx
        jz      l_skip_string
        lea     edi, [ebx - 0x1]
        cmp     edi, 0x3
        ja      l_default_string
        jmp     dword ptr [edi*4 + 0x565618]

l_case_0:
        mov     dword ptr [ebp - 0x8], 0x77ed18
        jmp     l_skip_string

l_case_1:
        mov     dword ptr [ebp - 0x8], 0x77ecec
        jmp     l_skip_string

l_case_2:
        mov     dword ptr [ebp - 0x8], 0x77ecd4
        jmp     l_skip_string

l_case_3:
        mov     dword ptr [ebp - 0x8], 0x77ecb4
        jmp     l_skip_string

l_default_string:
        mov     dword ptr [ebp - 0x8], 0x77ecb0

l_skip_string:
        mov     edi, dword ptr [ebp - 0x8]
        push    edi
        push    ecx
        push    eax
        push    edx
        mov     eax, dword ptr [ebp + 0xc]
        mov     ecx, dword ptr [ebp - 0x10]
        mov     edx, dword ptr [ebp - 0x2c]
        and     eax, 0xff
        push    eax
        mov     eax, dword ptr [ebp - 0x30]
        push    esi
        push    ecx
        mov     ecx, dword ptr [ebp - 0x40]
        push    edx
        mov     edx, dword ptr [ebp - 0x38]
        push    eax
        mov     eax, dword ptr [ebp - 0x28]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x24]
        push    edx
        mov     edx, dword ptr [ebp - 0x20]
        push    eax
        mov     eax, dword ptr [ebp - 0x3c]
        push    ecx
        mov     ecx, dword ptr [ebp - 0xc]
        push    edx
        mov     edx, dword ptr [ebp - 0x14]
        push    eax
        mov     eax, dword ptr [ebp - 0x5c]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x60]
        push    edx
        mov     edx, dword ptr [ebp - 0x18]
        push    eax
        mov     eax, dword ptr [ebp - 0x1c]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x48]
        push    edx
        mov     edx, dword ptr [ebp - 0x4c]
        push    eax
        mov     eax, dword ptr [ebp - 0x6c]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x7c]
        push    edx
        mov     edx, dword ptr [ebp - 0x54]
        push    eax
        mov     eax, dword ptr [ebp - 0x58]
        push    ecx
        mov     ecx, dword ptr [ebp - 0x74]
        push    edx
        push    eax
        mov     eax, dword ptr [ebp - 0x80]
        push    ecx
        lea     edx, [ebp - 0x280]
        push    edx
        push    eax
        lea     ecx, [ebp - 0x480]
        push    ecx
        call    dword ptr [DAT_007eebe0]
        mov     edx, dword ptr [ebp - 0x10]
        push    edx
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
