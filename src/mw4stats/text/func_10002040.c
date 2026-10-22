/*
 * MW4StatsDll_writeBotStats (1003 B) - __stdcall (RET 0x68). SEH-guarded
 * bot-stats writer. Builds several string buffers, computes FPU-derived
 * stats, and accumulates them into a set of global counters.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_100058c0(void);
extern void __cdecl FUN_10001660(void);
extern void __cdecl FUN_10003250(void);
extern void __cdecl FUN_10001fe0(void);
extern void __cdecl FUN_10001a10(void);
extern void __cdecl FUN_1001ee10(void);
extern void __cdecl FUN_10001a60(void);
extern void __cdecl FUN_10005d50(void);
extern void __cdecl FUN_10001370(void);

extern double g_100211e0;   /* FPU const @ 0x100211e0 */
extern float  g_100211dc;   /* FPU const @ 0x100211dc */
extern float  g_100211d8;   /* FPU const @ 0x100211d8 */
extern double g_100211d0;   /* FPU const @ 0x100211d0 */

extern int g_10026e9c;
extern int g_10026e8c;
extern int g_10026e84;
extern int g_10026ed4;
extern int g_10026f74;
extern int g_10027048;
extern int g_10026f70;
extern int g_10026e7c;
extern int g_10026e70;
extern int g_10026e5c;
extern int g_10026e68;
extern int g_10026e80;
extern int g_10026e6c;
extern double g_10026e94;

__declspec(naked) void __cdecl MW4StatsDll_writeBotStats(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        push    -1
        push    0x1001f21b
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x4bc
        push    ebx
        push    esi
        push    edi
        lea     ecx, [esp + 0x14]
        call    FUN_100058c0
        mov     eax, dword ptr [ebp + 0x8]
        xor     ebx, ebx
        push    eax
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x4d4], ebx
        call    FUN_10001660
        push    0x1
        lea     ecx, [esp + 0xcc]
        call    FUN_10003250
        mov     ecx, dword ptr [ebp + 0xc]
        push    ecx
        lea     ecx, [esp + 0x23c]
        call    FUN_10001660
        mov     edx, dword ptr [ebp + 0x10]
        push    edx
        lea     ecx, [esp + 0x424]
        call    FUN_10001fe0
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [ebp + 0x18]
        mov     dword ptr [esp + 0x308], eax
        cmp     dword ptr [ebp + 0x1c], ebx
        mov     dword ptr [esp + 0x30c], ecx
        jz      L20dd
        mov     edx, dword ptr [ebp + 0x20]
        inc     edx
        push    edx
        lea     ecx, [esp + 0x350]
        call    FUN_10001a10
        jmp     L20ee
L20dd:
        push    0x100274e4
        lea     ecx, [esp + 0x350]
        call    FUN_10001660
L20ee:
        fld     qword ptr [ebp + 0x24]
        call    FUN_1001ee10
        fld     qword ptr [ebp + 0x2c]
        mov     dword ptr [esp + 0x2e4], eax
        call    FUN_1001ee10
        fld     qword ptr [ebp + 0x34]
        mov     dword ptr [esp + 0x2f0], eax
        call    FUN_1001ee10
        fld     qword ptr [ebp + 0x2c]
        fadd    qword ptr [ebp + 0x34]
        mov     dword ptr [esp + 0x2f4], eax
        fcom    qword ptr [g_100211e0]
        fnstsw ax
        test ah, 0x40
        jnz     L213a
        fld     qword ptr [ebp + 0x24]
        fdiv    st(0), st(1)
        fstp    qword ptr [esp + 0x2e8]
L213a:
        mov     eax, dword ptr [ebp + 0x3c]
        fstp    st(0)
        mov     ecx, dword ptr [ebp + 0x44]
        mov     dword ptr [esp + 0x2d0], eax
        mov     eax, dword ptr [ebp + 0x40]
        mov     dword ptr [esp + 0x2dc], eax
        add     eax, ecx
        cmp     eax, ebx
        mov     dword ptr [esp + 0x2e0], ecx
        mov     dword ptr [esp + 0x10], eax
        jz      L2172
        fild    dword ptr [ebp + 0x3c]
        fidiv   dword ptr [esp + 0x10]
        fstp    qword ptr [esp + 0x2d4]
L2172:
        mov     ecx, dword ptr [ebp + 0x48]
        mov     esi, dword ptr [ebp + 0x4c]
        mov     eax, dword ptr [ebp + 0x50]
        mov     edi, dword ptr [ebp + 0x54]
        mov     dword ptr [esp + 0x310], ecx
        cmp     dword ptr [ebp + 0x1c], ebx
        mov     dword ptr [esp + 0x2f8], esi
        mov     dword ptr [esp + 0x300], eax
        mov     dword ptr [esp + 0x348], edi
        jz      L21bd
        mov     edx, dword ptr [ebp + 0x58]
        mov     ecx, dword ptr [ebp + 0x5c]
        mov     dword ptr [esp + 0x3e8], edx
        mov     edx, dword ptr [ebp + 0x60]
        mov     dword ptr [esp + 0x4bc], ecx
        mov     dword ptr [esp + 0x3e4], edx
L21bd:
        mov     ecx, dword ptr [esp + 0x3e8]
        add     ecx, esi
        add     ecx, eax
        add     ecx, edi
        mov     dword ptr [esp + 0x10], ecx
        jz      L21eb
        fild    dword ptr [ebp + 0x50]
        fmul    dword ptr [g_100211dc]
        fidiv   dword ptr [esp + 0x10]
        call    FUN_1001ee10
        mov     dword ptr [esp + 0x2fc], eax
        jmp     L21f2
