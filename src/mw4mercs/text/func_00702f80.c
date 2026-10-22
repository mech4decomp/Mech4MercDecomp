/* FUN_00702f80 - gosScript command parser/executor (string setup + dispatch) */

extern char g_8569fc;      /* 0x008569fc */
extern char g_85697c;      /* 0x0085697c */
extern char g_8aaa68;      /* 0x008aaa68 */
extern char g_8589d4;      /* 0x008589d4 */
extern unsigned int g_8aaaf4; /* 0x008aaaf4 */
extern char g_8589a2;      /* 0x008589a2 */
extern unsigned int g_8589a8; /* 0x008589a8 */
extern unsigned int g_8aaa6c; /* 0x008aaa6c */
extern unsigned int g_8589a4; /* 0x008589a4 */
extern unsigned int g_8aaa80; /* 0x008aaa80 */
extern unsigned int g_8589ac; /* 0x008589ac */
extern unsigned int g_8aaa84; /* 0x008aaa84 */
extern unsigned int g_8589b0; /* 0x008589b0 */
extern unsigned int g_8aaa88; /* 0x008aaa88 */
extern unsigned int g_8aaa8c; /* 0x008aaa8c */
extern unsigned int g_8aaa90; /* 0x008aaa90 */
extern unsigned int g_8589b8; /* 0x008589b8 */
extern unsigned int g_8589bc; /* 0x008589bc */
extern unsigned int g_8589c0; /* 0x008589c0 */
extern unsigned int g_8589c4; /* 0x008589c4 */
extern unsigned int g_8aaaa8; /* 0x008aaaa8 */
extern unsigned int g_8aaa94; /* 0x008aaa94 */
extern unsigned int g_8aaaac; /* 0x008aaaac */
extern unsigned int g_8aaab0; /* 0x008aaab0 */
extern unsigned int g_8aaab4; /* 0x008aaab4 */
extern unsigned int g_8aaab8; /* 0x008aaab8 */
extern unsigned int g_8aaa98; /* 0x008aaa98 */
extern unsigned int g_8aaa9c; /* 0x008aaa9c */
extern char g_8aaa20;      /* 0x008aaa20 */
extern char g_87dd0a;      /* 0x0087dd0a */
extern unsigned int g_8aaae4; /* 0x008aaae4 */
extern unsigned int g_8aaa70; /* 0x008aaa70 */
extern unsigned int g_8aaa74; /* 0x008aaa74 */
extern unsigned int g_8aaa78; /* 0x008aaa78 */
extern unsigned int g_8aaa7c; /* 0x008aaa7c */
extern unsigned int g_8aaa40; /* 0x008aaa40 */
extern unsigned int g_8aaae8; /* 0x008aaae8 */
extern unsigned int g_8aaabc; /* 0x008aaabc */
extern char g_8aaac1;      /* 0x008aaac1 */
extern char g_8aaac0;      /* 0x008aaac0 */
extern unsigned int g_849308; /* 0x00849308 */
extern char g_7423d0;      /* 0x007423d0 */
extern int (__cdecl *g_76b110)(void); /* 0x0076b110 IAT */
extern int (__cdecl *g_76b100)(void); /* 0x0076b100 IAT */

extern int __cdecl FUN_00701970(void);
extern int __cdecl FUN_00702dc0(void);
extern int __cdecl FUN_00741a50(void);
extern int __cdecl FUN_00741980(void);
extern int __cdecl FUN_007418a0(void);
extern int __cdecl FUN_006f3c80(void);
extern int __cdecl FUN_006f4230(void);
extern int __cdecl FUN_00740fd0(void);
extern int __cdecl FUN_00741700(void);
extern int __cdecl FUN_00741f90(void);
extern int __cdecl FUN_00742830(void);
extern int __cdecl FUN_006f8b20(void);
extern int __cdecl FUN_006f9070(void);

