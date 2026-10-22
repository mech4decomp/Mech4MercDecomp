/* FUN_006c12e0 @ 0x006C12E0, size 4774 bytes
 * Large tokenizer/parser (chain-of-comparisons dispatch on first char).
 * All mnemonics encode natively; extern symbols used for all absolute
 * data/function references (reloc-masked by the diff harness).
 */

extern int g_82f338;
extern int g_82f328;
extern int g_82f33c;
extern int g_82f310;
extern int g_82f348;
extern int g_82f320;
extern int g_82f308;
extern int g_82f3bc;
extern unsigned char g_82f390;
extern int g_82f3b0;
extern int g_82f3c8;
extern int g_82f3d0;
extern int g_82f3d4;
extern int g_82f344;
extern unsigned char g_83a100;
extern int g_83a0f4;
extern unsigned char g_82ebf8[];
extern unsigned char g_82ecf8;
extern int g_832af0[];
extern int g_82ee88[];
extern char g_s_832a70[];
extern char g_s_8329f0[];
extern unsigned char g_7b60bc;
extern void *g_76b320;
extern unsigned char g_77253c;
extern unsigned char g_79d06c;
extern unsigned char g_79d064;
extern char g_s_79d040[];
extern unsigned char g_79d010;
extern unsigned char g_79d000;
extern char g_s_79cfd8[];
extern char g_s_79cfa0[];
extern unsigned char g_79cf9c;
extern unsigned char g_79cf98;
extern unsigned char g_79cf94;
extern unsigned char g_79cf90;
extern unsigned char g_79cf8c;
extern unsigned char g_79cf80;
extern unsigned char g_79cf78;
extern unsigned char g_79cf70;
extern unsigned char g_79cf68;
extern unsigned char g_79cf60;
extern unsigned char g_79cf58;
extern unsigned char g_79cf10;
extern char g_s_79cf18[];
extern char g_s_79ceec[];
extern unsigned char g_77d07c;
extern char g_s_79d074[];
extern char g_s_79d018[];

extern void __cdecl FUN_006c3450(void);
extern void __cdecl FUN_006c5a60(void);
extern void __cdecl FUN_006bfe50(void);
extern void __cdecl FUN_006bfa50(void);
extern void __cdecl FUN_006cc640(void);
extern void __cdecl FUN_006cc650(void);
extern void __cdecl FUN_006cc660(void);
extern void __cdecl FUN_006c3420(void);
extern void __cdecl FUN_006c12e0(void);

