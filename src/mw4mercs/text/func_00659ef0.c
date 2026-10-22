/*
 * FUN_00659ef0 (645 B) — ABL/record processing loop. Iterates a list of
 * object pointers, computes a time budget (min of 10000 / per-object
 * float), then dispatches virtual calls (0x1b4/0x1a8/0x1ac/0x19c) and
 * helper calls (FUN_00415230 / FUN_005c1990) per object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_007dab44;
extern int   g_007dab40;
extern float g_0076c5b0;
extern int   g_0080da64;
extern int   g_007f23b0;

extern int  __cdecl FUN_0075db4a(void);   /* _ftol */
extern char __cdecl FUN_00659eb0(int);
extern void __cdecl FUN_004fcb30(int);
extern char __cdecl FUN_00415230(int);
extern void __cdecl FUN_005c1990(void);

__declspec(naked) void FUN_00659ef0(void)
{
    __asm {
        sub     esp, 0x10
        mov     eax, dword ptr [esp + 0x14]
        push    ebx
        push    ebp
        mov     ebp, dword ptr [eax + 0x4]
        push    esi
        mov     esi, dword ptr [eax]
        push    edi
        mov     edi, esi
        cmp     edi, ebp
        mov     ebx, 0x2710
        mov     dword ptr [esp + 0x10], ebx
        mov     dword ptr [esp + 0x1c], ebp
        jz      L59f4f
L59f13:
        mov     eax, dword ptr [edi]
        mov     eax, dword ptr [eax + 0x170]
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 0x4]
        fild    dword ptr [esp + 0x10]
        mov     ecx, eax
        fcomp   dword ptr [ecx + 0x2bc]
        __emit 0xDF   /* fnstsw ax: MSVC6 inserts 9B WAIT prefix; ref uses no-WAIT DF E0 */
        __emit 0xE0
        __emit 0xF6   /* test ah,0x41: MSVC6 rejects test ah,imm8 */
        __emit 0xC4
        __emit 0x41
        jnz     L59f48
        fld     dword ptr [ecx + 0x2bc]
        call    FUN_0075db4a
        mov     ebx, eax
        mov     dword ptr [esp + 0x10], ebx
L59f48:
        add     edi, 0x4
        cmp     edi, ebp
        jnz     L59f13
L59f4f:
        mov     ecx, dword ptr [esp + 0x2c]
        mov     eax, ebx
        cdq
        sub     eax, edx
        sar     eax, 0x1
        cmp     ecx, eax
        jle     L59f62
        mov     dword ptr [esp + 0x2c], eax
L59f62:
        mov     ebx, dword ptr [esp + 0x34]
        push    ebx
        call    FUN_00659eb0
        add     esp, 0x4
        test    al, al
        jnz     L59f7b
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret
L59f7b:
        mov     eax, ebp
        sub     eax, esi
        test    eax, 0xfffffffc
        jnz     L59f90
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x10
        ret
L59f90:
        mov     eax, dword ptr [esp + 0x38]
        dec     eax
        mov     dword ptr [esp + 0x24], 0x3f800000
        jz      L59fb9
        dec     eax
        jz      L59faf
        dec     eax
        jnz     L59fc1
        mov     dword ptr [esp + 0x24], 0x41f00000
        jmp     L59fc1
L59faf:
        mov     dword ptr [esp + 0x24], 0x42340000
        jmp     L59fc1
L59fb9:
        mov     dword ptr [esp + 0x24], 0x42700000
L59fc1:
        mov     ecx, dword ptr [g_007dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [g_007dab40]
        mov     edx, dword ptr [esp + 0x28]
        mov     ecx, dword ptr [eax + 0x10]
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        fld     dword ptr [g_0076c5b0]
        mov     edi, dword ptr [esi]
        fld     dword ptr [g_0076c5b0]
        mov     ecx, dword ptr [g_0080da64]
        mov     edx, dword ptr [ecx]
        mov     dword ptr [esp + 0x14], eax
        lea     eax, [ebx + ebx*0x2]
        shl     eax, 0x2
        mov     ebx, dword ptr [eax + edx*0x1]
        add     esi, 0x4
        cmp     esi, ebp
        mov     dword ptr [esp + 0x34], edi
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x10], edi
        jz      L5a16c
        jmp     L5a026
L5a01e:
        mov     eax, dword ptr [esp + 0x18]
        mov     edi, dword ptr [esp + 0x34]
L5a026:
        mov     ecx, dword ptr [g_0080da64]
        mov     edx, dword ptr [ecx]
        cmp     ebx, dword ptr [eax + edx*0x1 + 0x4]
        jz      L5a16c
        fld     dword ptr [esp + 0x24]
        mov     edi, dword ptr [esi]
        fmul    dword ptr [ebx + 0x8]
        mov     ebp, dword ptr [edi]
        push    0x3e8
        fstp    dword ptr [esp + 0x2c]
        fld     dword ptr [esp + 0x28]
        fmul    dword ptr [ebx]
        fstp    dword ptr [esp + 0x3c]
        fld     dword ptr [esp + 0x2c]
        fsub    st(0), st(1)
        call    FUN_0075db4a
        fstp    st(0)
        fld     dword ptr [esp + 0x3c]
        push    eax
        fsub    st(0), st(1)
        call    FUN_0075db4a
        fstp    st(0)
        push    eax
        mov     eax, dword ptr [esp + 0x1c]
        push    eax
        mov     ecx, edi
        call    dword ptr [ebp + 0x1b4]
        fld     dword ptr [esp + 0x38]
        mov     ebp, dword ptr [esp + 0x1c]
        fld     dword ptr [esp + 0x28]
        add     esi, 0x4
        add     ebx, 0xc
        cmp     esi, ebp
        mov     dword ptr [esp + 0x10], edi
        jnz     L5a01e
        mov     edi, dword ptr [esp + 0x34]
        fstp    st(0)
        fstp    st(0)
L5a0a1:
        cmp     esi, ebp
        mov     ebx, dword ptr [esp + 0x30]
        jz      L5a103
L5a0a9:
        mov     eax, dword ptr [g_007f23b0]
        mov     edi, dword ptr [esi]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L5a0dc
        mov     al, byte ptr [edi + 0x51c]
        test    al, al
        jz      L5a0dc
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x104]
        test    al, al
        jz      L5a0dc
        mov     ecx, edi
        call    FUN_005c1990
