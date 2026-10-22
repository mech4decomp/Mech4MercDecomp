/*
 * FUN_00565e00 (1396 B) — Main stats dispatch / orchestrator.
 *
 * Calls FUN_00565af0, then iterates over unit data calling FUN_00565110,
 * FUN_00565630, and FUN_00564ca0 for each player/team, then assembles
 * results and calls the final dispatch function at [0x007eebe8].
 *
 * __stdcall (no params).
 * CFLAGS: /O1
 */

extern int __cdecl FUN_006fab90(const char *msg);
extern int __stdcall FUN_00565af0(void);
extern int __stdcall FUN_00565110(int param_1, char param_2);
extern int __stdcall FUN_00565630(int param_1, char param_2);
extern int __stdcall FUN_00564ca0(int param_1, char param_2);
extern char __stdcall FUN_00545660(int idx);
extern int __stdcall FUN_006234b0(void *ptr);
extern int __stdcall FUN_00622930(int param, int val);
extern void *__stdcall FUN_004cc9f0(void);
extern int __stdcall gethostname(char *buf, int len);

__declspec(naked) int __stdcall FUN_00565e00(void)
{
    

extern int DAT_007eebd4;
extern int DAT_007eebc0;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0076b3e8;
extern int DAT_0076b3e0;
extern int DAT_007eebe8;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0xb2c
        mov eax, dword ptr [DAT_007eebd4]
        push    ebx
        push    esi
        push    edi
        xor     edi, edi
        cmp     eax, edi
        jnz     l_global_ok
        pop     edi
        pop     esi
        mov     eax, 0x80004005
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

l_global_ok:
        cmp dword ptr [DAT_007eebc0], edi
        jnz     l_stats_ok
        pop     edi
        pop     esi
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

l_stats_ok:
        call    FUN_00565af0
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     esi, dword ptr [ecx + 0xc]
        xor     esi, 0x85739531
        mov     dword ptr [ebp - 0x14], esi
        jnz     l_xor_ok
        pop     edi
        pop     esi
        mov     eax, 0x80004005
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

l_xor_ok:
        mov     eax, dword ptr [esi + 0x50]
        cmp     eax, edi
        mov     dword ptr [ebp - 0x2c], eax
        jnz     l_mission_ok
        push    0x77ec8c
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      l_mission_ok
        int     3

l_mission_ok:
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x20]
        add     eax, 0x20
        xor     ecx, 0x85739531
        jnz     l_xor2_ok
        pop     edi
        pop     esi
        mov     eax, 0x80004005
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

l_xor2_ok:
        mov     ebx, dword ptr [eax]
        xor     ebx, 0x85739531
        or      eax, 0xffffffff
        mov     dword ptr [ebp - 0x18], eax
        mov     dword ptr [ebp - 0x10], eax
        mov     dword ptr [ebp - 0xc], eax
        lea     eax, [esi + 0x55bc]
        mov     dword ptr [ebp - 0x20], edi
        mov     dword ptr [ebp - 0x24], edi
        mov     dword ptr [ebp - 0x8], edi
        mov     dword ptr [ebp - 0x28], ebx
        mov     edi, 0x1
        mov     dword ptr [ebp - 0x1c], eax

l_loop1:
        mov     cl, byte ptr [eax - 0x4c]
        test    cl, cl
        jz      l_loop1_next
        mov     eax, dword ptr [eax]
        test    eax, eax
        jz      l_loop1_next
        mov     eax, dword ptr [eax + 0x170]
        test    eax, eax
        jz      l_loop1_next
        test    ebx, ebx
        mov     dl, byte ptr [eax + 0x14]
        mov     byte ptr [ebp - 0x4], dl
        mov     ax, word ptr [eax + 0x16]
        mov     word ptr [ebp - 0x2], ax
        jz      l_loop1_next
        mov     esi, dword ptr [ebx + 0x225c]
        test    esi, esi
        jz      l_loop1_next
        cmp     dword ptr [ebp - 0x18], -0x1
        jnz     l_loop1_cmp
        lea     ecx, [ebp - 0x4]
        mov     dword ptr [ebp - 0x18], edi
        push    ecx
        jmp     l_loop1_call

l_loop1_cmp:
        lea     edx, [ebp - 0x4]
        push    edx
        mov     ecx, esi
        call    FUN_006234b0
        cmp     dword ptr [ebp - 0x20], eax
        jge     l_loop1_next
        lea     eax, [ebp - 0x4]
        mov     dword ptr [ebp - 0x18], edi
        push    eax