void __declspec(naked) FUN_006c12e0(void)
{
    __asm {
        sub esp, 0x20
        mov eax, dword ptr [g_82f338]
        mov edx, dword ptr [g_82f328]
        mov ecx, dword ptr [g_82f33c]
        mov dword ptr [esp + 0x10], eax
        xor eax, eax
        mov al, byte ptr [edx]
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 0x18], ecx
        mov dword ptr [g_82f310], 0x0
        mov ebp, eax
        cmp ebp, 0x20
        mov dword ptr [esp + 0x28], ebp
        jnz L6c132a
        inc edx
        xor ecx, ecx
        mov cl, byte ptr [edx]
        mov dword ptr [g_82f328], edx
        mov ebp, ecx
        mov dword ptr [esp + 0x28], ebp
L6c132a:
        mov eax, edx
        and eax, 0x7ff
        cmp ebp, 0x2b
        mov dword ptr [esp + 0x24], eax
        jnz L6c1368
        cmp byte ptr [edx + 0x1], 0x2b
        jnz L6c15df
        mov al, byte ptr [edx + 0x2]
        add edx, 0x2
        cmp al, 0x20
        mov dword ptr [g_82f328], edx
        jnz L6c135b
        inc edx
        mov dword ptr [g_82f328], edx
L6c135b:
        pop edi
        pop esi
        pop ebp
        mov eax, 0x61
        pop ebx
        add esp, 0x20
        ret
L6c1368:
        cmp ebp, 0x2d
        jnz L6c139b
        cmp byte ptr [edx + 0x1], 0x2d
        jnz L6c15df
        mov al, byte ptr [edx + 0x2]
        add edx, 0x2
        cmp al, 0x20
        mov dword ptr [g_82f328], edx
        jnz L6c138e
        inc edx
        mov dword ptr [g_82f328], edx
L6c138e:
        pop edi
        pop esi
        pop ebp
        mov eax, 0x62
        pop ebx
        add esp, 0x20
        ret
L6c139b:
        cmp ebp, 0x40
        jnz L6c1446
        mov esi, dword ptr [g_82f348]
        test esi, esi
        jz L6c257b
L6c13b2:
        mov eax, dword ptr [esi + 0x1c]
        test eax, eax
        jz L6c13c4
        mov ecx, dword ptr [g_82f338]
        cmp eax, dword ptr [ecx + 0x1c]
        jnz L6c13e5
L6c13c4:
        mov eax, dword ptr [esi + 0x8]
        mov cl, byte ptr [eax + 0x44]
        add eax, 0x44
        test cl, cl
        jz L6c13f1
        mov edi, edx
        sub edi, eax
L6c13d5:
        mov bl, byte ptr [edi + eax*1]
        inc eax
        cmp bl, cl
        jnz L6c13e5
        mov cl, byte ptr [eax]
        test cl, cl
        jz L6c13f1
        jmp L6c13d5
L6c13e5:
        mov esi, dword ptr [esi]
        test esi, esi
        jz L6c257b
        jmp L6c13b2
L6c13f1:
        test esi, esi
        mov eax, dword ptr [esi + 0x8]
        lea ecx, [esi + 0x8]
        mov dword ptr [esp + 0x20], esi
        mov dword ptr [esp + 0x18], eax
        jz L6c257b
        mov edi, dword ptr [eax + 0x40]
        mov al, byte ptr [edx + edi*1]
        add edx, edi
        cmp al, 0x29
        mov dword ptr [g_82f328], edx
        jz L6c1429
        cmp al, 0x20
        jz L6c1429
        test al, al
        jz L6c1429
        cmp al, 0x2c
        jnz L6c15df
L6c1429:
        pop edi
        pop esi
        pop ebp
        mov dword ptr [g_82f320], ecx
        mov dword ptr [g_82f308], 0x2
        mov eax, 0x68
        pop ebx
        add esp, 0x20
        ret
L6c1446:
        mov ecx, 0x24
        cmp ebp, ecx
        jnz L6c15df
        cmp byte ptr [edx + 0x1], cl
        jnz L6c15df
        mov bl, byte ptr [edx + 0x2]
        cmp bl, cl
        mov esi, dword ptr [g_82f3bc]
        lea eax, [edx + 0x2]
        mov dword ptr [esp + 0x2c], 0x0
        jz L6c1481
L6c1474:
        cmp byte ptr [eax + 0x1], cl
        jz L6c1481
        mov bl, byte ptr [eax + 0x1]
        inc eax
        cmp bl, cl
        jnz L6c1474
L6c1481:
        sub eax, edx
        add eax, 0x3
        test esi, esi
        mov ebp, eax
        jz L6c159f
L6c1490:
        xor eax, eax
        mov al, byte ptr [esi + 0x4]
        cmp eax, ebp
        jnz L6c14c9
        mov eax, dword ptr [esi + 0x8]
        test eax, eax
        jz L6c14ab
        mov ecx, dword ptr [g_82f338]
        cmp eax, dword ptr [ecx + 0x1c]
        jnz L6c14c9
L6c14ab:
        mov cl, byte ptr [esi + 0x10]
        test cl, cl
        lea eax, [esi + 0x10]
        jz L6c14d9
        mov edi, edx
        sub edi, eax
L6c14b9:
        mov bl, byte ptr [edi + eax*1]
        inc eax
        cmp bl, cl
        jnz L6c14c9
        mov cl, byte ptr [eax]
        test cl, cl
        jz L6c14d9
        jmp L6c14b9
L6c14c9:
        mov dword ptr [esp + 0x2c], esi
        mov esi, dword ptr [esi]
        test esi, esi
        jz L6c159f
        jmp L6c1490
L6c14d9:
        mov eax, dword ptr [esp + 0x2c]
        test eax, eax
        jz L6c14f2
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [g_82f3bc]
        mov dword ptr [esi], eax
        mov dword ptr [g_82f3bc], esi
L6c14f2:
        mov al, byte ptr [edx + ebp*1]
        add edx, ebp
        cmp al, 0x20
        mov dword ptr [g_82f328], edx
        jnz L6c1508
        inc edx
        mov dword ptr [g_82f328], edx
L6c1508:
        mov al, byte ptr [edx]
        cmp al, 0x5b
        jz L6c1539
        cmp al, 0x20
        jnz L6c1519
        inc edx
        mov dword ptr [g_82f328], edx
L6c1519:
        mov ecx, dword ptr [esi + 0xc]
        pop edi
        xor eax, eax
        mov al, byte ptr [esi + 0x5]
        pop esi
        pop ebp
        mov dword ptr [g_82f320], ecx
        mov dword ptr [g_82f308], 0x2
        pop ebx
        add esp, 0x20
        ret
L6c1539:
        inc edx
        mov dword ptr [g_82f328], edx
        call FUN_006c3450
        mov ecx, dword ptr [g_82f328]
        cmp byte ptr [ecx], 0x20
        jnz L6c1551
        inc ecx
L6c1551:
        mov dl, byte ptr [ecx + 0x1]
        inc ecx
        cmp dl, 0x20
        mov dword ptr [g_82f328], ecx
        jnz L6c1567
        inc ecx
        mov dword ptr [g_82f328], ecx
L6c1567:
        mov cl, byte ptr [esi + 0x5]
        cmp cl, 0x64
        jz L6c157b
        cmp cl, 0x70
        jz L6c157b
        mov edx, dword ptr [esi + 0xc]
        mov edx, dword ptr [edx]
        jmp L6c157e
L6c157b:
        mov edx, dword ptr [esi + 0xc]
L6c157e:
        pop edi
        lea eax, [edx + eax*4]
        pop esi
        mov dword ptr [g_82f320], eax
        mov eax, ecx
        pop ebp
        mov dword ptr [g_82f308], 0x2
        and eax, 0xff
        pop ebx
        add esp, 0x20
        ret
L6c159f:
        push ebp
        push edx
        push offset g_s_832a70
        call dword ptr [g_76b320]
        mov al, byte ptr [g_7b60bc]
        add esp, 0xc
        test al, al
        mov byte ptr [ebp + 0x832a70], 0x0
        jnz L6c257b
        push offset g_s_832a70
        push offset g_s_79d074
        call FUN_006bfa50
        mov edx, dword ptr [g_82f328]
        mov ebp, dword ptr [esp + 0x30]
        add esp, 0x8
L6c15df:
        mov al, byte ptr [ebp + 0x82ecf8]
        test al, al
        jz L6c257b
        mov esi, dword ptr [esp + 0x24]
        lea esi, [esi + esi*2]
        shl esi, 0x2
        cmp dword ptr [esi + 0x832af0], edx
        mov dword ptr [esp + 0x2c], esi
        jnz L6c1622
        mov ebp, dword ptr [esi + 0x832af8]
        mov eax, dword ptr [esi + 0x832af4]
        mov ebx, ebp
        shr ebx, 0x10
        mov dword ptr [esp + 0x24], eax
        mov dword ptr [esp + 0x28], ebp
        mov byte ptr [esp + 0x14], bl
        jmp L6c1674
L6c1622:
        call FUN_006bfe50
        mov edx, dword ptr [g_82f328]
        mov bl, byte ptr [g_83a100]
        movsx ebp, byte ptr [edx]
        mov byte ptr [esp + 0x14], bl
        mov ecx, dword ptr [esp + 0x14]
        and ecx, 0xff
        shl ebp, 0x8
        add ebp, ecx
        mov ecx, dword ptr [g_83a0f4]
        shl ebp, 0x10
        and ecx, 0xffff
        add ebp, ecx
        mov dword ptr [esi + 0x832af0], edx
        mov dword ptr [esi + 0x832af4], eax
        mov dword ptr [esp + 0x24], eax
        mov dword ptr [esp + 0x28], ebp
        mov dword ptr [esi + 0x832af8], ebp
L6c1674:
        cmp eax, 0x400
        jc L6c257e
        cmp eax, -0x2
        jz L6c1689
        cmp eax, -0x1
        jnz L6c16db
L6c1689:
        mov esi, dword ptr [g_82f344]
        test esi, esi
        jz L6c16db
L6c1693:
        cmp dword ptr [esi + 0xc], ebp
        jnz L6c16d5
        cmp bl, byte ptr [esi + 0xe]
        jnz L6c16d5
        mov cl, byte ptr [esi + 0x10]
        test cl, cl
        lea eax, [esi + 0x10]
        jz L6c16be
        mov edi, edx
        sub edi, eax
        inc edi
L6c16ac:
        mov bl, byte ptr [edi + eax*1]
        inc eax
        cmp bl, cl
        jnz L6c16d1
        mov cl, byte ptr [eax]
        test cl, cl
        jnz L6c16ac
        mov bl, byte ptr [esp + 0x14]
L6c16be:
        push esi
        call FUN_006c5a60
        cmp eax, -0x1
        jnz L6c1748
        mov edx, dword ptr [g_82f328]
        jmp L6c16d5
L6c16d1:
        mov bl, byte ptr [esp + 0x14]
L6c16d5:
        mov esi, dword ptr [esi]
        test esi, esi
        jnz L6c1693
L6c16db:
        mov eax, dword ptr [esp + 0x18]
        test eax, eax
        jz L6c1774
        mov eax, dword ptr [esp + 0x24]
        cmp eax, -0x3
        jz L6c16f5
        cmp eax, -0x1
        jnz L6c1774
L6c16f5:
        mov eax, dword ptr [esp + 0x18]
        mov esi, dword ptr [eax + 0x4]
        xor ebp, ebp
        test esi, esi
        jz L6c1774
L6c1702:
        mov ecx, dword ptr [esp + 0x28]
        cmp dword ptr [esi + 0xc], ecx
        jnz L6c176c
        cmp bl, byte ptr [esi + 0xe]
        jnz L6c176c
        mov cl, byte ptr [esi + 0x10]
        test cl, cl
        lea eax, [esi + 0x10]
        jz L6c1731
        mov edi, edx
        sub edi, eax
        inc edi
L6c171f:
        mov bl, byte ptr [edi + eax*1]
        inc eax
        cmp bl, cl
        jnz L6c1768
        mov cl, byte ptr [eax]
        test cl, cl
        jnz L6c171f
        mov bl, byte ptr [esp + 0x14]
L6c1731:
        push esi
        call FUN_006c5a60
        cmp eax, -0x1
        jnz L6c181f
        mov edx, dword ptr [g_82f328]
        jmp L6c176c
L6c1748:
        mov edx, dword ptr [esp + 0x2c]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [g_82f308], 0x0
        mov dword ptr [edx + 0x832af4], 0xfffffffe
        pop ebx
        add esp, 0x20
        ret
L6c1768:
        mov bl, byte ptr [esp + 0x14]
L6c176c:
        mov ebp, esi
        mov esi, dword ptr [esi]
        test esi, esi
        jnz L6c1702
L6c1774:
        mov eax, dword ptr [esp + 0x20]
        mov ecx, dword ptr [eax + 0x8]
        test ecx, ecx
        mov dword ptr [esp + 0x1c], ecx
        jz L6c187a
        mov eax, dword ptr [esp + 0x24]
        cmp eax, -0x4
        jz L6c1799
        cmp eax, -0x1
        jnz L6c187a
L6c1799:
        mov esi, dword ptr [ecx + 0x4]
        xor ebp, ebp
        test esi, esi
        jz L6c187a
L6c17a6:
        mov ecx, dword ptr [esp + 0x28]
        cmp dword ptr [esi + 0xc], ecx
        jnz L6c186e
        cmp bl, byte ptr [esi + 0xe]
        jnz L6c186e
        mov cl, byte ptr [esi + 0x10]
        test cl, cl
        lea eax, [esi + 0x10]
        jz L6c17e1
        mov edi, edx
        sub edi, eax
        inc edi
L6c17cb:
        mov bl, byte ptr [edi + eax*1]
        inc eax
        cmp bl, cl
        jnz L6c186a
        mov cl, byte ptr [eax]
        test cl, cl
        jnz L6c17cb
        mov bl, byte ptr [esp + 0x14]
L6c17e1:
        mov al, byte ptr [g_82f390]
        test al, al
        jnz L6c186e
        test ebp, ebp
        jz L6c1808
        cmp dword ptr [ebp], esi
        jnz L6c1808
        mov eax, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [eax + 0x4]
        mov dword ptr [ebp], edx
        mov dword ptr [esi], ecx
        mov dword ptr [eax + 0x4], esi
L6c1808:
        push esi
        call FUN_006c5a60
        cmp eax, -0x1
        jnz L6c18d4
        mov edx, dword ptr [g_82f328]
        jmp L6c186e
L6c181f:
        test ebp, ebp
        jz L6c183b
        cmp dword ptr [ebp], esi
        jnz L6c183b
        mov edx, dword ptr [esi]
        mov ecx, dword ptr [esp + 0x18]
        mov dword ptr [ebp], edx
        mov edx, dword ptr [ecx + 0x4]
        mov dword ptr [esi], edx
        mov dword ptr [ecx + 0x4], esi
        jmp L6c183f
L6c183b:
        mov ecx, dword ptr [esp + 0x18]
L6c183f:
        mov esi, dword ptr [esp + 0x20]
        mov edi, dword ptr [esi + 0x8]
        xor edx, edx
        cmp ecx, edi
        mov ecx, dword ptr [esp + 0x2c]
        setz dl
        pop edi
        pop esi
        pop ebp
        mov dword ptr [ecx + 0x832af4], 0xfffffffd
        pop ebx
        inc edx
        mov dword ptr [g_82f308], edx
        add esp, 0x20
        ret
L6c186a:
        mov bl, byte ptr [esp + 0x14]
L6c186e:
        mov ebp, esi
        mov esi, dword ptr [esi]
        test esi, esi
        jnz L6c17a6
L6c187a:
        cmp bl, 0x8
        jnz L6c18f4
        mov cl, byte ptr [g_77253c]
        test cl, cl
        mov eax, offset g_77253c
        jz L6c18a5
        mov esi, edx
        sub esi, eax
L6c1892:
        mov cl, byte ptr [esi + eax*1]
        mov bl, byte ptr [eax]
        inc eax
        cmp cl, bl
        jnz L6c2355
        cmp byte ptr [eax], 0x0
        jnz L6c1892
L6c18a5:
        add edx, 0x8
        pop edi
        mov dword ptr [g_82f328], edx
        mov edx, dword ptr [g_82f338]
        pop esi
        add edx, 0x1c
        pop ebp
        mov dword ptr [g_82f320], edx
        mov dword ptr [g_82f308], 0x0
        mov eax, 0x64
        pop ebx
        add esp, 0x20
        ret
L6c18d4:
        mov edx, dword ptr [esp + 0x2c]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [g_82f308], 0x2
        mov dword ptr [edx + 0x832af4], 0xfffffffc
        pop ebx
        add esp, 0x20
        ret
L6c18f4:
        cmp bl, 0x6
        jnz L6c1bc2
        mov cl, byte ptr [g_79d06c]
        test cl, cl
        mov eax, offset g_79d06c
        jz L6c1923
        mov esi, edx
        sub esi, eax
L6c1910:
        mov cl, byte ptr [esi + eax*1]
        mov bl, byte ptr [eax]
        inc eax
        cmp cl, bl
        jnz L6c19da
        cmp byte ptr [eax], 0x0
        jnz L6c1910
L6c1923:
        mov al, byte ptr [edx + 0x6]
        add edx, 0x6
        cmp al, 0x2e
        mov dword ptr [g_82f328], edx
        jz L6c195c
        mov edx, dword ptr [g_82f3b0]
        pop edi
        pop esi
        lea eax, [edx*4 + 0x82ee88]
        pop ebp
        mov dword ptr [g_82f320], eax
        mov dword ptr [g_82f308], 0x2
        mov eax, 0x68
        pop ebx
        add esp, 0x20
        ret
L6c195c:
        inc edx
        xor ecx, ecx
        mov cl, byte ptr [edx + 0x1]
        lea eax, [edx + 0x1]
        mov dword ptr [g_82f328], edx
        mov bl, byte ptr [ecx + 0x82ebf8]
        test bl, bl
        jz L6c1985
L6c1975:
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x1]
        inc eax
        mov bl, byte ptr [ecx + 0x82ebf8]
        test bl, bl
        jnz L6c1975
