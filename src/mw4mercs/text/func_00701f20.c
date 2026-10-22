/* FUN_00701f20 - gosScript info/query dispatcher (switch on param_1, 0..0x28) */

extern char g_8aaac1;      /* 0x008aaac1 */
extern char g_8aaac0;      /* 0x008aaac0 */
extern unsigned int g_85b4a0; /* 0x0085b4a0 */
extern char g_87bc35;      /* 0x0087bc35 */
extern unsigned int g_8aaa6c; /* 0x008aaa6c */
extern unsigned int g_8aab0c; /* 0x008aab0c */
extern unsigned int g_8aaab8; /* 0x008aaab8 */
extern unsigned int g_8aaabc; /* 0x008aaabc */
extern char g_8589a1;      /* 0x008589a1 */
extern unsigned int g_8aaaf4; /* 0x008aaaf4 */
extern unsigned int g_8aaad0; /* 0x008aaad0 */
extern unsigned int g_858afc; /* 0x00858afc */
extern unsigned int g_8aaae4; /* 0x008aaae4 */
extern char g_87dd0a;      /* 0x0087dd0a */
extern unsigned int g_8aab04; /* 0x008aab04 */
extern unsigned int g_8aaa98; /* 0x008aaa98 */
extern unsigned int g_8aaa90; /* 0x008aaa90 */
extern unsigned int g_8aab00; /* 0x008aab00 */
extern unsigned int g_8aaafc; /* 0x008aaafc */
extern unsigned int g_856a7c; /* 0x00856a7c */
extern char g_85697c;      /* 0x0085697c */
extern char g_856874;      /* 0x00856874 */
extern char g_76b768;      /* 0x0076b768 */
extern char g_8aaaa8;      /* 0x008aaaa8 */
extern char g_7a11d8;      /* 0x007a11d8 */
extern char g_702b78;      /* 0x00702b78 jump table */
extern int (__cdecl *g_76b2ac)(void); /* 0x0076b2ac IAT _stricmp */

extern int __cdecl FUN_0070e220(void);
extern int __cdecl FUN_0070e230(void);
extern int __cdecl FUN_0070e1d0(void);
extern int __cdecl FUN_0070e1b0(void);
extern int __cdecl FUN_00741640(void);
extern int __cdecl FUN_007018c0(void);
extern int __cdecl FUN_006fab90(void);
extern int __stdcall FUN_00701f20(void);

