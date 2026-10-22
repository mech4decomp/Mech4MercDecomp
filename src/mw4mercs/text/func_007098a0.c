/*
 * FUN_007098A0 (881 B) — Main game loop / frame update dispatcher.
 *
 * __stdcall RET 4 (one stack param = a callback function pointer).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* extern data symbols (dword) */
extern int g_859b50;
extern int g_859b54;
extern int g_859b48;
extern int g_859b4c;
extern int g_8aae2c;
extern int g_8aae30;
extern int g_8aae34;
extern int g_8aae44;
extern int g_849354;
extern int g_8492e8;
extern int g_858afc;
extern int g_859ae8;
extern int g_859b90;
extern int g_859af8;
extern int g_858af8;
extern int g_859278;
extern int g_849310;
extern int g_858ac0;
extern int g_859280;
extern int g_859284;
extern int g_859b20;
extern int g_859b24;
extern int g_8aaec0;
extern int g_7b73d8;
extern int g_8aaeb4;
extern int g_859794;
extern int g_85b4a0;

/* extern byte data symbols */
extern char g_858ac4;
extern char g_87bc34;
extern char g_859af5;

/* extern function-pointer / IAT symbols */
extern void *g_76b23c;   /* IAT: GetCurrentProcess */
extern void *g_8aad1c;
extern void *g_8aad18;
extern void *g_8aad14;
extern void *g_858a40;

