/* FUN_00728fe0 (0x00728FE0, 1395 B)
 * Console/text output dispatcher with formatting-directive parsing.
 * Formats a message into DAT_0087e6a0 via _vsnprintf, then walks the string
 * parsing "/color=..", "/font=..", "/bold=..", "/italic=.." directives and
 * word-wrap logic, driving FUN_007286b0 per character. __stdcall, RET 0x8.
 */

extern void *g_76b394;            /* _vsnprintf (IAT) */
extern void *g_76b2b0;            /* _strnicmp (IAT) */

extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00729560(void);
extern void __cdecl FUN_00731660(void);
extern void __cdecl FUN_00713d10(void);
extern void __cdecl FUN_00728eb0(void);
extern void __cdecl FUN_00727660(void);
extern void __cdecl FUN_007284a0(void);
extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_00713ae0(void);
extern void __cdecl FUN_007283d0(void);
extern void __cdecl FUN_007286b0(void);
extern void __cdecl FUN_00727ec0(void);
extern void __cdecl FUN_00713d70(void);

extern char g_87e6a0[];           /* DAT_0087e6a0 (format buffer) */
extern char g_88069f;             /* DAT_0088069f */
extern char g_8816dc;             /* DAT_008816dc */
extern int  g_8816cc;             /* DAT_008816cc (ptr) */
extern float g_7b7118;            /* DAT_007b7118 */
extern float g_8816d8;            /* DAT_008816d8 */
extern char g_8b2520;             /* DAT_008b2520 */
extern int  g_87c1d4;             /* DAT_0087c1d4 (ptr) */
extern float g_775980;            /* DAT_00775980 */
extern int  g_8816e0;             /* DAT_008816e0 */
extern float g_8816a8;            /* DAT_008816a8 */
extern float g_8816ac;            /* DAT_008816ac */
extern float g_8816b4;            /* DAT_008816b4 */
extern float g_76dd60;            /* DAT_0076dd60 */
extern int  g_8816bc;             /* DAT_008816bc */
extern float g_8816b0;            /* DAT_008816b0 */
extern float g_8816b8;            /* DAT_008816b8 */
extern int  g_8816c0;             /* DAT_008816c0 */
extern int  g_8816e8;             /* DAT_008816e8 */
extern char g_8816e7;             /* DAT_008816e7 */
extern char g_8816d4;             /* DAT_008816d4 */
extern char g_8816c4;             /* DAT_008816c4 */
extern int  g_8806a4;             /* DAT_008806a4 */
extern int  g_8806a0;             /* DAT_008806a0 */
extern int  g_8816d0;             /* DAT_008816d0 */
extern int  g_859d70;             /* DAT_00859d70 */
extern char g_8816e4;             /* DAT_008816e4 */
extern char g_8816e5;             /* DAT_008816e5 */
extern char g_8816e6;             /* DAT_008816e6 */
extern char g_8816dd;             /* DAT_008816dd */
extern char g_8aa610[];           /* DAT_008aa610 (hex lookup) */