L6c1985:
        sub al, dl
        mov byte ptr [esp + 0x13], al
        mov eax, dword ptr [g_82f3b0]
        mov ecx, dword ptr [eax*4 + 0x82ee88]
        mov esi, dword ptr [ecx + 0x4]
        test esi, esi
        jz L6c19da
L6c199e:
        mov al, byte ptr [esp + 0x13]
        cmp byte ptr [esi + 0xe], al
        jnz L6c19d4
        mov cl, byte ptr [esi + 0xf]
        test cl, cl
        lea eax, [esi + 0xf]
        jz L6c19c3
        mov edi, edx
        sub edi, eax
L6c19b5:
        mov bl, byte ptr [edi + eax*1]
        inc eax
        cmp bl, cl
        jnz L6c19d4
        mov cl, byte ptr [eax]
        test cl, cl
        jnz L6c19b5
L6c19c3:
        push esi
        call FUN_006c5a60
        cmp eax, -0x1
        jnz L6c1a48
        mov edx, dword ptr [g_82f328]
L6c19d4:
        mov esi, dword ptr [esi]
        test esi, esi
        jnz L6c199e
L6c19da:
        mov cl, byte ptr [g_79d064]
        test cl, cl
        mov eax, offset g_79d064
        jz L6c1a00
        mov esi, edx
        sub esi, eax