l_loop1_call:
        mov     ecx, esi
        call    FUN_006234b0
        mov     dword ptr [ebp - 0x20], eax

l_loop1_next:
        mov     eax, dword ptr [ebp - 0x1c]
        inc     edi
        add     eax, 0x2038
        cmp     edi, 0xff
        mov     dword ptr [ebp - 0x1c], eax
        jl      l_loop1

        mov     ecx, dword ptr [ebp - 0x14]
        xor     edi, edi
        add     ecx, 0x205d30
        mov     dword ptr [ebp - 0x1c], ecx

l_loop2:
        mov     eax, dword ptr [ecx]
        test    eax, eax
        jz      l_loop2_next
        mov     dl, byte ptr [ecx + 0x204]
        test    dl, dl
        jz      l_loop2_next
        test    ebx, ebx
        mov     dl, byte ptr [eax + 0x14]
        mov     byte ptr [ebp - 0x4], dl
        mov     ax, word ptr [eax + 0x16]
        mov     word ptr [ebp - 0x2], ax
        jz      l_loop2_next
        mov     esi, dword ptr [ebx + 0x225c]
        test    esi, esi
        jz      l_loop2_next
        cmp     dword ptr [ebp - 0x10], -0x1
        jnz     l_loop2_cmp
        lea     ecx, [ebp - 0x4]
        mov     dword ptr [ebp - 0x10], edi
        push    ecx
        jmp     l_loop2_call

l_loop2_cmp:
        lea     edx, [ebp - 0x4]
        push    edx
        mov     ecx, esi
        call    FUN_006234b0
        cmp     dword ptr [ebp - 0x24], eax
        jge     l_loop2_next
        lea     eax, [ebp - 0x4]
        mov     dword ptr [ebp - 0x10], edi
        push    eax

l_loop2_call:
        mov     ecx, esi
        call    FUN_006234b0
        mov     dword ptr [ebp - 0x24], eax

l_loop2_next:
        mov     ecx, dword ptr [ebp - 0x1c]
        inc     edi
        add     ecx, 0x22ac
        cmp     edi, 0x18
        mov     dword ptr [ebp - 0x1c], ecx
        jl      l_loop2

        mov     eax, dword ptr [ebp - 0x2c]
        mov     ecx, dword ptr [eax + 0xe4]
        test    ecx, ecx
        jz      l_skip_team_loop
        cmp     dword ptr [eax + 0xa4], 0x4
        mov     dword ptr [ebp - 0x4], 0x2b
        jnz     l_team_type_ok
        mov     dword ptr [ebp - 0x4], 0x34

l_team_type_ok:
        xor     ebx, ebx
        or      edi, 0xffffffff

l_team_loop:
        mov     ecx, dword ptr [ebp - 0x14]
        push    ebx
        call    FUN_00545660
        test    al, al
        jz      l_team_next
        mov     eax, dword ptr [ebp - 0x28]
        test    eax, eax
        jz      l_team_next
        mov     ecx, eax
        mov     esi, dword ptr [ecx + 0x225c]
        test    esi, esi
        jz      l_team_next
        cmp     dword ptr [ebp - 0xc], -0x1
        jnz     l_team_cmp
        mov     edx, dword ptr [ebp - 0x4]
        push    edi
        mov     dword ptr [ebp - 0xc], ebx
        push    edx
        jmp     l_team_call

l_team_cmp:
        mov     eax, dword ptr [ebp - 0x4]
        push    edi
        push    eax
        mov     ecx, esi
        call    FUN_00622930
        cmp     dword ptr [ebp - 0x8], eax
        jge     l_team_next
        mov     ecx, dword ptr [ebp - 0x4]
        push    edi
        mov     dword ptr [ebp - 0xc], ebx
        push    ecx

l_team_call:
        mov     ecx, esi
        call    FUN_00622930
        mov     dword ptr [ebp - 0x8], eax

l_team_next:
        inc     ebx
        dec     edi
        cmp     edi, -0x9
        jg      l_team_loop

l_skip_team_loop:
        mov     edx, dword ptr [ebp - 0x18]
        xor     ecx, ecx
        or      eax, 0xffffffff
        cmp     edx, eax
        mov     edx, dword ptr [ebp - 0x10]
        mov     dword ptr [ebp - 0x8], ecx
        jz      l_check2
        cmp     edx, eax
        jz      l_check_done
        mov     eax, dword ptr [ebp - 0x20]
        mov     esi, dword ptr [ebp - 0x24]
        xor     edx, edx
        cmp     esi, eax
        setg    dl
        inc     edx
        mov     dword ptr [ebp - 0x8], edx
        jmp     l_check_done2

