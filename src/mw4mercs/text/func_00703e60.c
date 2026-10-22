/*
 * FUN_00703E60 (2193 B) — Large game-logic function (join/connect handling).
 *
 * __cdecl, no args, returns AL (bool).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

/* ---- extern data symbols (absolute-address derefs -> correct opcode forms) ---- */
extern unsigned char g_8589a1;   /* 0x008589a1 */
extern unsigned char g_8589d4;   /* 0x008589d4 */
extern unsigned char g_8589a2;   /* 0x008589a2 */
extern unsigned int  g_858930;   /* 0x00858930 */
extern unsigned int  g_8aaae8;   /* 0x008aaae8 */
extern unsigned int  g_8aaae4;   /* 0x008aaae4 */
extern unsigned int  g_8aaa40;   /* 0x008aaa40 */
extern unsigned int  g_8aaa6c;   /* 0x008aaa6c */
extern unsigned int  g_8aaa80;   /* 0x008aaa80 */
extern unsigned int  g_8aaa84;   /* 0x008aaa84 */
extern unsigned int  g_8aaa88;   /* 0x008aaa88 */
extern unsigned int  g_8aaa8c;   /* 0x008aaa8c */
extern unsigned int  g_8aaa90;   /* 0x008aaa90 */
extern unsigned int  g_8aaaa8;   /* 0x008aaaa8 */
extern unsigned int  g_8aaaac;   /* 0x008aaaac */
extern unsigned int  g_8aaab0;   /* 0x008aaab0 */
extern unsigned int  g_8aaab4;   /* 0x008aaab4 */
extern unsigned int  g_8aaab8;   /* 0x008aaab8 */
extern unsigned int  g_8aaabc;   /* 0x008aaabc */
extern unsigned char g_8aaac0;   /* 0x008aaac0 */
extern unsigned char g_8aaac1;   /* 0x008aaac1 */
extern unsigned int  g_8aaaf4;   /* 0x008aaaf4 */
extern unsigned int  g_8aaa98;   /* 0x008aaa98 */
extern unsigned int  g_8aaa9c;   /* 0x008aaa9c */
extern unsigned char g_8569fc;   /* 0x008569fc */
extern unsigned char g_85697c;   /* 0x0085697c */
extern unsigned char g_87dd0a;   /* 0x0087dd0a */
extern unsigned int  g_849308;   /* 0x00849308 */
extern unsigned int  g_849314;   /* 0x00849314 */
extern unsigned int  g_7b6fac;   /* 0x007b6fac */
extern unsigned int  g_76b298;   /* 0x0076b298 (fn ptr) */
extern unsigned int  g_76b320;   /* 0x0076b320 (fn ptr) */
extern unsigned int  g_76b378;   /* 0x0076b378 (fn ptr) */
extern double        g_785970;   /* 0x00785970 */

/* ---- extern function symbols ---- */
extern void __cdecl FUN_00741fe0(void);
extern void __cdecl FUN_006f3c80(void);
extern void __cdecl FUN_007418a0(void);
extern void __cdecl FUN_006f4230(void);
extern void __cdecl FUN_00701740(void);
extern void __cdecl FUN_007018a0(void);
extern void __cdecl FUN_00740fd0(void);
extern void __cdecl FUN_00740ec0(void);
extern void __cdecl FUN_00741700(void);
extern void __cdecl FUN_00741f90(void);
extern void __cdecl FUN_00742830(void);
extern void __cdecl FUN_00742200(void);
extern void __cdecl FUN_007421b0(void);
extern void __cdecl FUN_00707e90(void);
extern void __cdecl FUN_00706f10(void);
extern void __cdecl FUN_00703bb0(void);
extern void __cdecl FUN_00740db0(void);