__declspec(naked) void __stdcall FUN_00728fe0(char *param_1, void *param_2)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0x1c
        mov eax, dword ptr [ebp+8]
        test eax, eax
        push ebx
        jz L_ret                    /* 0x72954C */
        cmp byte ptr [eax], 0
        jz L_ret
        mov ecx, dword ptr [ebp+0xc]
        push ecx
        push eax
        push 0x2000
        mov bl, 4
        push 0x87e6a0
        mov dword ptr [ebp+8], 0x87e6a0
        mov byte ptr [g_88069f], bl
        call dword ptr [g_76b394]   /* _vsnprintf */
        mov al, byte ptr [g_88069f]
        add esp, 0x10
        cmp al, bl
        jz L_2903d                  /* 0x72903D */
        push 0x79cbf4
        call FUN_006fab90
        add esp, 4
        test eax, eax
        jz L_2903d
        int 3
    L_2903d:                        /* 0x72903D */
        mov edx, dword ptr [ebp+8]
        cmp byte ptr [edx], 0x2f
        jnz L_2904e                 /* 0x72904E */
        lea eax, [ebp+8]
        push eax
        call FUN_00729560
    L_2904e:                        /* 0x72904E */
        mov al, byte ptr [g_8816dc]
        test al, al
        mov eax, dword ptr [g_8816cc]
        jz L_2906e                  /* 0x72906E */
        fild dword ptr [eax+0x128]
        fdivr dword ptr [g_8816d8]
        fstp dword ptr [g_7b7118]
    L_2906e:                        /* 0x72906E */
        mov ecx, dword ptr [eax+0x75c]
        test ecx, ecx
        jz L_29088                 /* 0x729088 */
        mov ecx, dword ptr [ebp+8]
        push ecx
        call FUN_00731660
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
    L_29088:                        /* 0x729088 */
        call FUN_00713d10
        call FUN_00728eb0
        test byte ptr [g_8b2520], 40h
        jz L_290b7                 /* 0x7290B7 */
        mov eax, dword ptr [g_87c1d4]
        xor edx, edx
        mov dx, word ptr [eax]
        mov dword ptr [ebp+0xc], edx
        fild dword ptr [ebp+0xc]
        fdivr dword ptr [g_775980]
        fstp dword ptr [g_8816a8]
    L_290b7:                        /* 0x7290B7 */
        mov eax, dword ptr [g_8816e0]
        cmp eax, 3
        mov dword ptr [ebp-8], eax
        jnz L_2912e                 /* 0x72912E */
        mov ecx, dword ptr [ebp+8]
        push ecx
        lea edx, [ebp+0xc]
        push edx
        lea eax, [ebp-4]
        push eax
        mov dword ptr [g_8816e0], 2
        call FUN_00727660
        fld dword ptr [g_8816ac]
        fsub dword ptr [g_8816b4]
        add esp, 0xc
        fild dword ptr [ebp+0xc]
        fld st(1)
        fcompp
        fnstsw ax
        test ah, 1
        jnz L_2912c                 /* 0x72912C */
        fadd dword ptr [g_76dd60]
        mov ebx, dword ptr [ebp+0xc]
        mov ecx, dword ptr [g_8816bc]
        fstp dword ptr [ebp-4]
        mov eax, dword ptr [ebp-4]
        and eax, 0x7fffff
        sub eax, ebx
        sub eax, 0x400000
        cdq
        sub eax, edx
        sar eax, 1
        add ecx, eax
        mov dword ptr [g_8816bc], ecx
        jmp L_2912e                 /* 0x72912E */
    L_2912c:                        /* 0x72912C */
        fstp st(0)
    L_2912e:                        /* 0x72912E */
        mov eax, dword ptr [ebp+8]
        cmp byte ptr [eax], 0
        push esi
        mov dword ptr [g_8806a4], 0
        mov byte ptr [g_8816c4], 0
        mov esi, eax
        mov byte ptr [g_8816d4], 1
        jz L_294f6                  /* 0x7294F6 */
        mov ebx, dword ptr [g_76b2b0]   /* _strnicmp */
        push edi
    L_2915c:                        /* 0x72915C */
        mov al, byte ptr [g_8816d4]
        test al, al
        jz L_291bf                 /* 0x7291BF */
        mov eax, dword ptr [g_8816e0]
        test eax, eax
        jz L_291bf
        fld dword ptr [g_8816b0]
        push 0
        fsub dword ptr [g_8816b8]
        push esi
        mov byte ptr [g_8816d4], 0
        fadd dword ptr [g_76dd60]
        fstp dword ptr [ebp-4]
        call FUN_007284a0
        mov ecx, eax
        mov eax, dword ptr [ebp-4]
        and eax, 0x7fffff
        sub eax, ecx
        mov ecx, dword ptr [g_8816e0]
        sub eax, 0x400000
        cmp ecx, 1
        jnz L_291b6                 /* 0x7291B6 */
        sub eax, dword ptr [g_8816e8]
        jmp L_291b9                 /* 0x7291B9 */
    L_291b6:                        /* 0x7291B6 */
        inc eax
        sar eax, 1
    L_291b9:                        /* 0x7291B9 */
        add dword ptr [g_8816c0], eax
    L_291bf:                        /* 0x7291BF */
        mov al, byte ptr [g_8816e7]
        test al, al
        jnz L_293c5                 /* 0x7293C5 */
        cmp byte ptr [esi], 0x2f
        jnz L_293c5
        mov al, byte ptr [esi+1]
        inc esi
        cmp al, 0x2f
        jnz L_291e5                 /* 0x7291E5 */
        inc esi
    L_291de:                        /* 0x7291DE */
        push 0x2f
        jmp L_294e4                 /* 0x7294E4 */
    L_291e5:                        /* 0x7291E5 */
        push 6
        push esi
        push 0x7a5748              /* "color=" */
        call ebx
        add esp, 0xc
        test eax, eax
        jnz L_29307                 /* 0x729307 */
        add esi, 6
        xor ecx, ecx
        mov edx, 8
        xor eax, eax
    L_29204:                        /* 0x729204 */
        mov al, byte ptr [esi]
        shl ecx, 4
        mov edi, eax
        xor eax, eax
        mov al, byte ptr [edi+0x8aa610]
        inc esi
        cmp eax, 0x30
        jc L_29220                 /* 0x729220 */
        cmp eax, 0x39
        jbe L_2922a                 /* 0x72922A */
    L_29220:                        /* 0x729220 */
        cmp eax, 0x61
        jc L_29237                 /* 0x729237 */
        cmp eax, 0x66
        ja L_29237
    L_2922a:                        /* 0x72922A */
        sub eax, 0x30
        cmp eax, 9
        jbe L_29235                 /* 0x729235 */
        sub eax, 0x27
    L_29235:                        /* 0x729235 */
        add ecx, eax
    L_29237:                        /* 0x729237 */
        dec edx
        /* __emit: MSVC6 miscomputes this backward jnz rel8 (75 CC vs ref 75 CA) */
        __emit 0x75
        __emit 0xCA
        mov eax, ecx
        mov ecx, dword ptr [g_8806a4]
        xor edi, edi
        cmp ecx, edi
        mov dword ptr [g_8816d0], eax
        jz L_29297                 /* 0x729297 */
        cmp dword ptr [g_8806a0], edi
        jz L_2925e                 /* 0x72925E */
        push 2
        push 0xb
        call FUN_00713cc0
    L_2925e:                        /* 0x72925E */
        mov ecx, dword ptr [g_8806a4]
        push ecx
        push 0x8806a8
        call FUN_00713ae0
        cmp dword ptr [g_8806a0], edi
        jz L_2927f                 /* 0x72927F */
        push edi
        push 0xb
        call FUN_00713cc0
    L_2927f:                        /* 0x72927F */
        mov eax, dword ptr [g_8816d0]
        mov dword ptr [g_8806a0], edi
        mov dword ptr [g_8806a4], edi
        mov byte ptr [g_8816c4], 1
    L_29297:                        /* 0x729297 */
        cmp dword ptr [g_859d70], edi
        jz L_292f0                 /* 0x7292F0 */
        cmp eax, -1
        jnz L_292a8                 /* 0x7292A8 */
        push 1
        jmp L_292ba                 /* 0x7292BA */
    L_292a8:                        /* 0x7292A8 */
        and eax, 0xff000000
        cmp eax, 0xff000000
        jnz L_292b8                 /* 0x7292B8 */
        push 2
        jmp L_292ba
    L_292b8:                        /* 0x7292B8 */
        push 3
    L_292ba:                        /* 0x7292BA */
        push 0x10
        call FUN_00713cc0
        mov edx, dword ptr [g_8816d0]
        and edx, 0xff000000
        cmp edx, 0xff000000
        jnz L_292f9                 /* 0x7292F9 */
        mov eax, dword ptr [g_8816cc]
        cmp dword ptr [eax+0x130], edi
        jnz L_292f9
        push 1
        push 0xd
        call FUN_00713cc0
        jmp L_294e9                 /* 0x7294E9 */
    L_292f0:                        /* 0x7292F0 */
        push 3
        push 0x10
        call FUN_00713cc0
    L_292f9:                        /* 0x7292F9 */
        push 3
        push 0xd
        call FUN_00713cc0
        jmp L_294e9
    L_29307:                        /* 0x729307 */
        push 0xe
        push esi
        push 0x7a5788              /* "font=" */
        call ebx
        add esp, 0xc
        test eax, eax
        jnz L_29325                 /* 0x729325 */
        add esi, 0xe
        mov byte ptr [g_8816e4], al
        jmp L_294e9
    L_29325:                        /* 0x729325 */
        push 0xe
        push esi
        push 0x7a5778              /* "font=" */
        call ebx
        add esp, 0xc
        test eax, eax
        jnz L_29345                 /* 0x729345 */
        add esi, 0xe
        mov byte ptr [g_8816e4], 1
        jmp L_294e9
    L_29345:                        /* 0x729345 */
        push 6
        push esi
        push 0x7a5770              /* "bold=1" */
        call ebx
        add esp, 0xc
        test eax, eax
        jnz L_29365                 /* 0x729365 */
        add esi, 6
        mov byte ptr [g_8816e5], 1
        jmp L_294e9
    L_29365:                        /* 0x729365 */
        push 6
        push esi
        push 0x7a5768              /* "bold=0" */
        call ebx
        add esp, 0xc
        test eax, eax
        jnz L_29383                 /* 0x729383 */
        add esi, 6
        mov byte ptr [g_8816e5], al
        jmp L_294e9
    L_29383:                        /* 0x729383 */
        push 8
        push esi
        push 0x7a575c              /* "italic=1" */
        call ebx
        add esp, 0xc
        test eax, eax
        jnz L_293a1                 /* 0x7293A1 */
        add esi, 8
        mov byte ptr [g_8816e6], al
        jmp L_294e9
    L_293a1:                        /* 0x7293A1 */
        push 8
        push esi
        push 0x7a5750              /* "italic=0" */
        call ebx
        add esp, 0xc
        test eax, eax
        jnz L_291de                 /* 0x7291DE */
        add esi, 8
        mov byte ptr [g_8816e6], 1
        jmp L_294e9
    L_293c5:                        /* 0x7293C5 */
        mov al, byte ptr [g_8816dd]
        test al, al
        jz L_294cf                 /* 0x7294CF */
        cmp byte ptr [esi], 0x20
        jnz L_2942a                 /* 0x72942A */
        lea edi, [esi+1]
        push edi
        call FUN_007283d0
        mov edx, dword ptr [g_8816e8]
        mov ecx, dword ptr [g_8816c0]
        add eax, edx
        add eax, ecx
        mov dword ptr [ebp-0x14], eax
        mov dword ptr [ebp-0x10], 0
        fild qword ptr [ebp-0x14]
        fcomp dword ptr [g_8816b0]
        fnstsw ax
        test ah, 0x41
        jnz L_2941f                 /* 0x72941F */
        push 0xa
        call FUN_007286b0
        mov byte ptr [g_8816d4], 1
        mov esi, edi
        jmp L_294e9
    L_2941f:                        /* 0x72941F */
        xor eax, eax
        mov al, byte ptr [esi]
        mov esi, edi
        jmp L_294e3                 /* 0x7294E3 */
    L_2942a:                        /* 0x72942A */
        lea ecx, [esi+1]
        push ecx
        call FUN_007283d0
        xor edx, edx
        mov dl, byte ptr [esi]
        mov dword ptr [ebp-4], eax
        lea eax, [ebp-0xc]
        lea ecx, [ebp+0xc]
        push edx
        push eax
        push ecx
        call FUN_00727ec0
        fild dword ptr [ebp-4]
        fld dword ptr [g_8816b0]
        fsub dword ptr [g_8816b8]
        fcompp
        fnstsw ax
        test ah, 1
        jz L_2948c                 /* 0x72948C */
    L_29460:                        /* 0x729460 */
        mov eax, dword ptr [ebp+0xc]
        mov edx, dword ptr [g_8816c0]
        add edx, eax
        mov dword ptr [ebp-4], edx
        fild dword ptr [ebp-4]
        fcomp dword ptr [g_8816b0]
        fnstsw ax
        test ah, 1
        jz L_2948b                 /* 0x72948B */
        xor eax, eax
        mov al, byte ptr [esi]
        inc esi
        push eax
        call FUN_007286b0
        jmp L_29460
    L_2948b:                        /* 0x72948B */
        dec esi
    L_2948c:                        /* 0x72948C */
        mov ecx, dword ptr [g_8816e8]
        mov edx, dword ptr [g_8816c0]
        mov eax, dword ptr [ebp+0xc]
        add ecx, edx
        add ecx, eax
        mov dword ptr [ebp-0x1c], ecx
        mov dword ptr [ebp-0x18], 0
        fild qword ptr [ebp-0x1c]
        fcomp dword ptr [g_8816b0]
        fnstsw ax
        test ah, 0x41
        jnz L_294c9                 /* 0x7294C9 */
        push 0xa
        call FUN_007286b0
        mov byte ptr [g_8816d4], 1
        jmp L_294e9
    L_294c9:                        /* 0x7294C9 */
        xor eax, eax
        mov al, byte ptr [esi]
        jmp L_294e2                 /* 0x7294E2 */
    L_294cf:                        /* 0x7294CF */
        xor eax, eax
        mov al, byte ptr [esi]
        cmp al, 0xa
        jz L_294db                 /* 0x7294DB */
        cmp al, 0xd
        jnz L_294e2
    L_294db:                        /* 0x7294DB */
        mov byte ptr [g_8816d4], 1
    L_294e2:                        /* 0x7294E2 */
        inc esi
    L_294e3:                        /* 0x7294E3 */
        push eax
    L_294e4:                        /* 0x7294E4 */
        call FUN_007286b0
    L_294e9:                        /* 0x7294E9 */
        cmp byte ptr [esi], 0
        jnz L_2915c
    L_294f2:                        /* 0x7294F2 */
        mov eax, dword ptr [ebp+8]
        pop edi
    L_294f6:                        /* 0x7294F6 */
        sub esi, eax
        cmp esi, 0x2000
        pop esi
        jc L_29513                 /* 0x729513 */
        push 0x7a5644              /* "Message too long" */
        call FUN_006fab90
        add esp, 4
        test eax, eax
        jz L_29513
        int 3
    L_29513:                        /* 0x729513 */
        mov eax, dword ptr [g_8806a4]
        test eax, eax
        jz L_2953e                 /* 0x72953E */
        mov eax, dword ptr [g_8806a0]
        test eax, eax
        jz L_2952e                 /* 0x72952E */
        push 2
        push 0xb
        call FUN_00713cc0
    L_2952e:                        /* 0x72952E */
        mov eax, dword ptr [g_8806a4]
        push eax
        push 0x8806a8
        call FUN_00713ae0
    L_2953e:                        /* 0x72953E */
        mov ecx, dword ptr [ebp-8]
        mov dword ptr [g_8816e0], ecx
        call FUN_00713d70
    L_ret:                          /* 0x72954C */
        pop ebx
        mov esp, ebp
        pop ebp
        ret 8
    }
}