l_check2:
        cmp     edx, eax
        jz      l_check_done2
        mov     dword ptr [ebp - 0x8], 0x2
        jmp     l_check_done2

l_check_done:
        mov     dword ptr [ebp - 0x8], 0x1

l_check_done2:
        mov     edi, dword ptr [ebp - 0x2c]
        mov     dword ptr [ebp - 0x4], ecx
        mov     ecx, dword ptr [ebp - 0x14]
        lea     eax, [ecx + 0x55bc]
        mov     esi, 0x1
        mov     ebx, eax

l_dispatch_loop1:
        mov     al, byte ptr [ebx - 0x4c]
        test    al, al
        jz      l_dispatch_next1
        mov     eax, dword ptr [ebx]
        test    eax, eax
        jz      l_dispatch_next1
        mov     ecx, dword ptr [eax + 0x170]
        test    ecx, ecx
        jz      l_dispatch_next1
        mov     eax, dword ptr [edi + 0xe4]
        test    eax, eax
        jz      l_no_e4_1
        mov     edx, dword ptr [ebp - 0xc]
        cmp     dword ptr [ebx - 0x3c], edx
        jnz     l_push0_1
        push    0x1
        jmp     l_dispatch_call1

l_no_e4_1:
        cmp     dword ptr [ebp - 0x8], 0x1
        jnz     l_push0_1
        cmp     dword ptr [ebp - 0x18], esi
        jnz     l_push0_1
        push    0x1
        jmp     l_dispatch_call1

l_push0_1:
        push    0x0

l_dispatch_call1:
        push    esi
        call    FUN_00565110
        mov     eax, dword ptr [ebp - 0x4]
        add     esp, 0x8
        inc     eax
        mov     dword ptr [ebp - 0x4], eax

l_dispatch_next1:
        inc     esi
        add     ebx, 0x2038
        cmp     esi, 0xff
        jl      l_dispatch_loop1

        mov     eax, dword ptr [ebp - 0x14]
        xor     esi, esi
        lea     ebx, [eax + 0x205f34]

l_dispatch_loop2:
        mov     eax, dword ptr [ebx - 0x204]
        test    eax, eax
        jz      l_dispatch_next2
        cmp     byte ptr [ebx], 0x0
        jz      l_dispatch_next2
        mov     eax, dword ptr [edi + 0xe4]
        test    eax, eax
        jz      l_no_e4_2
        mov     ecx, dword ptr [ebp - 0xc]
        cmp     dword ptr [ebx + 0x4], ecx
        jnz     l_push0_2
        push    0x1
        jmp     l_dispatch_call2

l_no_e4_2:
        cmp     dword ptr [ebp - 0x8], 0x2
        jnz     l_push0_2
        cmp     dword ptr [ebp - 0x10], esi
        jnz     l_push0_2
        push    0x1
        jmp     l_dispatch_call2

l_push0_2:
        push    0x0

l_dispatch_call2:
        push    esi
        call    FUN_00565630
        mov     eax, dword ptr [ebp - 0x4]
        add     esp, 0x8
        inc     eax
        mov     dword ptr [ebp - 0x4], eax

l_dispatch_next2:
        inc     esi
        add     ebx, 0x22ac
        cmp     esi, 0x18
        jl      l_dispatch_loop2

        mov     eax, dword ptr [edi + 0xe4]
        test    eax, eax
        jz      l_skip_team_dispatch
        mov     ebx, dword ptr [ebp - 0xc]
        xor     esi, esi

l_team_dispatch_loop:
        mov     ecx, dword ptr [ebp - 0x14]
        push    esi
        call    FUN_00545660
        test    al, al
        jz      l_team_dispatch_next
        cmp     ebx, esi
        jnz     l_team_push0
        push    0x1
        jmp     l_team_dispatch_call

l_team_push0:
        push    0x0

l_team_dispatch_call:
        push    esi
        call    FUN_00564ca0
        add     esp, 0x8

l_team_dispatch_next:
        inc     esi
        cmp     esi, 0x8
        jl      l_team_dispatch_loop

l_skip_team_dispatch:
        push    0x100
        lea     edx, [ebp - 0x12c]
        push    edx
        call    gethostname
        test    eax, eax
        mov esi, dword ptr [DAT_0076b3e8]
        jnz     l_no_hostname
        push    0x100
        lea     eax, [ebp - 0x12c]
        push    eax
        lea     ecx, [ebp - 0x52c]
        push    ecx
        call    esi
        add     esp, 0xc
        xor     ebx, ebx
        jmp     l_hostname_done

