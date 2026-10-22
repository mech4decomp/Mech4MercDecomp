/* FUN_0042f410 @ 0x0042F410, size 4675 bytes
 * __thiscall-like dispatcher (arg at [ebp+8], this in ecx->ebx).
 * Switch on (vtable call result - 3): case 3, case 4, cases 5/6/7, default.
 * All mnemonics encode natively; only the in-function jump-table DATA
 * (relocated dword entries at 0x43065c) is emitted as __emit 0x00 bytes.
 */

extern int g_7b2220;
extern unsigned char g_7b9608;
extern char g_s_7b9460[];
extern int g_7da864;
extern float g_f_7da868;
extern float g_f_76d064;
extern float g_f_76df00;
extern float g_f_76d070;
extern float g_f_76c5b0;
extern float g_f_76e110;
extern float g_f_76d5f0;
extern float g_f_76d5f4;
extern float g_f_76e22c;
extern float g_f_76d3c8;
extern float g_f_7b220c;
extern int g_7d98fc;
extern int g_7da5e0;
extern int g_7da5dc;
extern int g_7b95fc;
extern int g_7b95f0;
extern int g_7b95f8;
extern int g_7b9600;
extern int g_7b95f4;
extern int g_7b95ec;
extern int g_7b960c;
extern char g_s_76e1f4[];