__declspec(naked) int __stdcall FUN_00701f20(void)
{
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        push ebx
        push esi
        xor esi, esi
        cmp eax, 0x28
        push edi
        ja loc_702b5c
        jmp dword ptr [eax*4 + g_702b78]

loc_701f3b:
        mov cl, byte ptr [g_8aaac1]
        xor eax, eax
        test cl, cl
        setnz al
        mov esi, eax
        cmp dword ptr [g_85b4a0], 1
        mov al, byte ptr [g_87bc35]
        jz loc_701f8e
loc_701f58:
        test al, al
        jnz loc_702a28
        push 0xa
        push 0x1
        push esi
        call FUN_0070e1b0
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ret 0xc

loc_701f73:
        mov esi, dword ptr [g_8aaa6c]
        mov eax, dword ptr [g_85b4a0]
        and esi, 0x100
        cmp eax, 1
        mov al, byte ptr [g_87bc35]
        jnz loc_701f58
loc_701f8e:
        test al, al
        jnz loc_702a28
        push 0xa
        push 0x1
        call FUN_0070e220
        pop edi
        mov esi, eax
        pop esi
        pop ebx
        pop ebp
        ret 0xc

loc_701fa8:
        cmp dword ptr [g_85b4a0], 1
        mov al, byte ptr [g_87bc35]
        jnz loc_701fd0
        test al, al
        jnz loc_701fed
        push 0x9
        push 0x10
        call FUN_0070e220
        push eax
        push offset g_85697c
        call FUN_0070e230
        jmp loc_701fed
loc_701fd0:
        test al, al
        jnz loc_701fed
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, offset g_85697c
        repne scasb
        not ecx
        push ecx
        push offset g_85697c
        call FUN_0070e1d0
loc_701fed:
        mov al, byte ptr [g_85697c]
        test al, al
        jz loc_702a28
        mov esi, offset g_85697c
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ret 0xc

loc_702008:
        xor ecx, ecx
        mov cl, byte ptr [g_8aaac0]
        mov esi, ecx
loc_702012:
        cmp dword ptr [g_85b4a0], 1
        mov al, byte ptr [g_87bc35]
        jnz loc_701f58
        test al, al
        jnz loc_702a28
        push 0xa
        push 0x1
        call FUN_0070e220
        pop edi
        mov esi, eax
        pop esi
        pop ebx
        pop ebp
        ret 0xc

loc_70203e:
        mov al, byte ptr [g_8aaac1]
        test al, al
        mov edx, dword ptr [g_85b4a0]
        mov cl, byte ptr [g_87bc35]
        jz loc_702072
        cmp edx, 1
        jnz loc_702060
        test cl, cl
        jz loc_702910
loc_702060:
        mov eax, dword ptr [g_8aab0c]
        xor esi, esi
        test eax, eax
        jz loc_702072
loc_70206b:
        mov eax, dword ptr [eax]
        inc esi
        test eax, eax
        jnz loc_70206b
loc_702072:
        cmp edx, 1
        jnz loc_70207e
        test cl, cl
        jmp loc_70290a
loc_70207e:
        test cl, cl
        jmp loc_702854

loc_702085:
        mov al, byte ptr [g_8aaac1]
        mov ecx, dword ptr [g_85b4a0]
        mov edx, dword ptr [g_8aaab8]
        test al, al
        mov al, byte ptr [g_87bc35]
        mov esi, offset g_76b768
        jz loc_7020af
        cmp ecx, 1
        jnz loc_7020ad
        test al, al
        jz loc_7020bc
loc_7020ad:
        mov esi, edx
loc_7020af:
        cmp ecx, 1
        jnz loc_7020e6
        test al, al
        jnz loc_702a28
loc_7020bc:
        push 0x9
        push 0x10
        call FUN_0070e220
        mov esi, eax
        push esi
        push offset g_856874
        call FUN_0070e230
        dec esi
        neg esi
        sbb esi, esi
        and esi, 0x856874
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ret 0xc
loc_7020e6:
        test al, al
        jnz loc_702a28
        test edx, edx
        jnz loc_702a16
        mov byte ptr [ebp + 0xf], dl
        push 0x1
        lea edx, [ebp + 0xf]
        push edx
        call FUN_0070e1d0
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ret 0xc

loc_70210d:
        mov eax, dword ptr [g_85b4a0]
        mov esi, dword ptr [g_8aaabc]
        cmp eax, 1
        mov al, byte ptr [g_87bc35]
        jnz loc_70213c
loc_702122:
        test al, al
        jnz loc_702a28
loc_70212a:
        push 0xa
        push 0x20
        call FUN_0070e220
        pop edi
        mov esi, eax
        pop esi
        pop ebx
        pop ebp
        ret 0xc
loc_70213c:
        test al, al
loc_70213e:
        jnz loc_702a28
        push 0xa
        push 0x20
        push esi
        call FUN_0070e1b0
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ret 0xc

loc_702157:
        mov al, byte ptr [g_8589a1]
        test al, al
        jz loc_7024ff
        mov eax, dword ptr [g_8aaaf4]
        test eax, eax
        jz loc_7024ff
        mov esi, 1
        jmp loc_7024ff

loc_70217b:
        mov al, byte ptr [g_8589a1]
        test al, al
        jz loc_70218f
        mov eax, dword ptr [g_8aaaf4]
        test eax, eax
        jz loc_70218f
        xor esi, esi
loc_70218f:
        cmp dword ptr [g_85b4a0], 1
        mov al, byte ptr [g_87bc35]
        jnz loc_7021b7
        test al, al
        jnz loc_702a28
        push 0xa
        push 0x20
        call FUN_0070e220
        pop edi
        mov esi, eax
        pop esi
        pop ebx
        pop ebp
        ret 0xc
loc_7021b7:
        test al, al
        jnz loc_702a28
        push 0xa
        push 0x20
        push 0x0
        call FUN_0070e1b0
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ret 0xc

loc_7021d3:
        mov al, byte ptr [g_8aaac1]
        test al, al
        mov edi, dword ptr [g_85b4a0]
        mov bl, byte ptr [g_87bc35]
        jz loc_702250
        cmp edi, 1
        jnz loc_7021f1
        test bl, bl
        jz loc_70225d
loc_7021f1:
        mov eax, dword ptr [g_8aab0c]
        xor ecx, ecx
        test eax, eax
        jz loc_702250
        mov edx, dword ptr [ebp + 0xc]
loc_7021ff:
        cmp ecx, edx
        jz loc_70220c
        mov eax, dword ptr [eax]
        inc ecx
        test eax, eax
        jnz loc_7021ff
        jmp loc_702250
loc_70220c:
        mov esi, dword ptr [eax + 4]
        jmp loc_702250

loc_702211:
        mov al, byte ptr [g_8aaac1]
        test al, al
        mov edi, dword ptr [g_85b4a0]
        mov bl, byte ptr [g_87bc35]
        jz loc_702250
        cmp edi, 1
        jnz loc_70222f
        test bl, bl
        jz loc_70225d
loc_70222f:
        mov eax, dword ptr [g_8aab0c]
        or esi, 0xffffffff
        xor ecx, ecx
        test eax, eax
        jz loc_702250
        mov edx, dword ptr [ebp + 0xc]
loc_702240:
        cmp dword ptr [eax + 4], edx
        jz loc_70224e
        mov eax, dword ptr [eax]
        inc ecx
        test eax, eax
        jnz loc_702240
        jmp loc_702250
loc_70224e:
        mov esi, ecx
loc_702250:
        cmp edi, 1
        jnz loc_70226f
        test bl, bl
        jnz loc_702a28
loc_70225d:
        push 0xa
        push 0x20
        call FUN_0070e220
        pop edi
        mov esi, eax
        pop esi
        pop ebx
        pop ebp
        ret 0xc
loc_70226f:
        test bl, bl
        jmp loc_70213e

loc_702276:
        mov al, byte ptr [g_8aaac1]
        test al, al
        mov edi, dword ptr [g_85b4a0]
        mov bl, byte ptr [g_87bc35]
        mov esi, offset g_76b768
        jz loc_7022b9
        cmp edi, 1
        jnz loc_70229d
        test bl, bl
        jz loc_7029f0
loc_70229d:
        mov eax, dword ptr [g_8aab0c]
        xor ecx, ecx
        test eax, eax
        jz loc_7022b9
        mov edx, dword ptr [ebp + 0xc]
loc_7022ab:
        cmp ecx, edx
        jnz loc_7022b2
        lea esi, [eax + 0x14]
loc_7022b2:
        mov eax, dword ptr [eax]
        inc ecx
        test eax, eax
        jnz loc_7022ab
loc_7022b9:
        cmp edi, 1
        jnz loc_7022c5
        test bl, bl
        jmp loc_7029ee
loc_7022c5:
        test bl, bl
        jmp loc_702a14

loc_7022cc:
        mov esi, dword ptr [g_8aaa6c]
        shr esi, 5
        and esi, 1
        jmp loc_702012

loc_7022dd:
        mov al, byte ptr [g_8aaac1]
        test al, al
        jz loc_7024ff
        cmp dword ptr [g_85b4a0], 1
        jnz loc_702300
        mov al, byte ptr [g_87bc35]
        test al, al
        jz loc_70212a
loc_702300:
        mov edi, dword ptr [g_8aaad0]
        push 0x0
        push 0x0
        push 0x8
        call FUN_00701f20
        xor esi, esi
        test edi, edi
        jz loc_7024ff
        mov ecx, dword ptr [g_858afc]
        dec ecx
loc_702322:
        cmp ecx, dword ptr [edi + 0xc]
        jnz loc_70232d
        cmp eax, dword ptr [edi + 0x2c]
        jnz loc_70232d
        inc esi
loc_70232d:
        mov edi, dword ptr [edi]
        test edi, edi
        jnz loc_702322
        jmp loc_7024ff

loc_702338:
        mov al, byte ptr [g_8aaac1]
        test al, al
        jz loc_7024ff
        cmp dword ptr [g_85b4a0], 1
        jnz loc_70235b
        mov al, byte ptr [g_87bc35]
        test al, al
        jz loc_70212a
loc_70235b:
        mov edi, dword ptr [g_8aaad0]
        push 0x0
        push 0x0
        push 0x8
        call FUN_00701f20
        xor esi, esi
        test edi, edi
        jz loc_7024ff
        mov edx, dword ptr [g_858afc]
        lea ecx, [edx - 1]
loc_70237f:
        cmp ecx, dword ptr [edi + 0xc]
        jnz loc_70238a
        cmp eax, dword ptr [edi + 0x28]
        jnz loc_70238a
        inc esi
loc_70238a:
        mov edi, dword ptr [edi]
        test edi, edi
        jnz loc_70237f
        jmp loc_7024ff

loc_702395:
        mov al, byte ptr [g_8aaac1]
        test al, al
        jz loc_7024ff
        cmp dword ptr [g_85b4a0], 1
        jnz loc_7023b8
        mov al, byte ptr [g_87bc35]
        test al, al
        jz loc_70212a
loc_7023b8:
        mov edi, dword ptr [g_8aaad0]
        push 0x0
        push 0x0
        push 0x8
        call FUN_00701f20
        xor esi, esi
        test edi, edi
        jz loc_7024ff
        mov ecx, dword ptr [g_858afc]
        dec ecx
loc_7023da:
        cmp ecx, dword ptr [edi + 0xc]
        jnz loc_7023e7
        cmp eax, dword ptr [edi + 0x2c]
        jnz loc_7023e7
        add esi, dword ptr [edi + 0x30]
loc_7023e7:
        mov edi, dword ptr [edi]
        test edi, edi
        jnz loc_7023da
        jmp loc_7024ff

loc_7023f2:
        mov al, byte ptr [g_8aaac1]
        test al, al
        jz loc_7024ff
        cmp dword ptr [g_85b4a0], 1
        jnz loc_702415
        mov al, byte ptr [g_87bc35]
        test al, al
        jz loc_70212a
loc_702415:
        mov edi, dword ptr [g_8aaad0]
        push 0x0
        push 0x0
        push 0x8
        call FUN_00701f20
        xor esi, esi
        test edi, edi
        jz loc_7024ff
        mov edx, dword ptr [g_858afc]
        lea ecx, [edx - 1]
loc_702439:
        cmp ecx, dword ptr [edi + 0xc]
        jnz loc_702446
        cmp eax, dword ptr [edi + 0x28]
        jnz loc_702446
        add esi, dword ptr [edi + 0x30]
loc_702446:
        mov edi, dword ptr [edi]
        test edi, edi
        jnz loc_702439
        jmp loc_7024ff

loc_702451:
        mov al, byte ptr [g_8aaac1]
        test al, al
        jz loc_7024ff
        cmp dword ptr [g_85b4a0], 1
        jnz loc_702474
        mov al, byte ptr [g_87bc35]
        test al, al
        jz loc_70212a
loc_702474:
        mov edi, dword ptr [g_8aaad0]
        push 0x0
        push 0x0
        push 0x8
        call FUN_00701f20
        xor esi, esi
        test edi, edi
        jz loc_7024ff
        mov ecx, dword ptr [g_858afc]
        dec ecx
loc_702492:
        cmp ecx, dword ptr [edi + 0xc]
        jnz loc_7024a3
        cmp eax, dword ptr [edi + 0x2c]
        jnz loc_7024a3
        mov edx, dword ptr [edi + 0x30]
        lea esi, [esi + edx + 0x2a]
loc_7024a3:
        mov edi, dword ptr [edi]
        test edi, edi
        jnz loc_702492
        jmp loc_7024ff

loc_7024ab:
        mov al, byte ptr [g_8aaac1]
        test al, al
        jz loc_7024ff
        cmp dword ptr [g_85b4a0], 1
        jnz loc_7024ca
        mov al, byte ptr [g_87bc35]
        test al, al
        jz loc_70212a
loc_7024ca:
        mov edi, dword ptr [g_8aaad0]
        push 0x0
        push 0x0
        push 0x8
        call FUN_00701f20
        xor esi, esi
        test edi, edi
        jz loc_7024ff
        mov ecx, dword ptr [g_858afc]
        dec ecx
loc_7024e8:
        cmp ecx, dword ptr [edi + 0xc]
        jnz loc_7024f9
        cmp eax, dword ptr [edi + 0x28]
        jnz loc_7024f9
        mov edx, dword ptr [edi + 0x30]
        lea esi, [esi + edx + 0x2a]
loc_7024f9:
        mov edi, dword ptr [edi]
        test edi, edi
        jnz loc_7024e8
loc_7024ff:
        cmp dword ptr [g_85b4a0], 1
        mov al, byte ptr [g_87bc35]
        jnz loc_70213c
        jmp loc_702122

loc_702516:
        mov al, byte ptr [g_8aaac1]
        test al, al
        jz loc_702748
        cmp dword ptr [g_85b4a0], 1
        jnz loc_702539
        mov al, byte ptr [g_87bc35]
        test al, al
        jz loc_702910
loc_702539:
        mov ecx, dword ptr [ebp + 0xc]
        mov edx, dword ptr [g_8aaae4]
        push 0x0
        lea eax, [ebp + 0xc]
        push eax
        push 0x1
        push ecx
        push 0x0
        push edx
        mov byte ptr [g_87dd0a], 1
        call FUN_00741640
        test eax, eax
        mov byte ptr [g_87dd0a], 0
        jl loc_702748
        mov esi, dword ptr [ebp + 0xc]
        jmp loc_702748

loc_702571:
        mov al, byte ptr [g_8aaac1]
        test al, al
        jz loc_702584
        mov esi, 1
        jmp loc_702748
loc_702584:
        mov eax, dword ptr [g_8aab04]
        xor ecx, ecx
        test eax, eax
        jz loc_702596
loc_70258f:
        mov eax, dword ptr [eax]
        inc ecx
        test eax, eax
        jnz loc_70258f
loc_702596:
        mov esi, ecx
        jmp loc_702748

loc_70259d:
        mov al, byte ptr [g_8aaac1]
        test al, al
        mov esi, offset g_76b768
        jz loc_7025ba
        mov eax, dword ptr [ebp + 0xc]
        test eax, eax
        jnz loc_7025d8
        mov esi, dword ptr [g_8aaa98]
        jmp loc_7025d8
loc_7025ba:
        mov eax, dword ptr [g_8aab04]
        xor ecx, ecx
        test eax, eax
        jz loc_7025d8
        mov edx, dword ptr [ebp + 0xc]
loc_7025c8:
        cmp ecx, edx
        jz loc_7025d5
        mov eax, dword ptr [eax]
        inc ecx
        test eax, eax
        jnz loc_7025c8
        jmp loc_7025d8
loc_7025d5:
        lea esi, [eax + 0x59]
loc_7025d8:
        cmp dword ptr [g_85b4a0], 1
        mov al, byte ptr [g_87bc35]
        jnz loc_702a12
        jmp loc_7029ec

loc_7025ef:
        mov al, byte ptr [g_8aaac1]
        test al, al
        jz loc_702609
        mov esi, dword ptr [g_8aaa6c]
        shr esi, 0xa
        and esi, 1
        jmp loc_702012
loc_702609:
        mov ebx, dword ptr [ebp + 0x10]
        test ebx, ebx
        jz loc_702012
        mov edi, dword ptr [g_8aab04]
        test edi, edi
        jz loc_702012
loc_702622:
        lea eax, [edi + 0x59]
        push ebx
        push eax
        call dword ptr [g_76b2ac]
        add esp, 8
        test eax, eax
        jz loc_70263f
        mov edi, dword ptr [edi]
        test edi, edi
        jnz loc_702622
        jmp loc_702012
loc_70263f:
        mov esi, dword ptr [edi + 8]
        shr esi, 0xa
        and esi, 1
        jmp loc_702012

loc_70264d:
        mov al, byte ptr [g_8aaac1]
        test al, al
        jz loc_702667
        mov esi, dword ptr [g_8aaa6c]
        shr esi, 8
        and esi, 1
        jmp loc_702012
loc_702667:
        mov ebx, dword ptr [ebp + 0x10]
        test ebx, ebx
        jz loc_702012
        mov edi, dword ptr [g_8aab04]
        test edi, edi
        jz loc_702012
loc_702680:
        lea ecx, [edi + 0x59]
        push ebx
        push ecx
        call dword ptr [g_76b2ac]
        add esp, 8
        test eax, eax
        jz loc_70269d
        mov edi, dword ptr [edi]
        test edi, edi
        jnz loc_702680
        jmp loc_702012
loc_70269d:
        mov esi, dword ptr [edi + 8]
        shr esi, 8
        and esi, 1
        jmp loc_702012

loc_7026ab:
        mov al, byte ptr [g_8aaac1]
        test al, al
        jz loc_7026c5
        mov esi, dword ptr [g_8aaa6c]
        shr esi, 5
        and esi, 1
        jmp loc_702012
loc_7026c5:
        mov ebx, dword ptr [ebp + 0x10]
        test ebx, ebx
        jz loc_702012
        mov edi, dword ptr [g_8aab04]
        test edi, edi
        jz loc_702012
loc_7026de:
        lea edx, [edi + 0x59]
        push ebx
        push edx
        call dword ptr [g_76b2ac]
        add esp, 8
        test eax, eax
        jz loc_7026fb
        mov edi, dword ptr [edi]
        test edi, edi
        jnz loc_7026de
        jmp loc_702012
loc_7026fb:
        mov esi, dword ptr [edi + 8]
        shr esi, 5
        and esi, 1
        jmp loc_702012

loc_702709:
        mov al, byte ptr [g_8aaac1]
        test al, al
        jz loc_70271a
        mov esi, dword ptr [g_8aaa90]
        jmp loc_702748
loc_70271a:
        mov ebx, dword ptr [ebp + 0x10]
        test ebx, ebx
        jz loc_702748
        mov edi, dword ptr [g_8aab04]
        test edi, edi
        jz loc_702748
loc_70272b:
        lea eax, [edi + 0x59]
        push ebx
        push eax
        call dword ptr [g_76b2ac]
        add esp, 8
        test eax, eax
        jz loc_702745
        mov edi, dword ptr [edi]
        test edi, edi
        jnz loc_70272b
        jmp loc_702748
loc_702745:
        mov esi, dword ptr [edi + 0x2c]
loc_702748:
        cmp dword ptr [g_85b4a0], 1
        mov al, byte ptr [g_87bc35]
        jnz loc_702852
        jmp loc_702908

loc_70275f:
        mov al, byte ptr [g_8aaac1]
        test al, al
        jz loc_70276f
        mov esi, offset g_8aaaa8
        jmp loc_70279d
loc_70276f:
        mov ebx, dword ptr [ebp + 0x10]
        test ebx, ebx
        jz loc_70279d
        mov edi, dword ptr [g_8aab04]
        test edi, edi
        jz loc_70279d
loc_702780:
        lea ecx, [edi + 0x59]
        push ebx
        push ecx
        call dword ptr [g_76b2ac]
        add esp, 8
        test eax, eax
        jz loc_70279a
        mov edi, dword ptr [edi]
        test edi, edi
        jnz loc_702780
        jmp loc_70279d
loc_70279a:
        lea esi, [edi + 0x44]
loc_70279d:
        cmp dword ptr [g_85b4a0], 1
        mov al, byte ptr [g_87bc35]
        jnz loc_7027d6
        test al, al
        jnz loc_702a28
        push 0x9
        push 0x10
        call FUN_0070e220
        push 0x10
        push offset g_856874
        call FUN_0070e230
        mov esi, offset g_856874
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ret 0xc
loc_7027d6:
        test al, al
        jnz loc_702a28
        push 0x10
        push esi
        call FUN_0070e1d0
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ret 0xc

loc_7027ef:
        mov al, byte ptr [g_8aaac1]
        test al, al
        jz loc_702807
        push 0x0
        push 0x0
        push 0x2
        call FUN_00701f20
        mov esi, eax
        jmp loc_702840
loc_702807:
        mov ebx, dword ptr [ebp + 0x10]
        test ebx, ebx
        jz loc_702840
        mov edi, dword ptr [g_8aab04]
        test edi, edi
        jz loc_702840
loc_702818:
        lea edx, [edi + 0x59]
        push ebx
        push edx
        call dword ptr [g_76b2ac]
        add esp, 8
        test eax, eax
        jnz loc_70283a
        mov eax, dword ptr [edi + 0x54]
        xor esi, esi
        test eax, eax
        jz loc_70283a
loc_702833:
        mov eax, dword ptr [eax]
        inc esi
        test eax, eax
        jnz loc_702833
loc_70283a:
        mov edi, dword ptr [edi]
        test edi, edi
        jnz loc_702818
loc_702840:
        cmp dword ptr [g_85b4a0], 1
        mov al, byte ptr [g_87bc35]
        jz loc_702908
loc_702852:
        test al, al
loc_702854:
        jnz loc_702a28
        push 0xa
        push 0x8
        push esi
        call FUN_0070e1b0
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ret 0xc

loc_70286d:
        mov al, byte ptr [g_8aaac1]
        test al, al
        jz loc_70288a
        mov eax, dword ptr [ebp + 0xc]
        push 0x0
        push eax
        push 0x7
        call FUN_00701f20
        mov esi, eax
        jmp loc_7025d8
loc_70288a:
        mov ebx, dword ptr [ebp + 0x10]
        test ebx, ebx
        jz loc_7025d8
        mov edi, dword ptr [g_8aab04]
        test edi, edi
        jz loc_7025d8
loc_7028a3:
        lea ecx, [edi + 0x59]
        push ebx
        push ecx
        call dword ptr [g_76b2ac]
        add esp, 8
        test eax, eax
        jz loc_7028c0
        mov edi, dword ptr [edi]
        test edi, edi
        jnz loc_7028a3
        jmp loc_7025d8
loc_7028c0:
        mov eax, dword ptr [edi + 0x54]
        xor ecx, ecx
        xor esi, esi
        test eax, eax
        jz loc_7025d8
        mov edx, dword ptr [ebp + 0xc]
loc_7028d2:
        cmp ecx, edx
        jz loc_702964
        mov eax, dword ptr [eax]
        inc ecx
        test eax, eax
        jnz loc_7028d2
        jmp loc_7025d8

loc_7028e6:
        mov eax, dword ptr [g_8aab00]
        xor ecx, ecx
        test eax, eax
        jz loc_7028f8
loc_7028f1:
        mov eax, dword ptr [eax]
        inc ecx
        test eax, eax
        jnz loc_7028f1
loc_7028f8:
        cmp dword ptr [g_85b4a0], 1
        mov al, byte ptr [g_87bc35]
        mov esi, ecx
        jnz loc_702922
loc_702908:
        test al, al
loc_70290a:
        jnz loc_702a28
loc_702910:
        push 0xa
        push 0x8
        call FUN_0070e220
        pop edi
        mov esi, eax
        pop esi
        pop ebx
        pop ebp
        ret 0xc
loc_702922:
        test al, al
        jnz loc_702a28
        push 0xa
        push 0x8
        push ecx
        call FUN_0070e1b0
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ret 0xc

loc_70293d:
        mov eax, dword ptr [g_8aab00]
        xor ecx, ecx
        test eax, eax
        mov esi, offset g_76b768
        jz loc_7025d8
        mov edx, dword ptr [ebp + 0xc]
loc_702954:
        cmp edx, ecx
        jz loc_702964
        mov eax, dword ptr [eax]
        inc ecx
        test eax, eax
        jnz loc_702954
        jmp loc_7025d8
loc_702964:
        lea esi, [eax + 0x14]
        jmp loc_7025d8

loc_70296c:
        mov eax, dword ptr [g_8aaafc]
        xor ecx, ecx
        test eax, eax
        jz loc_70297e
loc_702977:
        mov eax, dword ptr [eax]
        inc ecx
        test eax, eax
        jnz loc_702977
loc_70297e:
        cmp dword ptr [g_85b4a0], 1
        mov al, byte ptr [g_87bc35]
        mov esi, ecx
        jnz loc_7029a4
        test al, al
        jnz loc_7029b2
        push 0xa
        push 0x8
        call FUN_0070e220
        pop edi
        mov esi, eax
        pop esi
        pop ebx
        pop ebp
        ret 0xc
loc_7029a4:
        test al, al
        jnz loc_7029b2
        push 0xa
        push 0x8
        push ecx
        call FUN_0070e1b0
loc_7029b2:
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ret 0xc

loc_7029bb:
        mov eax, dword ptr [g_8aaafc]
        xor ecx, ecx
        test eax, eax
        mov esi, offset g_76b768
        jz loc_7029de
        mov edx, dword ptr [ebp + 0xc]
loc_7029ce:
        cmp edx, ecx
        jz loc_7029db
        mov eax, dword ptr [eax]
        inc ecx
        test eax, eax
        jnz loc_7029ce
        jmp loc_7029de
loc_7029db:
        lea esi, [eax + 0x14]
loc_7029de:
        cmp dword ptr [g_85b4a0], 1
        mov al, byte ptr [g_87bc35]
        jnz loc_702a12
loc_7029ec:
        test al, al
loc_7029ee:
        jnz loc_702a28
loc_7029f0:
        push 0x9
        push 0x10
        call FUN_0070e220
        push eax
        push offset g_856874
        call FUN_0070e230
        mov esi, offset g_856874
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ret 0xc
loc_702a12:
        test al, al
loc_702a14:
        jnz loc_702a28
loc_702a16:
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        push ecx
        push esi
        call FUN_0070e1d0
loc_702a28:
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ret 0xc

loc_702a31:
        mov ecx, dword ptr [g_856a7c]
        xor eax, eax
        test ecx, ecx
        jz loc_702b71
loc_702a41:
        mov ecx, dword ptr [ecx + 0x18]
        inc eax
        test ecx, ecx
        jnz loc_702a41
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xc

loc_702a50:
        mov eax, dword ptr [g_856a7c]
        test eax, eax
        mov ecx, dword ptr [ebp + 0xc]
        jz loc_702a68
loc_702a5c:
        test ecx, ecx
        jz loc_702a76
        mov eax, dword ptr [eax + 0x18]
        dec ecx
        test eax, eax
        jnz loc_702a5c
loc_702a68:
        test ecx, ecx
        jz loc_702a76
        pop edi
        pop esi
        or eax, 0xffffffff
        pop ebx
        pop ebp
        ret 0xc
loc_702a76:
        xor ecx, ecx
        mov cx, word ptr [eax + 8]
        xor edx, edx
        mov dx, word ptr [eax + 0xc]
        pop edi
        pop esi
        pop ebx
        mov eax, ecx
        sub eax, edx
        pop ebp
        ret 0xc

loc_702a8d:
        mov edx, dword ptr [ebp + 0xc]
        push edx
        call FUN_007018c0
        test eax, eax
        jz loc_702ab1
        xor edx, edx
        mov dx, word ptr [eax + 8]
        xor ecx, ecx
        mov cx, word ptr [eax + 0xc]
        pop edi
        pop esi
        pop ebx
        mov eax, edx
        sub eax, ecx
        pop ebp
        ret 0xc
loc_702ab1:
        pop edi
        pop esi
        mov eax, 0xffffd8f0
        pop ebx
        pop ebp
        ret 0xc

loc_702abd:
        mov eax, dword ptr [g_856a7c]
        test eax, eax
        mov ecx, dword ptr [ebp + 0xc]
        jz loc_702ad5
loc_702ac9:
        test ecx, ecx
        jz loc_702ae3
        mov eax, dword ptr [eax + 0x18]
        dec ecx
        test eax, eax
        jnz loc_702ac9
loc_702ad5:
        test ecx, ecx
        jz loc_702ae3
        pop edi
        pop esi
        or eax, 0xffffffff
        pop ebx
        pop ebp
        ret 0xc
loc_702ae3:
        xor ecx, ecx
        mov cx, word ptr [eax + 8]
        pop edi
        pop esi
        pop ebx
        mov eax, ecx
        pop ebp
        ret 0xc

loc_702af2:
        mov eax, dword ptr [g_856a7c]
        test eax, eax
        mov ecx, dword ptr [ebp + 0xc]
        jz loc_702b0a
loc_702afe:
        test ecx, ecx
        jz loc_702b18
        mov eax, dword ptr [eax + 0x18]
        dec ecx
        test eax, eax
        jnz loc_702afe
loc_702b0a:
        test ecx, ecx
        jz loc_702b18
        pop edi
        pop esi
        or eax, 0xffffffff
        pop ebx
        pop ebp
        ret 0xc
loc_702b18:
        xor edx, edx
        mov dx, word ptr [eax + 0xa]
        pop edi
        pop esi
        pop ebx
        mov eax, edx
        pop ebp
        ret 0xc

loc_702b27:
        mov eax, dword ptr [g_856a7c]
        test eax, eax
        mov ecx, dword ptr [ebp + 0xc]
        jz loc_702b3f
loc_702b33:
        test ecx, ecx
        jz loc_702b4d
        mov eax, dword ptr [eax + 0x18]
        dec ecx
        test eax, eax
        jnz loc_702b33
loc_702b3f:
        test ecx, ecx
        jz loc_702b4d
        pop edi
        pop esi
        or eax, 0xffffffff
        pop ebx
        pop ebp
        ret 0xc
loc_702b4d:
        xor ecx, ecx
        mov cx, word ptr [eax + 0xc]
        pop edi
        pop esi
        pop ebx
        mov eax, ecx
        pop ebp
        ret 0xc

loc_702b5c:
        push eax
        push offset g_7a11d8
        call FUN_006fab90
        add esp, 8
        test eax, eax
        jz loc_702b6f
        int 3
loc_702b6f:
        xor eax, eax
loc_702b71:
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 0xc
    }
}
