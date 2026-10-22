/*
 * FUN_0052fd5f (extent 0x52fd5f-0x530356) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b431c;
extern int    g_007b4320;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007dc574;
extern int    g_007dc6b4;
extern int    g_007dc6e0;
extern int    g_007dc6e4;
extern int    g_007dc868;
extern int    g_007dc86c;
extern int    g_007dd234;
extern int    g_007dd268;
extern int    g_007f1fb8;
extern int    g_007f1fbc;
extern int    g_007f1fc0;
extern int    g_007f1fc4;
extern int    g_007f2438;
extern int    g_00858948;
extern int    g_0085894c;
extern char   g_00858955;
extern char   g_00858956;
extern char   g_00858957;
extern int    g_00858a38;
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004c8e90(void);
extern void __cdecl FUN_004c8eb0(void);
extern void __cdecl FUN_004d38c0(void);
extern void __cdecl FUN_004d3fe0(void);
extern void __cdecl FUN_004d8df0(void);
extern void __cdecl FUN_004dfec0(void);
extern void __cdecl FUN_004f2540(void);
extern void __cdecl FUN_004f2970(void);
extern void __cdecl FUN_004f2990(void);
extern void __cdecl FUN_0050edd0(void);
extern void __cdecl FUN_0050f150(void);
extern void __cdecl FUN_00511a20(void);
extern void __cdecl FUN_00511a80(void);
extern void __cdecl FUN_00511aa0(void);
extern void __cdecl FUN_00511ae0(void);
extern void __cdecl FUN_00530110(void);
extern void __cdecl FUN_005bb890(void);
extern void __cdecl FUN_005bd0d0(void);
extern void __cdecl FUN_005d9920(void);
extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006f49a0(void);
extern void __cdecl FUN_00709f20(void);
extern void __cdecl FUN_00717d80(void);

__declspec(naked) void FUN_0052fd5f(void)
{
    __asm {
        nop    
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [g_007dd234]
        push    edi
        push    eax
        mov    edi, ecx
        call    FUN_006f4950
        push    0x934
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_fd98
        mov    ecx, eax
        call    FUN_005bd0d0
        jmp    L_fd9a
L_fd98:
        xor    eax, eax
L_fd9a:
        push    esi
        push    0
        push    eax
        call    FUN_004c8eb0
        add    esp, 8
        call    FUN_006f49a0
        mov    ecx, edi
        call    FUN_004d38c0
        mov    ecx, dword ptr [g_007dc6e4]
        push    ecx
        call    FUN_006f4950
        push    0x98
        call    FUN_004084d0
        mov    esi, eax
        add    esp, 4
        test    esi, esi
        je    L_fde2
        mov    ecx, edi
        call    FUN_00530110
        mov    ecx, esi
        push    eax
        call    FUN_005bb890
        jmp    L_fde4
L_fde2:
        xor    eax, eax
L_fde4:
        mov    ecx, dword ptr [g_007dc574]
        push    eax
        mov    dword ptr [g_007dc6e0], eax
        call    FUN_004d8df0
        call    FUN_006f49a0
        mov    edx, dword ptr [g_007dc86c]
        push    edx
        call    FUN_006f4950
        push    0x8c
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        pop    esi
        je    L_fe21
        mov    ecx, eax
        call    FUN_004f2540
        jmp    L_fe23
L_fe21:
        xor    eax, eax
L_fe23:
        mov    ecx, dword ptr [g_007dc574]
        push    eax
        mov    dword ptr [g_007dc868], eax
        call    FUN_004d8df0
        call    FUN_006f49a0
        mov    eax, dword ptr [g_007dd234]
        push    eax
        call    FUN_006f4950
        push    0x18
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_fe5b
        mov    ecx, eax
        call    FUN_005d9920
        jmp    L_fe5d
L_fe5b:
        xor    eax, eax
L_fe5d:
        mov    ecx, dword ptr [edi + 0x60]
        push    eax
        mov    dword ptr [g_007f2438], eax
        call    FUN_004dfec0
        call    FUN_006f49a0
        mov    eax, dword ptr [g_007dd268]
        test    eax, eax
        jne    L_fead
        mov    ecx, edi
        call    FUN_00530110
        test    al, al
        je    L_fead
        push    0x40ef0
        call    FUN_004084d0
        add    esp, 4
        test    eax, eax
        je    L_fea3
        mov    ecx, eax
        call    FUN_0050edd0
        mov    dword ptr [g_007dd268], eax
        pop    edi
        ret    
L_fea3:
        mov    dword ptr [g_007dd268], 0
L_fead:
        pop    edi
        ret    
        nop    
        push    ebx
        push    esi
        mov    esi, dword ptr [g_007dd268]
        push    edi
        xor    edi, edi
        cmp    esi, edi
        mov    ebx, ecx
        je    L_fed7
        mov    ecx, esi
        call    FUN_0050f150
        push    esi
        call    FUN_004084e0
        add    esp, 4
        mov    dword ptr [g_007dd268], edi
L_fed7:
        mov    ecx, dword ptr [g_007f1fb8]
        cmp    ecx, edi
        je    L_feed
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        mov    dword ptr [g_007f1fb8], edi
L_feed:
        mov    ecx, dword ptr [g_007f1fbc]
        cmp    ecx, edi
        je    L_ff03
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov    dword ptr [g_007f1fbc], edi
L_ff03:
        mov    ecx, dword ptr [g_007f1fc4]
        cmp    ecx, edi
        je    L_ff19
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
        mov    dword ptr [g_007f1fc4], edi
L_ff19:
        mov    ecx, dword ptr [g_007f1fc0]
        cmp    ecx, edi
        je    L_ff2f
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
        mov    dword ptr [g_007f1fc0], edi
L_ff2f:
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [g_007dab40]
        mov    esi, dword ptr [edx]
        mov    ecx, eax
        xor    ecx, esi
        mov    edx, dword ptr [ecx + 0x30]
        add    ecx, 0x30
        xor    edx, 0x85739531
        je    L_ff6d
        mov    ecx, dword ptr [ecx]
        xor    ecx, 0x85739531
        je    L_ff5e
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_ff5e:
        push    0xc
        call    FUN_004c8e90
        mov    eax, dword ptr [g_007dab40]
        add    esp, 4
L_ff6d:
        mov    edx, dword ptr [g_007dab44]
        mov    esi, dword ptr [edx]
        mov    ecx, eax
        xor    ecx, esi
        mov    edx, dword ptr [ecx + 0x3c]
        add    ecx, 0x3c
        xor    edx, 0x85739531
        je    L_ffa6
        mov    ecx, dword ptr [ecx]
        xor    ecx, 0x85739531
        je    L_ff97
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_ff97:
        push    0xf
        call    FUN_004c8e90
        mov    eax, dword ptr [g_007dab40]
        add    esp, 4
L_ffa6:
        mov    edx, dword ptr [g_007dab44]
        mov    esi, dword ptr [edx]
        mov    ecx, eax
        xor    ecx, esi
        mov    edx, dword ptr [ecx + 0x34]
        add    ecx, 0x34
        xor    edx, 0x85739531
        je    L_ffdf
        mov    ecx, dword ptr [ecx]
        xor    ecx, 0x85739531
        je    L_ffd0
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_ffd0:
        push    0xd
        call    FUN_004c8e90
        mov    eax, dword ptr [g_007dab40]
        add    esp, 4
L_ffdf:
        mov    edx, dword ptr [g_007dab44]
        mov    esi, dword ptr [edx]
        mov    ecx, eax
        xor    ecx, esi
        mov    edx, dword ptr [ecx + 0x38]
        add    ecx, 0x38
        xor    edx, 0x85739531
        je    L_0018
        mov    ecx, dword ptr [ecx]
        xor    ecx, 0x85739531
        je    L_0009
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_0009:
        push    0xe
        call    FUN_004c8e90
        mov    eax, dword ptr [g_007dab40]
        add    esp, 4
L_0018:
        mov    ecx, dword ptr [g_007dab44]
        xor    eax, dword ptr [ecx]
        mov    edx, dword ptr [eax + 0x44]
        add    eax, 0x44
        xor    edx, 0x85739531
        je    L_0048
        mov    ecx, dword ptr [eax]
        xor    ecx, 0x85739531
        je    L_003e
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_003e:
        push    0x11
        call    FUN_004c8e90
        add    esp, 4
L_0048:
        push    0x12
        call    FUN_004c8e90
        push    0x13
        call    FUN_004c8e90
        push    0x14
        call    FUN_004c8e90
        push    0x15
        call    FUN_004c8e90
        push    0x16
        call    FUN_004c8e90
        push    0x17
        call    FUN_004c8e90
        mov    ecx, dword ptr [ebx + 0x84]
        add    esp, 0x18
        cmp    ecx, edi
        je    L_0085
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_0085:
        mov    ecx, dword ptr [ebx + 0x88]
        cmp    ecx, edi
        je    L_0095
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_0095:
        mov    ecx, dword ptr [ebx + 0x90]
        cmp    ecx, edi
        je    L_00a5
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_00a5:
        mov    ecx, dword ptr [ebx + 0x8c]
        cmp    ecx, edi
        je    L_00b5
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_00b5:
        mov    ecx, dword ptr [ebx + 0x94]
        cmp    ecx, edi
        je    L_00c5
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_00c5:
        mov    ecx, dword ptr [ebx + 0x98]
        cmp    ecx, edi
        je    L_00d5
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_00d5:
        mov    ecx, dword ptr [g_007dc6e0]
        cmp    ecx, edi
        je    L_00e5
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx]
L_00e5:
        mov    ecx, dword ptr [g_007dc868]
        cmp    ecx, edi
        mov    dword ptr [g_007dc6e0], edi
        je    L_00fb
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax]
L_00fb:
        mov    ecx, ebx
        mov    dword ptr [g_007dc868], edi
        call    FUN_004d3fe0
        pop    edi
        pop    esi
        pop    ebx
        ret    
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [ecx + 0xcc]
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 4]
        mov    edx, dword ptr [eax + 0x10]
        test    edx, edx
        push    esi
        jl    L_0352
        mov    al, byte ptr [ecx + 0x17]
        test    al, al
        jne    L_02b6
        mov    ecx, dword ptr [g_007dc868]
        test    ecx, ecx
        je    L_014a
        call    FUN_004f2970
L_014a:
        or    esi, 0xffffffff
L_014d:
        mov    ecx, dword ptr [g_007dd268]
L_0153:
        call    FUN_00511aa0
        mov    eax, dword ptr [g_007dd268]
        cmp    dword ptr [eax + 0x20], 0xe
        jne    L_020d
        push    0
        push    0
        push    0
        push    0
        xor    ecx, ecx
        mov    cl, byte ptr [g_00858957]
        xor    edx, edx
        mov    dl, byte ptr [g_00858956]
        push    0
        mov    dword ptr [eax + 0x20], esi
        xor    eax, eax
        mov    al, byte ptr [g_00858955]
        push    ecx
        mov    ecx, dword ptr [g_0085894c]
        push    edx
        mov    edx, dword ptr [g_00858948]
        push    eax
        push    ecx
        push    edx
        push    0x258
        push    0x320
        call    FUN_00709f20
        mov    ecx, dword ptr [g_007dd268]
        call    FUN_00511ae0
        mov    ecx, dword ptr [g_007dd268]
        cmp    dword ptr [ecx + 0x20], 0xf
        jne    L_0153
        push    0
        push    0
        push    0
        xor    eax, eax
        mov    al, byte ptr [g_00858957]
        push    0
        mov    dword ptr [ecx + 0x20], esi
        xor    ecx, ecx
        mov    cl, byte ptr [g_00858956]
        push    0
        xor    edx, edx
        mov    dl, byte ptr [g_00858955]
        push    eax
        mov    eax, dword ptr [g_0085894c]
        push    ecx
        mov    ecx, dword ptr [g_00858948]
        push    edx
        mov    edx, dword ptr [g_007b4320]
        push    eax
        mov    eax, dword ptr [g_007b431c]
        push    ecx
        push    edx
        push    eax
        call    FUN_00709f20
        jmp    L_014d
L_020d:
        mov    ecx, dword ptr [g_007dc868]
        test    ecx, ecx
        je    L_021c
        call    FUN_004f2990
L_021c:
        call    FUN_00717d80
        mov    ecx, dword ptr [g_007dd268]
        mov    eax, dword ptr [ecx + 0x20]
        cmp    eax, 7
        jne    L_0240
        mov    dword ptr [ecx + 0x20], esi
        mov    dword ptr [g_00858a38], 0x538000
        pop    esi
        ret    4
L_0240:
        cmp    eax, 4
        jne    L_027a
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx]
        push    0
        call    dword ptr [eax + 0x2c]
        mov    ecx, dword ptr [g_007dd268]
        mov    dword ptr [ecx + 0x20], esi
        mov    dword ptr [g_00858a38], 0x538000
        pop    esi
        ret    4
L_027a:
        cmp    eax, 6
        jne    L_02a8
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    0
        call    dword ptr [edx + 0x2c]
        mov    eax, dword ptr [g_007dd268]
        mov    dword ptr [eax + 0x24], esi
        mov    dword ptr [eax + 0x20], esi
L_02a8:
        mov    dword ptr [g_00858a38], 0x538000
        pop    esi
        ret    4
L_02b6:
        mov    ecx, dword ptr [g_007dd268]
        cmp    dword ptr [ecx + 0x1c], 6
        je    L_030b
        call    FUN_00511a20
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    edx, dword ptr [ecx + 0x2c]
        xor    edx, 0x85739531
        lea    eax, [ecx + 0x2c]
        mov    dword ptr [g_00858a38], 0x535260
        mov    cl, 1
        je    L_02fb
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    byte ptr [eax + 0x8fc], cl
L_02fb:
        mov    eax, dword ptr [g_007dc6b4]
        test    eax, eax
        je    L_0352
        mov    byte ptr [eax + 0x2d], cl
        pop    esi
        ret    4
L_030b:
        call    FUN_00511a80
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0x2c]
        xor    ecx, 0x85739531
        lea    eax, [edx + 0x2c]
        mov    dword ptr [g_00858a38], 0x538000
        je    L_0345
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    byte ptr [edx + 0x8fc], 0
L_0345:
        mov    eax, dword ptr [g_007dc6b4]
        test    eax, eax
        je    L_0352
        mov    byte ptr [eax + 0x2d], 0
L_0352:
        pop    esi
        ret    4
    }
}