extern void __cdecl FUN_00428850(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_00482220(void);
extern void __cdecl FUN_0040ca10(void);
extern void __cdecl FUN_0047cfe0(void);
extern void __cdecl FUN_004286c0(void);
extern void __cdecl FUN_0040c410(void);
extern void __cdecl FUN_00430740(void);
extern void __cdecl FUN_00491340(void);
extern void __cdecl FUN_004306f0(void);
extern void __cdecl FUN_00430670(void);
extern void __cdecl FUN_00419460(void);
extern void __cdecl FUN_00428810(void);
extern void __cdecl FUN_00428830(void);
extern void __cdecl FUN_00428730(void);
extern void __cdecl FUN_0040c610(void);
extern void __cdecl FUN_006fab90(void);

void __declspec(naked) FUN_0042f410(void)
{
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0xec
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0x8]
        mov eax, dword ptr [esi]
        mov ebx, ecx
        push edi
        mov ecx, esi
        mov dword ptr [ebp - 0x2c], ebx
        call dword ptr [eax + 0x1c]
        xor edi, edi
        cmp eax, edi
        mov dword ptr [ebp - 0x7c], eax
        jz epilogue
        cmp dword ptr [g_7b2220], edi
        jz epilogue
        cmp byte ptr [g_7b9608], 0x1
        jz epilogue
        mov ecx, dword ptr [ebx + 0x58]
        mov dword ptr [ebp - 0x74], ecx
        push offset g_s_7b9460
        lea ecx, [ebp + 0xffffff14]
        call FUN_00428850
        fild dword ptr [g_7da864]
        mov eax, dword ptr [ebx + 0x14]
        mov edx, dword ptr [eax + 0x8]
        fmul dword ptr [g_f_7da868]
        mov eax, dword ptr [esi]
        mov ecx, esi
        mov dword ptr [ebp - 0x18], 0x3f800000
        fstp dword ptr [ebp - 0x34]
        mov dword ptr [ebp - 0x38], edx
        mov byte ptr [ebp - 0xc], 0x0
        mov byte ptr [ebp - 0x10], 0x0
        call dword ptr [eax + 0xc]
        add eax, -0x3
        cmp eax, 0x4
        ja default_case
        jmp dword ptr [eax*4 + 0x43065c]

case3:
        lea ecx, [esi + 0x48]
        push ecx
        lea ecx, [ebp - 0x54]
        call FUN_00419480
        lea edx, [ebp - 0x14]
        push edx
        lea eax, [ebp - 0x20]
        push eax
        mov ecx, esi
        call FUN_00482220
        fld dword ptr [g_f_76d064]
        fdiv dword ptr [ebp - 0x14]
        mov ecx, dword ptr [ebp - 0x74]
        xor eax, eax
        cmp ecx, edi
        mov dword ptr [ebp - 0x58], eax
        mov dword ptr [ebp - 0x28], edi
        fstp dword ptr [ebp - 0x3c]
        jle epilogue
case3_loop:
        mov ecx, dword ptr [g_7d98fc]
        mov edx, dword ptr [ecx]
        cmp byte ptr [edx + eax*1], 0x0
        jz case3_f924
        fld dword ptr [ebp - 0x4c]
        mov esi, dword ptr [ebx + 0x48]
        fsub dword ptr [ebp - 0x38]
        mov eax, dword ptr [ebp - 0x28]
        xor edi, edi
        mov byte ptr [ebp - 0x1], 0x0
        fstp dword ptr [ebp - 0x14]
        mov dword ptr [ebp - 0x8], edi
        add esi, eax
case3_f50e:
        xor eax, eax
        mov al, byte ptr [esi]
        lea ecx, [eax + eax*2]
        mov eax, dword ptr [ebx + 0x14]
        mov edx, dword ptr [eax + ecx*4]
        lea eax, [eax + ecx*4]
        mov dword ptr [ebp - 0x48], edx
        mov ecx, dword ptr [eax + 0x4]
        mov dword ptr [ebp - 0x44], ecx
        mov edx, dword ptr [eax + 0x8]
        lea eax, [ebp - 0x54]
        push eax
        lea ecx, [ebp - 0x48]
        push ecx
        lea ecx, [ebp - 0x48]
        mov dword ptr [ebp - 0x40], edx
        call FUN_0040ca10
        fld dword ptr [ebp - 0x48]
        fmul dword ptr [ebp - 0x3c]
        mov edx, dword ptr [g_7da5e0]
        mov eax, dword ptr [edx]
        lea ecx, [edi + eax*1]
        fstp dword ptr [ecx]
        fld dword ptr [ebp - 0x40]
        fmul dword ptr [ebp - 0x3c]
        fstp dword ptr [ebp - 0x18]
        mov eax, dword ptr [ebp - 0x18]
        mov dword ptr [ecx + 0x4], eax
        fld dword ptr [ecx]
        fcomp dword ptr [g_f_76df00]
        fnstsw ax
        test ah, 0x1
        jnz case3_f5a1
        fld dword ptr [ecx]
        fcomp dword ptr [g_f_76d070]
        fnstsw ax
        test ah, 0x41
        jz case3_f5a1
        fld dword ptr [ebp - 0x18]
        fcomp dword ptr [g_f_76df00]
        fnstsw ax
        test ah, 0x1
        jnz case3_f5a1
        fld dword ptr [ebp - 0x18]
        fcomp dword ptr [g_f_76d070]
        fnstsw ax
        test ah, 0x41
        jz case3_f5a1
        mov byte ptr [ebp - 0x1], 0x1
case3_f5a1:
        fld dword ptr [ebp - 0x34]
        fcomp dword ptr [g_f_76c5b0]
        fnstsw ax
        test ah, 0x41
        jnz case3_f5ee
        fld dword ptr [ebp - 0x34]
        fchs
        fstp dword ptr [ebp - 0x5c]
        fld dword ptr [ecx]
        fcomp dword ptr [ebp - 0x5c]
        fnstsw ax
        test ah, 0x1
        jnz case3_f5eb
        fld dword ptr [ecx]
        fcomp dword ptr [ebp - 0x34]
        fnstsw ax
        test ah, 0x41
        jz case3_f5eb
        fld dword ptr [ebp - 0x18]
        fcomp dword ptr [ebp - 0x5c]
        fnstsw ax
        test ah, 0x1
        jnz case3_f5eb
        fld dword ptr [ebp - 0x18]
        fcomp dword ptr [ebp - 0x34]
        fnstsw ax
        test ah, 0x41
        jnz case3_f5ee
case3_f5eb:
        inc dword ptr [ebp - 0x8]
case3_f5ee:
        add edi, 0x8
        inc esi
        cmp edi, 0x18
        jl case3_f50e
        mov eax, dword ptr [ebp - 0x8]
        test eax, eax
        jnz case3_f921
        cmp byte ptr [ebp - 0x1], 0x1
        jz case3_f61f
        push 0x3
        push edx
        call FUN_0047cfe0
        add esp, 0x8
        cmp al, 0x1
        jnz case3_f921
case3_f61f:
        mov eax, dword ptr [ebp + 0x8]
        fld dword ptr [eax + 0x8]
        add eax, 0xc
        fstp dword ptr [ebp - 0x1c]
        push eax
        lea ecx, [ebp - 0x70]
        mov dword ptr [ebp - 0x68], 0xbf800000
        mov dword ptr [ebp - 0x6c], 0xbf800000
        mov dword ptr [ebp - 0x70], 0xbf800000
        mov dword ptr [ebp - 0x64], 0xbf800000
        call FUN_004286c0
        fld dword ptr [ebp - 0x70]
        fmul dword ptr [ebp - 0x1c]
        mov eax, dword ptr [g_7b95fc]
        mov edi, dword ptr [ebp - 0x2c]
        mov dword ptr [ebp - 0x64], 0x3f800000
        fstp dword ptr [ebp - 0x70]
        mov dword ptr [ebp - 0x8], 0x0
        fld dword ptr [ebp - 0x6c]
        fmul dword ptr [ebp - 0x1c]
        fstp dword ptr [ebp - 0x6c]
        fld dword ptr [ebp - 0x68]
        fmul dword ptr [ebp - 0x1c]
        fstp dword ptr [ebp - 0x68]
case3_f681:
        mov ecx, dword ptr [ebp - 0x8]
        mov esi, dword ptr [ebp - 0x10]
        lea edx, [ecx*8]
        mov ecx, dword ptr [g_7da5e0]
        mov ecx, dword ptr [ecx]
        fld dword ptr [ecx + edx*1]
        add ecx, edx
        fadd dword ptr [g_f_76d070]
        and esi, 0xff
        lea ebx, [esi + eax*1]
        fstp dword ptr [ecx]
        fld dword ptr [ecx + 0x4]
        fadd dword ptr [g_f_76d070]
        fstp dword ptr [ecx + 0x4]
        mov cl, byte ptr [ebp - 0x10]
        inc cl
        mov byte ptr [ebp - 0x10], cl
        mov ecx, dword ptr [g_7b95f0]
        cmp ebx, dword ptr [ecx + 0x4]
        jnc epilogue
        mov ecx, dword ptr [ecx]
        mov bl, byte ptr [ebp - 0xc]
        add ecx, esi
        mov byte ptr [ecx + eax*1], bl
        lea eax, [ebp - 0x70]
        mov dword ptr [ebp - 0x24], eax
        fld dword ptr [g_f_76e110]
        mov esi, dword ptr [ebp - 0x24]
        fld dword ptr [esi + 0xc]
        mov ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl ecx, 0x1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp - 0x78]
        xor ecx, ecx
        mov ebx, dword ptr [ebp - 0x78]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov dword ptr [ebp - 0x30], ebx
        fld dword ptr [esi]
        mov ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl ecx, 0x1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp - 0x78]
        xor ecx, ecx
        mov ebx, dword ptr [ebp - 0x78]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov ecx, dword ptr [ebp - 0x30]
        shl ecx, 0x8
        or ecx, ebx
        mov dword ptr [ebp - 0x30], ecx
        fld dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x4]
        fadd st(0), st(1)
        rcl ecx, 0x1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp - 0x78]
        xor ecx, ecx
        mov ebx, dword ptr [ebp - 0x78]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov ecx, dword ptr [ebp - 0x30]
        shl ecx, 0x8
        or ecx, ebx
        mov dword ptr [ebp - 0x30], ecx
        mov ecx, dword ptr [esi + 0x8]
        fadd dword ptr [esi + 0x8]
        rcl ecx, 0x1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp - 0x78]
        xor ecx, ecx
        mov ebx, dword ptr [ebp - 0x78]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov ecx, dword ptr [ebp - 0x30]
        shl ecx, 0x8
        or ecx, ebx
        mov dword ptr [ebp - 0x30], ecx
        mov ecx, dword ptr [g_7da5e0]
        mov esi, dword ptr [ecx]
        mov al, byte ptr [ebp - 0xc]
        mov ecx, dword ptr [g_7b95f8]
        add edx, esi
        mov esi, dword ptr [ebp - 0xc]
        and esi, 0xff
        inc al
        mov ebx, edx
        mov edx, dword ptr [g_7b9600]
        mov byte ptr [ebp - 0xc], al
        lea eax, [esi + edx*1]
        cmp eax, dword ptr [ecx + 0x4]
        jnc epilogue
        mov edx, dword ptr [edi + 0x48]
        add edx, dword ptr [ebp - 0x8]
        mov edi, dword ptr [ebp - 0x28]
        xor ecx, ecx
        mov cl, byte ptr [edx + edi*1]
        mov edi, dword ptr [ebp - 0x2c]
        lea edx, [ecx + ecx*2]
        mov ecx, dword ptr [edi + 0x14]
        lea ecx, [ecx + edx*4]
        lea edx, [eax + eax*2]
        mov eax, dword ptr [g_7b95f8]
        push ecx
        mov ecx, dword ptr [eax]
        lea ecx, [ecx + edx*4]
        call FUN_0040c410
        mov edx, dword ptr [g_7b9600]
        mov ecx, dword ptr [g_7b95f4]
        lea eax, [esi + edx*1]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebx]
        mov dword ptr [edx + eax*8], ecx
        mov ecx, dword ptr [ebx + 0x4]
        mov dword ptr [edx + eax*8 + 0x4], ecx
        mov edx, dword ptr [g_7b95ec]
        mov ecx, dword ptr [edx]
        mov edx, dword ptr [ebp - 0x30]
        mov dword ptr [ecx + eax*4], edx
        cmp byte ptr [ebp - 0x10], 0xfc
        jc case3_f909
        mov al, byte ptr [ebp - 0xc]
        xor bl, bl
        cmp al, bl
        jbe case3_f909
        mov eax, dword ptr [ebp - 0x10]
        mov ecx, dword ptr [ebp - 0xc]
        and eax, 0xff
        and ecx, 0xff
        mov dword ptr [ebp - 0x1c], eax
        mov dword ptr [ebp - 0x24], ecx
        mov ecx, dword ptr [g_7b960c]
        push 0x4
        lea eax, [ebp - 0x18]
        mov dword ptr [ebp - 0x18], 0x3
        mov edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0x24]
        mov ecx, dword ptr [edi + 0x30]
        and ecx, 0xf
        inc ecx
        push ecx
        mov ecx, dword ptr [ebp - 0x7c]
        call FUN_00430740
        mov ecx, dword ptr [g_7b960c]
        mov edx, dword ptr [ecx]
        push 0x4
        push offset g_7b9600
        call dword ptr [edx + 0x24]
        mov edx, dword ptr [eax]
        push 0x4
        lea ecx, [ebp - 0x24]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x24]
        mov ecx, dword ptr [g_7b960c]
        mov edx, dword ptr [ecx]
        push 0x4
        push offset g_7b95fc
        call dword ptr [edx + 0x24]
        mov edx, dword ptr [eax]
        push 0x4
        lea ecx, [ebp - 0x1c]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x24]
        mov esi, dword ptr [g_7b9600]
        mov edx, dword ptr [ebp - 0x24]
        mov eax, dword ptr [g_7b95fc]
        mov ecx, dword ptr [ebp - 0x1c]
        add esi, edx
        add eax, ecx
        mov dword ptr [g_7b9600], esi
        mov dword ptr [g_7b95fc], eax
        mov byte ptr [ebp - 0x10], bl
        mov byte ptr [ebp - 0xc], bl
        jmp case3_f90e
