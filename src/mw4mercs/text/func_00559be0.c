/*
 * FUN_00559be0 (4547 B) — __thiscall sound/voice event dispatcher (big switch)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7dd268;      /* 0x007dd268 */
extern int g_7dab40;      /* 0x007dab40 */
extern int g_7dab44;      /* 0x007dab44 */
extern int g_7f2d2c;      /* 0x007f2d2c */
extern float g_f_77b99c;  /* 0x0077b99c */
extern float g_f_77b9a0;  /* 0x0077b9a0 */
extern float g_f_77b9ac;  /* 0x0077b9ac */

extern char g_s_77dc40[]; extern char g_s_77dc18[]; extern char g_s_77dbec[];
extern char g_s_77dbc4[]; extern char g_s_77dba0[]; extern char g_s_77db88[];
extern char g_s_77db60[]; extern char g_s_77db38[]; extern char g_s_77db18[];
extern char g_s_77dafc[]; extern char g_s_77dad0[]; extern char g_s_77dab0[];
extern char g_s_77da8c[]; extern char g_s_77da68[]; extern char g_s_77da48[];
extern char g_s_77da30[]; extern char g_s_77da14[]; extern char g_s_77d9f4[];
extern char g_s_77d9d4[]; extern char g_s_77d9b8[]; extern char g_s_77d998[];
extern char g_s_77d97c[]; extern char g_s_77d95c[]; extern char g_s_77d93c[];
extern char g_s_77d920[]; extern char g_s_77d904[]; extern char g_s_77d8dc[];
extern char g_s_77d8ac[]; extern char g_s_77d884[]; extern char g_s_77d85c[];
extern char g_s_77d82c[]; extern char g_s_77d804[]; extern char g_s_77d7dc[];
extern char g_s_77d7b4[]; extern char g_s_77d788[]; extern char g_s_77d760[];
extern char g_s_77d738[]; extern char g_s_77d70c[]; extern char g_s_77d6e8[];
extern char g_s_77d6c4[]; extern char g_s_77d694[]; extern char g_s_77d678[];
extern char g_s_77d658[]; extern char g_s_77d638[]; extern char g_s_77d618[];
extern char g_s_77d5f8[]; extern char g_s_77d5d8[]; extern char g_s_77d5b4[];
extern char g_s_77d590[]; extern char g_s_77d56c[]; extern char g_s_77d548[];
extern char g_s_77d524[]; extern char g_s_77d500[]; extern char g_s_77d4dc[];
extern char g_s_77d4b8[]; extern char g_s_77d494[]; extern char g_s_77d470[];
extern char g_s_77d44c[]; extern char g_s_77d428[]; extern char g_s_77d408[];
extern char g_s_77d3e8[]; extern char g_s_77d3c8[]; extern char g_s_77d3a4[];
extern char g_s_77d37c[]; extern char g_s_77d354[]; extern char g_s_77d32c[];
extern char g_s_77d304[]; extern char g_s_77d2dc[]; extern char g_s_77d2b4[];
extern char g_s_77d28c[]; extern char g_s_77d264[]; extern char g_s_77d23c[];
extern char g_s_77d214[]; extern char g_s_77d1e8[]; extern char g_s_77d1bc[];
extern char g_s_77d190[]; extern char g_s_77d164[]; extern char g_s_77b26c[];

