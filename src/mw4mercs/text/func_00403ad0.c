/*
 * FUN_00403ad0 (977 B) — engine init: allocates a large set of global
 * string/pointer buffers via FUN_006f3c80(size, 0). __cdecl (RET).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b7e34;
extern int g_007b7e38;
extern int g_007b7ddc;
extern int g_007b7de0;
extern int g_007b7dec;
extern int g_007b7de8;
extern int g_007b7e14;
extern int g_007b7e18;
extern int g_007b7e1c;
extern int g_007b7e2c;
extern int g_007b7e7c;
extern int g_007b7e58;
extern int g_007b7e5c;
extern int g_007b7e60;
extern int g_007b7e64;
extern int g_007b7e68;
extern int g_007b7e6c;
extern int g_007b7e70;
extern int g_007b7e44;
extern int g_007b7e74;
extern int g_007b7e78;
extern int g_007b7e8c;
extern int g_007b7e88;
extern int g_007b7e84;
extern int g_007b7e90;
extern int g_007b7e98;
extern int g_007b7ea0;
extern int g_007b7e80;
extern int g_007b7e94;
extern int g_007b7e9c;
extern int g_007b7eac;
extern int g_007b7ea8;

extern void __cdecl FUN_00403eb0(void);
extern void *__cdecl FUN_006f3c80(void);

__declspec(naked) void FUN_00403ad0(void)
{
    __asm {
        push    ebx
        push    esi
        call    FUN_00403eb0
        xor     ebx, ebx
        push    ebx
        push    0x100
        call    FUN_006f3c80
        push    ebx
        push    0x100
        mov     dword ptr [g_007b7e34], eax
        mov     byte ptr [eax], bl
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_007b7e34]
        push    ebx
        push    0x50
        mov     dword ptr [g_007b7e38], eax
        mov     byte ptr [ecx], bl
        mov     byte ptr [eax], bl
        call    FUN_006f3c80
        mov     dword ptr [g_007b7ddc], eax
        xor     esi, esi
L_loop1:
        push    ebx
        push    0x100
        call    FUN_006f3c80
        mov     edx, dword ptr [g_007b7ddc]
        mov     dword ptr [esi+edx], eax
        add     esi, 0x4
        cmp     esi, 0x50
        mov     byte ptr [eax], bl
        jl      L_loop1
        push    ebx
        push    0x50
        call    FUN_006f3c80
        mov     dword ptr [g_007b7de0], eax
        xor     esi, esi
L_loop2:
        push    ebx
        push    0x100
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_007b7de0]
        mov     dword ptr [esi+ecx], eax
        add     esi, 0x4
        cmp     esi, 0x50
        mov     byte ptr [eax], bl
        jl      L_loop2
        push    ebx
        push    0x50
        call    FUN_006f3c80
        mov     dword ptr [g_007b7dec], eax
        xor     esi, esi
L_loop3:
        push    ebx
        push    0x100
        call    FUN_006f3c80
        mov     edx, dword ptr [g_007b7dec]
        mov     dword ptr [esi+edx], eax
        add     esi, 0x4
        cmp     esi, 0x50
        mov     byte ptr [eax], bl
        jl      L_loop3
        push    ebx
        push    0x50
        call    FUN_006f3c80
        mov     dword ptr [g_007b7de8], eax
        xor     esi, esi
L_loop4:
        push    ebx
        push    0x100
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_007b7de8]
        mov     dword ptr [esi+ecx], eax
        add     esi, 0x4
        cmp     esi, 0x50
        mov     byte ptr [eax], bl
        jl      L_loop4
        push    ebx
        push    0x50
        call    FUN_006f3c80
        mov     dword ptr [g_007b7e14], eax
        xor     esi, esi
L_loop5:
        push    ebx
        push    0x100
        call    FUN_006f3c80
        mov     edx, dword ptr [g_007b7e14]
        mov     dword ptr [esi+edx], eax
        add     esi, 0x4
        cmp     esi, 0x50
        mov     byte ptr [eax], bl
        jl      L_loop5
        push    ebx
        push    0x50
        call    FUN_006f3c80
        mov     dword ptr [g_007b7e18], eax
        xor     esi, esi
L_loop6:
        push    ebx
        push    0x100
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_007b7e18]
        mov     dword ptr [esi+ecx], eax
        add     esi, 0x4
        cmp     esi, 0x50
        mov     byte ptr [eax], bl
        jl      L_loop6
        push    ebx
        push    0x50
        call    FUN_006f3c80
        mov     dword ptr [g_007b7e1c], eax
        xor     esi, esi
L_loop7:
        push    ebx
        push    0x100
        call    FUN_006f3c80
        mov     edx, dword ptr [g_007b7e1c]
        mov     dword ptr [esi+edx], eax
        add     esi, 0x4
        cmp     esi, 0x50
        mov     byte ptr [eax], bl
        jl      L_loop7
        push    ebx
        push    0x50
        call    FUN_006f3c80
        mov     dword ptr [g_007b7e2c], eax
        xor     esi, esi
L_loop8:
        push    ebx
        push    0x100
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_007b7e2c]
        mov     dword ptr [esi+ecx], eax
        add     esi, 0x4
        cmp     esi, 0x50
        mov     byte ptr [eax], bl
        jl      L_loop8
        push    ebx
        push    0x50
        call    FUN_006f3c80
        mov     dword ptr [g_007b7e7c], eax
        xor     esi, esi
L_loop9:
        push    ebx
        push    0x100
        call    FUN_006f3c80
        mov     edx, dword ptr [g_007b7e7c]
        mov     dword ptr [esi+edx], eax
        add     esi, 0x4
        cmp     esi, 0x50
        mov     byte ptr [eax], bl
        jl      L_loop9
        push    ebx
        push    0x100
        call    FUN_006f3c80
        push    ebx
        push    0x100
        mov     dword ptr [g_007b7e58], eax
        mov     byte ptr [eax], bl
        call    FUN_006f3c80
        push    ebx
        push    0x100
        mov     dword ptr [g_007b7e5c], eax
        mov     byte ptr [eax], bl
        call    FUN_006f3c80
        push    ebx
        push    0x100
        mov     dword ptr [g_007b7e60], eax
        mov     byte ptr [eax], bl
        call    FUN_006f3c80
        push    ebx
        push    0x100
        mov     dword ptr [g_007b7e64], eax
        mov     byte ptr [eax], bl
        call    FUN_006f3c80
        push    ebx
        push    0x100
        mov     dword ptr [g_007b7e68], eax
        mov     byte ptr [eax], bl
        call    FUN_006f3c80
        push    ebx
        push    0x100
        mov     dword ptr [g_007b7e6c], eax
        mov     byte ptr [eax], bl
        call    FUN_006f3c80
        push    ebx
        push    0x100
        mov     dword ptr [g_007b7e70], eax
        mov     byte ptr [eax], bl
        call    FUN_006f3c80
        push    ebx
        push    0x100
        mov     dword ptr [g_007b7e44], eax
        mov     byte ptr [eax], bl
        call    FUN_006f3c80
        push    ebx
        push    0x100
        mov     dword ptr [g_007b7e74], eax
        mov     byte ptr [eax], bl
        call    FUN_006f3c80
        push    ebx
        push    0xc8
        mov     dword ptr [g_007b7e78], eax
        mov     byte ptr [eax], bl
        call    FUN_006f3c80
        push    ebx
        push    0xc8
        mov     dword ptr [g_007b7e8c], eax
        call    FUN_006f3c80
        push    ebx
        push    0xc8
        mov     dword ptr [g_007b7e88], eax
        call    FUN_006f3c80
        push    ebx
        push    0xc8
        mov     dword ptr [g_007b7e84], eax
        call    FUN_006f3c80
        mov     dword ptr [g_007b7e90], eax
        xor     esi, esi
L_loop_c8:
        push    ebx
        push    0x100
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_007b7e8c]
        push    ebx
        push    0x100
        mov     dword ptr [esi+ecx], eax
        mov     byte ptr [eax], bl
        call    FUN_006f3c80
        mov     edx, dword ptr [g_007b7e88]
        push    ebx
        push    0x100
        mov     dword ptr [esi+edx], eax
        mov     byte ptr [eax], bl
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_007b7e84]
        push    ebx
        push    0x100
        mov     dword ptr [esi+ecx], eax
        mov     byte ptr [eax], bl
        call    FUN_006f3c80
        mov     edx, dword ptr [g_007b7e90]
        mov     dword ptr [esi+edx], eax
        add     esi, 0x4
        cmp     esi, 0xc8
        mov     byte ptr [eax], bl
        jl      L_loop_c8
        push    ebx
        push    0x190
        call    FUN_006f3c80
        mov     dword ptr [g_007b7e98], eax
        xor     esi, esi
L_loop_190a:
        push    ebx
        push    0x20
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_007b7e98]
        mov     dword ptr [esi+ecx], eax
        add     esi, 0x4
        cmp     esi, 0x190
        mov     byte ptr [eax], bl
        jl      L_loop_190a
        push    ebx
        push    0x190
        call    FUN_006f3c80
        mov     dword ptr [g_007b7ea0], eax
        xor     esi, esi
L_loop_190b:
        push    ebx
        push    0x20
        call    FUN_006f3c80
        mov     edx, dword ptr [g_007b7ea0]
        mov     dword ptr [esi+edx], eax
        add     esi, 0x4
        cmp     esi, 0x190
        mov     byte ptr [eax], bl
        jl      L_loop_190b
        push    ebx
        push    0x190
        mov     dword ptr [g_007b7e80], ebx
        mov     dword ptr [g_007b7e94], ebx
        mov     dword ptr [g_007b7e9c], ebx
        call    FUN_006f3c80
        mov     dword ptr [g_007b7eac], eax
        xor     esi, esi
L_loop_190c:
        push    ebx
        push    0x100
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_007b7eac]
        mov     dword ptr [esi+ecx], eax
        add     esi, 0x4
        cmp     esi, 0x190
        mov     byte ptr [eax], bl
        jl      L_loop_190c
        pop     esi
        mov     dword ptr [g_007b7ea8], ebx
        pop     ebx
        ret
    }
}