case3_f909:
        mov eax, dword ptr [g_7b95fc]
case3_f90e:
        mov ecx, dword ptr [ebp - 0x8]
        inc ecx
        cmp ecx, 0x3
        mov dword ptr [ebp - 0x8], ecx
        jl case3_f681
        mov ebx, dword ptr [ebp - 0x2c]
case3_f921:
        mov eax, dword ptr [ebp - 0x58]
case3_f924:
        mov edx, dword ptr [ebp - 0x28]
        mov ecx, dword ptr [ebp - 0x74]
        inc eax
        add edx, 0x3
        cmp eax, ecx
        mov dword ptr [ebp - 0x58], eax
        mov dword ptr [ebp - 0x28], edx
        jge common_tail
        jmp case3_loop

case4:
        lea eax, [esi + 0x48]
        push eax
        lea ecx, [ebp + 0xffffff14]
        call FUN_00419460
        mov ecx, dword ptr [ebp + 0xffffff20]
        mov edx, dword ptr [ebp + 0xffffff30]
        mov eax, dword ptr [ebp + 0xffffff40]
        mov dword ptr [ebp - 0x54], ecx
        mov ecx, dword ptr [esi + 0x94]
        mov dword ptr [ebp - 0x50], edx
        lea edx, [ebp + 0xffffff60]
        mov dword ptr [ebp - 0x78], ecx
        push edx
        lea ecx, [ebp + 0xffffff14]
        mov dword ptr [ebp - 0x4c], eax
        call FUN_00428810
        lea eax, [ebp + 0xffffff78]
        push eax
        lea ecx, [ebp + 0xffffff14]
        call FUN_00428830
        lea ecx, [ebp + 0xffffff6c]
        push ecx
        lea ecx, [ebp + 0xffffff14]
        call FUN_00428730
        mov ecx, dword ptr [ebp - 0x74]
        xor eax, eax
        cmp ecx, edi
        mov dword ptr [ebp - 0x58], eax
        mov dword ptr [ebp - 0x28], edi
        jle epilogue
        mov dword ptr [ebp - 0x3c], edi
case4_loop:
        mov edx, dword ptr [g_7d98fc]
        mov ecx, dword ptr [edx]
        cmp byte ptr [ecx + eax*1], 0x0
        mov dword ptr [ebp - 0x30], edi
        mov dword ptr [ebp - 0x20], edi
        jz case4_ff54
        mov ecx, dword ptr [ebp - 0x3c]
        mov esi, dword ptr [ebx + 0x5c]
        add esi, ecx
        lea edx, [ebp - 0x54]
        push edx
        mov ecx, esi
        mov byte ptr [ebp - 0x1], 0x0
        call FUN_0040c610
        fcomp dword ptr [esi + 0xc]
        fnstsw ax
        test ah, 0x41
        jnz case4_ff4e
        mov eax, dword ptr [ebp - 0x2c]
        mov ebx, dword ptr [eax + 0x48]
        mov eax, dword ptr [ebp - 0x28]
        xor edi, edi
        mov dword ptr [ebp - 0x8], edi
        mov dword ptr [ebp - 0x1c], edi
        add ebx, eax
case4_fa10:
        mov edx, dword ptr [ebp - 0x2c]
        xor eax, eax
        mov al, byte ptr [ebx]
        lea ecx, [eax + eax*2]
        mov eax, dword ptr [edx + 0x14]
        fld dword ptr [eax + ecx*4]
        lea eax, [eax + ecx*4]
        fsub dword ptr [ebp - 0x54]
        fstp dword ptr [ebp - 0x48]
        fld dword ptr [eax + 0x4]
        fsub dword ptr [ebp - 0x50]
        fstp dword ptr [ebp - 0x44]
        fld dword ptr [eax + 0x8]
        fsub dword ptr [ebp - 0x4c]
        fst dword ptr [ebp - 0x40]
        fmul dword ptr [ebp + 0xffffff74]
        fld dword ptr [ebp - 0x44]
        fmul dword ptr [ebp + 0xffffff70]
        faddp st(1), st(0)
        fld dword ptr [ebp + 0xffffff6c]
        fmul dword ptr [ebp - 0x48]
        faddp st(1), st(0)
        fcom dword ptr [g_f_7b220c]
        fnstsw ax
        test ah, 0x41
        jnz case4_fade
        mov ecx, dword ptr [ebp + 0x8]
        fld st(0)
        fcomp dword ptr [ecx + 0x80]
        fnstsw ax
        test ah, 0x41
        jz case4_fa7f
        mov dword ptr [ebp - 0x18], 0x3f800000
        jmp case4_faa2
case4_fa7f:
        fcom dword ptr [ecx + 0x84]
        fnstsw ax
        test ah, 0x1
        jz case4_fa9f
        fld dword ptr [ecx + 0x84]
        fsub st(0), st(1)
        fmul dword ptr [ecx + 0x88]
        fstp dword ptr [ebp - 0x18]
        jmp case4_faa2