L6c19ed:
        mov cl, byte ptr [esi + eax*1]
        mov bl, byte ptr [eax]
        inc eax
        cmp cl, bl
        jnz L6c2355
        cmp byte ptr [eax], 0x0
        jnz L6c19ed
L6c1a00:
        mov al, byte ptr [edx + 0x6]
        add edx, 0x6
        cmp al, 0x2e
        mov dword ptr [g_82f328], edx
        jz L6c1a66
        mov edx, dword ptr [esp + 0x18]
        mov eax, dword ptr [edx + 0x30]
        test eax, eax
        lea esi, [edx + 0x30]
        jnz L6c1a2b
        push offset g_s_79d040
        call FUN_006bfa50
        add esp, 0x4
L6c1a2b:
        pop edi
        mov dword ptr [g_82f320], esi
        pop esi
        pop ebp
        mov dword ptr [g_82f308], 0x2
        mov eax, 0x68
        pop ebx
        add esp, 0x20
        ret
L6c1a48:
        mov esi, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x18]
        xor ecx, ecx
        cmp edx, esi
        setz cl
        pop edi
        pop esi
        pop ebp
        pop ebx
        inc ecx
        mov dword ptr [g_82f308], ecx
        add esp, 0x20
        ret
L6c1a66:
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [eax + 0x30]
        add eax, 0x30
        inc edx
        mov dword ptr [esp + 0x18], ecx
        xor ecx, ecx
        mov cl, byte ptr [edx + 0x1]
        mov dword ptr [esp + 0x2c], eax
        lea eax, [edx + 0x1]
        mov dword ptr [g_82f328], edx
        mov bl, byte ptr [ecx + 0x82ebf8]
        test bl, bl
        jz L6c1aa1
L6c1a91:
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x1]
        inc eax
        mov bl, byte ptr [ecx + 0x82ebf8]
        test bl, bl
        jnz L6c1a91
L6c1aa1:
        sub eax, edx
        mov edi, eax
        cmp edi, 0x6
        jnz L6c1b45
        mov esi, edx
L6c1ab0:
        mov cl, byte ptr [g_79d064]
        test cl, cl
        mov eax, offset g_79d064
        jz L6c1ad2
        mov ebp, edx
        sub ebp, eax
L6c1ac3:
        mov cl, byte ptr [eax + ebp*1]
        mov bl, byte ptr [eax]
        inc eax
        cmp cl, bl
        jnz L6c1b45
        cmp byte ptr [eax], 0x0
        jnz L6c1ac3
L6c1ad2:
        mov al, byte ptr [edx + 0x6]
        add edx, 0x6
        add esi, 0x6
        cmp al, 0x2e
        mov dword ptr [g_82f328], edx
        jnz L6c1b24
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [eax + 0x30]
        inc edx
        xor eax, eax
        mov al, byte ptr [edx + 0x1]
        mov dword ptr [esp + 0x18], ecx
        inc esi
        mov dword ptr [g_82f328], edx
        mov edi, 0x1
        mov cl, byte ptr [eax + 0x82ebf8]
        test cl, cl
        jz L6c1b45
L6c1b0c:
        xor ecx, ecx
        mov cl, byte ptr [esi + edi*1 + 0x1]
        inc edi
        mov al, byte ptr [ecx + 0x82ebf8]
        test al, al
        jnz L6c1b0c
        cmp edi, 0x6
        jnz L6c1b45
        jmp L6c1ab0
L6c1b24:
        mov edx, dword ptr [esp + 0x2c]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [g_82f320], edx
        mov dword ptr [g_82f308], 0x2
        mov eax, 0x68
        pop ebx
        add esp, 0x20
        ret
L6c1b45:
        mov eax, dword ptr [esp + 0x18]
        mov esi, dword ptr [eax + 0x4]
        test esi, esi
        jz L6c1b8c
L6c1b50:
        xor ecx, ecx
        mov cl, byte ptr [esi + 0xe]
        cmp ecx, edi
        jnz L6c1b86
        mov cl, byte ptr [esi + 0xf]
        test cl, cl
        lea eax, [esi + 0xf]
        jz L6c1b75
        mov ebp, edx
        sub ebp, eax
L6c1b67:
        mov bl, byte ptr [eax + ebp*1]
        inc eax
        cmp bl, cl
        jnz L6c1b86
        mov cl, byte ptr [eax]
        test cl, cl
        jnz L6c1b67
L6c1b75:
        push esi
        call FUN_006c5a60
        cmp eax, -0x1
        jnz L6c1bb7
        mov edx, dword ptr [g_82f328]
L6c1b86:
        mov esi, dword ptr [esi]
        test esi, esi
        jnz L6c1b50
L6c1b8c:
        push edi
        push edx
        push offset g_s_8329f0
        call dword ptr [g_76b320]
        push offset g_s_8329f0
        push offset g_s_79d018
        mov byte ptr [edi + 0x8329f0], 0x0
        call FUN_006bfa50
        add esp, 0x14
        jmp L6c234f
L6c1bb7:
        mov ecx, dword ptr [esp + 0x18]
        xor edx, edx
        jmp L6c1cfc