__declspec(naked) int __stdcall FUN_00702f80(void)
{
    __asm {
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        push edi
        call FUN_00701970
        mov edi, dword ptr [esp + 0x2c]
        test edi, edi
        jnz loc_702fa3
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x18
        ret 0x18
loc_702fa3:
        cmp byte ptr [edi], 0x20
        jnz loc_702fb4
loc_702fa8:
        mov al, byte ptr [edi + 1]
        inc edi
        cmp al, 0x20
        jz loc_702fa8
        mov dword ptr [esp + 0x2c], edi
loc_702fb4:
        mov ebp, dword ptr [esp + 0x38]
        test ebp, ebp
        jz loc_702fca
        cmp byte ptr [ebp], 0x20
        jnz loc_702fca
loc_702fc2:
        mov al, byte ptr [ebp + 1]
        inc ebp
        cmp al, 0x20
        jz loc_702fc2
loc_702fca:
        cmp byte ptr [edi], 0x0
        jnz loc_702fde
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x18
        ret 0x18
loc_702fde:
        mov eax, dword ptr [esp + 0x30]
        test eax, eax
        jnz loc_702ff5
        pop edi
        pop esi
        pop ebp
        mov eax, 2
        pop ebx
        add esp, 0x18
        ret 0x18
loc_702ff5:
        cmp byte ptr [eax], 0x20
        jnz loc_703007
loc_702ffa:
        mov cl, byte ptr [eax + 1]
        inc eax
        cmp cl, 0x20
        jz loc_702ffa
        mov dword ptr [esp + 0x30], eax
loc_703007:
        cmp byte ptr [eax], 0x0
        jnz loc_70301b
        pop edi
        pop esi
        pop ebp
        mov eax, 2
        pop ebx
        add esp, 0x18
        ret 0x18
loc_70301b:
        or ecx, 0xffffffff
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        shr ecx, 2
        mov esi, edi
        mov edi, offset g_8569fc
        rep movsd
        mov ecx, eax
        and ecx, 3
        test ebp, ebp
        rep movsb
        jz loc_703063
        or ecx, 0xffffffff
        xor eax, eax
        mov edi, ebp
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        mov esi, edi
        shr ecx, 2
        mov edi, offset g_85697c
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        jmp loc_70306a
loc_703063:
        mov byte ptr [g_85697c], 0
loc_70306a:
        xor eax, eax
        mov ecx, 0x14
        mov edi, offset g_8aaa68
        rep stosd
        mov al, byte ptr [esp + 0x3c]
        test al, al
        mov dword ptr [g_8aaa68], 0x50
        jz loc_703091
        mov edx, 0x100
        jmp loc_70309e
loc_703091:
        mov dl, byte ptr [g_8589d4]
        neg dl
        sbb edx, edx
        and edx, 4
loc_70309e:
        mov ecx, dword ptr [g_8aaaf4]
        mov eax, ecx
        sub eax, 5
        neg eax
        sbb eax, eax
        and eax, 0x2000
        mov esi, ecx
        dec esi
        neg esi
        sbb esi, esi
        and esi, 0x2000
        or eax, esi
        mov esi, ebp
        neg esi
        sbb esi, esi
        and esi, 0x400
        or eax, esi
        or eax, edx
        mov dl, byte ptr [g_8589a2]
        or eax, 0x40
        test dl, dl
        jz loc_7030e5
        or eax, 0x2000
        jmp loc_7030ea
loc_7030e5:
        and eax, 0xffffdfff
loc_7030ea:
        mov edx, dword ptr [g_8589a8]
        and eax, 0xfffffffb
        or eax, 0x1000
        cmp ecx, 3
        mov dword ptr [g_8aaa6c], eax
        mov eax, dword ptr [g_8589a4]
        mov dword ptr [g_8aaa80], eax
        mov eax, dword ptr [g_8589ac]
        mov dword ptr [g_8aaa84], edx
        mov edx, dword ptr [g_8589b0]
        mov dword ptr [g_8aaa88], eax
        mov dword ptr [g_8aaa8c], edx
        jz loc_703138
        cmp ecx, 4
        jz loc_703138
        mov eax, dword ptr [esp + 0x34]
        mov dword ptr [g_8aaa90], eax
        jmp loc_703142
loc_703138:
        mov dword ptr [g_8aaa90], 2
loc_703142:
        mov ecx, dword ptr [g_8589b8]
        mov edi, dword ptr [esp + 0x40]
        test edi, 0x100
        mov edx, dword ptr [g_8589bc]
        mov eax, dword ptr [g_8589c0]
        mov dword ptr [g_8aaaa8], ecx
        mov ecx, dword ptr [g_8589c4]
        mov dword ptr [g_8aaa94], 0
        mov dword ptr [g_8aaaac], edx
        mov dword ptr [g_8aaab0], eax
        mov dword ptr [g_8aaab4], ecx
        mov dword ptr [g_8aaa98], offset g_8569fc
        mov dword ptr [g_8aaa9c], offset g_85697c
        mov dword ptr [g_8aaaa8], edi
        jz loc_7031a6
        inc dword ptr [g_8aaa90]
loc_7031a6:
        push offset g_8aaa20
        call dword ptr [g_76b110]
        mov al, byte ptr [esp + 0x3c]
        test al, al
        mov bl, 1
        mov byte ptr [g_87dd0a], bl
        push 0x0
        jz loc_7031ed
        call FUN_00702dc0
        test eax, eax
        jz loc_7031d1
        or esi, 0xffffffff
        jmp loc_703212
loc_7031d1:
        mov edx, dword ptr [g_8aaae4]
        push 0x0
        push 0x0
        push 0x82
        push offset g_8aaa68
        push edx
        call FUN_00741a50
        jmp loc_703210
loc_7031ed:
        call FUN_00702dc0
        test eax, eax
        jz loc_7031fb
        or esi, 0xffffffff
        jmp loc_703212
loc_7031fb:
        mov eax, dword ptr [g_8aaae4]
        push 0x82
        push offset g_8aaa68
        push eax
        call FUN_00741980
loc_703210:
        mov esi, eax
loc_703212:
        push offset g_8aaa20
        mov byte ptr [g_87dd0a], 0
        call dword ptr [g_76b100]
        cmp esi, 0x8877015e
        jnz loc_70323b
        pop edi
        pop esi
        pop ebp
        mov eax, 4
        pop ebx
        add esp, 0x18
        ret 0x18
loc_70323b:
        test esi, esi
        jge loc_70324e
        pop edi
        pop esi
        pop ebp
        mov eax, 3
        pop ebx
        add esp, 0x18
        ret 0x18
loc_70324e:
        mov edx, dword ptr [g_8aaae4]
        lea ecx, [esp + 0x10]
        push ecx
        push 0x0
        push edx
        mov dword ptr [esp + 0x1c], 0
        mov byte ptr [g_87dd0a], bl
        call FUN_007418a0
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        mov byte ptr [g_87dd0a], 0
        jnz loc_70328d
        pop edi
        pop esi
        pop ebp
        mov eax, 3
        pop ebx
        add esp, 0x18
        ret 0x18
loc_70328d:
        mov ecx, dword ptr [g_849308]
        push ecx
        push eax
        call FUN_006f3c80
        lea edx, [esp + 0x10]
        mov esi, eax
        mov eax, dword ptr [g_8aaae4]
        push edx
        push esi
        push eax
        call FUN_007418a0
        lea ecx, [esi + 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [g_8aaa70], edx
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [g_8aaa74], eax
        mov eax, dword ptr [ecx + 0xc]
        push esi
        mov dword ptr [g_8aaa78], edx
        mov dword ptr [g_8aaa7c], eax
        call FUN_006f4230
        mov eax, dword ptr [g_8aaa40]
        mov edx, dword ptr [esp + 0x30]
        xor ecx, ecx
        push 0x100
        mov dword ptr [esp + 0x1c], ecx
        mov dword ptr [esp + 0x20], ecx
        xor esi, esi
        push esi
        mov dword ptr [esp + 0x28], ecx
        push esi
        push eax
        mov eax, dword ptr [g_8aaae4]
        mov dword ptr [esp + 0x34], ecx
        lea ecx, [esp + 0x28]
        mov dword ptr [esp + 0x30], edx
        push ecx
        lea edx, [esp + 0x28]
        push edx
        push eax
        mov dword ptr [esp + 0x34], 0x10
        call FUN_00740fd0
        mov edx, dword ptr [esp + 0x14]
        mov eax, dword ptr [g_8aaae4]
        lea ecx, [esp + 0x3c]
        push ecx
        push esi
        push edx
        push eax
        mov dword ptr [g_8aaab8], esi
        mov dword ptr [esp + 0x4c], esi
        mov byte ptr [g_87dd0a], bl
        call FUN_00741700
        mov eax, dword ptr [esp + 0x3c]
        cmp eax, esi
        jz loc_7033b3
        mov ecx, dword ptr [g_849308]
        push ecx
        push eax
        mov byte ptr [g_87dd0a], 0
        call FUN_006f3c80
        mov ecx, dword ptr [g_8aaae4]
        lea edx, [esp + 0x3c]
        push edx
        mov esi, eax
        mov eax, dword ptr [esp + 0x18]
        push esi
        push eax
        push ecx
        mov byte ptr [g_87dd0a], bl
        call FUN_00741700
        test eax, eax
        mov byte ptr [g_87dd0a], 0
        jnz loc_7033ad
        mov edx, dword ptr [esp + 0x3c]
        push eax
        mov eax, dword ptr [g_8aaae8]
        push edx
        push esi
        push offset g_7423d0
        push eax
        mov byte ptr [g_87dd0a], bl
        call FUN_00741f90
        mov byte ptr [g_87dd0a], 0
loc_7033ad:
        push esi
        call FUN_006f4230
loc_7033b3:
        mov ecx, dword ptr [esp + 0x14]
        mov dword ptr [g_8aaabc], ecx
        mov byte ptr [g_8aaac1], bl
        mov byte ptr [g_8aaac0], bl
        call FUN_00742830
        call FUN_006f8b20
        mov edx, dword ptr [esp + 0x34]
        mov eax, dword ptr [esp + 0x30]
        mov ecx, dword ptr [esp + 0x2c]
        push edi
        push offset g_8aaa70
        push ebp
        push edx
        push eax
        push ecx
        call FUN_006f9070
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x18
        ret 0x18
    }
}