case4_fa9f:
        inc dword ptr [ebp - 0x20]
case4_faa2:
        fld dword ptr [ecx + 0x8]
        mov eax, dword ptr [g_7da5dc]
        mov ecx, dword ptr [eax]
        fmul dword ptr [ebp - 0x18]
        mov edx, 0x7f000000
        fmul dword ptr [ebp - 0x18]
        fstp dword ptr [edi + ecx*1]
        fmul dword ptr [ebp - 0x78]
        fadd st(0), st(0)
        fstp dword ptr [ebp - 0x24]
        mov eax, dword ptr [ebp - 0x24]
        sub edx, eax
        mov dword ptr [ebp - 0x14], edx
        fld dword ptr [ebp - 0x14]
        fmul dword ptr [ebp - 0x24]
        fsubr dword ptr [g_f_76d5f0]
        fmul dword ptr [ebp - 0x14]
        fstp dword ptr [ebp - 0x24]
        jmp case4_fafc
case4_fade:
        mov eax, dword ptr [ebp - 0x30]
        fstp st(0)
        inc eax
        mov dword ptr [ebp - 0x30], eax
        mov eax, dword ptr [g_7da5dc]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0x24], 0x3ca3d70a
        mov dword ptr [edi + ecx*1], 0x0
case4_fafc:
        mov edx, dword ptr [g_7da5e0]
        mov eax, dword ptr [edx]
        mov esi, dword ptr [ebp - 0x1c]
        add esi, eax
        lea eax, [ebp - 0x48]
        push eax
        lea ecx, [ebp + 0xffffff60]
        call FUN_0040c610
        mov ecx, dword ptr [g_7da5e0]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0x1c]
        fmul dword ptr [ebp - 0x24]
        lea ecx, [eax + edx*1]
        fstp dword ptr [esi]
        fld dword ptr [ebp + 0xffffff78]
        fmul dword ptr [ebp - 0x48]
        fld dword ptr [ebp - 0x80]
        fmul dword ptr [ebp - 0x40]
        faddp st(1), st(0)
        fld dword ptr [ebp + 0xffffff7c]
        fmul dword ptr [ebp - 0x44]
        faddp st(1), st(0)
        fmul dword ptr [ebp - 0x24]
        fchs
        fstp dword ptr [ebp - 0x14]
        mov edx, dword ptr [ebp - 0x14]
        mov dword ptr [ecx + 0x4], edx
        fld dword ptr [ecx]
        fcomp dword ptr [g_f_76df00]
        fnstsw ax
        test ah, 0x1
        jnz case4_fb97
        fld dword ptr [ecx]
        fcomp dword ptr [g_f_76d070]
        fnstsw ax
        test ah, 0x41
        jz case4_fb97
        fld dword ptr [ebp - 0x14]
        fcomp dword ptr [g_f_76df00]
        fnstsw ax
        test ah, 0x1
        jnz case4_fb97
        fld dword ptr [ebp - 0x14]
        fcomp dword ptr [g_f_76d070]
        fnstsw ax
        test ah, 0x41
        jz case4_fb97
        mov byte ptr [ebp - 0x1], 0x1
case4_fb97:
        fld dword ptr [ebp - 0x34]
        fcomp dword ptr [g_f_76c5b0]
        fnstsw ax
        test ah, 0x41
        jnz case4_fbe4
        fld dword ptr [ebp - 0x34]
        fchs
        fstp dword ptr [ebp - 0x5c]
        fld dword ptr [ecx]
        fcomp dword ptr [ebp - 0x5c]
        fnstsw ax
        test ah, 0x1
        jnz case4_fbe1
        fld dword ptr [ecx]
        fcomp dword ptr [ebp - 0x34]
        fnstsw ax
        test ah, 0x41
        jz case4_fbe1
        fld dword ptr [ebp - 0x14]
        fcomp dword ptr [ebp - 0x5c]
        fnstsw ax
        test ah, 0x1
        jnz case4_fbe1
        fld dword ptr [ebp - 0x14]
        fcomp dword ptr [ebp - 0x34]
        fnstsw ax
        test ah, 0x41
        jnz case4_fbe4
case4_fbe1:
        inc dword ptr [ebp - 0x8]
case4_fbe4:
        mov ecx, dword ptr [ebp - 0x1c]
        add edi, 0x4
        add ecx, 0x8
        inc ebx
        cmp edi, 0xc
        mov dword ptr [ebp - 0x1c], ecx
        jl case4_fa10
        mov eax, dword ptr [ebp - 0x8]
        test eax, eax
        jnz case4_ff4e
        mov ecx, dword ptr [ebp - 0x30]
        mov eax, 0x3
        cmp ecx, eax
        jge case4_ff4e
        cmp dword ptr [ebp - 0x20], eax
        jge case4_ff4e
        cmp byte ptr [ebp - 0x1], 0x1
        jz case4_fc3b
        push eax
        mov eax, dword ptr [g_7da5e0]
        push eax
        call FUN_0047cfe0
        add esp, 0x8
        cmp al, 0x1
        jnz case4_ff4e
case4_fc3b:
        mov esi, dword ptr [g_7b95fc]
        xor edi, edi