L6c1bc2:
        cmp bl, 0x7
        jnz L6c1ca2
        mov cl, byte ptr [g_79d010]
        test cl, cl
        mov eax, offset g_79d010
        jz L6c1bf1
        mov esi, edx
        sub esi, eax
L6c1bde:
        mov cl, byte ptr [esi + eax*1]
        mov bl, byte ptr [eax]
        inc eax
        cmp cl, bl
        jnz L6c2355
        cmp byte ptr [eax], 0x0
        jnz L6c1bde
L6c1bf1:
        mov al, byte ptr [edx + 0x7]
        add edx, 0x7
        cmp al, 0x2e
        mov dword ptr [g_82f328], edx
        jz L6c1c22
        pop edi
        pop esi
        pop ebp
        mov dword ptr [g_82f320], 0x82f3d4
        mov dword ptr [g_82f308], 0x2
        mov eax, 0x68
        pop ebx
        add esp, 0x20
        ret
L6c1c22:
        mov eax, dword ptr [g_82f3d4]
        mov esi, dword ptr [eax + 0x4]
        inc edx
        xor ecx, ecx
        mov cl, byte ptr [edx + 0x1]
        lea eax, [edx + 0x1]
        mov bl, 0x1
        mov dword ptr [g_82f328], edx
        mov byte ptr [esp + 0x14], bl
        cmp byte ptr [ecx + 0x82ebf8], 0x0
        jz L6c1c5c
L6c1c48:
        inc eax
        xor ecx, ecx
        mov cl, byte ptr [eax]
        inc bl
        cmp byte ptr [ecx + 0x82ebf8], 0x0
        jnz L6c1c48
        mov byte ptr [esp + 0x14], bl
L6c1c5c:
        test esi, esi
        jz L6c1ca2
L6c1c60:
        cmp byte ptr [esi + 0xe], bl
        jnz L6c1c9c
        mov cl, byte ptr [esi + 0xf]
        test cl, cl
        lea eax, [esi + 0xf]
        jz L6c1c85
        mov edi, edx
        sub edi, eax
L6c1c73:
        mov bl, byte ptr [edi + eax*1]
        inc eax
        cmp bl, cl
        jnz L6c1c98
        mov cl, byte ptr [eax]
        test cl, cl
        jnz L6c1c73
        mov bl, byte ptr [esp + 0x14]
L6c1c85:
        push esi
        call FUN_006c5a60
        cmp eax, -0x1
        jnz L6c1cf6
        mov edx, dword ptr [g_82f328]
        jmp L6c1c9c
L6c1c98:
        mov bl, byte ptr [esp + 0x14]
L6c1c9c:
        mov esi, dword ptr [esi]
        test esi, esi
        jnz L6c1c60
L6c1ca2:
        cmp bl, 0xc
        jnz L6c1eee
        mov cl, byte ptr [g_79d000]
        test cl, cl
        mov eax, offset g_79d000
        jz L6c1cd1
        mov esi, edx
        sub esi, eax
L6c1cbe:
        mov cl, byte ptr [esi + eax*1]
        mov bl, byte ptr [eax]
        inc eax
        cmp cl, bl
        jnz L6c2355
        cmp byte ptr [eax], 0x0
        jnz L6c1cbe
L6c1cd1:
        mov al, byte ptr [edx + 0xc]
        add edx, 0xc
        cmp al, 0x20
        mov dword ptr [g_82f328], edx
        jnz L6c1ce8
        inc edx
        mov dword ptr [g_82f328], edx
L6c1ce8:
        cmp byte ptr [edx], 0x28
        jnz L6c1d12
        inc edx
        mov dword ptr [g_82f328], edx
        jmp L6c1d1f
L6c1cf6:
        mov ecx, dword ptr [esp + 0x18]
        xor edx, edx
L6c1cfc:
        cmp ecx, dword ptr [esp + 0x1c]
        setz dl
        pop edi
        pop esi
        pop ebp
        pop ebx
        inc edx
        mov dword ptr [g_82f308], edx
        add esp, 0x20
        ret
L6c1d12:
        push offset g_s_79cfd8
        call FUN_006bfa50
        add esp, 0x4
L6c1d1f:
        call FUN_006c12e0
        cmp eax, 0x71
        jz L6c1d36
        push offset g_s_79cfd8
        call FUN_006bfa50
        add esp, 0x4
L6c1d36:
        mov eax, dword ptr [g_82f328]
        cmp byte ptr [eax], 0x20
        jnz L6c1d46
        inc eax
        mov dword ptr [g_82f328], eax
L6c1d46:
        cmp byte ptr [eax], 0x29
        jnz L6c1d53
        inc eax
        mov dword ptr [g_82f328], eax
        jmp L6c1d60
L6c1d53:
        push offset g_s_79cfd8
        call FUN_006bfa50
        add esp, 0x4
L6c1d60:
        mov edx, dword ptr [g_82f320]
        mov ecx, dword ptr [edx]
        call FUN_006cc640
        test eax, eax
        jnz L6c1d7e
        push offset g_s_79cfa0
        call FUN_006bfa50
        add esp, 0x4
L6c1d7e:
        mov eax, dword ptr [g_82f320]
        mov ecx, dword ptr [eax]
        call FUN_006cc650
        mov edi, eax
        cmp edi, 0x68
        jnz L6c1e99
        mov eax, dword ptr [g_82f328]
        cmp byte ptr [eax], 0x2e
        jnz L6c1e45
        inc eax
        xor ecx, ecx
        mov cl, byte ptr [eax + 0x1]
        mov dword ptr [g_82f328], eax
        inc eax
        mov ebx, 0x1
        mov dl, byte ptr [ecx + 0x82ebf8]
        test dl, dl
        jz L6c1dce
L6c1dbe:
        inc eax
        xor edx, edx
        mov dl, byte ptr [eax]
        inc ebx
        mov cl, byte ptr [edx + 0x82ebf8]
        test cl, cl
        jnz L6c1dbe
L6c1dce:
        mov eax, dword ptr [g_82f320]
        mov ecx, dword ptr [eax]
        call FUN_006cc640
        mov ecx, dword ptr [g_82f320]
        mov ecx, dword ptr [ecx]
        mov esi, eax
        call FUN_006cc660
        cmp eax, -0x1
        jnz L6c1df3
        mov eax, dword ptr [esi + 0x4]
        jmp L6c1df5
L6c1df3:
        mov eax, esi
L6c1df5:
        mov esi, dword ptr [eax + 0x4]
        or ebp, 0xffffffff
        test esi, esi
        jz L6c1e3b
L6c1dff:
        xor edx, edx
        mov dl, byte ptr [esi + 0xe]
        cmp edx, ebx
        jnz L6c1e35
        mov dl, byte ptr [esi + 0xf]
        test dl, dl
        lea ecx, [esi + 0xf]
        jz L6c1e28
        mov edi, dword ptr [g_82f328]
        sub edi, ecx