extern void __cdecl FUN_0055b440(void);
extern void __cdecl FUN_0055b070(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004ebcf0(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_004ebe90(void);
extern void __cdecl FUN_004ebee0(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_0055b480(void);
extern void __cdecl FUN_0055b130(void);
extern void __cdecl FUN_0055b170(void);
extern void __cdecl FUN_0055b0b0(void);
extern void __cdecl FUN_0055b280(void);
extern void __cdecl FUN_0055b1d0(void);
extern void __cdecl FUN_0055b300(void);
extern void __cdecl FUN_0055b330(void);
extern void __cdecl FUN_0055b360(void);
extern void __cdecl FUN_0055b390(void);
extern void __cdecl FUN_0055b200(void);
extern void __cdecl FUN_00628a80(void);
extern void __cdecl FUN_0055b4c0(void);
extern void __cdecl FUN_0055af90(void);
extern void __cdecl FUN_00558af0(void);
extern void __cdecl FUN_006476a0(void);

__declspec(naked) void func_00559be0(void)
{
    __asm {
        sub esp, 0x8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov cl, byte ptr [esi+0x589]
        cmp cl, 0x1
        push edi
        jz epilogue
        mov eax, dword ptr [esi+0x4ac]
        mov ebp, 0x5
        cmp eax, ebp
        jl epilogue
        mov eax, dword ptr [esi+0xe0]
        cmp dword ptr [eax+0x14], ebp
        mov eax, dword ptr [esp+0x1c]
        jnz dispatch
        cmp eax, 0x3
        jz dispatch
        cmp eax, 0x1b
        jz dispatch
        cmp eax, 0x22
        jz dispatch
        cmp eax, 0x28
        jnz epilogue
dispatch:
        cmp eax, 0x77
        ja epilogue
        jmp dword ptr [eax*4 + 0x55ada4]

        /* case 0 */
        mov ecx, esi
        call FUN_0055b440
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 1 */
        mov ecx, esi
        call FUN_0055b070
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 2 */
        lea ebx, [esi+0x730]
        mov ecx, ebx
        call FUN_0041fd80
        test eax, eax
        jnz c2_done
        mov al, byte ptr [esi+0x70c]
        test al, al
        jnz c2_done
        mov ecx, dword ptr [g_7dd268]
        mov edx, dword ptr [ecx+0x40ee8]
        mov eax, dword ptr [edx+0x48]
        test eax, eax
        jz c2_done
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77dc40
        push 0x2
        call FUN_004ebcf0
        add esp, 0x18
        mov edi, eax
        push edi
        mov ecx, ebx
        call FUN_0041fcd0
        push 0x0
        mov ecx, edi
        call FUN_004ebe90
c2_done:
        pop edi
        mov byte ptr [esi+0x70c], 0x1
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 3 */
        mov eax, dword ptr [g_7dd268]
        mov ecx, dword ptr [eax+0x40ee8]
        mov eax, dword ptr [ecx+0x48]
        test eax, eax
        jz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77dc18
        jmp tail_ad86

        /* case 4 */
        fld dword ptr [g_f_77b99c]
        push 0x0
        fadd qword ptr [esi+0x6e8]
        fstp qword ptr [esp+0x14]
        call FUN_00707e70
        fld qword ptr [esp+0x10]
        fcompp
        mov ebp, 0x6
        fnstsw ax
        test ah, 0x1
        jnz c4_42
        cmp dword ptr [esi+0x708], ebp
        jz epilogue
c4_42:
        cmp dword ptr [esi+0x708], ebp
        jz c4_69
        lea edi, [esi+0x738]
        mov ecx, edi
        call FUN_0041fd80
        test eax, eax
        jz c4_69
        mov ecx, edi
        call FUN_0041fd80
        mov ecx, eax
        call FUN_004ebee0
c4_69:
        lea ebx, [esi+0x738]
        mov ecx, ebx
        call FUN_0041fd80
        test eax, eax
        jnz f37
        push eax
        call FUN_00707e70
        fstp qword ptr [esi+0x6e8]
        mov edx, dword ptr [g_7dd268]
        mov eax, dword ptr [edx+0x40ee8]
        mov ecx, dword ptr [eax+0x48]
        test ecx, ecx
        jz f37
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77dbec
        push 0x2
        call FUN_004ebcf0
        add esp, 0x18
        mov edi, eax
        push edi
        mov ecx, ebx
        call FUN_0041fcd0
        push 0x0
        mov ecx, edi
        call FUN_004ebe90
        pop edi
        mov dword ptr [esi+0x708], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 5 */
        fld dword ptr [g_f_77b99c]
        push 0x0
        fadd qword ptr [esi+0x6e8]
        fstp qword ptr [esp+0x14]
        call FUN_00707e70
        fcomp qword ptr [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jnz epilogue
        cmp dword ptr [esi+0x708], ebp
        jge epilogue
        push 0x0
        call FUN_00707e70
        fstp qword ptr [esi+0x6e8]
        lea ebx, [esi+0x738]
        mov ecx, ebx
        call FUN_0041fd80
        test eax, eax
        jnz f37
        mov ecx, dword ptr [g_7dd268]
        mov edx, dword ptr [ecx+0x40ee8]
        mov eax, dword ptr [edx+0x48]
        test eax, eax
        jz f37
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77dbc4
        push 0x2
        call FUN_004ebcf0
        add esp, 0x18
        mov edi, eax
        push edi
        mov ecx, ebx
        call FUN_0041fcd0
        push 0x0
        mov ecx, edi
        call FUN_004ebe90
        pop edi
        mov dword ptr [esi+0x708], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 6 */
        fld dword ptr [g_f_77b99c]
        push 0x0
        fadd qword ptr [esi+0x6e8]
        fstp qword ptr [esp+0x14]
        call FUN_00707e70
        fcomp qword ptr [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jnz epilogue
        mov eax, dword ptr [esi+0x708]
        mov ebp, 0x4
        cmp eax, ebp
        jge epilogue
        push 0x0
        call FUN_00707e70
        fstp qword ptr [esi+0x6e8]
        lea ebx, [esi+0x738]
        mov ecx, ebx
        call FUN_0041fd80
        test eax, eax
        jnz f37
        mov eax, dword ptr [g_7dd268]
        mov ecx, dword ptr [eax+0x40ee8]
        mov eax, dword ptr [ecx+0x48]
        test eax, eax
        jz f37
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77dba0
        push 0x2
        call FUN_004ebcf0
        add esp, 0x18
        mov edi, eax
        push edi
        mov ecx, ebx
        call FUN_0041fcd0
        push 0x0
        mov ecx, edi
        call FUN_004ebe90
f37:
        pop edi
        mov dword ptr [esi+0x708], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 7 */
        pop edi
        mov dword ptr [esi+0x708], 0x3
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 8 */
        mov ecx, esi
        call FUN_0055b480
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 9 */
        mov ecx, esi
        call FUN_0055b130
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 10 */
        mov ecx, esi
        call FUN_0055b170
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 11 */
        mov ecx, esi
        call FUN_0055b0b0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 12 */
        test cl, cl
        jnz epilogue
        mov edx, dword ptr [esi+0x384]
        mov al, byte ptr [edx+0x2f8]
        test al, al
        jnz epilogue
        push 0x1
        mov ecx, esi
        call FUN_0055b280
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 13 */
        push 0x0
        mov ecx, esi
        call FUN_0055b280
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 14 */
        mov ecx, esi
        call FUN_0055b1d0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 15 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77db88
        push 0x3
        jmp tail_ad88

        /* case 16 */
        mov eax, dword ptr [g_7dd268]
        mov ecx, dword ptr [eax+0x40ee8]
        mov eax, dword ptr [ecx+0x48]
        test eax, eax
        jz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77db60
        jmp tail_ad86

        /* case 17 */
        mov edx, dword ptr [g_7dd268]
        mov eax, dword ptr [edx+0x40ee8]
        mov ecx, dword ptr [eax+0x48]
        test ecx, ecx
        jz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77db38
        jmp tail_ad86

        /* case 18 */
        mov ecx, esi
        call FUN_0055b300
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 19 */
        mov ecx, esi
        call FUN_0055b330
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 20 */
        mov ecx, esi
        call FUN_0055b360
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 21 */
        lea edi, [esi+0x710]
        mov ecx, edi
        call FUN_0041fd80
        test eax, eax
        jnz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77db18
        push 0x3
        call FUN_004ebcf0
        add esp, 0x18
        mov esi, eax
        push esi
        mov ecx, edi
        call FUN_0041fcd0
        push 0x1
        mov ecx, esi
        call FUN_004ebe90
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 22 */
        add esi, 0x710
        mov ecx, esi
        call FUN_0041fd80
        test eax, eax
        jz epilogue
        mov ecx, esi
        call FUN_0041fd80
        mov ecx, eax
        call FUN_004ebee0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 23 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77dafc
        push 0x3
        jmp tail_ad88

        /* case 24 */
        fld dword ptr [g_f_77b9a0]
        push 0x0
        fadd qword ptr [esi+0x6f0]
        fstp qword ptr [esp+0x14]
        call FUN_00707e70
        fcomp qword ptr [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jnz epilogue
        push 0x0
        call FUN_00707e70
        fstp qword ptr [esi+0x6f0]
        mov ecx, dword ptr [g_7dd268]
        mov edx, dword ptr [ecx+0x40ee8]
        mov eax, dword ptr [edx+0x48]
        test eax, eax
        jz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77dad0
        jmp tail_ad86

        /* case 25 */
        fld dword ptr [g_f_77b9ac]
        push 0x0
        fadd qword ptr [esi+0x6f8]
        fstp qword ptr [esp+0x14]
        call FUN_00707e70
        fcomp qword ptr [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jnz epilogue
        push 0x0
        call FUN_00707e70
        fstp qword ptr [esi+0x6f8]
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77dab0
        push 0x3
        jmp tail_ad88

        /* case 26 */
        fld dword ptr [g_f_77b9ac]
        push 0x0
        fadd qword ptr [esi+0x6f8]
        fstp qword ptr [esp+0x14]
        call FUN_00707e70
        fcomp qword ptr [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jnz epilogue
        push 0x0
        call FUN_00707e70
        fstp qword ptr [esi+0x6f8]
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77da8c
        push 0x3
        jmp tail_ad88

        /* case 27 */
        fld dword ptr [g_f_77b9ac]
        push 0x0
        fadd qword ptr [esi+0x6f8]
        fstp qword ptr [esp+0x14]
        call FUN_00707e70
        fcomp qword ptr [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jnz epilogue
        push 0x0
        call FUN_00707e70
        fstp qword ptr [esi+0x6f8]
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77da68
        push 0x3
        jmp tail_ad88

        /* case 28 */
        fld dword ptr [g_f_77b9ac]
        push 0x0
        fadd qword ptr [esi+0x6f8]
        fstp qword ptr [esp+0x14]
        call FUN_00707e70
        fcomp qword ptr [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jnz epilogue
        push 0x0
        call FUN_00707e70
        fstp qword ptr [esi+0x6f8]
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77da48
        push 0x3
        jmp tail_ad88

        /* case 29 */
        lea edi, [esi+0x718]
        mov ecx, edi
        call FUN_0041fd80
        test eax, eax
        jnz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77da30
        push 0x3
        call FUN_004ebcf0
        add esp, 0x18
        mov esi, eax
        push esi
        mov ecx, edi
        call FUN_0041fcd0
        push 0x0
        mov ecx, esi
        call FUN_004ebe90
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 30 */
        add esi, 0x718
        mov ecx, esi
        call FUN_0041fd80
        test eax, eax
        jz epilogue
        mov ecx, esi
        call FUN_0041fd80
        mov ecx, eax
        call FUN_004ebee0
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77da14
        push 0x3
        jmp tail_ad88

        /* case 31 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d9f4
        push 0x3
        jmp tail_ad88

        /* case 32 */
        push 0x1
        mov ecx, esi
        call FUN_0055b390
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 33 */
        push 0x0
        mov ecx, esi
        call FUN_0055b390
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 34 */
        mov ecx, esi
        call FUN_0055b200
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 35 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d9d4
        push 0x3
        jmp tail_ad88

        /* case 36 */
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [g_7dab40]
        xor eax, edx
        mov ecx, dword ptr [eax+0x40]
        jmp xor_shared

        /* case 37 */
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [g_7dab40]
        xor edx, ecx
        mov ecx, dword ptr [edx+0x40]
xor_shared:
        xor ecx, 0x85739531
        jz xor_done
        push 0x41700000
        call FUN_00628a80
xor_done:
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d9b8
        push 0x3
        jmp tail_ad88

        /* case 38 */
        mov ecx, dword ptr [g_7dd268]
        mov edx, dword ptr [ecx+0x40ee8]
        mov eax, dword ptr [edx+0x48]
        test eax, eax
        jz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d998
        jmp tail_ad86

        /* case 39 */
        mov ecx, esi
        call FUN_0055b4c0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 40 */
        mov eax, dword ptr [g_7dd268]
        mov ecx, dword ptr [eax+0x40ee8]
        mov eax, dword ptr [ecx+0x48]
        test eax, eax
        jz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d97c
        jmp tail_ad86

        /* case 41 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d95c
        push 0x3
        jmp tail_ad88

        /* case 42 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d93c
        push 0x3
        jmp tail_ad88

        /* case 43 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d920
        push 0x3
        jmp tail_ad88

        /* case 44 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d904
        push 0x3
        jmp tail_ad88

        /* case 45 */
        push 0x1
        mov ecx, esi
        call FUN_0055af90
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 46 */
        push 0x0
        mov ecx, esi
        call FUN_0055af90
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 47 */
        mov ecx, esi
        call FUN_00558af0
        mov edx, dword ptr [g_7dd268]
        mov eax, dword ptr [edx+0x40ee8]
        mov ecx, dword ptr [eax+0x48]
        test ecx, ecx
        jz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d8dc
        jmp tail_ad86

        /* case 48 */
        mov ecx, esi
        call FUN_00558af0
        mov ecx, dword ptr [g_7dd268]
        mov edx, dword ptr [ecx+0x40ee8]
        mov eax, dword ptr [edx+0x48]
        test eax, eax
        jz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d8ac
        jmp tail_ad86

        /* case 49 */
        mov eax, dword ptr [g_7dd268]
        mov ecx, dword ptr [eax+0x40ee8]
        mov eax, dword ptr [ecx+0x48]
        test eax, eax
        jz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d884
        jmp tail_ad86

        /* case 50 */
        mov edx, dword ptr [g_7dd268]
        mov eax, dword ptr [edx+0x40ee8]
        mov ecx, dword ptr [eax+0x48]
        test ecx, ecx
        jz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d85c
        jmp tail_ad86

        /* case 51 */
        mov ecx, dword ptr [g_7dd268]
        mov edx, dword ptr [ecx+0x40ee8]
        mov eax, dword ptr [edx+0x48]
        test eax, eax
        jz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d82c
        jmp tail_ad86

        /* case 52 */
        mov eax, dword ptr [g_7dd268]
        mov ecx, dword ptr [eax+0x40ee8]
        mov eax, dword ptr [ecx+0x48]
        test eax, eax
        jz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d804
        jmp tail_ad86

        /* case 53 */
        mov edx, dword ptr [g_7dd268]
        mov eax, dword ptr [edx+0x40ee8]
        mov ecx, dword ptr [eax+0x48]
        test ecx, ecx
        jz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d7dc
        jmp tail_ad86

        /* case 54 */
        mov ecx, dword ptr [g_7dd268]
        mov edx, dword ptr [ecx+0x40ee8]
        mov eax, dword ptr [edx+0x48]
        test eax, eax
        jz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d7b4
        jmp tail_ad86

        /* case 55 */
        mov eax, dword ptr [g_7dd268]
        mov ecx, dword ptr [eax+0x40ee8]
        mov eax, dword ptr [ecx+0x48]
        test eax, eax
        jz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d788
        jmp tail_ad86

        /* case 56 */
        mov edx, dword ptr [g_7dd268]
        mov eax, dword ptr [edx+0x40ee8]
        mov ecx, dword ptr [eax+0x48]
        test ecx, ecx
        jz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d760
        jmp tail_ad86

        /* case 57 */
        mov ecx, dword ptr [g_7dd268]
        mov edx, dword ptr [ecx+0x40ee8]
        mov eax, dword ptr [edx+0x48]
        test eax, eax
        jz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d738
        jmp tail_ad86

        /* case 58 */
        mov eax, dword ptr [g_7dd268]
        mov ecx, dword ptr [eax+0x40ee8]
        mov eax, dword ptr [ecx+0x48]
        test eax, eax
        jz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d70c
        jmp tail_ad86

        /* case 59 */
        mov edx, dword ptr [g_7dd268]
        mov eax, dword ptr [edx+0x40ee8]
        mov ecx, dword ptr [eax+0x48]
        test ecx, ecx
        jz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d6e8
        jmp tail_ad86

        /* case 60 */
        mov ecx, dword ptr [g_7dd268]
        mov edx, dword ptr [ecx+0x40ee8]
        mov eax, dword ptr [edx+0x48]
        test eax, eax
        jz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d6c4
        jmp tail_ad86

        /* case 61 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d694
        push 0x3
        jmp tail_ad88

        /* case 62 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d678
        push 0x3
        jmp tail_ad88

        /* case 63 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d658
        push 0x3
        jmp tail_ad88

        /* case 64 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d638
        push 0x3
        jmp tail_ad88

        /* case 65 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d618
        push 0x3
        jmp tail_ad88

        /* case 66 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d5f8
        push 0x3
        jmp tail_ad88

        /* case 67 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d5d8
        push 0x3
        jmp tail_ad88

        /* case 68 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d5b4
        push 0x3
        jmp tail_ad88

        /* case 69 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d590
        push 0x3
        jmp tail_ad88

        /* case 70 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d56c
        push 0x3
        jmp tail_ad88

        /* case 71 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d548
        push 0x3
        jmp tail_ad88

        /* case 72 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d524
        push 0x3
        jmp tail_ad88

        /* case 73 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d500
        push 0x3
        jmp tail_ad88

        /* case 74 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d4dc
        push 0x3
        jmp tail_ad88

        /* case 75 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d4b8
        push 0x3
        jmp tail_ad88

        /* case 76 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d494
        push 0x3
        jmp tail_ad88

        /* case 77 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d470
        push 0x3
        jmp tail_ad88

        /* case 78 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d44c
        push 0x3
        jmp tail_ad88

        /* case 79 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d428
        push 0x3
        jmp tail_ad88

        /* case 80 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d408
        push 0x3
        jmp tail_ad88

        /* case 81 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d3e8
        push 0x3
        jmp tail_ad88

        /* case 82 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d3c8
        push 0x3
        jmp tail_ad88

        /* case 83 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d3a4
        push 0x3
        jmp tail_ad88

        /* case 84 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d37c
        push 0x3
        jmp tail_ad88

        /* case 85 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d354
        push 0x3
        jmp tail_ad88

        /* case 86 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d32c
        push 0x3
        jmp tail_ad88

        /* case 87 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d304
        push 0x3
        jmp tail_ad88

        /* case 88 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d2dc
        push 0x3
        jmp tail_ad88

        /* case 89 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d2b4
        push 0x3
        jmp tail_ad88

        /* case 90 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77b26c
        push 0x0
        call FUN_004ebcf0
        add esp, 0x18
        test eax, eax
        jz epilogue
        mov ecx, dword ptr [g_7f2d2c]
        test ecx, ecx
        jz epilogue
        push 0x3ecccccd
        push 0x3dcccccd
        push 0x3dcccccd
        push eax
        call FUN_006476a0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4

        /* case 91 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d28c
        push 0x3
        jmp tail_ad88

        /* case 92 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d264
        push 0x3
        jmp tail_ad88

        /* case 93 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d23c
        push 0x3
        jmp tail_ad88

        /* case 94 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d214
        push 0x3
        jmp tail_ad88

        /* case 95 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d1e8
        push 0x3
        jmp tail_ad88

        /* case 96 */
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d1bc
        push 0x3
        jmp tail_ad88

        /* case 97 */
        mov eax, dword ptr [g_7dd268]
        mov ecx, dword ptr [eax+0x40ee8]
        mov eax, dword ptr [ecx+0x48]
        test eax, eax
        jz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d190
        jmp tail_ad86

        /* case 98 */
        mov edx, dword ptr [g_7dd268]
        mov eax, dword ptr [edx+0x40ee8]
        mov ecx, dword ptr [eax+0x48]
        test ecx, ecx
        jz epilogue
        push 0x3f4ccccd
        push 0x3f000000
        push 0x3f800000
        push 0x3f800000
        push offset g_s_77d164

tail_ad86:
        push 0x2
tail_ad88:
        call FUN_004ebcf0
        add esp, 0x18
        push 0x0
        mov ecx, eax
        call FUN_004ebe90
epilogue:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x8
        ret 0x4
    }
}