case4_fc43:
        mov eax, dword ptr [g_7da5dc]
        mov dword ptr [ebp - 0x68], 0xbf800000
        mov dword ptr [ebp - 0x6c], 0xbf800000
        mov dword ptr [ebp - 0x70], 0xbf800000
        mov dword ptr [ebp - 0x64], 0xbf800000
        mov ecx, dword ptr [eax]
        fld dword ptr [ecx + edi*4]
        mov ecx, dword ptr [g_7da5e0]
        fstp dword ptr [ebp - 0x70]
        mov edx, dword ptr [eax]
        fld dword ptr [edx + edi*4]
        lea edx, [edi*8]
        fstp dword ptr [ebp - 0x6c]
        mov eax, dword ptr [eax]
        fld dword ptr [eax + edi*4]
        mov dword ptr [ebp - 0x64], 0x3f800000
        fstp dword ptr [ebp - 0x68]
        mov eax, dword ptr [ecx]
        fld dword ptr [eax + edx*1]
        mov cl, byte ptr [ebp - 0x10]
        fadd dword ptr [g_f_76d070]
        add eax, edx
        fstp dword ptr [eax]
        fld dword ptr [eax + 0x4]
        fadd dword ptr [g_f_76d070]
        fstp dword ptr [eax + 0x4]
        mov eax, dword ptr [ebp - 0x10]
        and eax, 0xff
        inc cl
        mov byte ptr [ebp - 0x10], cl
        mov ecx, dword ptr [g_7b95f0]
        lea ebx, [eax + esi*1]
        cmp ebx, dword ptr [ecx + 0x4]
        jnc epilogue
        mov ecx, dword ptr [ecx]
        add ecx, eax
        mov al, byte ptr [ebp - 0xc]
        mov byte ptr [ecx + esi*1], al
        lea ecx, [ebp - 0x70]
        mov dword ptr [ebp - 0x20], ecx
        fld dword ptr [g_f_76e110]
        mov esi, dword ptr [ebp - 0x20]
        fld dword ptr [esi + 0xc]
        mov ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl ecx, 0x1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp - 0x60]
        xor ecx, ecx
        mov ebx, dword ptr [ebp - 0x60]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov dword ptr [ebp - 0x38], ebx
        fld dword ptr [esi]
        mov ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl ecx, 0x1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp - 0x60]
        xor ecx, ecx
        mov ebx, dword ptr [ebp - 0x60]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov ecx, dword ptr [ebp - 0x38]
        shl ecx, 0x8
        or ecx, ebx
        mov dword ptr [ebp - 0x38], ecx
        fld dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x4]
        fadd st(0), st(1)
        rcl ecx, 0x1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp - 0x60]
        xor ecx, ecx
        mov ebx, dword ptr [ebp - 0x60]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov ecx, dword ptr [ebp - 0x38]
        shl ecx, 0x8
        or ecx, ebx
        mov dword ptr [ebp - 0x38], ecx
        mov ecx, dword ptr [esi + 0x8]
        fadd dword ptr [esi + 0x8]
        rcl ecx, 0x1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp - 0x60]
        xor ecx, ecx
        mov ebx, dword ptr [ebp - 0x60]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov ecx, dword ptr [ebp - 0x38]
        shl ecx, 0x8
        or ecx, ebx
        mov dword ptr [ebp - 0x38], ecx
        mov eax, dword ptr [g_7da5e0]
        mov ecx, dword ptr [eax]
        mov esi, dword ptr [ebp - 0xc]
        add edx, ecx
        mov ecx, dword ptr [g_7b9600]
        mov dword ptr [ebp - 0x20], edx
        mov dl, byte ptr [ebp - 0xc]
        and esi, 0xff
        inc dl
        mov byte ptr [ebp - 0xc], dl
        mov edx, dword ptr [g_7b95f8]
        lea eax, [esi + ecx*1]
        cmp eax, dword ptr [edx + 0x4]
        jnc epilogue
        mov ecx, dword ptr [ebp - 0x2c]
        mov edx, dword ptr [ecx + 0x48]
        mov ebx, dword ptr [ebp - 0x28]
        xor ecx, ecx
        add edx, edi
        mov cl, byte ptr [edx + ebx*1]
        mov ebx, dword ptr [ebp - 0x2c]
        lea edx, [ecx + ecx*2]
        mov ecx, dword ptr [ebx + 0x14]
        lea ecx, [ecx + edx*4]
        lea edx, [eax + eax*2]
        mov eax, dword ptr [g_7b95f8]
        push ecx
        mov ecx, dword ptr [eax]
        lea ecx, [ecx + edx*4]
        call FUN_0040c410
        mov edx, dword ptr [g_7b9600]
        mov ecx, dword ptr [g_7b95f4]
        lea eax, [esi + edx*1]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0x20]
        mov esi, dword ptr [ecx]
        mov ecx, dword ptr [ecx + 0x4]
        mov dword ptr [edx + eax*8], esi
        mov dword ptr [edx + eax*8 + 0x4], ecx
        mov edx, dword ptr [g_7b95ec]
        mov ecx, dword ptr [edx]
        mov edx, dword ptr [ebp - 0x38]
        mov dword ptr [ecx + eax*4], edx
        cmp byte ptr [ebp - 0x10], 0xfc
        jc case4_ff3e
        mov al, byte ptr [ebp - 0xc]
        test al, al
        jbe case4_ff3e
        mov eax, dword ptr [ebp - 0x10]
        mov ecx, dword ptr [ebp - 0xc]
        and eax, 0xff
        and ecx, 0xff
        mov dword ptr [ebp - 0x30], eax
        mov dword ptr [ebp - 0x20], ecx
        mov ecx, dword ptr [g_7b960c]
        push 0x4
        lea eax, [ebp - 0x1c]
        mov dword ptr [ebp - 0x1c], 0x3
        mov edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0x24]
        mov ecx, dword ptr [g_7b960c]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x8]
        cmp eax, 0x100
        jc case4_fed4
        mov ecx, dword ptr [ebx + 0x30]
        mov eax, dword ptr [ebp - 0x7c]
        and ecx, 0xf
        inc ecx
        lea esi, [eax + 0xc]
        push ecx
        mov ecx, esi
        call FUN_004306f0
        mov edx, dword ptr [g_7b960c]
        push edx
        mov ecx, esi
        call FUN_00491340
        mov ecx, dword ptr [g_7b960c]
        call FUN_00430670
case4_fed4:
        mov ecx, dword ptr [g_7b960c]
        mov eax, dword ptr [ecx]
        push 0x4
        push offset g_7b9600
        call dword ptr [eax + 0x24]
        mov edx, dword ptr [eax]
        push 0x4
        lea ecx, [ebp - 0x20]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x24]
        mov ecx, dword ptr [g_7b960c]
        mov edx, dword ptr [ecx]
        push 0x4
        push offset g_7b95fc
        call dword ptr [edx + 0x24]
        mov edx, dword ptr [eax]
        push 0x4
        lea ecx, [ebp - 0x30]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x24]
        mov ecx, dword ptr [g_7b9600]
        mov edx, dword ptr [ebp - 0x20]
        mov esi, dword ptr [g_7b95fc]
        mov eax, dword ptr [ebp - 0x30]
        add ecx, edx
        add esi, eax
        mov dword ptr [g_7b9600], ecx
        mov dword ptr [g_7b95fc], esi
        mov byte ptr [ebp - 0x10], 0x0
        mov byte ptr [ebp - 0xc], 0x0
        jmp case4_ff44
case4_ff3e:
        mov esi, dword ptr [g_7b95fc]
case4_ff44:
        inc edi
        cmp edi, 0x3
        jl case4_fc43
case4_ff4e:
        mov eax, dword ptr [ebp - 0x58]
        mov ebx, dword ptr [ebp - 0x2c]
case4_ff54:
        mov esi, dword ptr [ebp - 0x3c]
        mov edx, dword ptr [ebp - 0x28]
        mov ecx, dword ptr [ebp - 0x74]
        inc eax
        add esi, 0x10
        add edx, 0x3
        cmp eax, ecx
        mov dword ptr [ebp - 0x58], eax
        mov dword ptr [ebp - 0x3c], esi
        mov dword ptr [ebp - 0x28], edx
        jge common_tail
        xor edi, edi
        jmp case4_loop

