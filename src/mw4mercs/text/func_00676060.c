/*
 * FUN_00676060 (666 B) — Global update/tick routine.
 *
 * Iterates over a table of objects (indexed via the XOR-obfuscated global
 * key), updates per-object records, accumulates min/max float values into
 * globals 0x80da9c/0x80daa0, and processes a final list.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_00417d80(void);
extern void __cdecl FUN_00420840(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_00676300(void);
extern void __cdecl FUN_005b5f40(void);

extern int g_7dab44;
extern int g_7dab40;
extern float g_80da9c;
extern float g_80daa0;
extern int g_80da94;
extern int g_80daa4;
extern int g_7f25c0;
extern int g_7f25c8;
extern int g_7f23d8;
extern int g_7f2564;
extern int g_7f2104;
extern float g_77016c;
extern float g_770168;
extern float g_7748c8;
extern int *g_76b2b0;

__declspec(naked) void FUN_00676060(void)
{
    __asm {
        sub     esp, 0xac
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_7dab40]
        push    ebx
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x10]
        push    ebp
        xor     ebp, ebp
        push    esi
        xor     edx, 0x85739531
        lea     eax, [esp + 0x34]
        push    edi
        mov     dword ptr [esp + 0x38], ebp
        mov     dword ptr [esp + 0x3c], 0xd
        mov     dword ptr [esp + 0x40], 0x1
        mov     dword ptr [g_80da9c], ebp
        mov     dword ptr [g_80daa0], ebp
        mov     dword ptr [esp + 0x1c], edx
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [esp + 0x18], 0x3
L_60b8:
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [edx + eax*8 + 0x14]
        cmp     ecx, ebp
        jle     L_625f
        mov     ebx, dword ptr [edx + eax*8 + 0x10]
        add     ebx, 0x10
        mov     dword ptr [esp + 0x14], ecx
L_60d5:
        mov     eax, dword ptr [ebx]
        cmp     eax, ebp
        jz      L_60f4
        push    0x5
        push    0x794960
        push    eax
        call    dword ptr [g_76b2b0]
        add     esp, 0xc
        test    eax, eax
        jz      L_6249
L_60f4:
        mov     ecx, dword ptr [ebx + 0x4]
        call    FUN_0041fd80
        mov     esi, eax
        cmp     esi, ebp
        jz      L_6249
        mov     eax, dword ptr [esi + 0x128]
        cmp     eax, ebp
        jnz     L_6124
        mov     ecx, dword ptr [esi + 0x124]
        cmp     ecx, ebp
        jz      L_6249
        cmp     eax, ebp
        jnz     L_6124
        mov     eax, ecx
L_6124:
        mov     edx, dword ptr [esi + 0xd8]
        add     edx, 0x80
        push    edx
        add     eax, 0x10
        push    eax
        lea     ecx, [esp + 0x84]
        call    FUN_00417d80
        lea     eax, [esp + 0x7c]
        push    eax
        lea     ecx, [esp + 0x24]
        call    FUN_00420840
        mov     eax, dword ptr [g_7f25c0]
        mov     edi, dword ptr [esi + 0x4]
        push    eax
        mov     ecx, edi
        call    FUN_00415230
        fld     dword ptr [esp + 0x2c]
        test    al, al
        fsub    dword ptr [esp + 0x28]
        jz      L_6180
        fcom    dword ptr [g_80daa0]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_6195
        fstp    dword ptr [g_80daa0]
        jmp     L_6197
L_6180:
        fcom    dword ptr [g_80da9c]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 41 */
        __emit 0xC4
        __emit 0x41
        jnz     L_6195
        fstp    dword ptr [g_80da9c]
        jmp     L_6197
L_6195:
        fstp    st(0)
