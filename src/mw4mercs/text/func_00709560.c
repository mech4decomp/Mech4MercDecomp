/*
 * FUN_00709560 (823 B) — Frame/update tick routine (RET 4).
 *
 * Computes a frame-rate divisor from a 64-bit timestamp, then performs a
 * series of conditional updates (64-bit accumulators, callback invocations)
 * based on global state flags.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_858aa4;
extern int g_8597bc;
extern int g_87c5a0;
extern int g_858b50;
extern int g_858b54;
extern __int64 g_858b58;
extern float g_858b04;
extern int g_858af8;
extern int g_858c08;
extern int g_8aaeb8;
extern int g_8aaebc;
extern int g_859b80;
extern int g_859b84;
extern int g_859b20;
extern int g_859b24;
extern int g_85b218;
extern int g_8aa230;
extern int g_8aa234;
extern int g_8aa238;
extern int g_8aa23c;
extern int g_859794;
extern int g_859b30;
extern int g_859b34;
extern int g_859b08;
extern int g_859b0c;
extern int g_849310;
extern int g_858a3c;
extern int g_859b40;
extern int g_859b44;
extern __int64 __cdecl FUN_00707f50(void);
extern char __cdecl FUN_00709e80(void);
extern void __cdecl FUN_00733410(void);
extern void __cdecl FUN_00749380(void);
extern void __cdecl FUN_00717650(void);
extern void __cdecl FUN_00709390(void);
extern void __cdecl FUN_00709420(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_0072a770(void);
extern void __cdecl FUN_00739fa0(void);
extern void __cdecl FUN_00713430(void);
extern void __cdecl FUN_0070b130(void);
extern void __cdecl FUN_0070b240(void);

__declspec(naked) void __stdcall FUN_00709560(void)
{
    __asm {
        mov     eax, dword ptr [g_858aa4]
        sub     esp, 8
        push    ebx
        xor     ebx, ebx
        cmp     eax, ebx
        push    ebp
        push    esi
        jz      L_958b
        mov     eax, dword ptr [g_8597bc]
        pop     esi
        inc     eax
        pop     ebp
        mov     dword ptr [g_858aa4], ebx
        mov     dword ptr [g_8597bc], eax
        pop     ebx
        add     esp, 8
        ret     4
    L_958b:
        mov     esi, 1
        mov     dword ptr [g_87c5a0], esi
        call    FUN_00707f50
        mov     ecx, dword ptr [g_858b50]
        mov     ebp, dword ptr [g_858b54]
        sub     eax, ecx
        sbb     edx, ebp
        mov     dword ptr [esp + 0xc], eax
        or      eax, edx
        mov     dword ptr [esp + 0x10], edx
        jnz     L_95bf
        mov     dword ptr [esp + 0xc], esi
        mov     dword ptr [esp + 0x10], ebx
    L_95bf:
        fild    qword ptr [g_858b58]
        fild    qword ptr [esp + 0xc]
        fdivp   st(1), st(0)
        fstp    dword ptr [g_858b04]
        call    FUN_00707f50
        mov     dword ptr [g_858b54], edx
        mov     edx, dword ptr [g_858af8]
        inc     edx
        mov     dword ptr [g_858b50], eax
        mov     dword ptr [g_858af8], edx
        call    FUN_00709e80
        test    al, al
        jnz     L_9606
        pop     esi
        pop     ebp
        mov     dword ptr [g_87c5a0], ebx
        pop     ebx
        add     esp, 8
        ret     4
    L_9606:
        mov     eax, dword ptr [g_858c08]
        cmp     eax, 2
        jz      L_9615
        cmp     eax, 3
        jnz     L_967b
    L_9615:
        cmp     dword ptr [g_8aaeb8], ebx
        jnz     L_967b
        cmp     dword ptr [g_8aaebc], ebx
        jnz     L_968b
        call    FUN_00733410
        mov     eax, dword ptr [g_859b80]
        mov     ecx, dword ptr [g_859b84]
        mov     edx, dword ptr [g_859b20]
        mov     ebp, dword ptr [g_859b24]
        add     eax, edx
        adc     ecx, ebp
        mov     dword ptr [g_859b20], eax
        mov     dword ptr [g_859b24], ecx
        call    FUN_00749380
        mov     eax, dword ptr [g_859b80]
        mov     ecx, dword ptr [g_859b84]
        mov     edx, dword ptr [g_859b20]
        mov     ebp, dword ptr [g_859b24]
        add     eax, edx
        adc     ecx, ebp
        mov     dword ptr [g_859b20], eax
        mov     dword ptr [g_859b24], ecx
    L_967b:
        cmp     dword ptr [g_8aaebc], ebx
        jnz     L_968b
        cmp     dword ptr [g_8aaeb8], ebx
        jz      L_96d3
    L_968b:
        cmp     dword ptr [g_85b218], ebx
        jnz     L_96d3
        push    ebx
        push    ebx
        push    0x3f800000
        push    0x3f800000
        push    ebx
        push    ebx
        push    0x303050
        push    esi
        push    ebx
        push    ebx
        call    FUN_00717650
        mov     eax, dword ptr [g_8aa230]
        mov     edx, dword ptr [g_8aa238]
        mov     ecx, dword ptr [g_8aa234]
        add     edx, eax
        mov     eax, dword ptr [g_8aa23c]
        adc     eax, ecx
        mov     dword ptr [g_8aa238], edx
        mov     dword ptr [g_8aa23c], eax
    L_96d3:
        cmp     dword ptr [g_859794], ebx
        jz      L_9727
        cmp     dword ptr [g_8aaeb8], ebx
        jnz     L_9727
        call    FUN_00709390
        push    ebx
        call    dword ptr [g_859794]
        mov     edx, dword ptr [g_859b30]
        mov     eax, dword ptr [g_859b34]
        mov     ecx, dword ptr [g_859b08]
        mov     esi, dword ptr [g_859b0c]
        add     edx, ecx
        adc     eax, esi
        mov     dword ptr [g_859b08], edx
        mov     dword ptr [g_859b0c], eax
        mov     edx, dword ptr [g_859b30]
        mov     eax, dword ptr [g_859b34]
        push    eax
        push    edx
        call    FUN_00709420
    L_9727:
        cmp     dword ptr [g_858c08], 3
        jnz     L_9773
        cmp     dword ptr [g_8aaeb8], ebx
        jnz     L_9773
        cmp     dword ptr [g_8aaebc], ebx
        jnz     L_9773
        call    FUN_00709390
        mov     ecx, dword ptr [g_849310]
        push    ecx
        call    FUN_006f4950
        mov     eax, dword ptr [g_858a3c]
        cmp     eax, ebx
        jz      L_975c
        call    eax
    L_975c:
        call    FUN_006f49a0
        mov     edx, dword ptr [g_859b40]
        mov     eax, dword ptr [g_859b44]
        push    eax
        push    edx
        call    FUN_00709420
    L_9773:
        cmp     dword ptr [g_859794], ebx
        jz      L_97cd
        cmp     dword ptr [g_8aaeb8], ebx
        jnz     L_97cd
        call    FUN_00709390
        push    0x1000
        call    dword ptr [g_859794]
        mov     ecx, dword ptr [g_859b30]
        mov     edx, dword ptr [g_859b34]
        mov     eax, dword ptr [g_859b08]
        mov     esi, dword ptr [g_859b0c]
        add     ecx, eax
        adc     edx, esi
        mov     dword ptr [g_859b08], ecx
        mov     dword ptr [g_859b0c], edx
        mov     ecx, dword ptr [g_859b30]
        mov     edx, dword ptr [g_859b34]
        push    edx
        push    ecx
        call    FUN_00709420
    L_97cd:
        call    FUN_0072a770
        cmp     dword ptr [g_859794], ebx
        jz      L_982a
        cmp     dword ptr [g_8aaeb8], ebx
        jnz     L_982a
        call    FUN_00709390
        push    0x4000
        call    dword ptr [g_859794]
        mov     eax, dword ptr [g_859b30]
        mov     ecx, dword ptr [g_859b34]
        mov     edx, dword ptr [g_859b08]
        mov     esi, dword ptr [g_859b0c]
        add     eax, edx
        adc     ecx, esi
        mov     dword ptr [g_859b08], eax
        mov     dword ptr [g_859b0c], ecx
        mov     eax, dword ptr [g_859b30]
        mov     ecx, dword ptr [g_859b34]
        push    ecx
        push    eax
        call    FUN_00709420
    L_982a:
        cmp     dword ptr [g_858c08], 3
        jnz     L_985e
        call    FUN_00739fa0
        mov     edx, dword ptr [g_859b30]
        mov     eax, dword ptr [g_859b34]
        mov     ecx, dword ptr [g_859b20]
        mov     esi, dword ptr [g_859b24]
        add     edx, ecx
        adc     eax, esi
        mov     dword ptr [g_859b20], edx
        mov     dword ptr [g_859b24], eax
    L_985e:
        cmp     byte ptr [esp + 0x18], bl
        jnz     L_9873
        pop     esi
        pop     ebp
        mov     dword ptr [g_87c5a0], ebx
        pop     ebx
        add     esp, 8
        ret     4
    L_9873:
        call    FUN_00713430
        call    FUN_0070b130
        mov     dword ptr [g_87c5a0], ebx
        mov     dword ptr [g_8597bc], ebx
        call    FUN_0070b240
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret     4
    }
}