case567:
        mov eax, dword ptr [esi + 0x54]
        mov ecx, dword ptr [esi + 0x64]
        mov edx, dword ptr [esi + 0x74]
        lea edi, [esi + 0x48]
        mov dword ptr [ebp - 0x54], eax
        mov dword ptr [ebp - 0x50], ecx
        lea eax, [ebp - 0x3c]
        push eax
        lea ecx, [ebp - 0x20]
        push ecx
        mov ecx, esi
        mov dword ptr [ebp - 0x4c], edx
        call FUN_00482220
        fld dword ptr [esi + 0x8]
        lea edx, [ebp - 0x48]
        fstp dword ptr [ebp - 0x8]
        push edx
        mov ecx, edi
        call FUN_00428730
        fld dword ptr [ebp - 0x48]
        fmul dword ptr [ebp - 0x8]
        fadd dword ptr [ebp - 0x54]
        fstp dword ptr [ebp - 0x54]
        fld dword ptr [ebp - 0x44]
        fmul dword ptr [ebp - 0x8]
        fadd dword ptr [ebp - 0x50]
        fstp dword ptr [ebp - 0x50]
        fld dword ptr [ebp - 0x40]
        fmul dword ptr [ebp - 0x8]
        fadd dword ptr [ebp - 0x4c]
        fstp dword ptr [ebp - 0x4c]
        fld dword ptr [ebp - 0x48]
        fmul dword ptr [ebp - 0x48]
        fld dword ptr [ebp - 0x40]
        fmul dword ptr [ebp - 0x40]
        faddp st(1), st(0)
        fsqrt
        fdivr dword ptr [g_f_76d064]
        fld st(0)
        fmul dword ptr [ebp - 0x48]
        fstp dword ptr [ebp + 0xffffff44]
        fld dword ptr [ebp - 0x40]
        fmul st(0), st(1)
        fstp dword ptr [ebp + 0xffffff4c]
        fstp st(0)
        fld dword ptr [ebp - 0x8]
        fcomp dword ptr [g_f_7b220c]
        fnstsw ax
        test ah, 0x41
        jnz epilogue
        fld dword ptr [esi + 0xb0]
        fmul dword ptr [ebp - 0x8]
        fdivr dword ptr [g_f_76d070]
        fstp dword ptr [ebp - 0x38]
        fld dword ptr [ebp - 0x8]
        fcomp dword ptr [esi + 0x80]
        fnstsw ax
        test ah, 0x41
        jz case567_30042
        mov dword ptr [ebp - 0x18], 0x3f800000
        jmp case567_30068
case567_30042:
        fld dword ptr [ebp - 0x8]
        fcomp dword ptr [esi + 0x84]
        fnstsw ax
        test ah, 0x1
        jz epilogue
        fld dword ptr [esi + 0x84]
        fsub dword ptr [ebp - 0x8]
        fmul dword ptr [esi + 0x88]
        fstp dword ptr [ebp - 0x18]
case567_30068:
        mov ecx, dword ptr [ebp - 0x74]
        xor eax, eax
        cmp ecx, eax
        mov dword ptr [ebp - 0x58], eax
        mov dword ptr [ebp - 0x28], eax
        jle epilogue
case567_3007b:
        mov ecx, dword ptr [g_7d98fc]
        mov edx, dword ptr [ecx]
        cmp byte ptr [edx + eax*1], 0x0
        jz case567_3051b
        fld dword ptr [ebp - 0x44]
        fcomp dword ptr [g_f_76c5b0]
        fnstsw ax
        test ah, 0x41
        jz case567_3051b
        mov eax, dword ptr [g_7da5e0]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebx + 0x48]
        mov eax, dword ptr [ebp - 0x28]
        mov edi, dword ptr [ebp - 0x2c]
        mov byte ptr [ebp - 0x1], 0x0
        mov dword ptr [ebp - 0x8], 0x0
        add edx, eax
        mov esi, 0x3
        xor eax, eax
case567_300c3:
        mov al, byte ptr [edx]
        lea ebx, [eax + eax*2]
        mov eax, dword ptr [edi + 0x14]
        fld dword ptr [eax + ebx*4]
        lea eax, [eax + ebx*4]
        fsub dword ptr [ebp - 0x54]
        mov eax, dword ptr [eax + 0x8]
        mov dword ptr [ebp - 0x64], eax
        fld dword ptr [ebp - 0x64]
        fsub dword ptr [ebp - 0x4c]
        fstp dword ptr [ebp - 0x64]
        fmul dword ptr [ebp - 0x38]
        fld dword ptr [ebp - 0x64]
        fmul dword ptr [ebp - 0x38]
        fld dword ptr [ebp + 0xffffff4c]
        fmul st(0), st(2)
        fld dword ptr [ebp + 0xffffff44]
        fmul st(0), st(2)
        fsubp st(1), st(0)
        fstp dword ptr [ecx]
        fld dword ptr [ebp + 0xffffff4c]
        fmul st(0), st(1)
        fld dword ptr [ebp + 0xffffff44]
        fmul st(0), st(3)
        faddp st(1), st(0)
        fstp dword ptr [ebp - 0x14]
        mov eax, dword ptr [ebp - 0x14]
        mov dword ptr [ecx + 0x4], eax
        fstp st(0)
        fstp st(0)
        fld dword ptr [ecx]
        fcomp dword ptr [g_f_76df00]
        fnstsw ax
        test ah, 0x1
        jnz case567_30163
        fld dword ptr [ecx]
        fcomp dword ptr [g_f_76d070]
        fnstsw ax
        test ah, 0x41
        jz case567_30163
        fld dword ptr [ebp - 0x14]
        fcomp dword ptr [g_f_76d5f4]
        fnstsw ax
        test ah, 0x1
        jnz case567_30163
        fld dword ptr [ebp - 0x14]
        fcomp dword ptr [g_f_76e22c]
        fnstsw ax
        test ah, 0x41
        jz case567_30163
        mov byte ptr [ebp - 0x1], 0x1
case567_30163:
        fld dword ptr [ebp - 0x34]
        fcomp dword ptr [g_f_76c5b0]
        fnstsw ax
        test ah, 0x41
        jnz case567_301b0
        fld dword ptr [ebp - 0x34]
        fchs
        fstp dword ptr [ebp - 0x5c]
        fld dword ptr [ecx]
        fcomp dword ptr [ebp - 0x5c]
        fnstsw ax
        test ah, 0x1
        jnz case567_301ad
        fld dword ptr [ecx]
        fcomp dword ptr [ebp - 0x34]
        fnstsw ax
        test ah, 0x41
        jz case567_301ad
        fld dword ptr [ebp - 0x14]
        fcomp dword ptr [ebp - 0x5c]
        fnstsw ax
        test ah, 0x1
        jnz case567_301ad
        fld dword ptr [ebp - 0x14]
        fcomp dword ptr [ebp - 0x34]
        fnstsw ax
        test ah, 0x41
        jnz case567_301b0
case567_301ad:
        inc dword ptr [ebp - 0x8]