L21eb:
        mov     dword ptr [esp + 0x2fc], ebx
L21f2:
        fld     qword ptr [esp + 0x308]
        fcomp   qword ptr [g_100211e0]
        fnstsw ax
        test ah, 0x40
        jnz     L2224
        fild    dword ptr [ebp + 0x48]
        fmul    dword ptr [g_100211d8]
        fdiv    qword ptr [esp + 0x308]
        call    FUN_1001ee10
        mov     dword ptr [esp + 0x314], eax
        jmp     L222b
L2224:
        mov     dword ptr [esp + 0x314], ebx
L222b:
        lea     esi, [esi + edi*1 + 0x1]
        cmp     esi, ebx
        mov     dword ptr [esp + 0x10], esi
        jz      L2256
        fld     qword ptr [esp + 0x308]
        fmul    qword ptr [g_100211d0]
        fidiv   dword ptr [esp + 0x10]
        call    FUN_1001ee10
        mov     dword ptr [esp + 0x41c], eax
        jmp     L225d
L2256:
        mov     dword ptr [esp + 0x41c], ebx
L225d:
        mov     edi, dword ptr [ebp + 0x64]
        cmp     edi, ebx
        jz      L229d
        mov     ebx, dword ptr [ebp + 0x68]
        xor     esi, esi
        test    ebx, ebx
        mov     dword ptr [esp + 0x10], esi
        jle     L229b
L2271:
        fld     dword ptr [edi]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fild    dword ptr [esp + 0x20]
        lea     ecx, [esp + 0x328]
        fstp    qword ptr [esp]
        call    FUN_10001a60
        inc     esi
        add     edi, 0x4
        cmp     esi, ebx
        mov     dword ptr [esp + 0x10], esi
        jl      L2271
L229b:
        xor     ebx, ebx
L229d:
        cmp     dword ptr [ebp + 0x6c], ebx
        jz      L22b6
        mov     dword ptr [esp + 0x4b8], 0x1
        mov     dword ptr [esp + 0x304], ebx
        jmp     L22c8
L22b6:
        mov     dword ptr [esp + 0x4b8], ebx
        mov     dword ptr [esp + 0x304], 0x1
L22c8:
        mov     edx, dword ptr [esp + 0x310]
        mov     edi, dword ptr [g_10026e9c]
        mov     ecx, dword ptr [esp + 0x2f8]
        mov     eax, dword ptr [esp + 0x300]
        mov     esi, dword ptr [g_10026e8c]
        add     edi, edx
        mov     edx, dword ptr [g_10026e84]
        add     edx, ecx
        mov     ecx, dword ptr [g_10026ed4]
        add     esi, eax
        mov     eax, dword ptr [ebp + 0x1c]
        mov     dword ptr [g_10026e84], edx
        mov     edx, dword ptr [esp + 0x348]
        add     ecx, edx
        cmp     eax, ebx
        mov     dword ptr [g_10026e9c], edi
        mov     dword ptr [g_10026e8c], esi
        mov     dword ptr [g_10026ed4], ecx
        jz      L2360
        mov     edx, dword ptr [g_10026f74]
        mov     ecx, dword ptr [esp + 0x3e8]
        mov     eax, dword ptr [esp + 0x4bc]
        mov     esi, dword ptr [g_10027048]
        add     edx, ecx
        add     esi, eax
        mov     eax, dword ptr [g_10026f70]
        mov     dword ptr [g_10026f74], edx
        mov     edx, dword ptr [esp + 0x3e4]
        add     eax, edx
        mov     dword ptr [g_10027048], esi
        mov     dword ptr [g_10026f70], eax
L2360:
        mov     ecx, dword ptr [esp + 0x2f0]
        fld     qword ptr [esp + 0x308]
        mov     edx, dword ptr [g_10026e7c]
        fadd    qword ptr [g_10026e94]
        mov     eax, dword ptr [esp + 0x2e4]
        mov     esi, dword ptr [g_10026e70]
        mov     ebx, dword ptr [g_10026e5c]
        fstp    qword ptr [g_10026e94]
        mov     edi, dword ptr [g_10026e68]
        add     esi, eax
        mov     eax, dword ptr [g_10026e80]
        add     edx, ecx
        mov     ecx, dword ptr [esp + 0x2dc]
        mov     dword ptr [g_10026e7c], edx
        mov     edx, dword ptr [esp + 0x2f4]
        add     eax, edx
        mov     edx, dword ptr [esp + 0x2e0]
        mov     dword ptr [g_10026e80], eax
        mov     eax, dword ptr [esp + 0x2d0]
        mov     dword ptr [g_10026e70], esi
        mov     esi, dword ptr [g_10026e6c]
        add     ebx, eax
        add     edi, ecx
        lea     eax, [esp + 0x14]
        add     esi, edx
        push    eax
        mov     ecx, 0x10027080
        mov     dword ptr [g_10026e5c], ebx
        mov     dword ptr [g_10026e68], edi
        mov     dword ptr [g_10026e6c], esi
        call    FUN_10005d50
        lea     ecx, [esp + 0x14]
        mov     dword ptr [esp + 0x4d0], 0xffffffff
        call    FUN_10001370
        mov     ecx, dword ptr [esp + 0x4c8]
        pop     edi
        pop     esi
        xor     eax, eax
        mov     dword ptr fs:[0], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x68
    }
}