L5a0dc:
        mov     ecx, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [edi]
        push    ecx
        mov     ecx, dword ptr [esp + 0x18]
        push    0x1
        push    ebx
        push    edx
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax + 0x1a8]
        add     esi, 0x4
        cmp     esi, ebp
        jnz     L5a0a9
        mov     edi, dword ptr [esp + 0x34]
L5a103:
        mov     eax, dword ptr [g_007f23b0]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L5a134
        mov     al, byte ptr [edi + 0x51c]
        test    al, al
        jz      L5a134
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x104]
        test    al, al
        jz      L5a134
        mov     ecx, edi
        call    FUN_005c1990
L5a134:
        mov     esi, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0x2c]
        mov     ebp, dword ptr [esp + 0x14]
        mov     eax, dword ptr [edi]
        push    esi
        push    0x1
        push    ebx
        push    ecx
        push    ebp
        mov     ecx, edi
        call    dword ptr [eax + 0x1ac]
        mov     eax, dword ptr [esp + 0x2c]
        mov     edx, dword ptr [edi]
        push    esi
        push    0x1
        push    ebx
        push    eax
        push    ebp
        mov     ecx, edi
        call    dword ptr [edx + 0x19c]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x10
        ret
L5a16c:
        fstp    st(0)
        fstp    st(0)
        jmp     L5a0a1
    }
}
