/*
 * FUN_00403eb0 (1312 B) — engine teardown: frees the global buffer set
 * allocated by FUN_00403ad0 via FUN_006f4230. __cdecl (RET).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_0082e238;
extern int g_007b21b0;
extern int g_007b7dc8;
extern int g_007b7dcc;
extern int g_007b7dd0;
extern int g_007b7dd4;
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
extern int g_007b7e74;
extern int g_007b7e78;
extern int g_007b7e44;
extern int g_007b7e84;
extern int g_007b7e88;
extern int g_007b7e8c;
extern int g_007b7e90;
extern int g_007b7e98;
extern int g_007b7ea0;
extern int g_007b7eac;

extern void __cdecl FUN_006b48e0(void);
extern void __cdecl FUN_006f4230(void);

__declspec(naked) void FUN_00403eb0(void)
{
    __asm {
        mov     al, byte ptr [g_0082e238]
        push    ebx
        xor     ebx, ebx
        cmp     al, bl
        push    esi
        jz      L_skip1
        mov     eax, dword ptr [g_007b21b0]
        push    eax
        call    FUN_006b48e0
L_skip1:
        mov     eax, dword ptr [g_007b7dc8]
        cmp     eax, ebx
        jz      L_skip2
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_007b7dc8], ebx
L_skip2:
        mov     eax, dword ptr [g_007b7dcc]
        cmp     eax, ebx
        jz      L_skip3
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_007b7dcc], ebx
L_skip3:
        mov     eax, dword ptr [g_007b7dd0]
        cmp     eax, ebx
        jz      L_skip4
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_007b7dd0], ebx
L_skip4:
        mov     eax, dword ptr [g_007b7dd4]
        cmp     eax, ebx
        jz      L_skip5
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_007b7dd4], ebx
L_skip5:
        mov     eax, dword ptr [g_007b7e34]
        cmp     eax, ebx
        jz      L_skip6
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_007b7e34], ebx
L_skip6:
        mov     eax, dword ptr [g_007b7e38]
        cmp     eax, ebx
        jz      L_skip7
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_007b7e38], ebx
L_skip7:
        mov     ecx, dword ptr [g_007b7ddc]
        cmp     ecx, ebx
        jz      L_next1
        xor     esi, esi
L_loop1:
        mov     eax, dword ptr [esi+ecx]
        cmp     eax, ebx
        jz      L_skip1a
        push    eax
        call    FUN_006f4230
        mov     ecx, dword ptr [g_007b7ddc]
        mov     dword ptr [esi+ecx], ebx
L_skip1a:
        add     esi, 0x4
        cmp     esi, 0x50
        jl      L_loop1
        cmp     ecx, ebx
        jz      L_next1
        push    ecx
        call    FUN_006f4230
        mov     dword ptr [g_007b7ddc], ebx
L_next1:
        mov     ecx, dword ptr [g_007b7de0]
        cmp     ecx, ebx
        jz      L_next2
        xor     esi, esi
L_loop2:
        mov     eax, dword ptr [esi+ecx]
        cmp     eax, ebx
        jz      L_skip2a
        push    eax
        call    FUN_006f4230
        mov     ecx, dword ptr [g_007b7de0]
        mov     dword ptr [esi+ecx], ebx
L_skip2a:
        add     esi, 0x4
        cmp     esi, 0x50
        jl      L_loop2
        cmp     ecx, ebx
        jz      L_next2
        push    ecx
        call    FUN_006f4230
        mov     dword ptr [g_007b7de0], ebx
L_next2:
        mov     ecx, dword ptr [g_007b7dec]
        cmp     ecx, ebx
        jz      L_next3
        xor     esi, esi
L_loop3:
        mov     eax, dword ptr [esi+ecx]
        cmp     eax, ebx
        jz      L_skip3a
        push    eax
        call    FUN_006f4230
        mov     ecx, dword ptr [g_007b7dec]
        mov     dword ptr [esi+ecx], ebx
L_skip3a:
        add     esi, 0x4
        cmp     esi, 0x50
        jl      L_loop3
        cmp     ecx, ebx
        jz      L_next3
        push    ecx
        call    FUN_006f4230
        mov     dword ptr [g_007b7dec], ebx
L_next3:
        mov     ecx, dword ptr [g_007b7de8]
        cmp     ecx, ebx
        jz      L_next4
        xor     esi, esi
L_loop4:
        mov     eax, dword ptr [esi+ecx]
        cmp     eax, ebx
        jz      L_skip4a
        push    eax
        call    FUN_006f4230
        mov     ecx, dword ptr [g_007b7de8]
        mov     dword ptr [esi+ecx], ebx
L_skip4a:
        add     esi, 0x4
        cmp     esi, 0x50
        jl      L_loop4
        cmp     ecx, ebx
        jz      L_next4
        push    ecx
        call    FUN_006f4230
        mov     dword ptr [g_007b7de8], ebx
L_next4:
        mov     ecx, dword ptr [g_007b7e14]
        cmp     ecx, ebx
        jz      L_next5
        xor     esi, esi
L_loop5:
        mov     eax, dword ptr [esi+ecx]
        cmp     eax, ebx
        jz      L_skip5a
        push    eax
        call    FUN_006f4230
        mov     ecx, dword ptr [g_007b7e14]
        mov     dword ptr [esi+ecx], ebx
L_skip5a:
        add     esi, 0x4
        cmp     esi, 0x50
        jl      L_loop5
        cmp     ecx, ebx
        jz      L_next5
        push    ecx
        call    FUN_006f4230
        mov     dword ptr [g_007b7e14], ebx
L_next5:
        mov     ecx, dword ptr [g_007b7e18]
        cmp     ecx, ebx
        jz      L_next6
        xor     esi, esi
L_loop6:
        mov     eax, dword ptr [esi+ecx]
        cmp     eax, ebx
        jz      L_skip6a
        push    eax
        call    FUN_006f4230
        mov     ecx, dword ptr [g_007b7e18]
        mov     dword ptr [esi+ecx], ebx
L_skip6a:
        add     esi, 0x4
        cmp     esi, 0x50
        jl      L_loop6
        cmp     ecx, ebx
        jz      L_next6
        push    ecx
        call    FUN_006f4230
        mov     dword ptr [g_007b7e18], ebx
L_next6:
        mov     ecx, dword ptr [g_007b7e1c]
        cmp     ecx, ebx
        jz      L_next7
        xor     esi, esi
L_loop7:
        mov     eax, dword ptr [esi+ecx]
        cmp     eax, ebx
        jz      L_skip7a
        push    eax
        call    FUN_006f4230
        mov     ecx, dword ptr [g_007b7e1c]
        mov     dword ptr [esi+ecx], ebx
L_skip7a:
        add     esi, 0x4
        cmp     esi, 0x50
        jl      L_loop7
        cmp     ecx, ebx
        jz      L_next7
        push    ecx
        call    FUN_006f4230
        mov     dword ptr [g_007b7e1c], ebx
L_next7:
        mov     ecx, dword ptr [g_007b7e2c]
        cmp     ecx, ebx
        jz      L_next8
        xor     esi, esi
L_loop8:
        mov     eax, dword ptr [esi+ecx]
        cmp     eax, ebx
        jz      L_skip8a
        push    eax
        call    FUN_006f4230
        mov     ecx, dword ptr [g_007b7e2c]
        mov     dword ptr [esi+ecx], ebx
L_skip8a:
        add     esi, 0x4
        cmp     esi, 0x50
        jl      L_loop8
        cmp     ecx, ebx
        jz      L_next8
        push    ecx
        call    FUN_006f4230
        mov     dword ptr [g_007b7e2c], ebx
L_next8:
        mov     ecx, dword ptr [g_007b7e7c]
        cmp     ecx, ebx
        jz      L_next9
        xor     esi, esi
L_loop9:
        mov     eax, dword ptr [esi+ecx]
        cmp     eax, ebx
        jz      L_skip9a
        push    eax
        call    FUN_006f4230
        mov     ecx, dword ptr [g_007b7e7c]
        mov     dword ptr [esi+ecx], ebx
L_skip9a:
        add     esi, 0x4
        cmp     esi, 0x50
        jl      L_loop9
        cmp     ecx, ebx
        jz      L_next9
        push    ecx
        call    FUN_006f4230
        mov     dword ptr [g_007b7e7c], ebx
L_next9:
        mov     eax, dword ptr [g_007b7e58]
        cmp     eax, ebx
        jz      L_skip10
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_007b7e58], ebx
L_skip10:
        mov     eax, dword ptr [g_007b7e5c]
        cmp     eax, ebx
        jz      L_skip11
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_007b7e5c], ebx
L_skip11:
        mov     eax, dword ptr [g_007b7e60]
        cmp     eax, ebx
        jz      L_skip12
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_007b7e60], ebx
L_skip12:
        mov     eax, dword ptr [g_007b7e64]
        cmp     eax, ebx
        jz      L_skip13
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_007b7e64], ebx
L_skip13:
        mov     eax, dword ptr [g_007b7e68]
        cmp     eax, ebx
        jz      L_skip14
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_007b7e68], ebx
L_skip14:
        mov     eax, dword ptr [g_007b7e6c]
        cmp     eax, ebx
        jz      L_skip15
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_007b7e6c], ebx
L_skip15:
        mov     eax, dword ptr [g_007b7e70]
        cmp     eax, ebx
        jz      L_skip16
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_007b7e70], ebx
L_skip16:
        mov     eax, dword ptr [g_007b7e74]
        cmp     eax, ebx
        jz      L_skip17
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_007b7e74], ebx
L_skip17:
        mov     eax, dword ptr [g_007b7e78]
        cmp     eax, ebx
        jz      L_skip18
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_007b7e78], ebx
L_skip18:
        mov     eax, dword ptr [g_007b7e44]
        cmp     eax, ebx
        jz      L_skip19
        push    eax
        call    FUN_006f4230
        mov     dword ptr [g_007b7e44], ebx
L_skip19:
        mov     ecx, dword ptr [g_007b7e84]
        cmp     ecx, ebx
        jz      L_nextA
        xor     esi, esi
L_loopA:
        mov     eax, dword ptr [esi+ecx]
        cmp     eax, ebx
        jz      L_skipAa
        push    eax
        call    FUN_006f4230
        mov     ecx, dword ptr [g_007b7e84]
        mov     dword ptr [esi+ecx], ebx
L_skipAa:
        add     esi, 0x4
        cmp     esi, 0xc8
        jl      L_loopA
        cmp     ecx, ebx
        jz      L_nextA
        push    ecx
        call    FUN_006f4230
        mov     dword ptr [g_007b7e84], ebx
L_nextA:
        mov     ecx, dword ptr [g_007b7e88]
        cmp     ecx, ebx
        jz      L_nextB
        xor     esi, esi
L_loopB:
        mov     eax, dword ptr [esi+ecx]
        cmp     eax, ebx
        jz      L_skipBa
        push    eax
        call    FUN_006f4230
        mov     ecx, dword ptr [g_007b7e88]
        mov     dword ptr [esi+ecx], ebx
L_skipBa:
        add     esi, 0x4
        cmp     esi, 0xc8
        jl      L_loopB
        cmp     ecx, ebx
        jz      L_nextB
        push    ecx
        call    FUN_006f4230
        mov     dword ptr [g_007b7e88], ebx
L_nextB:
        mov     ecx, dword ptr [g_007b7e8c]
        cmp     ecx, ebx
        jz      L_nextC
        xor     esi, esi
L_loopC:
        mov     eax, dword ptr [ecx+esi]
        cmp     eax, ebx
        jz      L_skipCa
        push    eax
        call    FUN_006f4230
        mov     ecx, dword ptr [g_007b7e8c]
        mov     dword ptr [ecx+esi], ebx
L_skipCa:
        add     esi, 0x4
        cmp     esi, 0xc8
        jl      L_loopC
        cmp     ecx, ebx
        jz      L_nextC
        push    ecx
        call    FUN_006f4230
        mov     dword ptr [g_007b7e8c], ebx
L_nextC:
        mov     ecx, dword ptr [g_007b7e90]
        cmp     ecx, ebx
        jz      L_nextD
        xor     esi, esi
L_loopD:
        mov     eax, dword ptr [ecx+esi]
        cmp     eax, ebx
        jz      L_skipDa
        push    eax
        call    FUN_006f4230
        mov     ecx, dword ptr [g_007b7e90]
        mov     dword ptr [ecx+esi], ebx
L_skipDa:
        add     esi, 0x4
        cmp     esi, 0xc8
        jl      L_loopD
        cmp     ecx, ebx
        jz      L_nextD
        push    ecx
        call    FUN_006f4230
        mov     dword ptr [g_007b7e90], ebx
L_nextD:
        mov     ecx, dword ptr [g_007b7e98]
        cmp     ecx, ebx
        jz      L_nextE
        xor     esi, esi
L_loopE:
        mov     eax, dword ptr [esi+ecx]
        cmp     eax, ebx
        jz      L_skipEa
        push    eax
        call    FUN_006f4230
        mov     ecx, dword ptr [g_007b7e98]
        mov     dword ptr [esi+ecx], ebx
L_skipEa:
        add     esi, 0x4
        cmp     esi, 0x190
        jl      L_loopE
        cmp     ecx, ebx
        jz      L_nextE
        push    ecx
        call    FUN_006f4230
        mov     dword ptr [g_007b7e98], ebx
L_nextE:
        mov     ecx, dword ptr [g_007b7ea0]
        cmp     ecx, ebx
        jz      L_nextF
        xor     esi, esi
L_loopF:
        mov     eax, dword ptr [ecx+esi]
        cmp     eax, ebx
        jz      L_skipFa
        push    eax
        call    FUN_006f4230
        mov     ecx, dword ptr [g_007b7ea0]
        mov     dword ptr [ecx+esi], ebx
L_skipFa:
        add     esi, 0x4
        cmp     esi, 0x190
        jl      L_loopF
        cmp     ecx, ebx
        jz      L_nextF
        push    ecx
        call    FUN_006f4230
        mov     dword ptr [g_007b7ea0], ebx
L_nextF:
        mov     ecx, dword ptr [g_007b7eac]
        cmp     ecx, ebx
        jz      L_nextG
        xor     esi, esi
L_loopG:
        mov     eax, dword ptr [esi+ecx]
        cmp     eax, ebx
        jz      L_skipGa
        push    eax
        call    FUN_006f4230
        mov     ecx, dword ptr [g_007b7eac]
        mov     dword ptr [esi+ecx], ebx
L_skipGa:
        add     esi, 0x4
        cmp     esi, 0x190
        jl      L_loopG
        cmp     ecx, ebx
        jz      L_nextG
        push    ecx
        call    FUN_006f4230
        mov     dword ptr [g_007b7eac], ebx
L_nextG:
        pop     esi
        pop     ebx
        ret
    }
}