/* extern callees */
extern void __cdecl FUN_00707f50(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_006f5100(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_00749dc0(void);
extern void __cdecl FUN_00733320(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00707b40(void);
extern void __cdecl FUN_007239f0(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_00708450(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00722730(void);
extern void __cdecl FUN_007019e0(void);
extern void __cdecl FUN_0070e180(void);
extern void __cdecl FUN_006faa30(void);
extern void __cdecl FUN_0070e190(void);
extern void __cdecl FUN_0072db60(void);
extern void __cdecl FUN_00709560(void);
extern void __cdecl FUN_0072db80(void);

__declspec(naked) void __stdcall FUN_007098A0(void *param)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ebx
        push    esi
        call    FUN_00707f50
        mov     ecx, dword ptr [g_859b50]
        mov     esi, dword ptr [g_859b54]
        sub     eax, ecx
        sbb     edx, esi
        mov     dword ptr [g_859b48], eax
        mov     dword ptr [g_859b4c], edx
        mov     eax, dword ptr [g_8aae2c]
        xor     ebx, ebx
        cmp     eax, ebx
        jz      L_d6
        dec     eax
        mov     dword ptr [g_8aae2c], eax
L_d6:
        mov     eax, dword ptr [g_8aae30]
        cmp     eax, ebx
        jz      L_997c
        cmp     eax, 2
        jnz     L_994c
        push    ebx
        push    0x4000
        call    FUN_006f3c80
        mov     dword ptr [g_849354], eax
        call    dword ptr [g_76b23c]
        push    eax
        mov     dword ptr [g_8492e8], eax
        call    dword ptr [g_8aad1c]
        test    eax, eax
        jnz     L_9916
        mov     dword ptr [g_8aae30], ebx
        jmp     L_997c
L_9916:
        mov     edx, dword ptr [g_8492e8]
        push    edx
        call    dword ptr [g_8aad18]
        test    eax, eax
        jnz     L_992f
        mov     dword ptr [g_8aae30], ebx
        jmp     L_997c
L_992f:
        mov     eax, dword ptr [g_849354]
        mov     ecx, dword ptr [g_8492e8]
        push    0x4000
        push    eax
        push    ecx
        call    dword ptr [g_8aad14]
        mov     eax, dword ptr [g_8aae30]
L_994c:
        cmp     eax, 1
        jnz     L_9972
        push    0x7a164c
        call    FUN_006f5100
        mov     edx, dword ptr [g_849354]
        push    edx
        call    FUN_006f4230
        mov     eax, dword ptr [g_8aae30]
        mov     dword ptr [g_849354], ebx
L_9972:
        cmp     eax, ebx
        jz      L_997c
        dec     eax
        mov     dword ptr [g_8aae30], eax
L_997c:
        mov     eax, dword ptr [g_8aae34]
        cmp     eax, ebx
        jz      L_998b
        dec     eax
        mov     dword ptr [g_8aae34], eax
L_998b:
        mov     eax, dword ptr [g_8aae44]
        cmp     eax, ebx
        jz      L_999a
        dec     eax
        mov     dword ptr [g_8aae44], eax
L_999a:
        call    FUN_00749dc0
        call    FUN_00733320
        mov     ecx, dword ptr [g_858afc]
        mov     eax, dword ptr [g_859ae8]
        inc     ecx
        cmp     eax, ebx
        mov     dword ptr [g_858afc], ecx
        jnz     L_99dc
        cmp     dword ptr [g_859b90], ebx
        jnz     L_99dc
        cmp     dword ptr [g_859af8], ebx
        jz      L_99dc
        push    0x7a1630
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_99dc
        int     3
L_99dc:
        mov     edx, dword ptr [g_859af8]
        mov     ecx, dword ptr [g_858af8]
        inc     edx
        inc     ecx
        mov     dword ptr [g_859af8], edx
        mov     dword ptr [g_858af8], ecx
        call    FUN_00707b40
        call    FUN_007239f0
        cmp     dword ptr [g_859278], 1
        jz      L_9a1e
        mov     eax, dword ptr [g_849310]
        push    eax
        call    FUN_006f4950
        call    FUN_00708450
        call    FUN_006f49a0
L_9a1e:
        cmp     byte ptr [g_858ac4], bl
        jz      L_9a36
        mov     byte ptr [g_858ac4], bl
        mov     dword ptr [g_858ac0], 2
L_9a36:
        call    FUN_00722730
        mov     ecx, dword ptr [g_859280]
        mov     edx, dword ptr [g_859284]
        mov     eax, dword ptr [g_859b20]
        mov     esi, dword ptr [g_859b24]
        add     ecx, eax
        adc     edx, esi
        mov     dword ptr [g_859b20], ecx
        mov     dword ptr [g_859b24], edx
        call    FUN_007019e0
        call    FUN_0070e180
        push    ebx
        push    1
        call    FUN_006faa30
        cmp     dword ptr [g_8aae30], 1
        jnz     L_9a87
        push    0x7a1620
        call    FUN_006f5100
L_9a87:
        cmp     dword ptr [g_859b90], ebx
        jnz     L_9ad1
        cmp     dword ptr [g_858ac0], ebx
        jnz     L_9ad1
        mov     esi, dword ptr [ebp + 8]
        cmp     esi, ebx
        jz      L_9ad1
        cmp     dword ptr [g_8aaec0], ebx
        jnz     L_9ad1
        cmp     byte ptr [g_87bc34], bl
        jz      L_9abe
        cmp     dword ptr [g_7b73d8], ebx
        jz      L_9ad1
        cmp     dword ptr [g_8aaeb4], ebx
        jnz     L_9ad1
L_9abe:
        mov     ecx, dword ptr [g_849310]
        push    ecx
        call    FUN_006f4950
        call    esi
        call    FUN_006f49a0
L_9ad1:
        mov     eax, dword ptr [g_8aae30]
        mov     esi, 1
        cmp     eax, esi
        jnz     L_9ae9
        push    0x7a1614
        call    FUN_006f5100
L_9ae9:
        cmp     dword ptr [g_858ac0], ebx
        jnz     L_9b4e
        mov     eax, dword ptr [g_859794]
        cmp     eax, ebx
        jz      L_9b29
        cmp     dword ptr [g_8aaec0], ebx
        jnz     L_9b4e
        cmp     byte ptr [g_87bc34], bl
        jz      L_9b1a
        cmp     dword ptr [g_7b73d8], ebx
        jz      L_9b31
        cmp     dword ptr [g_8aaeb4], ebx
        jnz     L_9b31
L_9b1a:
        push    0xffff
        call    eax
        cmp     dword ptr [g_858ac0], ebx
        jnz     L_9b4e
L_9b29:
        cmp     dword ptr [g_8aaec0], ebx
        jnz     L_9b4e
L_9b31:
        cmp     byte ptr [g_87bc34], bl
        jz      L_9b49
        cmp     dword ptr [g_7b73d8], ebx
        jz      L_9b4e
        cmp     dword ptr [g_8aaeb4], ebx
        jnz     L_9b4e
L_9b49:
        call    FUN_0070e190
L_9b4e:
        call    FUN_0072db60
        cmp     dword ptr [g_8aae30], esi
        jnz     L_9b65
        push    0x7a1600
        call    FUN_006f5100
L_9b65:
        cmp     dword ptr [g_858ac0], ebx
        jnz     L_9b73
        push    esi
        call    FUN_00709560
L_9b73:
        cmp     dword ptr [g_8aae30], esi
        jnz     L_9b85
        push    0x7a15f0
        call    FUN_006f5100
L_9b85:
        call    FUN_0072db80
        push    ebx
        push    ebx
        call    FUN_006faa30
        cmp     dword ptr [g_858ac0], ebx
        jz      L_9bf0
        cmp     dword ptr [g_859278], ebx
        jnz     L_9bf0
        cmp     dword ptr [g_859ae8], ebx
        jnz     L_9bf0
        cmp     dword ptr [g_859b90], ebx
        jnz     L_9bf0
        mov     edx, dword ptr [g_849310]
        push    edx
        call    FUN_006f4950
        cmp     byte ptr [g_87bc34], bl
        jz      L_9bd7
        cmp     dword ptr [g_858ac0], 2
        jnz     L_9bd7
        mov     byte ptr [g_859af5], 1
        jmp     L_9be5
L_9bd7:
        cmp     dword ptr [g_85b4a0], esi
        setz    al
        mov     byte ptr [g_859af5], al
L_9be5:
        call    dword ptr [g_858a40]
        call    FUN_006f49a0
L_9bf0:
        dec     dword ptr [g_859af8]
        call    FUN_00707f50
        mov     dword ptr [g_859b50], eax
        mov     dword ptr [g_859b54], edx
        mov     eax, dword ptr [g_858ac0]
        pop     esi
        pop     ebx
        pop     ebp
        ret     4
    }
}