l_no_hostname:
        xor     ebx, ebx
        mov     word ptr [ebp - 0x52c], bx

l_hostname_done:
        push    0x100
        lea     edx, [edi + 0x6f8]
        push    edx
        lea     eax, [ebp - 0xb2c]
        push    eax
        call    esi
        mov     eax, dword ptr [edi + 0xe4]
        add     esp, 0xc
        cmp     eax, ebx
        jz      l_no_e4_final
        mov     word ptr [ebp - 0x32c], bx
        jmp     l_final_string_done

l_no_e4_final:
        mov     eax, dword ptr [ebp - 0x8]
        dec     eax
        jz      l_case1
        dec     eax
        jz      l_case2
        mov     word ptr [ebp - 0x32c], bx
        jmp     l_final_string_done

l_case2:
        mov     eax, dword ptr [ebp - 0x10]
        mov     ecx, dword ptr [ebp - 0x14]
        imul    eax, eax, 0x22ac
        push    0x100
        lea     edx, [eax + ecx + 0x205d34]
        jmp     l_final_push

l_case1:
        mov     eax, dword ptr [ebp - 0x18]
        mov     edx, dword ptr [ebp - 0x14]
        mov     ecx, eax
        shl     ecx, 0x7
        add     ecx, eax
        shl     ecx, 0x3
        sub     ecx, eax
        lea     eax, [edx + ecx*8]
        cmp     dword ptr [eax + 0x3610], ebx
        push    0x100
        jnz     l_has_name1
        mov     eax, dword ptr [eax + 0x3588]
        push    eax
        lea     ecx, [ebp - 0x32c]
        push    ecx
        jmp     l_final_call

l_has_name1:
        mov     edx, dword ptr [eax + 0x3614]

l_final_push:
        push    edx
        lea     eax, [ebp - 0x32c]
        push    eax

l_final_call:
        call    esi
        add     esp, 0xc

l_final_string_done:
        mov ecx, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [ecx]
        xor     eax, edx
        mov     edx, dword ptr [eax + 0x14]
        xor     edx, 0x85739531
        jz      l_no_host
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004cc9f0
        test    eax, eax
        jz      l_no_host
        mov eax, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [eax]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x14]
        push    0x100
        xor     ecx, 0x85739531
        call    FUN_004cc9f0
        push    eax
        lea     ecx, [ebp - 0x72c]
        push    ecx
        call    esi
        add     esp, 0xc
        jmp     l_host_done

l_no_host:
        lea     edx, [ebp - 0x72c]
        push    0x77ec40
        push    edx
        call dword ptr [DAT_0076b3e0]
        add     esp, 0x8

l_host_done:
        push    0x100
        lea     eax, [ebp - 0x92c]
        push    0x773040
        push    eax
        call    esi
        add     esp, 0xc
        lea     ecx, [ebp - 0x92c]
        push    ecx
        mov     ecx, dword ptr [ebp - 0xc]
        lea     edx, [ebp - 0x72c]
        push    edx
        mov     edx, dword ptr [edi + 0xe4]
        lea     eax, [ebp - 0x32c]
        push    eax
        push    ecx
        mov     ecx, dword ptr [edi + 0x36c]
        push    edx
        mov     edx, dword ptr [edi + 0x68]
        lea     eax, [ebp - 0xb2c]
        push    eax
        push    ecx
        mov     ecx, dword ptr [edi + 0x50]
        push    edx
        mov     edx, dword ptr [edi + 0x94]
        lea     eax, [ebp - 0x52c]
        push    eax
        mov     eax, dword ptr [edi + 0x84]
        push    ecx
        mov     ecx, dword ptr [edi + 0x4c]
        push    edx
        mov     edx, dword ptr [edi + 0x48]
        push    eax
        mov     eax, dword ptr [edi + 0x3c]
        push    ecx
        mov     ecx, dword ptr [edi + 0x38]
        push    edx
        mov     edx, dword ptr [edi + 0x80]
        push    eax
        mov     eax, dword ptr [ebp - 0x4]
        push    ecx
        mov     ecx, dword ptr [edi + 0x2c]
        push    edx
        mov     edx, dword ptr [edi + 0x34]
        push    eax
        mov     eax, dword ptr [edi + 0x30]
        push    ecx
        mov     ecx, dword ptr [edi + 0x44]
        push    edx
        mov     edx, dword ptr [edi + 0x60]
        push    eax
        push    ecx
        push    edx
        call dword ptr [DAT_007eebe8]
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
