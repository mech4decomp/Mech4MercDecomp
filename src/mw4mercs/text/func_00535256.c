/*
 * FUN_00535256 (extent 0x535256-0x535aa0) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b431c;
extern int    g_007b4320;
extern int    g_007dab40;
extern int    g_007dab44;
extern int    g_007db094;
extern int    g_007dc6b4;
extern int    g_007dd268;
extern char   g_007ddd21;
extern int    g_007ddd44;
extern int    g_007f1fb8;
extern char   g_007f20cc;
extern int    g_007f27dc;
extern int    g_00858948;
extern int    g_0085894c;
extern char   g_00858955;
extern char   g_00858956;
extern char   g_00858957;
extern int    g_00858a38;
extern void __cdecl FUN_00405ee0(void);
extern void __cdecl FUN_00405f20(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004128e0(void);
extern void __cdecl FUN_004c8eb0(void);
extern void __cdecl FUN_004cc3c0(void);
extern void __cdecl FUN_004ce190(void);
extern void __cdecl FUN_0050f530(void);
extern void __cdecl FUN_00511640(void);
extern void __cdecl FUN_005116e0(void);
extern void __cdecl FUN_00511760(void);
extern void __cdecl FUN_00511850(void);
extern void __cdecl FUN_00511880(void);
extern void __cdecl FUN_00511920(void);
extern void __cdecl FUN_00511a80(void);
extern void __cdecl FUN_00511ae0(void);
extern void __cdecl FUN_00511b30(void);
extern void __cdecl FUN_00511b50(void);
extern void __cdecl FUN_00511d10(void);
extern void __cdecl FUN_00532970(void);
extern void __cdecl FUN_00532ab0(void);
extern void __cdecl FUN_00534c40(void);
extern void __cdecl FUN_00536890(void);
extern void __cdecl FUN_00538000(void);
extern void __cdecl FUN_0053fa70(void);
extern void __cdecl FUN_00546900(void);
extern void __cdecl FUN_005469b0(void);
extern void __cdecl FUN_00563550(void);
extern void __cdecl FUN_005647e0(void);
extern void __cdecl FUN_005648d0(void);
extern void __cdecl FUN_00565e00(void);
extern void __cdecl FUN_00566380(void);
extern void __cdecl FUN_00594a50(void);
extern void __cdecl FUN_0060a100(void);
extern void __cdecl FUN_0060feb0(void);
extern void __cdecl FUN_00611820(void);
extern void __cdecl FUN_006119c0(void);
extern void __cdecl FUN_0061ae90(void);
extern void __cdecl FUN_0061b820(void);
extern void __cdecl FUN_0061b890(void);
extern void __cdecl FUN_00701f20(void);
extern void __cdecl FUN_00707e70(void);
extern void __cdecl FUN_00709c30(void);
extern void __cdecl FUN_00709f20(void);

__declspec(naked) void FUN_00535256(void)
{
    __asm {
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
        push    ecx
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        mov    edx, dword ptr [g_007dab40]
        mov    al, byte ptr [g_007ddd21]
        xor    ecx, edx
        push    esi
        mov    esi, dword ptr [ecx + 0xc]
        xor    esi, 0x85739531
        test    al, al
        je    L_528b
        call    FUN_00538000
        pop    esi
        pop    ecx
        ret    
L_528b:
        mov    ecx, dword ptr [g_007f27dc]
        push    ebx
        push    ebp
        xor    ebp, ebp
        cmp    ecx, ebp
        push    edi
        mov    ebx, 3
        je    L_52ac
        call    FUN_0060a100
        cmp    dword ptr [g_007f27dc], ebp
        jne    L_52bc
L_52ac:
        mov    al, byte ptr [esi + 0x17]
        test    al, al
        je    L_52dc
        mov    edx, dword ptr [esi + 0x4c]
        cmp    dword ptr [edx + 0x14], 2
        jne    L_52dc
L_52bc:
        mov    eax, dword ptr [g_007ddd44]
        inc    eax
        cmp    eax, ebx
        mov    dword ptr [g_007ddd44], eax
        jle    L_52dc
        lea    ecx, [esi + 0xf4]
        call    FUN_0060feb0
        mov    dword ptr [g_007ddd44], ebp
L_52dc:
        mov    eax, dword ptr [g_007f1fb8]
        cmp    eax, ebp
        je    L_52ed
        mov    ecx, dword ptr [eax + 0x50]
        call    FUN_00594a50
L_52ed:
        mov    ecx, dword ptr [g_007dd268]
        cmp    ecx, ebp
        je    L_5636
        mov    eax, dword ptr [ecx + 0x1c]
        cmp    eax, -1
        jne    L_5344
        cmp    dword ptr [esi + 0x3514], ebp
        je    L_531f
        call    FUN_00511b50
        mov    ecx, dword ptr [g_007dd268]
        mov    dword ptr [ecx + 0x24], ebx
        mov    dword ptr [esi + 0x3514], ebp
L_531f:
        cmp    dword ptr [ecx + 0x24], ebx
        jne    L_5334
        call    FUN_00511880
        call    FUN_00538000
        pop    edi
        pop    ebp
        pop    ebx
        pop    esi
        pop    ecx
        ret    
L_5334:
        call    FUN_00511640
        call    FUN_00538000
        pop    edi
        pop    ebp
        pop    ebx
        pop    esi
        pop    ecx
        ret    
L_5344:
        cmp    eax, ebx
        mov    edi, dword ptr [esi + 0x50]
        jne    L_53bd
        cmp    dword ptr [edi + 0x10], ebp
        je    L_53c9
        mov    al, byte ptr [esi + 0x7c]
        test    al, al
        jne    L_5378
        cmp    dword ptr [edi + 0x98], ebp
        je    L_5374
        push    ebp
        mov    byte ptr [esi + 0x7c], 1
        call    FUN_00707e70
        fstp    qword ptr [esi + 0x74]
        mov    ecx, dword ptr [g_007dd268]
        jmp    L_5384
L_5374:
        test    al, al
        je    L_5384
L_5378:
        cmp    dword ptr [edi + 0x98], ebp
        jne    L_5384
        mov    byte ptr [esi + 0x7c], 0
L_5384:
        mov    al, byte ptr [esi + 0x7c]
        test    al, al
        je    L_53c9
        push    ebp
        call    FUN_00707e70
        fsub    qword ptr [esi + 0x74]
        fild    dword ptr [edi + 0x9c]
        fcompp    
        fnstsw  ax
        test    ah, 1
        je    L_53c3
        mov    ecx, esi
        call    FUN_00532ab0
        mov    ecx, dword ptr [g_007dd268]
        mov    byte ptr [esi + 0x7c], 0
        mov    dword ptr [ecx + 0x20], 0xffffffff
        jmp    L_53c9
L_53bd:
        mov    byte ptr [esi + 0x7c], 0
        jmp    L_53c9
L_53c3:
        mov    ecx, dword ptr [g_007dd268]
L_53c9:
        mov    eax, dword ptr [ecx + 0x20]
        cmp    eax, -1
        je    L_5636
        mov    edi, 5
        cmp    eax, edi
        je    L_53e5
        mov    dword ptr [ecx + 0x1c], 0xffffffff
L_53e5:
        mov    eax, dword ptr [ecx + 0x20]
        cmp    eax, 0x10
        ja    L_562f
        jmp    dword ptr [eax*4 + 0x535aa0]
        call    FUN_00709c30
        jmp    L_5629
        mov    eax, dword ptr [ecx + 0x40ee0]
        dec    eax
        mov    byte ptr [g_007f20cc], 0
        je    L_543a
        dec    eax
        jne    L_5448
        mov    eax, dword ptr [ecx + 0x40eb4]
        mov    edx, dword ptr [ecx + 0x40eb0]
        push    eax
        mov    eax, dword ptr [ecx + 0x40eac]
        mov    ecx, dword ptr [ecx + 0x40ea8]
        push    edx
        push    eax
        push    ecx
        mov    ecx, esi
        call    FUN_00546900
        jmp    L_5448
L_543a:
        mov    ecx, esi
        call    FUN_005469b0
        mov    byte ptr [g_007f20cc], 1
L_5448:
        mov    ecx, esi
        call    FUN_00532970
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx + 0x204d20]
        push    edx
        lea    ecx, [esp + 0x14]
        call    FUN_00412570
        lea    ecx, [esp + 0x10]
        call    FUN_004128e0
        mov    eax, dword ptr [esp + 0x10]
        mov    esi, 0x77b548
L_5488:
        mov    dl, byte ptr [eax]
        mov    bl, byte ptr [esi]
        mov    cl, dl
        cmp    dl, bl
        jne    L_54b0
        test    cl, cl
        je    L_54ac
        mov    dl, byte ptr [eax + 1]
        mov    bl, byte ptr [esi + 1]
        mov    cl, dl
        cmp    dl, bl
        jne    L_54b0
        add    eax, 2
        add    esi, 2
        test    cl, cl
        jne    L_5488
L_54ac:
        xor    eax, eax
        jmp    L_54b5
L_54b0:
        sbb    eax, eax
        sbb    eax, -1
L_54b5:
        mov    ecx, dword ptr [g_007dd268]
        cmp    eax, ebp
        sete    al
        mov    byte ptr [g_007f20cc], al
        mov    dword ptr [ecx + 0x24], 2
        mov    eax, dword ptr [esp + 0x10]
        cmp    eax, ebp
        je    L_562f
        mov    dl, byte ptr [eax - 1]
        dec    eax
        dec    dl
        mov    byte ptr [eax], dl
        jne    L_562f
        push    eax
        call    FUN_004084e0
        add    esp, 4
        jmp    L_5629
        mov    dword ptr [ecx + 0x20], 0xffffffff
        push    ebp
        jmp    L_5507
        mov    dword ptr [ecx + 0x20], 0xffffffff
        push    1
L_5507:
        mov    ecx, esi
        call    FUN_00534c40
        mov    ecx, dword ptr [g_007dd268]
        mov    dword ptr [ecx + 0x24], ebp
        mov    dword ptr [ecx + 0x20], 0xffffffff
        call    FUN_00538000
        pop    edi
        pop    ebp
        pop    ebx
        pop    esi
        pop    ecx
        ret    
        call    FUN_0050f530
        mov    ecx, dword ptr [g_007dd268]
        call    FUN_00511880
        mov    ecx, dword ptr [g_007dd268]
        mov    dword ptr [ecx + 0x24], 0xffffffff
        mov    dword ptr [ecx + 0x20], 0xffffffff
        call    FUN_00538000
        pop    edi
        pop    ebp
        pop    ebx
        pop    esi
        pop    ecx
        ret    
        call    FUN_00405f20
        push    ebp
        push    ebp
        push    ebp
        call    FUN_00701f20
        test    eax, eax
        setne    al
        test    al, al
        mov    byte ptr [esi + 0x17], al
        je    L_5605
        push    ebp
        push    ebp
        push    1
        call    FUN_00701f20
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        test    eax, eax
        mov    eax, dword ptr [g_007dab40]
        setne    bl
        xor    edx, eax
        mov    eax, dword ptr [edx + 0x14]
        xor    eax, 0x85739531
        mov    byte ptr [esi + 0x16], bl
        jne    L_55c5
        push    0x1c18
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebp
        je    L_55b9
        mov    ecx, eax
        call    FUN_004cc3c0
        jmp    L_55bb
L_55b9:
        xor    eax, eax
L_55bb:
        push    edi
        push    eax
        call    FUN_004c8eb0
        add    esp, 8
L_55c5:
        test    bl, bl
        je    L_55e4
        mov    ecx, esi
        call    FUN_00536890
        mov    ecx, esi
        call    FUN_0053fa70
        mov    ecx, dword ptr [g_007dd268]
        call    FUN_005116e0
        jmp    L_5629
L_55e4:
        mov    ecx, dword ptr [esi + 0x50]
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [esi + 0x54]
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [g_007dd268]
        call    FUN_00511760
        jmp    L_5629
L_5605:
        call    FUN_00405ee0
        mov    ecx, dword ptr [esi + 0x50]
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [esi + 0x54]
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax + 4]
L_561e:
        mov    ecx, dword ptr [g_007dd268]
        call    FUN_00511640
L_5629:
        mov    ecx, dword ptr [g_007dd268]
L_562f:
        mov    dword ptr [ecx + 0x20], 0xffffffff
L_5636:
        call    FUN_00538000
        pop    edi
        pop    ebp
        pop    ebx
        pop    esi
        pop    ecx
        ret    
        mov    ecx, esi
        call    FUN_00532ab0
        jmp    L_5629
        mov    al, byte ptr [esi + 0x16]
        test    al, al
        je    L_568a
        mov    al, byte ptr [esi + 0x17]
        test    al, al
        je    L_568a
        call    FUN_00565e00
        call    FUN_00566380
        call    FUN_005647e0
        push    0x77b534
        push    0x77b29c
        push    0x77b294
        call    FUN_00563550
        push    eax
        call    FUN_005648d0
        mov    ecx, dword ptr [g_007dd268]
        add    esp, 0x10
L_568a:
        cmp    dword ptr [ecx + 0x1c], edi
        jne    L_569a
        call    FUN_00511d10
        mov    ecx, dword ptr [g_007dd268]
L_569a:
        mov    dword ptr [ecx + 0x1c], 0xffffffff
        call    FUN_00511a80
        mov    ecx, dword ptr [g_007dd268]
        call    FUN_00511920
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx]
        call    dword ptr [eax + 0x24]
        mov    ecx, dword ptr [esi + 0x50]
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [esi + 0x54]
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [g_007dab44]
        mov    edx, dword ptr [ecx]
        xor    edx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [edx + 0xc]
        xor    ecx, 0x85739531
        mov    eax, dword ptr [ecx]
        push    ebp
        call    dword ptr [eax + 0x2c]
        mov    ecx, dword ptr [g_007dd268]
        mov    dword ptr [ecx + 0x24], ebx
        mov    dword ptr [ecx + 0x20], 0xffffffff
        call    FUN_00538000
        pop    edi
        pop    ebp
        pop    ebx
        pop    esi
        pop    ecx
        ret    
        mov    edx, dword ptr [g_007dab44]
        mov    eax, dword ptr [edx]
        xor    eax, dword ptr [g_007dab40]
        mov    edx, dword ptr [eax + 0xc]
        add    eax, 0xc
        xor    edx, 0x85739531
        mov    edx, dword ptr [edx + 0x4c]
        cmp    dword ptr [edx + 0x14], edi
        je    L_562f
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    edx, dword ptr [eax + 0x4c]
        cmp    dword ptr [edx + 0x14], 4
        je    L_562f
        call    FUN_00511920
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [esi + 0x50]
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [esi + 0x54]
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx + 4]
        mov    ecx, dword ptr [g_007dd268]
        call    FUN_00511880
        jmp    L_5629
        call    FUN_00511a80
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        push    ebp
        call    dword ptr [edx + 0x2c]
        mov    ecx, dword ptr [g_007dd268]
        mov    dword ptr [ecx + 0x24], 0xffffffff
        mov    dword ptr [ecx + 0x20], 0xffffffff
        call    FUN_00538000
        pop    edi
        pop    ebp
        pop    ebx
        pop    esi
        pop    ecx
        ret    
        call    FUN_00511a80
        mov    eax, dword ptr [g_007dab44]
        mov    eax, dword ptr [eax]
        xor    eax, dword ptr [g_007dab40]
        mov    ecx, dword ptr [eax + 0xc]
        xor    ecx, 0x85739531
        mov    dl, byte ptr [ecx + 0x17]
        test    dl, dl
        mov    dword ptr [g_00858a38], 0x538000
        jne    L_5810
        mov    edx, dword ptr [eax + 0xc]
        xor    edx, 0x85739531
        mov    byte ptr [edx + 0x14], 0
L_5810:
        mov    ecx, dword ptr [eax + 0x2c]
        xor    ecx, 0x85739531
        je    L_582b
        mov    edx, dword ptr [eax + 0x2c]
        xor    edx, 0x85739531
        mov    byte ptr [edx + 0x8fc], 0
L_582b:
        mov    eax, dword ptr [g_007dc6b4]
        cmp    eax, ebp
        je    L_5629
        mov    byte ptr [eax + 0x2d], 0
        jmp    L_5629
        mov    eax, dword ptr [g_007dab44]
        mov    edx, dword ptr [eax]
        xor    edx, dword ptr [g_007dab40]
        lea    eax, [edx + 0xc]
        mov    edx, dword ptr [eax]
        xor    edx, 0x85739531
        mov    edx, dword ptr [edx + 0x4c]
        cmp    dword ptr [edx + 0x14], edi
        je    L_562f
        mov    eax, dword ptr [eax]
        xor    eax, 0x85739531
        mov    edx, dword ptr [eax + 0x4c]
        cmp    dword ptr [edx + 0x14], 4
        je    L_562f
        call    FUN_00511920
        mov    eax, dword ptr [g_007dab44]
        mov    ecx, dword ptr [eax]
        xor    ecx, dword ptr [g_007dab40]
        mov    ecx, dword ptr [ecx + 0xc]
        xor    ecx, 0x85739531
        mov    edx, dword ptr [ecx]
        call    dword ptr [edx + 0x24]
        mov    ecx, dword ptr [esi + 0x50]
        mov    eax, dword ptr [ecx]
        push    1
        call    dword ptr [eax + 4]
        mov    ecx, dword ptr [esi + 0x54]
        mov    edx, dword ptr [ecx]
        push    1
        call    dword ptr [edx + 4]
        jmp    L_561e
        call    FUN_00511920
        mov    al, byte ptr [esi + 0x16]
        test    al, al
        mov    ecx, dword ptr [g_007dd268]
        je    L_58cb
        call    FUN_005116e0
        jmp    L_58d0
L_58cb:
        call    FUN_00511760
L_58d0:
        mov    al, byte ptr [esi + 0x308d]
        test    al, al
        je    L_5629
        mov    ecx, dword ptr [g_007db094]
        mov    edx, dword ptr [g_007dab44]
        xor    eax, eax
        mov    al, byte ptr [ecx + 0x28]
        mov    ecx, dword ptr [g_007dab40]
        push    1
        push    ebp
        push    0x2e
        push    eax
        mov    eax, dword ptr [edx]
        xor    eax, ecx
        mov    ecx, dword ptr [eax + 0x14]
        xor    ecx, 0x85739531
        call    FUN_004ce190
        mov    byte ptr [esi + 0x308d], 0
        call    FUN_006119c0
        jmp    L_5629
        mov    al, byte ptr [esi + 0x308c]
        test    al, al
        je    L_562f
        call    FUN_00511920
        mov    ecx, dword ptr [g_007dd268]
        call    FUN_00511850
        push    0x5c08
        call    FUN_004084d0
        add    esp, 4
        cmp    eax, ebp
        je    L_5958
        mov    ecx, eax
        call    FUN_0061ae90
        mov    edi, eax
        jmp    L_595a
L_5958:
        xor    edi, edi
L_595a:
        mov    ecx, edi
        mov    dword ptr [esi + 0x3080], edi
        call    FUN_0061b820
        mov    al, byte ptr [esi + 0x16]
        test    al, al
        mov    byte ptr [esi + 0x308d], 1
        je    L_598b
        push    0x77b2ac
        mov    ecx, edi
        call    FUN_0061b890
        call    FUN_00611820
        jmp    L_5629
L_598b:
        mov    edx, dword ptr [g_007db094]
        mov    eax, dword ptr [g_007dab44]
        xor    ecx, ecx
        mov    cl, byte ptr [edx + 0x28]
        mov    edx, dword ptr [g_007dab40]
        push    1
        push    ebp
        push    0x2d
        push    ecx
        mov    ecx, dword ptr [eax]
        xor    ecx, edx
        mov    ecx, dword ptr [ecx + 0x14]
        xor    ecx, 0x85739531
        call    FUN_004ce190
        call    FUN_00611820
        jmp    L_5629
        push    ebp
        push    ebp
        push    ebp
        push    ebp
        xor    edx, edx
        mov    dl, byte ptr [g_00858957]
        xor    eax, eax
        mov    al, byte ptr [g_00858956]
        push    ebp
        xor    ecx, ecx
        mov    cl, byte ptr [g_00858955]
        push    edx
        mov    edx, dword ptr [g_0085894c]
        push    eax
        mov    eax, dword ptr [g_00858948]
        push    ecx
        push    edx
        push    eax
        push    0x258
        push    0x320
        call    FUN_00709f20
        mov    ecx, dword ptr [g_007dd268]
        call    FUN_00511ae0
        mov    ecx, dword ptr [g_007dd268]
        mov    dword ptr [ecx + 0x1c], 6
        mov    dword ptr [ecx + 0x20], 0xffffffff
        mov    dword ptr [ecx + 0x20], 0xffffffff
        call    FUN_00538000
        pop    edi
        pop    ebp
        pop    ebx
        pop    esi
        pop    ecx
        ret    
        push    ebp
        push    ebp
        push    ebp
        xor    ecx, ecx
        mov    cl, byte ptr [g_00858957]
        push    ebp
        xor    edx, edx
        mov    dl, byte ptr [g_00858956]
        push    ebp
        xor    eax, eax
        mov    al, byte ptr [g_00858955]
        push    ecx
        mov    ecx, dword ptr [g_0085894c]
        push    edx
        mov    edx, dword ptr [g_00858948]
        push    eax
        mov    eax, dword ptr [g_007b4320]
        push    ecx
        mov    ecx, dword ptr [g_007b431c]
        push    edx
        push    eax
        push    ecx
        call    FUN_00709f20
        mov    ecx, dword ptr [g_007dd268]
        call    FUN_00511b30
        mov    ecx, dword ptr [g_007dd268]
        mov    dword ptr [ecx + 0x1c], 6
        mov    dword ptr [ecx + 0x20], 0xffffffff
        mov    dword ptr [ecx + 0x20], 0xffffffff
        call    FUN_00538000
        pop    edi
        pop    ebp
        pop    ebx
        pop    esi
        pop    ecx
        ret    
        nop    
        // jump-table data @ 0x00535AA0 (40 relocated pointers)
        __emit 0xF8
        __emit 0x53
        __emit 0x53
        __emit 0x00
        __emit 0x02
        __emit 0x54
        __emit 0x53
        __emit 0x00
        __emit 0x29
        __emit 0x55
        __emit 0x53
        __emit 0x00
        __emit 0x41
        __emit 0x56
        __emit 0x53
        __emit 0x00
        __emit 0x97
        __emit 0x57
        __emit 0x53
        __emit 0x00
        __emit 0x4A
        __emit 0x56
        __emit 0x53
        __emit 0x00
        __emit 0x2F
        __emit 0x56
        __emit 0x53
        __emit 0x00
        __emit 0xD7
        __emit 0x57
        __emit 0x53
        __emit 0x00
        __emit 0xF4
        __emit 0x54
        __emit 0x53
        __emit 0x00
        __emit 0x41
        __emit 0x58
        __emit 0x53
        __emit 0x00
        __emit 0xB2
        __emit 0x58
        __emit 0x53
        __emit 0x00
        __emit 0x58
        __emit 0x55
        __emit 0x53
        __emit 0x00
        __emit 0x1E
        __emit 0x59
        __emit 0x53
        __emit 0x00
        __emit 0x19
        __emit 0x57
        __emit 0x53
        __emit 0x00
        __emit 0xC3
        __emit 0x59
        __emit 0x53
        __emit 0x00
        __emit 0x2F
        __emit 0x5A
        __emit 0x53
        __emit 0x00
        __emit 0xFE
        __emit 0x54
        __emit 0x53
        __emit 0x00
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x51
        __emit 0x56
        __emit 0x57
        __emit 0x68
        __emit 0x70
        __emit 0xB5
        __emit 0x77
        __emit 0x00
        __emit 0x8D
        __emit 0x4C
        __emit 0x24
        __emit 0x0C
        __emit 0xC7
        __emit 0x44
        __emit 0x24
        __emit 0x0C
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0x00
        __emit 0xE8
        __emit 0x77
        __emit 0xCC
        __emit 0xED
        __emit 0xFF
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x08
        __emit 0x50
        __emit 0xE8
        __emit 0xCD
        __emit 0x61
        __emit 0x1C
        __emit 0x00
        __emit 0x8B
        __emit 0xF0
        __emit 0x8B
        __emit 0x44
        __emit 0x24
        __emit 0x08
        __emit 0x85
        __emit 0xC0
        __emit 0x8B
        __emit 0xFA
        __emit 0x74
        __emit 0x13
        __emit 0x8A
        __emit 0x48
        __emit 0xFF
        __emit 0x48
        __emit 0xFE
        __emit 0xC9
        __emit 0x88
        __emit 0x08
        __emit 0x75
        __emit 0x09
        __emit 0x50
        __emit 0xE8
        __emit 0xB1
        __emit 0x29
        __emit 0xED
        __emit 0xFF
        __emit 0x83
        __emit 0xC4
        __emit 0x04
        __emit 0x8B
        __emit 0xD7
        __emit 0x5F
        __emit 0x8B
        __emit 0xC6
        __emit 0x5E
        __emit 0x59
        __emit 0xC3
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
        __emit 0x90
    }
}
