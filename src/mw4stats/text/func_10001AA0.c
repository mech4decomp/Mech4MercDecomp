/*
 * MW4StatsDll_writePlayerStats (1341 B) - __stdcall RET 0x7c.
 * Aggregates player stats into global accumulators and a stats object.
 * SEH frame (handler at 0x1001f1fb), EBP frame + AND ESP,-8.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_100058c0(void);
extern void __cdecl FUN_10001660(void);
extern void __cdecl FUN_10003250(void);
extern void __cdecl FUN_10001fe0(void);
extern void __cdecl FUN_10001a10(void);
extern void __cdecl FUN_10001a60(void);
extern void __cdecl FUN_10003290(void);
extern void __cdecl FUN_10005d50(void);
extern void __cdecl FUN_10001370(void);
extern void __cdecl FUN_1001ee10(void);

extern void *g_100210f4;   /* wcslen */

extern double g_100211e0;
extern float  g_100211dc;
extern float  g_100211d8;
extern double g_100211d0;

extern double g_10026e94;

extern int g_10026e9c;
extern int g_10026e8c;
extern int g_10026ed4;
extern int g_10026e84;
extern int g_10027048;
extern int g_10026f74;
extern int g_10026f70;
extern int g_10026e70;
extern int g_10026e80;
extern int g_10026e7c;
extern int g_10026e5c;
extern int g_10026e68;
extern int g_10026e6c;
extern int g_10027050;
extern int g_1002704c;

__declspec(naked) unsigned long __cdecl FUN_10001aa0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        push    -1
        push    0x1001f1fb
        mov     eax, fs:[0]
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
        mov     eax, dword ptr [ebp + 0xc]
        cmp     eax, ebx
        jnz     L_1aee
        push    3
        jmp     L_1afd
L_1aee:
        push    eax
        lea     ecx, [esp + 0xdc]
        call    FUN_10001660
        push    4
L_1afd:
        lea     ecx, [esp + 0xcc]
        call    FUN_10003250
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        lea     ecx, [esp + 0x23c]
        call    FUN_10001660
        mov     edx, dword ptr [ebp + 0x14]
        push    edx
        lea     ecx, [esp + 0x424]
        call    FUN_10001fe0
        mov     eax, dword ptr [ebp + 0x18]
        mov     ecx, dword ptr [ebp + 0x1c]
        mov     dword ptr [esp + 0x308], eax
        cmp     dword ptr [ebp + 0x20], ebx
        mov     dword ptr [esp + 0x30c], ecx
        jz      L_1b55
        mov     edx, dword ptr [ebp + 0x24]
        inc     edx
        push    edx
        lea     ecx, [esp + 0x350]
        call    FUN_10001a10
        jmp     L_1b66
L_1b55:
        push    0x100274e0
        lea     ecx, [esp + 0x350]
        call    FUN_10001660
