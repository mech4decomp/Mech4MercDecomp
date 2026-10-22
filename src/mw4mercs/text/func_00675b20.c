/*
 * FUN_00675B20 (582 B) — GameData attribute setter with a 5-case switch
 * (jump table at 0x675D68). Validates float values and emits _snprintf
 * error strings when out of range.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_76c5b0;
extern int g_7b8d6c;
extern int g_7b8d68;
extern int g_7b8d70;
extern unsigned short g_7db0ac;
extern unsigned short g_7db0ae;
extern int *g_76b424;
extern int g_675d68[];
extern char g_797800[];
extern char g_7977c0[];
extern char g_79777c[];
extern char g_79684c[];

extern unsigned char __cdecl FUN_00674df0(void);

__declspec(naked) unsigned char __cdecl FUN_00675B20(int param_1, int *param_2, char *param_3, char **param_4, int param_5)
{
    __asm {
        push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x14
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [ebp + 0x10]
        push    ebx
        mov     bl, byte ptr [eax]
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        push    edi
        mov     edi, dword ptr [ebp + 0xc]
        push    ecx
        push    edx
        push    eax
        push    edi
        test    bl, bl
        push    esi
        setnz   bl
        call    FUN_00674df0
        mov     cl, al
        mov     eax, dword ptr [edi + 0x10]
        add     eax, -0x1b
        add     esp, 0x14
        cmp     eax, 0x4
        ja      loc_675d5d
        jmp     dword ptr [eax*4 + g_675d68]
loc_675b67:
        test    bl, bl
        jnz     loc_675b82
        mov     eax, dword ptr [edi]
        lea     ecx, [esp + 0x10]
        push    ecx
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x18], 0x3f800000
        call    dword ptr [eax + 0x4]
        mov     cl, 0x1
loc_675b82:
        fld     dword ptr [esi + 0x74]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (DF E0); MSVC6 inserts 9B WAIT */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 (F6 C4 41); MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jz      loc_675d5d
        fld     dword ptr [esi + 0x74]
        mov     edx, dword ptr [ebp + 0x18]
        mov     eax, dword ptr [ebp + 0x14]
        mov     ecx, dword ptr [eax]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    offset g_797800
        push    edx
        push    ecx
        call    dword ptr [g_76b424]
        add     esp, 0x14
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
loc_675bc2:
        test    bl, bl
        jnz     loc_675bf2
        mov     eax, dword ptr [g_7b8d6c]
        mov     edx, dword ptr [g_7b8d68]
        mov     ecx, dword ptr [g_7b8d70]
        mov     dword ptr [esp + 0x18], eax
        lea     eax, [esp + 0x14]
        push    eax
        mov     dword ptr [esp + 0x18], edx
        mov     edx, dword ptr [edi]
        mov     dword ptr [esp + 0x20], ecx
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
loc_675bf2:
        fld     dword ptr [esi + 0x78]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (DF E0) */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz      loc_675d5d
        fld     dword ptr [esi + 0x80]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [esi + 0x7c]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [esi + 0x78]
        fstp    qword ptr [esp]
        push    offset g_7977c0
        jmp     loc_675cb3
loc_675c2f:
        test    bl, bl
        jnz     loc_675c5f
        mov     eax, dword ptr [g_7b8d70]
        mov     ecx, dword ptr [g_7b8d68]
        mov     edx, dword ptr [g_7b8d6c]
        mov     dword ptr [esp + 0x1c], eax
        lea     eax, [esp + 0x14]
        push    eax
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x1c], edx
        mov     edx, dword ptr [edi]
        push    esi
        mov     ecx, edi
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
loc_675c5f:
        fld     dword ptr [esi + 0x84]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (DF E0) */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jnz     loc_675c89
        fld     dword ptr [esi + 0x8c]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (DF E0) */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz      loc_675d5d
loc_675c89:
        fld     dword ptr [esi + 0x8c]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        sub     esp, 0x8
        fld     dword ptr [esi + 0x88]
        sub     esp, 0x8
        fstp    qword ptr [esp + 0x8]
        fld     dword ptr [esi + 0x84]
        fstp    qword ptr [esp]
        push    offset g_79777c
loc_675cb3:
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        push    ecx
        push    eax
        call    dword ptr [g_76b424]
        add     esp, 0x24
        xor     cl, cl
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
loc_675cd1:
        test    bl, bl
        jnz     loc_675d5d
        mov     cx, word ptr [g_7db0ac]
        mov     dx, word ptr [g_7db0ae]
        mov     eax, dword ptr [edi]
        mov     word ptr [esp + 0x10], cx
        lea     ecx, [esp + 0x10]
        push    ecx
        push    esi
        mov     ecx, edi
        mov     word ptr [esp + 0x1a], dx
        call    dword ptr [eax + 0x4]
        mov     cl, 0x1
        mov     al, cl
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
loc_675d09:
        test    bl, bl
        jnz     loc_675d24
        mov     edx, dword ptr [edi]
        lea     eax, [esp + 0x10]
        push    eax
        push    esi
        mov     ecx, edi
        mov     dword ptr [esp + 0x18], 0x0
        call    dword ptr [edx + 0x4]
        mov     cl, 0x1
loc_675d24:
        fld     dword ptr [esi + 0x94]
        fcomp   dword ptr [g_76c5b0]
        __emit 0xDF /* __emit: fnstsw ax no-WAIT form (DF E0) */
        __emit 0xE0
        __emit 0xF6 /* __emit: test ah,imm8 (F6 C4 01) */
        __emit 0xC4
        __emit 0x01
        jz      loc_675d5d
        fld     dword ptr [esi + 0x94]
        mov     ecx, dword ptr [ebp + 0x18]
        mov     edx, dword ptr [ebp + 0x14]
        mov     eax, dword ptr [edx]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    offset g_79684c
        push    ecx
        push    eax
        call    dword ptr [g_76b424]
        add     esp, 0x14
        xor     cl, cl
loc_675d5d:
        pop     edi
        pop     esi
        mov     al, cl
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
