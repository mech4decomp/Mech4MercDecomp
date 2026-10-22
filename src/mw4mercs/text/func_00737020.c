/*
 * FUN_00737020 (669 B) — log/registry system initialization.
 *
 * Zeroes a global table, sets up log-file name globals, computes the current
 * month via asctime/_strnicmp, builds a version string with wsprintfA, and
 * constructs the registry path "Software\Microsoft\Microsoft Games\<name>".
 * __stdcall RET 4 (one param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_858980;
extern int g_858920;
extern int g_858a34;
extern int g_858a38;
extern int g_858a3c;
extern int g_858a40;
extern char g_87cf30;
extern char g_87cf31;
extern int g_858a30;
extern int g_858968;
extern int g_85896c;
extern int g_858970;
extern int g_858940;
extern int g_858944;
extern int g_858948;
extern int g_858938;
extern int g_859adc;
extern int g_858974;
extern int g_858978;
extern char g_85897c;
extern char g_859af6;
extern int g_794df8;
extern int g_794e00;
extern int g_794dfc;
extern void *g_76b3dc;   /* IAT: asctime */
extern void *g_76b2b0;   /* IAT: _strnicmp */
extern void *g_76b318;   /* IAT: atoi */
extern void *g_76b4f8;   /* IAT: wsprintfA */
extern int g_858924;
extern int g_858928;
extern void __cdecl FUN_00407be0(void);
extern int __cdecl FUN_006fab90(void *);

__declspec(naked) void FUN_00737020(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x34
        mov     edx, dword ptr [g_858980]
        push    ebx
        push    esi
        push    edi
        xor     eax, eax
        mov     ecx, 0x4b
        mov     edi, 0x858920
        rep     stosd
        mov     eax, 0x737000
        mov     [g_858a34], eax
        mov     [g_858a38], eax
        mov     [g_858a3c], eax
        mov     [g_858a40], eax
        mov     eax, dword ptr [ebp + 0x8]
        push    eax
        mov     byte ptr [g_87cf30], 0x0
        mov     byte ptr [g_87cf31], 0x0
        mov     dword ptr [g_858980], edx
        mov     dword ptr [g_858a30], 0x737010
        mov     dword ptr [g_858968], 0x73
        mov     dword ptr [g_85896c], 0x74
        mov     dword ptr [g_858970], 0x1b
        mov     dword ptr [g_858920], 0x772c5c
        mov     dword ptr [g_858940], 0x280
        mov     dword ptr [g_858944], 0x1e0
        mov     dword ptr [g_858948], 0x10
        mov     dword ptr [g_858938], 0x40
        call    FUN_00407be0
        mov     eax, [g_859adc]
        cmp     eax, 0x1
        mov     ecx, 0x7a698c
        jnz     L_370e8
        mov     dword ptr [g_858974], 0x7a697c
        jmp     L_370f3
L_370e8:
        cmp     eax, 0x2
        jnz     L_37104
        mov     dword ptr [g_858974], ecx
L_370f3:
        mov     dword ptr [g_858978], 0x859494
        mov     byte ptr [g_85897c], 0x1
L_37104:
        mov     al, [g_859af6]
        test    al, al
        jz      L_3711d
        mov     dword ptr [g_858974], ecx
        mov     dword ptr [g_858978], 0x7a696c
L_3711d:
        mov     ecx, dword ptr [g_794df8]
        mov     eax, [g_794e00]
        mov     edx, dword ptr [g_794dfc]
        mov     ebx, dword ptr [g_76b3dc]
        mov     dword ptr [ebp - 0x10], ecx
        xor     esi, esi
        mov     dword ptr [ebp - 0x8], eax
        mov     ecx, 0x9
        xor     eax, eax
        lea     edi, [ebp - 0x34]
        rep     stosd
        mov     edi, dword ptr [g_76b2b0]
        mov     dword ptr [ebp - 0xc], edx
        mov     dword ptr [ebp - 0x4], esi
L_37154:
        lea     ecx, [ebp - 0x34]
        push    0x3
        push    ecx
        mov     dword ptr [ebp - 0x24], esi
        mov     dword ptr [ebp - 0x28], 0x1
        call    ebx
        add     esp, 0x4
        add     eax, 0x4
        push    eax
        lea     edx, [ebp - 0x10]
        push    edx
        call    edi
        add     esp, 0xc
        test    eax, eax
        jnz     L_37180
        lea     eax, [esi + 0x1]
        mov     dword ptr [ebp - 0x4], eax
L_37180:
        inc     esi
        cmp     esi, 0xc
        jl      L_37154
        lea     ecx, [ebp - 0xc]
        push    ecx
        call    dword ptr [g_76b318]
        mov     edx, dword ptr [ebp - 0x4]
        mov     ebx, dword ptr [g_76b4f8]
        push    eax
        push    edx
        push    0x7a6958
        push    0x8aa390
        call    ebx
        mov     eax, [g_858924]
        add     esp, 0x14
        test    eax, eax
        jz      L_371b8
        cmp     byte ptr [eax], 0x0
        jnz     L_371c2
L_371b8:
        mov     dword ptr [g_858924], 0x8aa390
L_371c2:
        mov     edi, dword ptr [ebp + 0x8]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0x7f
        jbe     L_371e6
        push    0x7a6940
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_371e6
        int     3
L_371e6:
        mov     edi, dword ptr [g_858920]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        mov     edi, 0x859694
        rep     movsd
        push    0x859694
        mov     ecx, eax
        and     ecx, 0x3
        push    0x7a6918
        push    0x858e2c
        rep     movsb
        call    ebx
        mov     edx, dword ptr [g_858928]
        add     esp, 0xc
        test    edx, edx
        jz      L_37284
        cmp     byte ptr [edx], 0x0
        jz      L_37284
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x76c5a8
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     ebx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x858e2c
        repne   scasb
        dec     edi
        mov     ecx, ebx
        shr     ecx, 0x2
        rep     movsd
        mov     ecx, ebx
        and     ecx, 0x3
        rep     movsb
        or      ecx, 0xffffffff
        mov     edi, edx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        or      ecx, 0xffffffff
        mov     esi, edi
        mov     edi, 0x858e2c
        repne   scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
L_37284:
        mov     edi, dword ptr [g_858920]
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, 0x8aa290
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
        pop     edi
        pop     esi
        mov     dword ptr [g_858920], 0x8aa290
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x4
    }
}