L6c1e1a:
        mov al, byte ptr [edi + ecx*1]
        inc ecx
        cmp al, dl
        jnz L6c1e35
        mov dl, byte ptr [ecx]
        test dl, dl
        jnz L6c1e1a
L6c1e28:
        push esi
        call FUN_006c5a60
        mov ebp, eax
        cmp ebp, -0x1
        jnz L6c1e3b
L6c1e35:
        mov esi, dword ptr [esi]
        test esi, esi
        jnz L6c1dff
L6c1e3b:
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x20
        ret
L6c1e45:
        mov ecx, dword ptr [g_82f320]
        mov ecx, dword ptr [ecx]
        call FUN_006cc640
        mov edx, dword ptr [g_82f320]
        mov ecx, dword ptr [edx]
        mov esi, eax
        call FUN_006cc660
        cmp eax, -0x1
        jnz L6c1e7c
        add esi, 0x4
        pop edi
        mov dword ptr [g_82f320], esi
        pop esi
        pop ebp
        mov eax, 0x68
        pop ebx
        add esp, 0x20
        ret
L6c1e7c:
        mov eax, dword ptr [g_82f320]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0x10]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [g_82f320], edx
        mov eax, 0x68
        pop ebx
        add esp, 0x20
        ret
L6c1e99:
        mov eax, dword ptr [g_82f320]
        mov ecx, dword ptr [eax]
        call FUN_006cc660
        mov esi, eax
        cmp esi, -0x1
        jnz L6c1ecb
        mov ecx, dword ptr [g_82f320]
        mov ecx, dword ptr [ecx]
        call FUN_006cc640
        add eax, 0x4
        mov dword ptr [g_82f320], eax
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret
L6c1ecb:
        mov edx, dword ptr [g_82f320]
        mov ecx, dword ptr [edx]
        call FUN_006cc640
        mov eax, dword ptr [eax + 0x4]
        lea ecx, [eax + esi*4]
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        mov dword ptr [g_82f320], ecx
        pop ebx
        add esp, 0x20
        ret
L6c1eee:
        cmp bl, 0x5
        jnz L6c243b
        mov cl, byte ptr [g_77d07c]
        test cl, cl
        mov eax, offset g_77d07c
        jz L6c1f1d
        mov esi, edx
        sub esi, eax
L6c1f0a:
        mov cl, byte ptr [esi + eax*1]
        mov bl, byte ptr [eax]
        inc eax
        cmp cl, bl
        jnz L6c2355
        cmp byte ptr [eax], 0x0
        jnz L6c1f0a
L6c1f1d:
        mov cl, byte ptr [g_79cf9c]
        add edx, 0x5
        test cl, cl
        mov dword ptr [g_82f328], edx
        mov eax, offset g_79cf9c
        jz L6c1f48
        mov esi, edx
        sub esi, eax
L6c1f39:
        mov cl, byte ptr [esi + eax*1]
        mov bl, byte ptr [eax]
        inc eax
        cmp cl, bl
        jnz L6c1f69
        cmp byte ptr [eax], 0x0
        jnz L6c1f39
L6c1f48:
        movsx ecx, byte ptr [edx + 0x2]
        mov bl, byte ptr [ecx + 0x82ebf8]
        test bl, bl
        lea eax, [edx + 0x2]
        jnz L6c1f69
        mov edx, dword ptr [g_82f3c8]
        mov dword ptr [g_82f328], eax
        jmp L6c2110
L6c1f69:
        mov cl, byte ptr [g_79cf98]
        test cl, cl
        mov eax, offset g_79cf98
        jz L6c1f8b
        mov esi, edx
        sub esi, eax
L6c1f7c:
        mov cl, byte ptr [esi + eax*1]
        mov bl, byte ptr [eax]
        inc eax
        cmp cl, bl
        jnz L6c1ff7
        cmp byte ptr [eax], 0x0
        jnz L6c1f7c
L6c1f8b:
        movsx eax, byte ptr [edx + 0x3]
        mov cl, byte ptr [eax + 0x82ebf8]
        test cl, cl
        lea esi, [edx + 0x3]
        jnz L6c1ff7
        mov ecx, dword ptr [esp + 0x18]
        mov edx, dword ptr [ecx + 0x24]
        mov eax, dword ptr [edx]
        neg eax
        test ecx, ecx
        jz L6c1fc2
L6c1fab:
        mov edx, dword ptr [ecx + 0x20]
        mov ebx, dword ptr [edx]
        mov edx, dword ptr [ecx + 0x3c]
        mov edi, dword ptr [edx]
        sub eax, ebx
        test edi, edi
        jz L6c1fc2
        mov ecx, dword ptr [ecx + 0x30]
        test ecx, ecx
        jnz L6c1fab