L_1b66:
        fld     qword ptr [ebp + 0x28]
        call    FUN_1001ee10
        fld     qword ptr [ebp + 0x30]
        mov     dword ptr [esp + 0x2e4], eax
        call    FUN_1001ee10
        fld     qword ptr [ebp + 0x38]
        mov     dword ptr [esp + 0x2f0], eax
        call    FUN_1001ee10
        fld     qword ptr [ebp + 0x30]
        fadd    qword ptr [ebp + 0x38]
        mov     dword ptr [esp + 0x2f4], eax
        fcom    qword ptr [g_100211e0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_1bb2
        fld     qword ptr [ebp + 0x28]
        fdiv    st(0), st(1)
        fstp    qword ptr [esp + 0x2e8]
L_1bb2:
        mov     eax, dword ptr [ebp + 0x40]
        fstp    st(0)
        mov     ecx, dword ptr [ebp + 0x48]
        mov     dword ptr [esp + 0x2d0], eax
        mov     eax, dword ptr [ebp + 0x44]
        mov     dword ptr [esp + 0x2dc], eax
        add     eax, ecx
        cmp     eax, ebx
        mov     dword ptr [esp + 0x2e0], ecx
        mov     dword ptr [esp + 0x10], eax
        jz      L_1bea
        fild    dword ptr [ebp + 0x40]
        fidiv   dword ptr [esp + 0x10]
        fstp    qword ptr [esp + 0x2d4]
L_1bea:
        mov     ecx, dword ptr [ebp + 0x4c]
        mov     esi, dword ptr [ebp + 0x50]
        mov     eax, dword ptr [ebp + 0x54]
        mov     edi, dword ptr [ebp + 0x58]
        mov     dword ptr [esp + 0x310], ecx
        cmp     dword ptr [ebp + 0x20], ebx
        mov     dword ptr [esp + 0x2f8], esi
        mov     dword ptr [esp + 0x300], eax
        mov     dword ptr [esp + 0x348], edi
        jz      L_1c35
        mov     edx, dword ptr [ebp + 0x5c]
        mov     ecx, dword ptr [ebp + 0x60]
        mov     dword ptr [esp + 0x3e8], edx
        mov     edx, dword ptr [ebp + 0x64]
        mov     dword ptr [esp + 0x4bc], ecx
        mov     dword ptr [esp + 0x3e4], edx
L_1c35:
        mov     ecx, dword ptr [esp + 0x3e8]
        add     ecx, esi
        add     ecx, eax
        add     ecx, edi
        mov     dword ptr [esp + 0x10], ecx
        jz      L_1c63
        fild    dword ptr [ebp + 0x54]
        fmul    dword ptr [g_100211dc]
        fidiv   dword ptr [esp + 0x10]
        call    FUN_1001ee10
        mov     dword ptr [esp + 0x2fc], eax
        jmp     L_1c6a
L_1c63:
        mov     dword ptr [esp + 0x2fc], ebx
L_1c6a:
        fld     qword ptr [esp + 0x308]
        fcomp   qword ptr [g_100211e0]
        fnstsw  ax
        test    ah, 0x40
        jnz     L_1c9c
        fild    dword ptr [ebp + 0x4c]
        fmul    dword ptr [g_100211d8]
        fdiv    qword ptr [esp + 0x308]
        call    FUN_1001ee10
        mov     dword ptr [esp + 0x314], eax
        jmp     L_1ca3
L_1c9c:
        mov     dword ptr [esp + 0x314], ebx
L_1ca3:
        lea     esi, [esi + edi*1 + 1]
        cmp     esi, ebx
        mov     dword ptr [esp + 0x10], esi
        jz      L_1cce
        fld     qword ptr [esp + 0x308]
        fmul    qword ptr [g_100211d0]
        fidiv   dword ptr [esp + 0x10]
        call    FUN_1001ee10
        mov     dword ptr [esp + 0x41c], eax
        jmp     L_1cd5
L_1cce:
        mov     dword ptr [esp + 0x41c], ebx
L_1cd5:
        mov     edi, dword ptr [ebp + 0x68]
        cmp     edi, ebx
        jz      L_1d15
        mov     ebx, dword ptr [ebp + 0x6c]
        xor     esi, esi
        test    ebx, ebx
        mov     dword ptr [esp + 0x10], esi
        jle     L_1d13
L_1ce9:
        fld     dword ptr [edi]
        sub     esp, 8
        fstp    qword ptr [esp]
        sub     esp, 8
        fild    dword ptr [esp + 0x20]
        lea     ecx, [esp + 0x328]
        fstp    qword ptr [esp]
        call    FUN_10001a60
        inc     esi
        add     edi, 4
        cmp     esi, ebx
        mov     dword ptr [esp + 0x10], esi
        jl      L_1ce9
L_1d13:
        xor     ebx, ebx
L_1d15:
        cmp     dword ptr [ebp + 0x70], ebx
        jz      L_1d2e
        mov     dword ptr [esp + 0x4b8], 1
        mov     dword ptr [esp + 0x304], ebx
        jmp     L_1d40
L_1d2e:
        mov     dword ptr [esp + 0x4b8], ebx
        mov     dword ptr [esp + 0x304], 1
L_1d40:
        mov     edi, dword ptr [ebp + 0x74]
        cmp     edi, 4
        jnz     L_1d5c
        mov     edx, dword ptr [ebp + 0x78]
        mov     eax, dword ptr [ebp + 0x7c]
        mov     dword ptr [esp + 0x4c4], edx
        mov     dword ptr [esp + 0x4c0], eax
L_1d5c:
        mov     esi, dword ptr [ebp + 0x80]
        cmp     esi, ebx
        jz      L_1e4b
        push    esi
        call    dword ptr [g_100210f4]
        add     esp, 4
        test    eax, eax
        jbe     L_1e4b
        push    esi
        lea     ecx, [esp + 0x174]
        call    FUN_10003290
        mov     ecx, dword ptr [esp + 0x2f8]
        mov     dword ptr [eax + 4], ecx
        push    esi
        lea     ecx, [esp + 0x174]
        call    FUN_10003290
        mov     edx, dword ptr [esp + 0x300]
        push    esi
        lea     ecx, [esp + 0x174]
        mov     dword ptr [eax + 8], edx
        call    FUN_10003290
        mov     ecx, dword ptr [esp + 0x310]
        mov     dword ptr [eax + 0x10], ecx
        push    esi
        lea     ecx, [esp + 0x174]
        call    FUN_10003290
        mov     edx, dword ptr [esp + 0x4bc]
        push    esi
        lea     ecx, [esp + 0x174]
        mov     dword ptr [eax + 0x14], edx
        call    FUN_10003290
        mov     ecx, dword ptr [esp + 0x4b8]
        mov     dword ptr [eax + 0x18], ecx
        push    esi
        lea     ecx, [esp + 0x174]
        call    FUN_10003290
        cmp     dword ptr [eax + 4], ebx
        push    esi
        lea     ecx, [esp + 0x174]
        jz      L_1e43
        call    FUN_10003290
        fild    dword ptr [eax + 8]
        push    esi
        lea     ecx, [esp + 0x174]
        fstp    dword ptr [esp + 0x14]
        call    FUN_10003290
        fild    dword ptr [eax + 4]
        push    esi
        lea     ecx, [esp + 0x174]
        fdivr   dword ptr [esp + 0x14]
        fstp    dword ptr [esp + 0x14]
        call    FUN_10003290
        mov     edx, dword ptr [esp + 0x10]
        mov     dword ptr [eax + 0xc], edx
        jmp     L_1e4b
L_1e43:
        call    FUN_10003290
        mov     dword ptr [eax + 0xc], ebx
L_1e4b:
        mov     eax, dword ptr [esp + 0x310]
        mov     ecx, dword ptr [g_10026e9c]
        mov     esi, dword ptr [g_10026e84]
        mov     edx, dword ptr [esp + 0x2f8]
        add     ecx, eax
        mov     eax, dword ptr [g_10026e8c]
        mov     dword ptr [g_10026e9c], ecx
        mov     ecx, dword ptr [esp + 0x300]
        add     eax, ecx
        mov     ecx, dword ptr [g_10026ed4]
        mov     dword ptr [g_10026e8c], eax
        mov     eax, dword ptr [esp + 0x348]
        add     ecx, eax
        mov     eax, dword ptr [ebp + 0x20]
        add     esi, edx
        cmp     eax, ebx
        mov     dword ptr [g_10026e84], esi
        mov     dword ptr [g_10026ed4], ecx
        jz      L_1ee3
        mov     ecx, dword ptr [esp + 0x4bc]
        mov     ebx, dword ptr [g_10027048]
        mov     esi, dword ptr [g_10026f74]
        mov     edx, dword ptr [esp + 0x3e8]
        mov     eax, dword ptr [esp + 0x3e4]
        add     ebx, ecx
        mov     ecx, dword ptr [g_10026f70]
        add     esi, edx
        add     ecx, eax
        mov     dword ptr [g_10027048], ebx
        mov     dword ptr [g_10026f74], esi
        mov     dword ptr [g_10026f70], ecx
L_1ee3:
        mov     ecx, dword ptr [esp + 0x2e4]
        fld     qword ptr [esp + 0x308]
        mov     ebx, dword ptr [g_10026e70]
        fadd    qword ptr [g_10026e94]
        mov     eax, dword ptr [esp + 0x2f4]
        mov     edx, dword ptr [esp + 0x2f0]
        mov     esi, dword ptr [g_10026e7c]
        fstp    qword ptr [g_10026e94]
        add     ebx, ecx
        mov     ecx, dword ptr [g_10026e80]
        add     ecx, eax
        mov     eax, dword ptr [esp + 0x2e0]
        add     esi, edx
        mov     edx, dword ptr [esp + 0x2dc]
        mov     dword ptr [g_10026e80], ecx
        mov     ecx, dword ptr [esp + 0x2d0]
        mov     dword ptr [g_10026e70], ebx
        mov     ebx, dword ptr [g_10026e5c]
        add     ebx, ecx
        mov     ecx, dword ptr [g_10026e6c]
        mov     dword ptr [g_10026e7c], esi
        mov     esi, dword ptr [g_10026e68]
        add     esi, edx
        add     ecx, eax
        cmp     edi, 4
        mov     dword ptr [g_10026e5c], ebx
        mov     dword ptr [g_10026e68], esi
        mov     dword ptr [g_10026e6c], ecx
        jnz     L_1fa1
        mov     edx, dword ptr [g_10027050]
        mov     ecx, dword ptr [esp + 0x4c4]
        mov     eax, dword ptr [g_1002704c]
        add     edx, ecx
        mov     dword ptr [g_10027050], edx
        mov     edx, dword ptr [esp + 0x4c0]
        add     eax, edx
        mov     dword ptr [g_1002704c], eax
L_1fa1:
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, 0x10027080
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
        ret     0x7c
    }
}