L_6197:
        mov     eax, dword ptr [g_7f25c8]
        push    eax
        mov     ecx, edi
        call    FUN_00415230
        test    al, al
        jnz     L_61c9
        mov     eax, dword ptr [esi + 0x2fc]
        cmp     eax, ebp
        jz      L_61c9
        mov     ecx, dword ptr [g_7f23d8]
        push    ecx
        mov     ecx, dword ptr [eax + 0x4]
        call    FUN_00415230
        test    al, al
        jnz     L_6249
L_61c9:
        mov     eax, dword ptr [g_7f2564]
        push    eax
        mov     ecx, edi
        call    FUN_00415230
        test    al, al
        jnz     L_6249
        mov     ecx, dword ptr [esp + 0x20]
        mov     edx, dword ptr [esp + 0x24]
        mov     eax, dword ptr [esp + 0x30]
        mov     edi, dword ptr [g_80da94]
        mov     dword ptr [esp + 0x44], ecx
        mov     ecx, dword ptr [esp + 0x34]
        mov     dword ptr [esp + 0x50], ecx
        mov     ecx, dword ptr [g_80daa4]
        mov     dword ptr [esp + 0x70], ebp
        mov     dword ptr [esp + 0x74], ebp
        mov     dword ptr [esp + 0x48], edx
        mov     dword ptr [esp + 0x4c], eax
        mov     dword ptr [esp + 0x78], esi
        call    FUN_00416110
        cmp     eax, ebp
        jz      L_6228
        mov     dword ptr [eax + 0x2c], ebp
        mov     dword ptr [eax + 0x30], ebp
        mov     dword ptr [eax + 0x34], ebp
        mov     esi, eax
        jmp     L_622a
L_6228:
        xor     esi, esi
L_622a:
        lea     edx, [esp + 0x44]
        push    edx
        mov     ecx, esi
        call    FUN_00676300
        mov     eax, dword ptr [edi + 0x4]
        cmp     eax, ebp
        mov     dword ptr [esi + 0x30], ebp
        mov     dword ptr [esi + 0x2c], eax
        jz      L_6246
        mov     dword ptr [eax + 0x30], esi
L_6246:
        mov     dword ptr [edi + 0x4], esi
L_6249:
        mov     eax, dword ptr [esp + 0x14]
        add     ebx, 0x1c
        dec     eax
        mov     dword ptr [esp + 0x14], eax
        jnz     L_60d5
        mov     edx, dword ptr [esp + 0x1c]
L_625f:
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, dword ptr [esp + 0x18]
        add     ecx, 0x4
        dec     eax
        mov     dword ptr [esp + 0x10], ecx
        mov     dword ptr [esp + 0x18], eax
        jnz     L_60b8
        fld     dword ptr [g_80daa0]
        fadd    dword ptr [g_77016c]
        fstp    dword ptr [g_80daa0]
        fld     dword ptr [g_80da9c]
        fadd    dword ptr [g_770168]
        fst     dword ptr [g_80da9c]
        fcomp   dword ptr [g_7748c8]
        __emit 0xDF   /* __emit: MSVC6 inserts 9B WAIT before fnstsw ax; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* __emit: MSVC6 rejects test ah,imm8; ref uses F6 C4 01 */
        __emit 0xC4
        __emit 0x01
        jz      L_62b4
        mov     dword ptr [g_80da9c], 0x41a00000
L_62b4:
        mov     eax, dword ptr [edx + 0x1c]
        cmp     eax, ebp
        jle     L_62ef
        mov     esi, dword ptr [edx + 0x18]
        add     esi, 0x14
        mov     ebx, eax
L_62c3:
        mov     ecx, dword ptr [esi]
        call    FUN_0041fd80
        mov     edi, eax
        cmp     edi, ebp
        jz      L_62e9
        mov     eax, dword ptr [g_7f2104]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_62e9
        mov     ecx, edi
        call    FUN_005b5f40
L_62e9:
        add     esi, 0x1c
        dec     ebx
        jnz     L_62c3
L_62ef:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xac
        ret
    }
}
