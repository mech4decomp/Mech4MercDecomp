/*
 * In-.text data block at 0x6AA420 (1718 B). Main __thiscall function
 * (RET 0xC, 3 params). Animation setup: resolves a set of named string
 * resources via FUN_00767D20 (a string-table lookup), converts each to a
 * value via FUN_0066B370, and stores them into the object at [ebp+0x44..].
 * Also builds two lists of transforms via FUN_00698DF0/FUN_00699010/
 * FUN_00699940 and stores a min/max angle into [ebp+0x38]/[ebp+0x3c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00767D20(void);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_004125E0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_004084E0(void *ptr);
extern void __cdecl FUN_0066B370(void);
extern void __cdecl FUN_004DA880(void);
extern void __cdecl FUN_004084D0(void);
extern void __cdecl FUN_00698B90(void);
extern void __cdecl FUN_00698DF0(void);
extern void __cdecl FUN_00699010(void);
extern void __cdecl FUN_00699940(void);

extern void *g_76b2ac;   /* IAT fn ptr */
extern void *g_76b2d8;   /* IAT fn ptr */
extern float g_76c5b0;

__declspec(naked) void __stdcall func_006AA420(void)
{
    __asm {
        sub     esp, 0x30
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0x44]
        mov     ebp, ecx
        push    0x796e48
        mov     ecx, edi
        call    FUN_00767D20
        push    0x76ff64
        mov     ecx, edi
        call    FUN_00767D20
        mov     esi, dword ptr [eax + 4]
        push    0x799ea4
        push    esi
        call    dword ptr [g_76b2ac]
        add     esp, 8
        test    eax, eax
        jne     L_6aa463
        mov     dword ptr [ebp + 0x30], 0xbf800000
        jmp     L_6aa470
    L_6aa463:
        push    esi
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [ebp + 0x30]
        add     esp, 4
    L_6aa470:
        push    0x799fcc
        mov     ecx, edi
        call    FUN_00767D20
        mov     dword ptr [esp + 0xc], 0
        mov     eax, dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412780
        mov     ecx, dword ptr [esp + 0xc]
        push    0x799e90
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_004125E0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        je      L_6aa4c9
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_6aa4c9
        push    eax
        call    FUN_004084E0
        add     esp, 4
    L_6aa4c9:
        mov     edx, dword ptr [esp + 0xc]
        mov     esi, dword ptr [esp + 0x40]
        push    edx
        mov     ecx, esi
        call    FUN_0066B370
        push    0x799fbc
        mov     ecx, edi
        mov     dword ptr [ebp + 0x74], eax
        call    FUN_00767D20
        mov     eax, dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412780
        mov     eax, dword ptr [esp + 0xc]
        push    0x799e90
        push    eax
        lea     ecx, [esp + 0x48]
        call    FUN_004125E0
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x40]
        test    eax, eax
        je      L_6aa52d
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_6aa52d
        push    eax
        call    FUN_004084E0
        add     esp, 4
    L_6aa52d:
        mov     ecx, dword ptr [esp + 0xc]
        push    ebx
        push    ecx
        mov     ecx, esi
        call    FUN_0066B370
        mov     bl, byte ptr [esp + 0x4c]
        test    bl, bl
        mov     dword ptr [esp + 0x44], eax
        mov     dword ptr [ebp + 0x78], eax
        jne     L_6aa673
        push    0x799fac
        mov     ecx, edi
        call    FUN_00767D20
        mov     eax, dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        mov     edx, dword ptr [esp + 0x10]
        push    0x799e90
        push    edx
        lea     ecx, [esp + 0x54]
        call    FUN_004125E0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x4c]
        test    eax, eax
        je      L_6aa59e
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_6aa59e
        push    eax
        call    FUN_004084E0
        add     esp, 4
    L_6aa59e:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        mov     ecx, esi
        call    FUN_0066B370
        push    0x799f9c
        mov     ecx, edi
        mov     dword ptr [ebp + 0x7c], eax
        call    FUN_00767D20
        mov     eax, dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        mov     ecx, dword ptr [esp + 0x10]
        push    0x799e90
        push    ecx
        lea     ecx, [esp + 0x54]
        call    FUN_004125E0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x4c]
        test    eax, eax
        je      L_6aa5fe
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_6aa5fe
        push    eax
        call    FUN_004084E0
        add     esp, 4
    L_6aa5fe:
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        mov     ecx, esi
        call    FUN_0066B370
        push    0x799f8c
        mov     ecx, edi
        mov     dword ptr [ebp + 0x80], eax
        call    FUN_00767D20
        mov     eax, dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        mov     eax, dword ptr [esp + 0x10]
        push    0x799e90
        push    eax
        lea     ecx, [esp + 0x54]
        call    FUN_004125E0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x4c]
        test    eax, eax
        je      L_6aa661
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_6aa661
        push    eax
        call    FUN_004084E0
        add     esp, 4
    L_6aa661:
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, esi
        call    FUN_0066B370
        mov     dword ptr [ebp + 0x84], eax
    L_6aa673:
        push    0x799f7c
        mov     ecx, edi
        call    FUN_00767D20
        mov     eax, dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        mov     edx, dword ptr [esp + 0x10]
        push    0x799e90
        push    edx
        lea     ecx, [esp + 0x54]
        call    FUN_004125E0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x4c]
        test    eax, eax
        je      L_6aa6c4
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_6aa6c4
        push    eax
        call    FUN_004084E0
        add     esp, 4
    L_6aa6c4:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        mov     ecx, esi
        call    FUN_0066B370
        test    bl, bl
        mov     dword ptr [esp + 0x14], eax
        mov     dword ptr [ebp + 0x50], eax
        jne     L_6aa85f
        push    0x799f70
        mov     ecx, edi
        call    FUN_00767D20
        mov     eax, dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        mov     ecx, dword ptr [esp + 0x10]
        push    0x799e90
        push    ecx
        lea     ecx, [esp + 0x54]
        call    FUN_004125E0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x4c]
        test    eax, eax
        je      L_6aa730
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_6aa730
        push    eax
        call    FUN_004084E0
        add     esp, 4
    L_6aa730:
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        mov     ecx, esi
        call    FUN_0066B370
        push    0x799f60
        mov     ecx, edi
        mov     dword ptr [ebp + 0x4c], eax
        call    FUN_00767D20
        mov     eax, dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        mov     eax, dword ptr [esp + 0x10]
        push    0x799e90
        push    eax
        lea     ecx, [esp + 0x54]
        call    FUN_004125E0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x4c]
        test    eax, eax
        je      L_6aa790
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_6aa790
        push    eax
        call    FUN_004084E0
        add     esp, 4
    L_6aa790:
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        mov     ecx, esi
        call    FUN_0066B370
        push    0x799f50
        mov     ecx, edi
        mov     dword ptr [ebp + 0x54], eax
        call    FUN_00767D20
        mov     eax, dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        mov     edx, dword ptr [esp + 0x10]
        push    0x799e90
        push    edx
        lea     ecx, [esp + 0x54]
        call    FUN_004125E0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x4c]
        test    eax, eax
        je      L_6aa7f0
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_6aa7f0
        push    eax
        call    FUN_004084E0
        add     esp, 4
    L_6aa7f0:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        mov     ecx, esi
        call    FUN_0066B370
        push    0x799f40
        mov     ecx, edi
        mov     dword ptr [ebp + 0x58], eax
        call    FUN_00767D20
        mov     eax, dword ptr [eax + 4]
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412780
        mov     ecx, dword ptr [esp + 0x10]
        push    0x799e90
        push    ecx
        lea     ecx, [esp + 0x54]
        call    FUN_004125E0
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x4c]
        test    eax, eax
        je      L_6aa850
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_6aa850
        push    eax
        call    FUN_004084E0
        add     esp, 4
    L_6aa850:
        mov     edx, dword ptr [esp + 0x10]
        push    edx
        mov     ecx, esi
        call    FUN_0066B370
        mov     dword ptr [ebp + 0x5c], eax
    L_6aa85f:
        push    0x799ef8
        mov     ecx, edi
        call    FUN_00767D20
        mov     eax, dword ptr [eax + 4]
        mov     esi, dword ptr [esi + 0x18]
        push    eax
        mov     ecx, esi
        call    FUN_004DA880
        push    0x799eec
        mov     ecx, edi
        mov     dword ptr [ebp + 0x44], eax
        call    FUN_00767D20
        mov     eax, dword ptr [eax + 4]
        push    eax
        mov     ecx, esi
        call    FUN_004DA880
        push    0x799ea8
        mov     ecx, edi
        mov     dword ptr [ebp + 0x48], eax
        call    FUN_00767D20
        mov     eax, dword ptr [eax + 4]
        push    eax
        mov     ecx, esi
        call    FUN_004DA880
        push    0x2c
        mov     dword ptr [ebp + 0x34], eax
        mov     dword ptr [ebp + 0x38], 0xbf800000
        call    FUN_004084D0
        xor     ebx, ebx
        add     esp, 4
        cmp     eax, ebx
        je      L_6aa8d9
        mov     ecx, dword ptr [esp + 0x44]
        push    ecx
        mov     ecx, eax
        call    FUN_00698B90
        mov     dword ptr [esp + 0x4c], eax
        jmp     L_6aa8df
    L_6aa8d9:
        mov     dword ptr [esp + 0x4c], ebx
        mov     eax, ebx
    L_6aa8df:
        mov     edx, dword ptr [esp + 0x44]
        mov     esi, dword ptr [edx + 0x10]
        mov     edx, dword ptr [esi + 0x30]
        shr     edx, 4
        test    edx, edx
        mov     dword ptr [esp + 0x18], edx
        jle     L_6aa98d
        mov     esi, dword ptr [esi + 0x2c]
        add     esi, 0xd
        mov     dword ptr [esp + 0x44], esi
    L_6aa902:
        cmp     byte ptr [esi], 0
        jne     L_6aa97d
        push    ebx
        mov     ecx, eax
        call    FUN_00698DF0
        mov     ecx, dword ptr [esp + 0x4c]
        push    ebx
        mov     esi, eax
        call    FUN_00699010
        push    0
        mov     edi, eax
        push    edi
        push    edi
        push    esi
        lea     eax, [esp + 0x2c]
        push    esi
        push    eax
        call    FUN_00699940
        fld     dword ptr [eax + 8]
        fcomp   dword ptr [g_76c5b0]
        add     esp, 0x18
        push    0
        push    edi
        push    edi
        __emit 0xDF
        __emit 0xE0
        push    esi
        push    esi
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     L_6aa958
        lea     ecx, [esp + 0x3c]
        push    ecx
        call    FUN_00699940
        fld     dword ptr [eax + 8]
        add     esp, 0x18
        jmp     L_6aa96a
    L_6aa958:
        lea     edx, [esp + 0x48]
        push    edx
        call    FUN_00699940
        fld     dword ptr [eax + 8]
        add     esp, 0x18
        fchs
    L_6aa96a:
        mov     edi, dword ptr [esp + 0x48]
        fstp    dword ptr [ebp + 0x38]
        mov     edx, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x44]
        mov     eax, dword ptr [esp + 0x4c]
    L_6aa97d:
        inc     ebx
        add     esi, 0x10
        cmp     ebx, edx
        mov     dword ptr [esp + 0x44], esi
        jl      L_6aa902
    L_6aa98d:
        test    eax, eax
        je      L_6aa999
        mov     edx, dword ptr [eax]
        push    1
        mov     ecx, eax
        call    dword ptr [edx]
    L_6aa999:
        push    0x2c
        mov     dword ptr [ebp + 0x3c], 0xbf800000
        call    FUN_004084D0
        xor     ebx, ebx
        add     esp, 4
        cmp     eax, ebx
        je      L_6aa9c2
        mov     esi, dword ptr [esp + 0x14]
        push    esi
        mov     ecx, eax
        call    FUN_00698B90
        mov     dword ptr [esp + 0x4c], eax
        jmp     L_6aa9cc
    L_6aa9c2:
        mov     esi, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x4c], ebx
        mov     eax, ebx
    L_6aa9cc:
        mov     ecx, dword ptr [esi + 0x10]
        mov     edx, dword ptr [ecx + 0x30]
        shr     edx, 4
        test    edx, edx
        jle     L_6aaa7e
        mov     edx, ecx
        mov     esi, dword ptr [edx + 0x30]
        mov     edx, dword ptr [edx + 0x2c]
        shr     esi, 4
        add     edx, 0xd
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x44], edx
    L_6aa9f3:
        cmp     byte ptr [edx], 0
        jne     L_6aaa6e
        push    ebx
        mov     ecx, eax
        call    FUN_00698DF0
        mov     ecx, dword ptr [esp + 0x4c]
        push    ebx
        mov     esi, eax
        call    FUN_00699010
        push    0
        mov     edi, eax
        push    edi
        push    edi
        push    esi
        lea     eax, [esp + 0x44]
        push    esi
        push    eax
        call    FUN_00699940
        fld     dword ptr [eax + 8]
        fcomp   dword ptr [g_76c5b0]
        add     esp, 0x18
        push    0
        push    edi
        push    edi
        __emit 0xDF
        __emit 0xE0
        push    esi
        push    esi
        __emit 0xF6
        __emit 0xC4
        __emit 0x41
        jne     L_6aaa49
        lea     ecx, [esp + 0x3c]
        push    ecx
        call    FUN_00699940
        fld     dword ptr [eax + 8]
        add     esp, 0x18
        jmp     L_6aaa5b
    L_6aaa49:
        lea     edx, [esp + 0x30]
        push    edx
        call    FUN_00699940
        fld     dword ptr [eax + 8]
        add     esp, 0x18
        fchs
    L_6aaa5b:
        mov     edi, dword ptr [esp + 0x48]
        fstp    dword ptr [ebp + 0x3c]
        mov     edx, dword ptr [esp + 0x44]
        mov     esi, dword ptr [esp + 0x18]
        mov     eax, dword ptr [esp + 0x4c]
    L_6aaa6e:
        inc     ebx
        add     edx, 0x10
        cmp     ebx, esi
        mov     dword ptr [esp + 0x44], edx
        jl      L_6aa9f3
    L_6aaa7e:
        test    eax, eax
        pop     ebx
        je      L_6aaa8b
        mov     edx, dword ptr [eax]
        push    1
        mov     ecx, eax
        call    dword ptr [edx]
    L_6aaa8b:
        push    0x799eb4
        mov     ecx, edi
        mov     dword ptr [ebp + 0x40], 0x3f800000
        call    FUN_00767D20
        test    eax, eax
        je      L_6aaab2
        mov     eax, dword ptr [eax + 4]
        push    eax
        call    dword ptr [g_76b2d8]
        fstp    dword ptr [ebp + 0x40]
        add     esp, 4
    L_6aaab2:
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        pop     edi
        pop     esi
        pop     ebp
        je      L_6aaad0
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jne     L_6aaad0
        push    eax
        call    FUN_004084E0
        add     esp, 4
    L_6aaad0:
        add     esp, 0x30
        ret     0xc
    }
}
