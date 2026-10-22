/*
 * FUN_0065ae10 (873 B) - ABL record factory dispatcher. Switch on param_2
 * (0x1388..0x1391) via a jump table at 0x65b17c; each case allocates an
 * object (FUN_004084d0), initializes it (FUN_0065ac50 + a per-type vtable
 * + per-type init FUN_0065b3xx..c4xx), then registers it via FUN_0065d1f0.
 * Returns param_1 (a result slot).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_0065ac50(void);
extern void __cdecl FUN_0065b300(void);
extern void __cdecl FUN_0065b520(void);
extern void __cdecl FUN_0065b6f0(void);
extern void __cdecl FUN_0065bad0(void);
extern void __cdecl FUN_0065bb80(void);
extern void __cdecl FUN_0065bc00(void);
extern void __cdecl FUN_0065be20(void);
extern void __cdecl FUN_0065bed0(void);
extern void __cdecl FUN_0065c010(void);
extern void __cdecl FUN_0065c440(void);
extern void __cdecl FUN_0065d1f0(void);
extern void __cdecl FUN_00406c90(void);

__declspec(naked) void FUN_0065ae10(void)
{
    __asm {
        mov     eax, dword ptr [esp + 0x8]
        add     eax, 0xffffec78
        cmp     eax, 0x9
        push    esi
        ja      L_b164
        __emit 0xFF   /* jmp dword ptr [eax*4+0x65b17c]: MSVC6 re-bases SIB no-base disp32 via EBX */
        __emit 0x24
        __emit 0x85
        __emit 0x7C
        __emit 0xB1
        __emit 0x65
        __emit 0x00

L_ae2a:
        push    0x1c
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_b044
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_0065ac50
        mov     ecx, esi
        mov     dword ptr [esi], 0x794c80
        call    FUN_0065b300
        mov     eax, dword ptr [esp + 0x8]
        or      esi, 0x1
        mov     dword ptr [eax], esi
        pop     esi
        ret

L_ae71:
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_b14f
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_0065ac50
        mov     ecx, esi
        mov     dword ptr [esi], 0x794c50
        call    FUN_0065b520
        push    0x0
        push    0x1
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     ecx, esi
        call    FUN_0065d1f0
        mov     eax, esi
        pop     esi
        ret

L_aec1:
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_b14f
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_0065ac50
        mov     ecx, esi
        mov     dword ptr [esi], 0x794c20
        call    FUN_0065b6f0
        push    0x0
        push    0x1
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     ecx, esi
        call    FUN_0065d1f0
        mov     eax, esi
        pop     esi
        ret

L_af11:
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_b14f
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_0065ac50
        mov     ecx, esi
        mov     dword ptr [esi], 0x794bf0
        call    FUN_0065bad0
        push    0x0
        push    0x1
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     ecx, esi
        call    FUN_0065d1f0
        mov     eax, esi
        pop     esi
        ret

L_af61:
        push    0x14
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_b14f
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_0065ac50
        mov     ecx, esi
        mov     dword ptr [esi], 0x794bc0
        call    FUN_0065bb80
        push    0x0
        push    0x1
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     ecx, esi
        call    FUN_0065d1f0
        mov     eax, esi
        pop     esi
        ret

L_afb1:
        push    0x24
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_b14f
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_0065ac50
        mov     ecx, esi
        mov     dword ptr [esi], 0x794b90
        call    FUN_0065bc00
        push    0x0
        push    0x1
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     ecx, esi
        call    FUN_0065d1f0
        mov     eax, esi
        pop     esi
        ret

L_b001:
        push    0x14
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_b044
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_0065ac50
        mov     ecx, esi
        mov     dword ptr [esi], 0x794b60
        call    FUN_0065be20
        mov     eax, dword ptr [esp + 0x8]
        or      esi, 0x1
        mov     dword ptr [eax], esi
        pop     esi
        ret

L_b044:
        mov     eax, dword ptr [esp + 0x8]
        xor     esi, esi
        or      esi, 0x1
        mov     dword ptr [eax], esi
        pop     esi
        ret

L_b051:
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_b14f
        mov     edx, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        mov     edx, dword ptr [esp + 0x14]
        push    eax
        push    ecx
        push    edx
        mov     ecx, esi
        call    FUN_0065ac50
        mov     ecx, esi
        mov     dword ptr [esi], 0x794b30
        call    FUN_0065bed0
        push    0x0
        push    0x1
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     ecx, esi
        call    FUN_0065d1f0
        mov     eax, esi
        pop     esi
        ret

L_b0a1:
        push    0x18
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_b14f
        mov     eax, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esp + 0x14]
        push    eax
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        push    edx
        push    eax
        mov     ecx, esi
        call    FUN_0065ac50
        mov     ecx, esi
        mov     dword ptr [esi], 0x794b00
        call    FUN_0065c010
        push    0x0
        push    0x1
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     ecx, esi
        call    FUN_0065d1f0
        mov     eax, esi
        pop     esi
        ret

L_b0f1:
        push    0x44
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      L_b14f
        mov     ecx, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x14]
        push    ecx
        mov     ecx, dword ptr [esp + 0x14]
        push    edx
        push    eax
        push    ecx
        mov     ecx, esi
        call    FUN_0065ac50
        push    0x454eb0
        push    0x2
        push    0xc
        lea     edx, [esi + 0x24]
        push    edx
        call    FUN_00406c90
        mov     ecx, esi
        mov     dword ptr [esi], 0x794ad0
        call    FUN_0065c440
        push    0x0
        push    0x1
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     ecx, esi
        call    FUN_0065d1f0
        mov     eax, esi
        pop     esi
        ret

L_b14f:
        xor     esi, esi
        push    esi
        push    0x1
        push    esi
        mov     esi, dword ptr [esp + 0x14]
        mov     ecx, esi
        call    FUN_0065d1f0
        mov     eax, esi
        pop     esi
        ret

L_b164:
        mov     esi, dword ptr [esp + 0x8]
        push    0x0
        push    0x1
        push    0x0
        mov     ecx, esi
        call    FUN_0065d1f0
        mov     eax, esi
        pop     esi
        ret
    }
}