case567_301b0:
        inc edx
        add ecx, 0x8
        dec esi
        /* __emit: MSVC6 miscomputes this backward jnz rel32 (off-by-2, resolves
         * case567_300c3 to 0x4300c5 instead of 0x4300c3); emit ref bytes
         * 0F 85 08 FF FF FF (target 0x4300c3). */
        __emit 0x0F
        __emit 0x85
        __emit 0x08
        __emit 0xFF
        __emit 0xFF
        __emit 0xFF
        mov eax, dword ptr [ebp - 0x8]
        test eax, eax
        jnz case567_30518
        cmp byte ptr [ebp - 0x1], 0x1
        jz case567_301e5
        mov ecx, dword ptr [g_7da5e0]
        push 0x3
        push ecx
        call FUN_0047cfe0
        add esp, 0x8
        cmp al, 0x1
        jnz case567_30518
case567_301e5:
        fld dword ptr [ebp - 0x18]
        mov eax, dword ptr [ebp + 0x8]
        fmul dword ptr [ebp - 0x18]
        mov edx, dword ptr [eax + 0x10]
        fld dword ptr [eax + 0xc]
        mov eax, dword ptr [eax + 0x14]
        mov edi, dword ptr [ebp - 0x2c]
        fmul st(0), st(1)
        mov dword ptr [ebp + 0xffffff54], edx
        mov dword ptr [ebp + 0xffffff58], eax
        mov dword ptr [ebp + 0xffffff5c], 0x3f800000
        fstp dword ptr [ebp + 0xffffff50]
        mov dword ptr [ebp - 0x8], 0x0
        fld dword ptr [ebp + 0xffffff54]
        fmul st(0), st(1)
        fstp dword ptr [ebp + 0xffffff54]
        fld dword ptr [ebp + 0xffffff58]
        fmul st(0), st(1)
        fstp dword ptr [ebp + 0xffffff58]
        fstp st(0)
case567_3023d:
        mov ecx, dword ptr [ebp - 0x8]
        mov eax, dword ptr [g_7da5e0]
        mov esi, dword ptr [g_7b95fc]
        lea edx, [ecx*8]
        mov ecx, dword ptr [eax]
        fld dword ptr [edx + ecx*1]
        lea eax, [edx + ecx*1]
        fadd dword ptr [g_f_76d070]
        mov cl, byte ptr [ebp - 0x10]
        fstp dword ptr [eax]
        fld dword ptr [eax + 0x4]
        fadd dword ptr [g_f_76d3c8]
        fstp dword ptr [eax + 0x4]
        mov eax, dword ptr [ebp - 0x10]
        and eax, 0xff
        inc cl
        mov byte ptr [ebp - 0x10], cl
        mov ecx, dword ptr [g_7b95f0]
        lea ebx, [eax + esi*1]
        cmp ebx, dword ptr [ecx + 0x4]
        jnc epilogue
        mov ebx, dword ptr [ecx]
        mov cl, byte ptr [ebp - 0xc]
        add eax, ebx
        mov byte ptr [eax + esi*1], cl
        lea eax, [ebp + 0xffffff50]
        mov dword ptr [ebp - 0x60], eax
        fld dword ptr [g_f_76e110]
        mov esi, dword ptr [ebp - 0x60]
        fld dword ptr [esi + 0xc]
        mov ecx, dword ptr [esi + 0xc]
        fadd st(0), st(1)
        rcl ecx, 0x1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp - 0x78]
        xor ecx, ecx
        mov ebx, dword ptr [ebp - 0x78]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov dword ptr [ebp - 0x30], ebx
        fld dword ptr [esi]
        mov ecx, dword ptr [esi]
        fadd st(0), st(1)
        rcl ecx, 0x1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp - 0x78]
        xor ecx, ecx
        mov ebx, dword ptr [ebp - 0x78]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov ecx, dword ptr [ebp - 0x30]
        shl ecx, 0x8
        or ecx, ebx
        mov dword ptr [ebp - 0x30], ecx
        fld dword ptr [esi + 0x4]
        mov ecx, dword ptr [esi + 0x4]
        fadd st(0), st(1)
        rcl ecx, 0x1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp - 0x78]
        xor ecx, ecx
        mov ebx, dword ptr [ebp - 0x78]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov ecx, dword ptr [ebp - 0x30]
        shl ecx, 0x8
        or ecx, ebx
        mov dword ptr [ebp - 0x30], ecx
        mov ecx, dword ptr [esi + 0x8]
        fadd dword ptr [esi + 0x8]
        rcl ecx, 0x1
        sbb eax, eax
        xor eax, 0xffffffff
        fstp dword ptr [ebp - 0x78]
        xor ecx, ecx
        mov ebx, dword ptr [ebp - 0x78]
        and ebx, eax
        test ebx, 0xff00
        seta cl
        xor eax, eax
        sub eax, ecx
        or ebx, eax
        and ebx, 0xff
        mov ecx, dword ptr [ebp - 0x30]
        shl ecx, 0x8
        or ecx, ebx
        mov dword ptr [ebp - 0x30], ecx
        mov esi, dword ptr [ebp - 0x8]
        mov eax, dword ptr [edi + 0x48]
        mov ecx, dword ptr [edi + 0x14]
        add eax, esi
        mov esi, dword ptr [ebp - 0x28]
        xor ebx, ebx
        mov bl, byte ptr [eax + esi*1]
        mov eax, ebx
        lea eax, [eax + eax*2]
        lea esi, [ecx + eax*4]
        mov eax, dword ptr [ebp - 0xc]
        mov cl, byte ptr [ebp - 0xc]
        and eax, 0xff
        inc cl
        mov byte ptr [ebp - 0xc], cl
        mov ecx, dword ptr [g_7b9600]
        add eax, ecx
        mov ecx, dword ptr [g_7b95f8]
        cmp eax, dword ptr [ecx + 0x4]
        jnc epilogue
        mov ecx, dword ptr [ecx]
        lea ebx, [eax + eax*2]
        lea ecx, [ecx + ebx*4]
        mov ebx, dword ptr [esi]
        mov dword ptr [ecx], ebx
        mov ebx, dword ptr [esi + 0x4]
        mov esi, dword ptr [esi + 0x8]
        mov dword ptr [ecx + 0x8], esi
        mov dword ptr [ecx + 0x4], ebx
        mov ecx, dword ptr [g_7da5e0]
        mov esi, dword ptr [ecx]
        mov ecx, dword ptr [g_7b95f4]
        mov ecx, dword ptr [ecx]
        add edx, esi
        mov esi, dword ptr [edx]
        mov edx, dword ptr [edx + 0x4]
        mov dword ptr [ecx + eax*8], esi
        mov dword ptr [ecx + eax*8 + 0x4], edx
        mov ecx, dword ptr [g_7b95ec]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0x30]
        mov dword ptr [edx + eax*4], ecx
        cmp byte ptr [ebp - 0x10], 0xfc
        jc case567_30508
        mov al, byte ptr [ebp - 0xc]
        xor bl, bl
        cmp al, bl
        jbe case567_30508
        mov eax, dword ptr [ebp - 0xc]
        mov edx, dword ptr [ebp - 0x10]
        mov ecx, dword ptr [g_7b960c]
        and eax, 0xff
        and edx, 0xff
        mov dword ptr [ebp - 0x24], eax
        push 0x4
        lea eax, [ebp - 0x60]
        mov dword ptr [ebp - 0x1c], edx
        mov dword ptr [ebp - 0x60], 0x3
        mov edx, dword ptr [ecx]
        push eax
        call dword ptr [edx + 0x24]
        mov ecx, dword ptr [g_7b960c]
        mov edx, dword ptr [ecx]
        call dword ptr [edx + 0x8]
        cmp eax, 0x100
        jc case567_304a2
        mov eax, dword ptr [ebp - 0x7c]
        mov edx, dword ptr [edi + 0x30]
        lea ecx, [eax + 0xc]
        or dword ptr [ecx + 0x10], 0xf
        mov eax, dword ptr [ecx + 0x4]
        and edx, 0xf
        inc edx
        and eax, 0xfffffff0
        or edx, eax
        mov dword ptr [ecx + 0x4], edx
        mov edx, dword ptr [g_7b960c]
        push edx
        call FUN_00491340
        mov ecx, dword ptr [g_7b960c]
        mov eax, dword ptr [ecx + 0x14]
        test al, 0x3
        jz case567_304a8
        mov edx, dword ptr [ecx]
        neg eax
        and eax, 0x3
        push eax
        call dword ptr [edx + 0x18]