L6c1fc2:
        mov ecx, dword ptr [g_82f3c8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [g_82f3d0]
        pop edi
        mov dword ptr [g_82f328], esi
        pop esi
        add eax, edx
        pop ebp
        mov dword ptr [ecx], eax
        mov dword ptr [g_82f320], ecx
        mov dword ptr [g_82f308], 0x2
        mov eax, 0x64
        pop ebx
        add esp, 0x20
        ret
L6c1ff7:
        mov cl, byte ptr [g_79cf94]
        test cl, cl
        mov eax, offset g_79cf94
        jz L6c2019
        mov esi, edx
        sub esi, eax
L6c200a:
        mov cl, byte ptr [esi + eax*1]
        mov bl, byte ptr [eax]
        inc eax
        cmp cl, bl
        jnz L6c203d
        cmp byte ptr [eax], 0x0
        jnz L6c200a
L6c2019:
        movsx ecx, byte ptr [edx + 0x2]
        mov bl, byte ptr [ecx + 0x82ebf8]
        test bl, bl
        lea eax, [edx + 0x2]
        jnz L6c203d
        mov edx, dword ptr [g_82f3c8]
        mov dword ptr [g_82f328], eax
        add edx, 0x4
        jmp L6c2110
L6c203d:
        mov cl, byte ptr [g_79cf90]
        test cl, cl
        mov eax, offset g_79cf90
        jz L6c205f
        mov esi, edx
        sub esi, eax
L6c2050:
        mov cl, byte ptr [esi + eax*1]
        mov bl, byte ptr [eax]
        inc eax
        cmp cl, bl
        jnz L6c20cf
        cmp byte ptr [eax], 0x0
        jnz L6c2050
L6c205f:
        movsx eax, byte ptr [edx + 0x3]
        mov cl, byte ptr [eax + 0x82ebf8]
        test cl, cl
        lea esi, [edx + 0x3]
        jnz L6c20cf
        mov eax, dword ptr [esp + 0x18]
        mov ecx, dword ptr [eax + 0x24]
        mov ecx, dword ptr [ecx + 0x4]
        neg ecx
        test eax, eax
        jz L6c2098
L6c2080:
        mov edx, dword ptr [eax + 0x20]
        mov ebx, dword ptr [edx + 0x4]
        mov edx, dword ptr [eax + 0x3c]
        mov edi, dword ptr [edx]
        sub ecx, ebx
        test edi, edi
        jz L6c2098
        mov eax, dword ptr [eax + 0x30]
        test eax, eax
        jnz L6c2080
L6c2098:
        mov edx, dword ptr [g_82f3c8]
        mov eax, dword ptr [g_82f3d0]
        mov edx, dword ptr [edx + 0x4]
        pop edi
        add eax, 0x4
        mov dword ptr [g_82f328], esi
        pop esi
        add edx, ecx
        pop ebp
        mov dword ptr [eax], edx
        mov dword ptr [g_82f320], eax
        mov dword ptr [g_82f308], 0x2
        mov eax, 0x64
        pop ebx
        add esp, 0x20
        ret
L6c20cf:
        mov cl, byte ptr [g_79cf8c]
        test cl, cl
        mov eax, offset g_79cf8c
        jz L6c20f1
        mov esi, edx
        sub esi, eax
L6c20e2:
        mov cl, byte ptr [esi + eax*1]
        mov bl, byte ptr [eax]
        inc eax
        cmp cl, bl
        jnz L6c212d
        cmp byte ptr [eax], 0x0
        jnz L6c20e2
L6c20f1:
        movsx ecx, byte ptr [edx + 0x2]
        mov bl, byte ptr [ecx + 0x82ebf8]
        test bl, bl
        lea eax, [edx + 0x2]
        jnz L6c212d
        mov edx, dword ptr [g_82f3c8]
        mov dword ptr [g_82f328], eax
        add edx, 0x8
L6c2110:
        pop edi
        pop esi
        pop ebp
        mov dword ptr [g_82f320], edx
        mov dword ptr [g_82f308], 0x2
        mov eax, 0x64
        pop ebx
        add esp, 0x20
        ret
L6c212d:
        mov cl, byte ptr [g_79cf80]
        test cl, cl
        mov eax, offset g_79cf80
        jz L6c214f
        mov esi, edx
        sub esi, eax
L6c2140:
        mov cl, byte ptr [esi + eax*1]
        mov bl, byte ptr [eax]
        inc eax
        cmp cl, bl
        jnz L6c2186
        cmp byte ptr [eax], 0x0
        jnz L6c2140
L6c214f:
        movsx ecx, byte ptr [edx + 0x9]
        mov bl, byte ptr [ecx + 0x82ebf8]
        test bl, bl
        lea eax, [edx + 0x9]
        jnz L6c2186
        pop edi
        pop esi
        pop ebp
        mov dword ptr [g_82f328], eax
        mov dword ptr [g_82f320], 0x82f3c8
        mov dword ptr [g_82f308], 0x2
        mov eax, 0x66
        pop ebx
        add esp, 0x20
        ret
L6c2186:
        mov cl, byte ptr [g_79cf78]
        test cl, cl
        mov eax, offset g_79cf78
        jz L6c21a8
        mov esi, edx
        sub esi, eax
L6c2199:
        mov cl, byte ptr [esi + eax*1]
        mov bl, byte ptr [eax]
        inc eax
        cmp cl, bl
        jnz L6c21df
        cmp byte ptr [eax], 0x0
        jnz L6c2199
L6c21a8:
        movsx ecx, byte ptr [edx + 0x5]
        mov bl, byte ptr [ecx + 0x82ebf8]
        test bl, bl
        lea eax, [edx + 0x5]
        jnz L6c21df
        pop edi
        pop esi
        pop ebp
        mov dword ptr [g_82f328], eax
        mov dword ptr [g_82f320], 0x82f398
        mov dword ptr [g_82f308], 0x2
        mov eax, 0x64
        pop ebx
        add esp, 0x20
        ret
L6c21df:
        mov cl, byte ptr [g_79cf70]
        test cl, cl
        mov eax, offset g_79cf70
        jz L6c2201
        mov esi, edx
        sub esi, eax
L6c21f2:
        mov cl, byte ptr [esi + eax*1]
        mov bl, byte ptr [eax]
        inc eax
        cmp cl, bl
        jnz L6c2238
        cmp byte ptr [eax], 0x0
        jnz L6c21f2
L6c2201:
        movsx ecx, byte ptr [edx + 0x7]
        mov bl, byte ptr [ecx + 0x82ebf8]
        test bl, bl
        lea eax, [edx + 0x7]
        jnz L6c2238
        pop edi
        pop esi
        pop ebp
        mov dword ptr [g_82f328], eax
        mov dword ptr [g_82f320], 0x82f3a0
        mov dword ptr [g_82f308], 0x2
        mov eax, 0x64
        pop ebx
        add esp, 0x20
        ret
L6c2238:
        mov cl, byte ptr [g_79cf68]
        test cl, cl
        mov eax, offset g_79cf68
        jz L6c225a
        mov esi, edx
        sub esi, eax
L6c224b:
        mov cl, byte ptr [esi + eax*1]
        mov bl, byte ptr [eax]
        inc eax
        cmp cl, bl
        jnz L6c2291
        cmp byte ptr [eax], 0x0
        jnz L6c224b
L6c225a:
        movsx ecx, byte ptr [edx + 0x6]
        mov bl, byte ptr [ecx + 0x82ebf8]
        test bl, bl
        lea eax, [edx + 0x6]
        jnz L6c2291
        pop edi
        pop esi
        pop ebp
        mov dword ptr [g_82f328], eax
        mov dword ptr [g_82f320], 0x82f39c
        mov dword ptr [g_82f308], 0x2
        mov eax, 0x64
        pop ebx
        add esp, 0x20
        ret
L6c2291:
        mov cl, byte ptr [g_79cf60]
        test cl, cl
        mov eax, offset g_79cf60
        jz L6c22b3
        mov esi, edx
        sub esi, eax
L6c22a4:
        mov cl, byte ptr [esi + eax*1]
        mov bl, byte ptr [eax]
        inc eax
        cmp cl, bl
        jnz L6c22ea
        cmp byte ptr [eax], 0x0
        jnz L6c22a4
L6c22b3:
        movsx ecx, byte ptr [edx + 0x6]
        mov bl, byte ptr [ecx + 0x82ebf8]
        test bl, bl
        lea eax, [edx + 0x6]
        jnz L6c22ea
        pop edi
        pop esi
        pop ebp
        mov dword ptr [g_82f328], eax
        mov dword ptr [g_82f320], 0x82f3a4
        mov dword ptr [g_82f308], 0x2
        mov eax, 0x64
        pop ebx
        add esp, 0x20
        ret
L6c22ea:
        mov cl, byte ptr [g_79cf58]
        test cl, cl
        mov eax, offset g_79cf58
        jz L6c230c
        mov esi, edx
        sub esi, eax
L6c22fd:
        mov cl, byte ptr [esi + eax*1]
        mov bl, byte ptr [eax]
        inc eax
        cmp cl, bl
        jnz L6c2342
        cmp byte ptr [eax], 0x0
        jnz L6c22fd
L6c230c:
        lea eax, [edx + 0x6]
        movsx edx, byte ptr [eax]
        mov cl, byte ptr [edx + 0x82ebf8]
        test cl, cl
        jnz L6c2342
        pop edi
        pop esi
        pop ebp
        mov dword ptr [g_82f328], eax
        mov dword ptr [g_82f320], 0x82f3a8
        mov dword ptr [g_82f308], 0x2
        mov eax, 0x64
        pop ebx
        add esp, 0x20
        ret
L6c2342:
        push offset g_s_79cf18
        call FUN_006bfa50
        add esp, 0x4
L6c234f:
        mov edx, dword ptr [g_82f328]
L6c2355:
        mov eax, dword ptr [esp + 0x20]
        mov edi, dword ptr [eax + 0x4]
        add eax, 0x4
        test edi, edi
        mov dword ptr [esp + 0x20], edi
        mov dword ptr [esp + 0x2c], eax
        jz L6c2571
        mov ebp, dword ptr [esp + 0x14]
        and ebp, 0xff
        mov dword ptr [esp + 0x28], ebp
L6c237d:
        cmp dword ptr [edi + 0x40], ebp
        jnz L6c24b9
        mov cl, byte ptr [edi + 0x44]
        test cl, cl
        lea eax, [edi + 0x44]
        jz L6c23a6
        mov esi, edx
        sub esi, eax
L6c2394:
        mov bl, byte ptr [eax + esi*1]
        inc eax
        cmp bl, cl
        jnz L6c24b9
        mov cl, byte ptr [eax]
        test cl, cl
        jnz L6c2394
L6c23a6:
        mov al, byte ptr [edx + ebp*1]
        add edx, ebp
        cmp al, 0x20
        mov dword ptr [g_82f328], edx
        jnz L6c23bc
        inc edx
        mov dword ptr [g_82f328], edx
L6c23bc:
        cmp byte ptr [edx], 0x2e
        jnz L6c2546
        mov al, byte ptr [edx + 0x1]
        inc edx
        cmp al, 0x20
        mov dword ptr [g_82f328], edx
        jnz L6c23da
        inc edx
        mov dword ptr [g_82f328], edx
L6c23da:
        xor ecx, ecx
        mov cl, byte ptr [edx + 0x1]
        lea eax, [edx + 0x1]
        mov ebp, 0x1
        mov bl, byte ptr [ecx + 0x82ebf8]
        test bl, bl
        jz L6c2401
L6c23f1:
        inc eax
        xor ecx, ecx
        mov cl, byte ptr [eax]
        inc ebp
        mov bl, byte ptr [ecx + 0x82ebf8]
        test bl, bl
        jnz L6c23f1
L6c2401:
        mov edi, dword ptr [edi + 0x4]
        test edi, edi
        jz L6c249e
L6c240c:
        xor eax, eax
        mov al, byte ptr [edi + 0xe]
        cmp eax, ebp
        jnz L6c2494
        mov cl, byte ptr [edi + 0xf]
        test cl, cl
        lea eax, [edi + 0xf]
        jz L6c24d2
        mov esi, edx
        sub esi, eax
L6c2427:
        mov bl, byte ptr [eax + esi*1]
        inc eax
        cmp bl, cl
        jnz L6c2494
        mov cl, byte ptr [eax]
        test cl, cl
        jz L6c24d2
        jmp L6c2427
L6c243b:
        cmp bl, 0x4
        jnz L6c2355
        mov cl, byte ptr [g_79cf10]
        test cl, cl
        mov eax, offset g_79cf10
        jz L6c246a
        mov esi, edx
        sub esi, eax
L6c2457:
        mov cl, byte ptr [esi + eax*1]
        mov bl, byte ptr [eax]
        inc eax
        cmp cl, bl
        jnz L6c2355
        cmp byte ptr [eax], 0x0
        jnz L6c2457
L6c246a:
        pop edi
        pop esi
        add edx, 0x4
        pop ebp
        mov dword ptr [g_82f328], edx
        mov dword ptr [g_82f320], 0x82f33c
        mov dword ptr [g_82f308], 0x2
        mov eax, 0x68
        pop ebx
        add esp, 0x20
        ret
L6c2494:
        mov edi, dword ptr [edi]
        test edi, edi
        jnz L6c240c
L6c249e:
        push offset g_s_79ceec
        call FUN_006bfa50
        mov edx, dword ptr [g_82f328]
        mov ebp, dword ptr [esp + 0x2c]
        mov edi, dword ptr [esp + 0x24]
        add esp, 0x4
L6c24b9:
        mov eax, dword ptr [edi]
        test eax, eax
        mov dword ptr [esp + 0x2c], edi
        mov dword ptr [esp + 0x20], eax
        jz L6c2571
        mov edi, eax
        jmp L6c237d
L6c24d2:
        mov al, byte ptr [edx + ebp*1]
        add edx, ebp
        cmp al, 0x20
        mov dword ptr [g_82f328], edx
        jnz L6c24e8
        inc edx
        mov dword ptr [g_82f328], edx
L6c24e8:
        cmp byte ptr [edx], 0x5b
        jnz L6c251b
        mov al, byte ptr [edx + 0x1]
        inc edx
        cmp al, 0x20
        mov dword ptr [g_82f328], edx
        jnz L6c2502
        inc edx
        mov dword ptr [g_82f328], edx
L6c2502:
        call FUN_006c3420
        inc dword ptr [g_82f328]
        mov ecx, dword ptr [edi + 0x4]
        lea edx, [ecx + eax*4]
        mov dword ptr [g_82f320], edx
        jmp L6c2523
L6c251b:
        lea eax, [edi + 0x4]
        mov dword ptr [g_82f320], eax
L6c2523:
        mov esi, dword ptr [esp + 0x1c]
        mov edx, dword ptr [esp + 0x20]
        xor ecx, ecx
        cmp edx, esi
        setz cl
        inc ecx
        xor eax, eax
        mov al, byte ptr [edi + 0xa]
        pop edi
        pop esi
        pop ebp
        mov dword ptr [g_82f308], ecx
        pop ebx
        add esp, 0x20
        ret
L6c2546:
        mov esi, dword ptr [esp + 0x1c]
        mov eax, dword ptr [esp + 0x2c]
        xor ecx, ecx
        cmp edi, esi
        setnz cl
        pop edi
        pop esi
        pop ebp
        mov dword ptr [g_82f320], eax
        mov eax, 0x68
        pop ebx
        dec ecx
        and ecx, 0x2
        mov dword ptr [g_82f308], ecx
        add esp, 0x20
        ret
L6c2571:
        mov dword ptr [g_82f320], 0x0
L6c257b:
        or eax, 0xffffffff
L6c257e:
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x20
        ret
    }
}
