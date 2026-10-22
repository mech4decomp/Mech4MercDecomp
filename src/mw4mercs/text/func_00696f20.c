/*
 * FUN_00696f20 (2029 B) — HUD element constructor (__thiscall).
 * Initializes sub-elements, registers 9 sub-objects, sets up a
 * float-array loop, and wires up virtual dispatch.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007ddde0;
extern int g_007dab44;
extern int g_007dab40;
extern int g_0077ce7c;
extern int g_00799800;
extern char g_0078f198[];
extern char g_00792464[];
extern float g_0076d040;
extern float g_0077b290;
extern float g_0076d064;
extern float g_007997fc;
extern float g_007b5ec4;
extern int g_007b5f1c;
extern int g_007b5f70;

extern void __cdecl FUN_00561430(void);
extern void __cdecl FUN_006989e0(void);
extern void __cdecl FUN_0041fc80(void);
extern void __cdecl FUN_006989a0(void);
extern void __cdecl FUN_005614d0(void);
extern void __cdecl FUN_0040c9c0(void);
extern void __cdecl FUN_0040c410(void);
extern void *__cdecl FUN_004084d0(int size);
extern void __cdecl FUN_00560190(void);
extern void __cdecl FUN_00698b10(void);
extern void __cdecl FUN_00698a20(void);
extern void __cdecl FUN_00560420(void);
extern void *__cdecl FUN_00698b60(void);
extern void __cdecl FUN_00698a00(void);

__declspec(naked) void FUN_00696f20(void)
{
    __asm {
        sub     esp, 0x28
        mov     eax, dword ptr [g_007ddde0]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        call    FUN_00561430
        lea     ecx, [esp+0x13]
        lea     ebp, [ebx+0x50]
        push    ecx
        mov     ecx, ebp
        call    FUN_006989e0
        lea     edx, [esp+0x13]
        push    edx
        lea     ecx, [ebx+0x5c]
        call    FUN_006989e0
        lea     eax, [esp+0x13]
        push    eax
        lea     ecx, [ebx+0x68]
        call    FUN_006989e0
        lea     edi, [ebx+0x8c]
        xor     esi, esi
        push    esi
        mov     ecx, edi
        call    FUN_0041fc80
        mov     ecx, dword ptr [ebp+4]
        mov     dword ptr [edi], offset g_0077ce7c
        mov     dword ptr [ebx], offset g_00799800
        mov     edx, dword ptr [ebp]
        push    ecx
        push    edx
        mov     ecx, ebp
        call    FUN_006989a0
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, dword ptr [g_007dab40]
        push    0x43800000
        push    0x43800000
        push    0x43020000
        push    0x42240000
        push    0x42f60000
        push    0x40800000
        xor     ecx, edx
        mov     edi, dword ptr [ecx+0xc]
        push    esi
        mov     dword ptr [ebx+0x78], esi
        push    offset g_0078f198
        mov     ecx, ebx
        mov     dword ptr [ebx+0x7c], esi
        mov     dword ptr [ebx+0x74], esi
        mov     dword ptr [ebx+0x84], 0xf
        xor     edi, 0x85739531
        call    FUN_005614d0
        push    0x3f666666
        push    esi
        push    esi
        lea     ecx, [esp+0x38]
        call    FUN_0040c9c0
        lea     edx, [esp+0x2c]
        push    edx
        lea     ecx, [ebx+0x14]
        call    FUN_0040c410
        xor     eax, eax
        mov     dword ptr [ebx+0x34], 0xfa007d00
        mov     dword ptr [ebx+0x80], 0xffffffff
        mov     dword ptr [esp+0x14], eax
        mov     esi, offset g_007b5ec4
        jmp     loop_check
loop_top:
        mov     eax, dword ptr [esp+0x14]
loop_check:
        cmp     esi, offset g_007b5f1c
        jge     body_b
        fild    dword ptr [esp+0x14]
        push    0x43800000
        push    0x43800000
        push    ecx
        fmul    dword ptr [g_0076d040]
        add     eax, 0xa
        fld     st(0)
        fadd    dword ptr [g_0077b290]
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [esi]
        fadd    dword ptr [g_0076d064]
        fstp    dword ptr [esp]
        push    ecx
        fadd    dword ptr [g_007997fc]
        fstp    dword ptr [esp]
        push    0x42580000
        jmp     converge
body_b:
        add     eax, 0xa
        lea     ecx, [eax-0x20]
        mov     dword ptr [esp+0x18], ecx
        fild    dword ptr [esp+0x18]
        push    0x43800000
        push    0x43800000
        fmul    dword ptr [g_0076d040]
        push    ecx
        fld     st(0)
        fadd    dword ptr [g_0077b290]
        fstp    dword ptr [esp]
        push    ecx
        fld     dword ptr [esi]
        fadd    dword ptr [g_0076d064]
        fstp    dword ptr [esp]
        push    ecx
        fadd    dword ptr [g_007997fc]
        fstp    dword ptr [esp]
        push    0x430f0000
converge:
        push    eax
        push    offset g_00792464
        mov     ecx, ebx
        call    FUN_005614d0
        mov     edx, dword ptr [esp+0x14]
        inc     edx
        add     esi, 4
        cmp     esi, offset g_007b5f70
        mov     dword ptr [esp+0x14], edx
        jle     loop_top

        push    0x138
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      b1_null
        push    0
        mov     ecx, eax
        call    FUN_00560190
        mov     dword ptr [esp+0x14], eax
        jmp     b1_check
b1_null:
        mov     dword ptr [esp+0x14], 0
b1_check:
        mov     esi, dword ptr [ebp+4]
        cmp     esi, dword ptr [ebp+8]
        jz      b1_grow
        lea     edx, [esp+0x14]
        push    edx
        push    esi
        call    FUN_00698b10
        add     esp, 8
        add     esi, 4
        mov     dword ptr [ebp+4], esi
        jmp     b2_alloc
b1_grow:
        push    1
        lea     eax, [esp+0x18]
        push    eax
        push    esi
        mov     ecx, ebp
        call    FUN_00698a20

b2_alloc:
        push    0x138
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      b2_null
        push    0
        mov     ecx, eax
        call    FUN_00560190
        mov     dword ptr [esp+0x14], eax
        jmp     b2_check
b2_null:
        mov     dword ptr [esp+0x14], 0
b2_check:
        mov     esi, dword ptr [ebp+4]
        cmp     esi, dword ptr [ebp+8]
        jz      b2_grow
        lea     ecx, [esp+0x14]
        push    ecx
        push    esi
        call    FUN_00698b10
        add     esp, 8
        add     esi, 4
        mov     dword ptr [ebp+4], esi
        jmp     b3_alloc
b2_grow:
        push    1
        lea     edx, [esp+0x18]
        push    edx
        push    esi
        mov     ecx, ebp
        call    FUN_00698a20

b3_alloc:
        push    0x138
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      b3_null
        push    0
        mov     ecx, eax
        call    FUN_00560190
        mov     dword ptr [esp+0x14], eax
        jmp     b3_check
b3_null:
        mov     dword ptr [esp+0x14], 0
b3_check:
        mov     esi, dword ptr [ebp+4]
        cmp     esi, dword ptr [ebp+8]
        jz      b3_grow
        lea     eax, [esp+0x14]
        push    eax
        push    esi
        call    FUN_00698b10
        add     esp, 8
        add     esi, 4
        mov     dword ptr [ebp+4], esi
        jmp     b4_alloc
b3_grow:
        push    1
        lea     ecx, [esp+0x18]
        push    ecx
        push    esi
        mov     ecx, ebp
        call    FUN_00698a20

b4_alloc:
        push    0x138
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      b4_null
        push    0
        mov     ecx, eax
        call    FUN_00560190
        mov     dword ptr [esp+0x14], eax
        jmp     b4_check
b4_null:
        mov     dword ptr [esp+0x14], 0
b4_check:
        mov     esi, dword ptr [ebp+4]
        cmp     esi, dword ptr [ebp+8]
        jz      b4_grow
        lea     edx, [esp+0x14]
        push    edx
        push    esi
        call    FUN_00698b10
        add     esp, 8
        add     esi, 4
        mov     dword ptr [ebp+4], esi
        jmp     b5_alloc
b4_grow:
        push    1
        lea     eax, [esp+0x18]
        push    eax
        push    esi
        mov     ecx, ebp
        call    FUN_00698a20

b5_alloc:
        push    0x138
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      b5_null
        push    0
        mov     ecx, eax
        call    FUN_00560190
        mov     dword ptr [esp+0x14], eax
        jmp     b5_check
b5_null:
        mov     dword ptr [esp+0x14], 0
b5_check:
        mov     esi, dword ptr [ebp+4]
        cmp     esi, dword ptr [ebp+8]
        jz      b5_grow
        lea     ecx, [esp+0x14]
        push    ecx
        push    esi
        call    FUN_00698b10
        add     esp, 8
        add     esi, 4
        mov     dword ptr [ebp+4], esi
        jmp     b6_alloc
b5_grow:
        push    1
        lea     edx, [esp+0x18]
        push    edx
        push    esi
        mov     ecx, ebp
        call    FUN_00698a20

b6_alloc:
        push    0x138
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      b6_null
        push    0
        mov     ecx, eax
        call    FUN_00560190
        mov     dword ptr [esp+0x14], eax
        jmp     b6_check
b6_null:
        mov     dword ptr [esp+0x14], 0
b6_check:
        mov     esi, dword ptr [ebp+4]
        cmp     esi, dword ptr [ebp+8]
        jz      b6_grow
        lea     eax, [esp+0x14]
        push    eax
        push    esi
        call    FUN_00698b10
        add     esp, 8
        add     esi, 4
        mov     dword ptr [ebp+4], esi
        jmp     b7_alloc
b6_grow:
        push    1
        lea     ecx, [esp+0x18]
        push    ecx
        push    esi
        mov     ecx, ebp
        call    FUN_00698a20

b7_alloc:
        push    0x138
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      b7_null
        push    0
        mov     ecx, eax
        call    FUN_00560190
        mov     dword ptr [esp+0x14], eax
        jmp     b7_check
b7_null:
        mov     dword ptr [esp+0x14], 0
b7_check:
        mov     esi, dword ptr [ebp+4]
        cmp     esi, dword ptr [ebp+8]
        jz      b7_grow
        lea     edx, [esp+0x14]
        push    edx
        push    esi
        call    FUN_00698b10
        add     esp, 8
        add     esi, 4
        mov     dword ptr [ebp+4], esi
        jmp     b8_alloc
b7_grow:
        push    1
        lea     eax, [esp+0x18]
        push    eax
        push    esi
        mov     ecx, ebp
        call    FUN_00698a20

b8_alloc:
        push    0x138
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      b8_null
        push    0
        mov     ecx, eax
        call    FUN_00560190
        mov     dword ptr [esp+0x14], eax
        jmp     b8_check
b8_null:
        mov     dword ptr [esp+0x14], 0
b8_check:
        mov     esi, dword ptr [ebp+4]
        cmp     esi, dword ptr [ebp+8]
        jz      b8_grow
        lea     ecx, [esp+0x14]
        push    ecx
        push    esi
        call    FUN_00698b10
        add     esp, 8
        add     esi, 4
        mov     dword ptr [ebp+4], esi
        jmp     b9_alloc
b8_grow:
        push    1
        lea     edx, [esp+0x18]
        push    edx
        push    esi
        mov     ecx, ebp
        call    FUN_00698a20

b9_alloc:
        push    0x138
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      b9_null
        push    0
        mov     ecx, eax
        call    FUN_00560190
        mov     dword ptr [esp+0x14], eax
        jmp     b9_check
b9_null:
        mov     dword ptr [esp+0x14], 0
b9_check:
        mov     esi, dword ptr [ebp+4]
        cmp     esi, dword ptr [ebp+8]
        jz      b9_grow
        lea     eax, [esp+0x14]
        push    eax
        push    esi
        call    FUN_00698b10
        add     esp, 8
        add     esi, 4
        mov     dword ptr [ebp+4], esi
        jmp     vcall_start
b9_grow:
        push    1
        lea     ecx, [esp+0x18]
        push    ecx
        push    esi
        mov     ecx, ebp
        call    FUN_00698a20

vcall_start:
        mov     edx, dword ptr [edi]
        mov     esi, dword ptr [ebp]
        push    0
        push    0
        push    0x2bc
        mov     ecx, edi
        call    dword ptr [edx+0x34]
        mov     ecx, dword ptr [esi]
        push    eax
        call    FUN_00560420
        mov     eax, dword ptr [edi]
        push    0
        push    0
        push    0x2bd
        mov     ecx, edi
        call    dword ptr [eax+0x34]
        mov     ecx, dword ptr [esi+4]
        push    eax
        call    FUN_00560420
        mov     edx, dword ptr [edi]
        push    0
        push    0
        push    0x2be
        mov     ecx, edi
        call    dword ptr [edx+0x34]
        mov     ecx, dword ptr [esi+8]
        push    eax
        call    FUN_00560420
        mov     eax, dword ptr [edi]
        push    0
        push    0
        push    0x2bf
        mov     ecx, edi
        call    dword ptr [eax+0x34]
        mov     ecx, dword ptr [esi+0xc]
        push    eax
        call    FUN_00560420
        mov     edx, dword ptr [edi]
        push    0
        push    0
        push    0x2c0
        mov     ecx, edi
        call    dword ptr [edx+0x34]
        mov     ecx, dword ptr [esi+0x10]
        push    eax
        call    FUN_00560420
        mov     eax, dword ptr [edi]
        push    0
        push    0
        push    0x2c1
        mov     ecx, edi
        call    dword ptr [eax+0x34]
        mov     ecx, dword ptr [esi+0x14]
        push    eax
        call    FUN_00560420
        mov     edx, dword ptr [edi]
        push    0
        push    0
        push    0x2c2
        mov     ecx, edi
        call    dword ptr [edx+0x34]
        mov     ecx, dword ptr [esi+0x18]
        push    eax
        call    FUN_00560420
        mov     eax, dword ptr [edi]
        push    0
        push    0
        push    0x2c3
        mov     ecx, edi
        call    dword ptr [eax+0x34]
        mov     ecx, dword ptr [esi+0x1c]
        push    eax
        call    FUN_00560420
        mov     edx, dword ptr [edi]
        push    0
        push    0
        push    0x2c4
        mov     ecx, edi
        call    dword ptr [edx+0x34]
        mov     ecx, dword ptr [esi+0x20]
        push    eax
        call    FUN_00560420

        mov     ecx, dword ptr [esi]
        mov     edx, dword ptr [esi+4]
        xor     eax, eax
        mov     dword ptr [ecx+0x10c], eax
        mov     ecx, dword ptr [esi+8]
        mov     dword ptr [edx+0x10c], eax
        mov     edx, dword ptr [esi+0xc]
        mov     dword ptr [ecx+0x10c], eax
        mov     ecx, dword ptr [esi+0x10]
        mov     dword ptr [edx+0x10c], eax
        mov     edx, dword ptr [esi+0x14]
        mov     dword ptr [ecx+0x10c], eax
        mov     ecx, dword ptr [esi+0x18]
        mov     dword ptr [edx+0x10c], eax
        mov     edx, dword ptr [esi+0x1c]
        mov     dword ptr [ecx+0x10c], eax
        mov     ecx, dword ptr [esi+0x20]
        mov     dword ptr [edx+0x10c], eax
        mov     edx, dword ptr [esi]
        mov     dword ptr [ecx+0x10c], eax
        mov     ecx, dword ptr [esi+4]
        mov     eax, 0xe600e100
        mov     dword ptr [edx+0x104], eax
        mov     edx, dword ptr [esi+8]
        mov     dword ptr [ecx+0x104], eax
        mov     ecx, dword ptr [esi+0xc]
        mov     dword ptr [edx+0x104], eax
        mov     edx, dword ptr [esi+0x10]
        mov     dword ptr [ecx+0x104], eax
        mov     ecx, dword ptr [esi+0x14]
        mov     dword ptr [edx+0x104], eax
        mov     edx, dword ptr [esi+0x18]
        mov     dword ptr [ecx+0x104], eax
        mov     ecx, dword ptr [esi+0x1c]
        mov     dword ptr [edx+0x104], eax
        mov     edx, dword ptr [esi+0x20]
        mov     dword ptr [ecx+0x104], eax
        mov     ecx, dword ptr [esi]
        mov     dword ptr [edx+0x104], eax
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax+4]
        mov     ecx, dword ptr [esi+4]
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx+4]
        mov     ecx, dword ptr [esi+8]
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax+4]
        mov     ecx, dword ptr [esi+0xc]
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx+4]
        mov     ecx, dword ptr [esi+0x10]
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax+4]
        mov     ecx, dword ptr [esi+0x14]
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx+4]
        mov     ecx, dword ptr [esi+0x18]
        mov     eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax+4]
        mov     ecx, dword ptr [esi+0x1c]
        mov     edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx+4]
        mov     esi, dword ptr [esi+0x20]
        mov     eax, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [eax+4]

        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx+0xc]
        xor     eax, 0x85739531
        mov     cl, byte ptr [eax+0x17]
        test    cl, cl
        jz      fin
        push    0x138
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      c_null
        push    0
        mov     ecx, eax
        call    FUN_00560190
        jmp     c_join
c_null:
        xor     eax, eax
c_join:
        mov     edx, dword ptr [ebp+8]
        mov     ecx, dword ptr [ebp+4]
        cmp     ecx, edx
        mov     dword ptr [esp+0x18], eax
        mov     dword ptr [esp+0x20], edx
        jz      grow
        test    ecx, ecx
        jz      skip_store
        mov     dword ptr [ecx], eax
skip_store:
        add     ecx, 4
        mov     dword ptr [ebp+4], ecx
        jmp     after_grow
grow:
        mov     esi, dword ptr [ebp]
        mov     eax, ecx
        sub     eax, esi
        sar     eax, 2
        cmp     eax, 1
        mov     dword ptr [esp+0x14], 1
        mov     dword ptr [esp+0x1c], eax
        lea     ecx, [esp+0x14]
        jc      use_one
        lea     ecx, [esp+0x1c]
use_one:
        add     eax, dword ptr [ecx]
        mov     dword ptr [esp+0x24], eax
        jz      alloc_null
        lea     ecx, [eax*4]
        push    ecx
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [esp+0x14], eax
        jmp     alloc_join
alloc_null:
        mov     dword ptr [esp+0x14], 0
alloc_join:
        mov     edx, dword ptr [esp+0x24]
        mov     eax, dword ptr [esp+0x14]
        push    edx
        push    eax
        mov     eax, dword ptr [ebp+4]
        push    eax
        push    esi
        call    FUN_00698b60
        add     esp, 0x10
        test    eax, eax
        jz      no_store
        mov     ecx, dword ptr [esp+0x18]
        mov     dword ptr [eax], ecx
no_store:
        mov     edx, dword ptr [esp+0x24]
        push    edx
        add     eax, 4
        push    eax
        mov     eax, dword ptr [ebp+4]
        push    eax
        push    eax
        call    FUN_00698b60
        mov     dword ptr [esp+0x2c], eax
        mov     eax, dword ptr [esp+0x30]
        sub     eax, esi
        add     esp, 0x10
        sar     eax, 2
        push    eax
        push    esi
        mov     dword ptr [esp+0x30], esi
        lea     esi, [ebp+8]
        mov     ecx, esi
        call    FUN_00698a00
        mov     eax, dword ptr [esp+0x14]
        mov     edx, dword ptr [esp+0x24]
        mov     ecx, dword ptr [esp+0x1c]
        mov     dword ptr [ebp], eax
        lea     eax, [eax+edx*4]
        mov     dword ptr [ebp+4], ecx
        mov     dword ptr [esi], eax
after_grow:
        mov     edx, dword ptr [edi]
        mov     ebp, dword ptr [ebp]
        push    0
        push    0
        push    0x2c5
        mov     ecx, edi
        call    dword ptr [edx+0x34]
        mov     ecx, dword ptr [ebp+0x24]
        push    eax
        call    FUN_00560420
        mov     eax, dword ptr [ebp+0x24]
        mov     ecx, eax
        mov     edx, dword ptr [ecx]
        push    1
        mov     dword ptr [eax+0x10c], 0
        mov     dword ptr [ecx+0x104], 0xe6007d00
        call    dword ptr [edx+4]
fin:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        add     esp, 0x28
        ret
    }
}