case567_304a2:
        mov ecx, dword ptr [g_7b960c]
case567_304a8:
        mov eax, dword ptr [ecx]
        push 0x4
        push offset g_7b9600
        call dword ptr [eax + 0x24]
        mov edx, dword ptr [eax]
        push 0x4
        lea ecx, [ebp - 0x24]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x24]
        mov ecx, dword ptr [g_7b960c]
        mov edx, dword ptr [ecx]
        push 0x4
        push offset g_7b95fc
        call dword ptr [edx + 0x24]
        mov edx, dword ptr [eax]
        push 0x4
        lea ecx, [ebp - 0x1c]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x24]
        mov esi, dword ptr [g_7b9600]
        mov edx, dword ptr [ebp - 0x24]
        mov ecx, dword ptr [g_7b95fc]
        mov eax, dword ptr [ebp - 0x1c]
        add esi, edx
        add ecx, eax
        mov dword ptr [g_7b9600], esi
        mov dword ptr [g_7b95fc], ecx
        mov byte ptr [ebp - 0x10], bl
        mov byte ptr [ebp - 0xc], bl
case567_30508:
        mov eax, dword ptr [ebp - 0x8]
        inc eax
        cmp eax, 0x3
        mov dword ptr [ebp - 0x8], eax
        jl case567_3023d
case567_30518:
        mov ebx, dword ptr [ebp - 0x2c]
case567_3051b:
        mov eax, dword ptr [ebp - 0x58]
        mov edx, dword ptr [ebp - 0x28]
        mov ecx, dword ptr [ebp - 0x74]
        inc eax
        add edx, 0x3
        cmp eax, ecx
        mov dword ptr [ebp - 0x58], eax
        mov dword ptr [ebp - 0x28], edx
        jge common_tail
        jmp case567_3007b

default_case:
        push offset g_s_76e1f4
        call FUN_006fab90
        add esp, 0x4
        test eax, eax
        jz epilogue
        int 3
        /* unreachable epilogue copy at 0x43054d (dead fall-through after int3) */
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4

common_tail:
        mov al, byte ptr [ebp - 0x10]
        test al, al
        jz epilogue
        mov al, byte ptr [ebp - 0xc]
        test al, al
        jz epilogue
        mov ecx, dword ptr [ebp - 0x10]
        mov edx, dword ptr [ebp - 0xc]
        and ecx, 0xff
        and edx, 0xff
        mov dword ptr [ebp - 0x38], ecx
        mov ecx, dword ptr [g_7b960c]
        mov dword ptr [ebp + 0x8], edx
        push 0x4
        lea edx, [ebp - 0x60]
        mov dword ptr [ebp - 0x60], 0x3
        mov eax, dword ptr [ecx]
        push edx
        call dword ptr [eax + 0x24]
        mov ecx, dword ptr [g_7b960c]
        mov eax, dword ptr [ecx]
        call dword ptr [eax + 0x8]
        cmp eax, 0x100
        jc common_tail_305f3
        mov ecx, dword ptr [ebp - 0x7c]
        mov edi, dword ptr [ecx + 0x1c]
        mov edx, dword ptr [ebx + 0x30]
        mov eax, dword ptr [ecx + 0x10]
        add ecx, 0xc
        and edx, 0xf
        or edi, 0xf
        inc edx
        and eax, 0xfffffff0
        or edx, eax
        mov dword ptr [ecx + 0x4], edx
        mov edx, dword ptr [g_7b960c]
        push edx
        mov dword ptr [ecx + 0x10], edi
        call FUN_00491340
        mov ecx, dword ptr [g_7b960c]
        mov eax, dword ptr [ecx + 0x14]
        test al, 0x3
        jz common_tail_305f9
        mov edx, dword ptr [ecx]
        neg eax
        and eax, 0x3
        push eax
        call dword ptr [edx + 0x18]
common_tail_305f3:
        mov ecx, dword ptr [g_7b960c]
common_tail_305f9:
        mov eax, dword ptr [ecx]
        push 0x4
        push offset g_7b9600
        call dword ptr [eax + 0x24]
        mov edx, dword ptr [eax]
        push 0x4
        lea ecx, [ebp + 0x8]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x24]
        mov ecx, dword ptr [g_7b960c]
        mov edx, dword ptr [ecx]
        push 0x4
        push offset g_7b95fc
        call dword ptr [edx + 0x24]
        mov edx, dword ptr [eax]
        push 0x4
        lea ecx, [ebp - 0x38]
        push ecx
        mov ecx, eax
        call dword ptr [edx + 0x24]
        mov esi, dword ptr [g_7b9600]
        mov edx, dword ptr [ebp + 0x8]
        mov ecx, dword ptr [g_7b95fc]
        mov eax, dword ptr [ebp - 0x38]
        add esi, edx
        add ecx, eax
        mov dword ptr [g_7b9600], esi
        mov dword ptr [g_7b95fc], ecx

epilogue:
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x4

        /* in-function jump-table DATA at 0x43065c (5 relocated dword entries:
         * case3, case4, case567, case567, case567). Inline asm has no `dd`;
         * emit 20 zero bytes (reloc-masked by the diff harness). */
        __emit 0xA8
        __emit 0xF4
        __emit 0x42
        __emit 0x00
        __emit 0x41
        __emit 0xF9
        __emit 0x42
        __emit 0x00
        __emit 0x37
        __emit 0x05
        __emit 0x43
        __emit 0x00
        __emit 0x7C
        __emit 0xFF
        __emit 0x42
        __emit 0x00
        __emit 0x53
        __emit 0x06
        __emit 0x43
        __emit 0x00
    }
}