__declspec(naked) void __cdecl FUN_00703e60(void)
{
    __asm {
        mov     al, byte ptr [g_8589a1]
        sub     esp, 0x238
        push    ebx
        push    ebp
        xor     ebx, ebx
        cmp     al, bl
        push    esi
        push    edi
        jnz     loc_703E82
loc_703E75:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x238
        ret
loc_703E82:
        mov     ecx, dword ptr [g_8aaae8]
        lea     eax, [esp + 0x20]
        push    eax
        push    ebx
        push    ebx
        push    ecx
        mov     dword ptr [esp + 0x30], ebx
        call    FUN_00741fe0
        cmp     eax, 0x8877042e
        jnz     loc_70418E
        mov     edx, dword ptr [g_7b6fac]
        mov     esi, dword ptr [g_76b298]
        push    0x7a11fc
        push    edx
        call    esi
        add     esp, 0x8
        cmp     eax, ebx
        jnz     loc_703ED3
        mov     eax, dword ptr [g_7b6fac]
        push    0x7a11f4
        push    eax
        call    esi
        add     esp, 0x8
        cmp     eax, ebx
        jz      loc_703E75
loc_703ED3:
        mov     edi, dword ptr [g_76b320]
        push    0x100
        add     eax, 0x6
        push    eax
        lea     ecx, [esp + 0x150]
        push    ecx
        call    edi
        mov     al, byte ptr [esp + 0x154]
        mov     ebp, dword ptr [g_76b378]
        add     esp, 0xc
        cmp     al, bl
        lea     esi, [esp + 0x148]
        jz      loc_703F26
loc_703F07:
        movsx   edx, byte ptr [esi]
        push    edx
        call    ebp
        add     esp, 0x4
        test    eax, eax
        jnz     loc_703F1E
        mov     al, byte ptr [esi]
        cmp     al, 0x5f
        jz      loc_703F1E
        cmp     al, 0x2e
        jnz     loc_703F26
loc_703F1E:
        mov     al, byte ptr [esi + 0x1]
        inc     esi
        cmp     al, bl
        jnz     loc_703F07
loc_703F26:
        cmp     byte ptr [esi], 0x2c
        mov     byte ptr [esi], bl
        jnz     loc_703F68
        push    0x100
        inc     esi
        lea     eax, [esp + 0x4c]
        push    esi
        push    eax
        call    edi
        mov     al, byte ptr [esp + 0x54]
        add     esp, 0xc
        cmp     al, bl
        lea     esi, [esp + 0x48]
        jz      loc_703F64
loc_703F4A:
        movsx   ecx, byte ptr [esi]
        push    ecx
        call    ebp
        add     esp, 0x4
        test    eax, eax
        jnz     loc_703F5C
        cmp     byte ptr [esi], 0x5f
        jnz     loc_703F64
loc_703F5C:
        mov     al, byte ptr [esi + 0x1]
        inc     esi
        cmp     al, bl
        jnz     loc_703F4A
loc_703F64:
        mov     byte ptr [esi], bl
        jmp     loc_703F6C
loc_703F68:
        mov     byte ptr [esp + 0x48], bl
loc_703F6C:
        lea     edx, [esp + 0x48]
        push    edx
        lea     eax, [esp + 0x14c]
        push    eax
        call    FUN_00703bb0
        test    al, al
        jz      loc_703E75
        mov     edx, dword ptr [g_8aaae4]
        lea     ecx, [esp + 0x18]
        push    ecx
        push    ebx
        push    edx
        mov     dword ptr [esp + 0x24], ebx
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_007418a0
        mov     eax, dword ptr [esp + 0x18]
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jnz     loc_703FBE
loc_703FB1:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x238
        ret
loc_703FBE:
        mov     ecx, dword ptr [g_849308]
        push    ecx
        push    eax
        call    FUN_006f3c80
        lea     edx, [esp + 0x18]
        mov     esi, eax
        mov     eax, dword ptr [g_8aaae4]
        push    edx
        push    esi
        push    eax
        call    FUN_007418a0
        mov     ecx, dword ptr [esi + 0x4]
        mov     edx, dword ptr [esi + 0x28]
        mov     eax, dword ptr [esi + 0x40]
        mov     dword ptr [g_8aaa6c], ecx
        mov     ecx, dword ptr [esi + 0x44]
        mov     dword ptr [g_8aaa90], edx
        mov     edx, dword ptr [esi + 0x48]
        mov     dword ptr [g_8aaaac], ecx
        mov     dword ptr [g_8aaaa8], eax
        mov     eax, dword ptr [esi + 0x4c]
        mov     dword ptr [g_8aaab0], edx
        lea     ecx, [esi + 0x18]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [g_8aaab4], eax
        mov     eax, dword ptr [ecx + 0x4]
        mov     dword ptr [g_8aaa80], edx
        mov     edx, dword ptr [ecx + 0x8]
        mov     dword ptr [g_8aaa84], eax
        mov     eax, dword ptr [ecx + 0xc]
        push    esi
        mov     dword ptr [g_8aaa88], edx
        mov     dword ptr [g_8aaa8c], eax
        call    FUN_006f4230
        mov     ecx, dword ptr [g_849314]
        push    ecx
        push    0x1c
        call    FUN_006f3c80
        cmp     eax, ebx
        jz      loc_704061
        push    0x1
        mov     ecx, eax
        call    FUN_00701740
        cmp     eax, ebx
        jz      loc_704061
        push    eax
        call    FUN_007018a0
loc_704061:
        mov     ecx, dword ptr [g_8aaa40]
        mov     eax, dword ptr [g_858930]
        xor     edx, edx
        push    ebx
        mov     dword ptr [esp + 0x28], edx
        push    ebx
        mov     dword ptr [esp + 0x30], edx
        mov     dword ptr [esp + 0x34], edx
        push    ebx
        push    ecx
        mov     ecx, dword ptr [g_8aaae4]
        mov     dword ptr [esp + 0x40], edx
        lea     edx, [esp + 0x34]
        mov     dword ptr [esp + 0x3c], eax
        push    edx
        lea     eax, [esp + 0x30]
        push    eax
        push    ecx
        mov     dword ptr [esp + 0x40], 0x10
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_00740fd0
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jge     loc_7040CE
        mov     edx, dword ptr [g_8aaae4]
        push    edx
        call    FUN_00740ec0
loc_7040C1:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x238
        ret
loc_7040CE:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [g_8aaae4]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        push    ecx
        push    edx
        mov     dword ptr [g_8aaab8], ebx
        mov     dword ptr [esp + 0x20], ebx
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_00741700
        mov     eax, dword ptr [esp + 0x10]
        cmp     eax, ebx
        jz      loc_704165
        mov     ecx, dword ptr [g_849308]
        push    ecx
        push    eax
        mov     byte ptr [g_87dd0a], bl
        call    FUN_006f3c80
        mov     ecx, dword ptr [g_8aaae4]
        lea     edx, [esp + 0x10]
        push    edx
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x20]
        push    esi
        push    eax
        push    ecx
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_00741700
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jnz     loc_70415F
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [g_8aaae8]
        push    ebx
        push    edx
        push    esi
        push    0x7423d0
        push    eax
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_00741f90
        mov     byte ptr [g_87dd0a], bl
loc_70415F:
        push    esi
        call    FUN_006f4230
loc_704165:
        mov     ecx, dword ptr [esp + 0x1c]
        mov     dword ptr [g_8aaabc], ecx
        mov     byte ptr [g_8aaac1], 0x1
        mov     byte ptr [g_8aaac0], bl
        call    FUN_00742830
loc_704181:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x238
        ret
loc_70418E:
        mov     edx, dword ptr [g_849314]
        mov     eax, dword ptr [esp + 0x20]
        push    edx
        push    eax
        call    FUN_006f3c80
        mov     edx, dword ptr [g_8aaae8]
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ebp, eax
        push    ebp
        push    ebx
        push    edx
        mov     dword ptr [esp + 0x44], ebp
        call    FUN_00741fe0
        test    eax, eax
        jge     loc_7041C9
loc_7041BC:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x238
        ret
loc_7041C9:
        mov     ecx, 0x4
        mov     edi, 0x7a2e30
        lea     esi, [ebp + 0x10]
        xor     eax, eax
        repe    cmpsd
        jz      loc_7041E9
loc_7041DC:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x238
        ret
loc_7041E9:
        mov     dword ptr [g_8aaaf4], 0x1
        call    FUN_00706f10
        mov     al, byte ptr [g_8589d4]
        mov     dl, byte ptr [g_8589a2]
        mov     ecx, dword ptr [ebp + 0x8]
        neg     al
        sbb     eax, eax
        and     eax, 0x4
        or      eax, 0x40
        cmp     dl, bl
        mov     dword ptr [ecx + 0x4], eax
        jz      loc_70421E
        or      eax, 0x2000
        jmp     loc_704223
loc_70421E:
        and     eax, 0xffffdfff
loc_704223:
        mov     edx, eax
        mov     dword ptr [ecx + 0x4], eax
        mov     eax, dword ptr [g_858930]
        and     edx, 0xfffffffb
        or      edx, 0x1000
        cmp     eax, ebx
        mov     dword ptr [ecx + 0x4], edx
        jz      loc_704243
        mov     ecx, dword ptr [ebp + 0xc]
        mov     dword ptr [ecx + 0x8], eax
loc_704243:
        mov     edx, dword ptr [g_8aaae8]
        push    ebp
        push    ebx
        push    ebx
        push    edx
        call    FUN_00742200
        cmp     dword ptr [ebp + 0x4], 0x2
        jnz     loc_70447F
        mov     ecx, dword ptr [g_8aaae8]
        push    ebx
        lea     eax, [esp + 0x18]
        push    eax
        push    0x7a2e00
        push    ebx
        push    ecx
        call    FUN_007421b0
        test    eax, eax
        jge     loc_704285
loc_704278:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x238
        ret
loc_704285:
        mov     eax, dword ptr [esp + 0x14]
        lea     edx, [esp + 0x1c]
        push    edx
        push    ebx
        push    eax
        mov     dword ptr [esp + 0x28], ebx
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_007418a0
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jnz     loc_7042BB
loc_7042AE:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x238
        ret
loc_7042BB:
        mov     ecx, dword ptr [g_849308]
        push    ecx
        push    eax
        call    FUN_006f3c80
        lea     edx, [esp + 0x1c]
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x14]
        push    edx
        push    ebp
        push    eax
        call    FUN_007418a0
        mov     ecx, 0x14
        mov     esi, ebp
        mov     edi, 0x8aaa68
        rep     movsd
        mov     edi, dword ptr [ebp + 0x30]
        cmp     edi, ebx
        mov     byte ptr [g_8569fc], bl
        mov     byte ptr [g_85697c], bl
        jz      loc_70431B
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, 0x8569fc
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
loc_70431B:
        mov     eax, dword ptr [ebp + 0x4]
        __emit 0xF6   /* test ah,0x4: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x04
        jz      loc_70434A
        mov     edi, dword ptr [ebp + 0x34]
        cmp     edi, ebx
        jz      loc_70434A
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, 0x85697c
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
loc_70434A:
        push    ebp
        mov     dword ptr [g_8aaa98], 0x8569fc
        mov     dword ptr [g_8aaa9c], 0x85697c
        call    FUN_006f4230
        mov     edx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [edx + 0xc]
        mov     edx, dword ptr [g_8aaa40]
        xor     ecx, ecx
        mov     dword ptr [esp + 0x24], ecx
        push    0x100
        mov     dword ptr [esp + 0x2c], ecx
        push    ebx
        mov     dword ptr [esp + 0x34], ecx
        push    ebx
        mov     dword ptr [esp + 0x3c], ecx
        push    edx
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x34], 0x10
        mov     ecx, dword ptr [eax + 0x8]
        lea     eax, [esp + 0x34]
        mov     dword ptr [esp + 0x3c], ecx
        push    eax
        lea     ecx, [esp + 0x2c]
        push    ecx
        push    edx
        call    FUN_00740fd0
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        push    ecx
        push    edx
        mov     dword ptr [g_8aaab8], ebx
        mov     dword ptr [esp + 0x20], ebx
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_00741700
        mov     eax, dword ptr [g_849308]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        mov     byte ptr [g_87dd0a], bl
        call    FUN_006f3c80
        mov     ecx, dword ptr [esp + 0x14]
        lea     edx, [esp + 0x10]
        push    edx
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x1c]
        push    esi
        push    eax
        push    ecx
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_00741700
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jnz     loc_704436
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [g_8aaae8]
        push    ebx
        push    edx
        push    esi
        push    0x7423d0
        push    eax
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_00741f90
        mov     byte ptr [g_87dd0a], bl
loc_704436:
        push    esi
        call    FUN_006f4230
        mov     eax, dword ptr [g_8aaae4]
        cmp     eax, ebx
        jz      loc_70444B
        push    eax
        call    FUN_00740db0
loc_70444B:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [g_8aaae4], ecx
        mov     dword ptr [g_8aaabc], edx
        mov     byte ptr [g_8aaac1], 0x1
        mov     byte ptr [g_8aaac0], 0x1
        call    FUN_00742830
loc_704472:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x238
        ret
loc_70447F:
        call    FUN_00707e90
        fstp    qword ptr [esp + 0x24]
        or      esi, 0xffffffff
        mov     dword ptr [esp + 0x14], ebx
loc_70448F:
        call    FUN_00707e90
        fsub    qword ptr [esp + 0x24]
        fcomp   qword ptr [g_785970]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x1: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x01
        jz      loc_7044FD
        mov     ecx, dword ptr [g_8aaae8]
        push    ebx
        lea     eax, [esp + 0x18]
        push    eax
        push    0x7a2e00
        push    0x80
        push    ecx
        call    FUN_007421b0
        mov     esi, eax
        cmp     esi, ebx
        jl      loc_70448F
loc_7044C7:
        mov     eax, dword ptr [esp + 0x14]
        lea     edx, [esp + 0x1c]
        push    edx
        push    ebx
        push    eax
        mov     dword ptr [esp + 0x28], ebx
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_007418a0
        mov     eax, dword ptr [esp + 0x1c]
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jnz     loc_70450E
loc_7044F0:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x238
        ret
loc_7044FD:
        cmp     esi, ebx
        jge     loc_7044C7
loc_704501:
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x238
        ret
loc_70450E:
        mov     ecx, dword ptr [g_849308]
        push    ecx
        push    eax
        call    FUN_006f3c80
        lea     edx, [esp + 0x1c]
        mov     ebp, eax
        mov     eax, dword ptr [esp + 0x14]
        push    edx
        push    ebp
        push    eax
        call    FUN_007418a0
        mov     ecx, 0x14
        mov     esi, ebp
        mov     edi, 0x8aaa68
        rep     movsd
        mov     edi, dword ptr [ebp + 0x30]
        cmp     edi, ebx
        mov     byte ptr [g_8569fc], bl
        mov     byte ptr [g_85697c], bl
        jz      loc_70456E
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     edx, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, 0x8569fc
        rep     movsd
        mov     ecx, edx
        and     ecx, 0x3
        rep     movsb
loc_70456E:
        mov     eax, dword ptr [ebp + 0x4]
        __emit 0xF6   /* test ah,0x4: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x04
        jz      loc_70459D
        mov     edi, dword ptr [ebp + 0x34]
        cmp     edi, ebx
        jz      loc_70459D
        or      ecx, 0xffffffff
        xor     eax, eax
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        shr     ecx, 0x2
        mov     edi, 0x85697c
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep     movsb
loc_70459D:
        push    ebp
        mov     dword ptr [g_8aaa98], 0x8569fc
        mov     dword ptr [g_8aaa9c], 0x85697c
        call    FUN_006f4230
        mov     edx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [edx + 0xc]
        mov     edx, dword ptr [g_8aaa40]
        xor     ecx, ecx
        mov     dword ptr [esp + 0x38], ecx
        push    ebx
        mov     dword ptr [esp + 0x40], ecx
        push    ebx
        mov     dword ptr [esp + 0x48], ecx
        push    ebx
        mov     dword ptr [esp + 0x50], ecx
        push    edx
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [esp + 0x48], 0x10
        mov     ecx, dword ptr [eax + 0x8]
        lea     eax, [esp + 0x48]
        mov     dword ptr [esp + 0x50], ecx
        push    eax
        lea     ecx, [esp + 0x2c]
        push    ecx
        push    edx
        call    FUN_00740fd0
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        lea     eax, [esp + 0x10]
        push    eax
        push    ebx
        push    ecx
        push    edx
        mov     dword ptr [g_8aaab8], ebx
        mov     dword ptr [esp + 0x20], ebx
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_00741700
        mov     eax, dword ptr [g_849308]
        mov     ecx, dword ptr [esp + 0x10]
        push    eax
        push    ecx
        mov     byte ptr [g_87dd0a], bl
        call    FUN_006f3c80
        mov     ecx, dword ptr [esp + 0x14]
        lea     edx, [esp + 0x10]
        push    edx
        mov     esi, eax
        mov     eax, dword ptr [esp + 0x1c]
        push    esi
        push    eax
        push    ecx
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_00741700
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jnz     loc_704685
        mov     edx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [g_8aaae8]
        push    ebx
        push    edx
        push    esi
        push    0x7423d0
        push    eax
        mov     byte ptr [g_87dd0a], 0x1
        call    FUN_00741f90
        mov     byte ptr [g_87dd0a], bl
loc_704685:
        push    esi
        call    FUN_006f4230
        mov     eax, dword ptr [g_8aaae4]
        cmp     eax, ebx
        jz      loc_70469A
        push    eax
        call    FUN_00740db0
loc_70469A:
        mov     ecx, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [g_8aaae4], ecx
        mov     dword ptr [g_8aaabc], edx
        mov     byte ptr [g_8aaac1], 0x1
        mov     byte ptr [g_8aaac0], bl
        call    FUN_00742830
        mov     eax, dword ptr [g_849314]
        push    eax
        push    0x1c
        call    FUN_006f3c80
        cmp     eax, ebx
        jz      loc_7046E4
        push    0x1
        mov     ecx, eax
        call    FUN_00701740
        cmp     eax, ebx
        jz      loc_7046E4
        push    eax
        call    FUN_007018a0
loc_7046E4:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x238
        ret
    }
}
