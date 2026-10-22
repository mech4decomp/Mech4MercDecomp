/*
 * FUN_00714040 (extent 0x714040-0x7158f8) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern int    g_007b70b8;
extern int    g_007b70bc;
extern int    g_007b70c0;
extern int    g_007b73d4;
extern int    g_00858950;
extern char   g_00858955;
extern char   g_00858958;
extern char   g_00859afe;
extern int    g_00859d50;
extern int    g_00859d54;
extern int    g_00859d58;
extern int    g_00859d5c;
extern int    g_00859d6c;
extern int    g_00859d70;
extern int    g_00859d78;
extern int    g_0085a0c8;
extern int    g_0085a204;
extern int    g_0085a248;
extern int    g_0085a258;
extern int    g_0085a25c;
extern char   g_0085a26c;
extern char   g_0087bc35;
extern char   g_0087c0d1;
extern int    g_0087c0f4;
extern int    g_0087c0f8;
extern int    g_0087c0fc;
extern int    g_0087c100;
extern int    g_0087c104;
extern int    g_0087c108;
extern int    g_0087c10c;
extern int    g_0087c110;
extern int    g_0087c114;
extern int    g_0087c118;
extern int    g_0087c11c;
extern int    g_0087c120;
extern int    g_0087c124;
extern int    g_0087c128;
extern int    g_0087c12c;
extern int    g_0087c130;
extern int    g_0087c134;
extern int    g_0087c138;
extern int    g_0087c13c;
extern int    g_0087c140;
extern int    g_0087c144;
extern int    g_0087c148;
extern int    g_0087c15c;
extern int    g_0087c194;
extern int    g_0087c1d4;
extern int    g_0087c1d8;
extern int    g_0087c1dc;
extern int    g_0087c1e0;
extern int    g_0087c1ec;
extern int    g_0087c204;
extern int    g_0087c214;
extern int    g_0087c240;
extern int    g_0087c264;
extern int    g_0087c268;
extern int    g_0087c270;
extern int    g_0087c2a0;
extern int    g_0087c2b8;
extern int    g_0087c2bc;
extern int    g_0087c2cc;
extern int    g_008aae64;
extern int    g_008aae68;
extern int    g_008aae6c;
extern int    g_008aae70;
extern int    g_008aae74;
extern int    g_008aae78;
extern int    g_008aae7c;
extern int    g_008aae80;
extern int    g_008aaea8;
extern int    g_008aaeac;
extern char   g_008b2520;
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_00713de0(void);
extern void __cdecl FUN_00713e30(void);
extern void __cdecl FUN_0074a590(void);
extern void __cdecl FUN_0074a620(void);
extern void __cdecl FUN_0074a670(void);
extern void __cdecl FUN_007536a0(void);

__declspec(naked) void FUN_00714040(void)
{
    __asm {
        push    ebp
        mov    ebp, esp
        push    ecx
        mov    ecx, dword ptr [ebp + 8]
        push    ebx
        lea    eax, [ecx - 1]
        cmp    eax, 0x1f
        push    esi
        push    edi
        ja    L_58c5
        jmp    dword ptr [eax*4 + 0x7158f8]
        mov    ecx, dword ptr [ebp + 0xc]
        xor    edi, edi
        cmp    ecx, edi
        jne    L_40a6
        cmp    dword ptr [g_0087c11c], edi
        jne    L_4076
        cmp    dword ptr [g_0087c120], edi
        je    L_4083
L_4076:
        mov    eax, dword ptr [g_0085a248]
        push    edi
        push    edi
        push    eax
        call    FUN_0074a620
L_4083:
        mov    ecx, dword ptr [g_0087c148]
        push    ecx
        mov    dword ptr [g_0087c11c], edi
        mov    dword ptr [g_0087c120], edi
        mov    dword ptr [g_0087c1d4], edi
        call    FUN_00713e30
        jmp    L_58d8
L_40a6:
        call    FUN_007536a0
        mov    esi, eax
        cmp    dword ptr [g_0087c11c], edi
        jne    L_40bd
        cmp    dword ptr [g_0087c120], esi
        je    L_40cb
L_40bd:
        mov    edx, dword ptr [g_0085a248]
        push    esi
        push    edi
        push    edx
        call    FUN_0074a620
L_40cb:
        mov    ecx, dword ptr [g_0087c148]
        mov    eax, dword ptr [ebp + 0xc]
        push    ecx
        mov    dword ptr [g_0087c11c], edi
        mov    dword ptr [g_0087c120], esi
        mov    dword ptr [g_0087c1d4], eax
        call    FUN_00713e30
        cmp    dword ptr [g_0087c2a0], edi
        mov    ebx, 1
        je    L_41ad
        mov    eax, dword ptr [g_0087c1d4]
        cmp    eax, edi
        je    L_410e
        test    byte ptr [eax + 6], bl
        jne    L_41ad
L_410e:
        mov    eax, dword ptr [g_0087c1e0]
        cmp    eax, ebx
        jne    L_4151
        cmp    dword ptr [g_0087c214], edi
        mov    eax, dword ptr [g_007b70c0]
        je    L_41b2
        cmp    eax, 2
        je    L_58d8
        mov    edx, dword ptr [g_0085a248]
        push    2
        push    0x12
        push    edi
        push    edx
        mov    dword ptr [g_007b70c0], 2
        call    FUN_0074a670
        jmp    L_58d8
L_4151:
        cmp    eax, 2
        mov    eax, dword ptr [g_007b70c0]
        jne    L_4184
        cmp    eax, 2
        je    L_58d8
        mov    ecx, dword ptr [g_0085a248]
        push    2
        push    0x12
        push    edi
        push    ecx
        mov    dword ptr [g_007b70c0], 2
        call    FUN_0074a670
        jmp    L_58d8
L_4184:
        cmp    eax, 3
        je    L_58d8
        mov    edx, dword ptr [g_0085a248]
        push    3
        push    0x12
        push    edi
        push    edx
        mov    dword ptr [g_007b70c0], 3
        call    FUN_0074a670
        jmp    L_58d8
L_41ad:
        mov    eax, dword ptr [g_007b70c0]
L_41b2:
        cmp    eax, ebx
        je    L_58d8
        mov    eax, dword ptr [g_0085a248]
        push    ebx
        push    0x12
        push    edi
        push    eax
        mov    dword ptr [g_007b70c0], ebx
        call    FUN_0074a670
        jmp    L_58d8
        mov    eax, dword ptr [g_0087c240]
        test    eax, eax
        jne    L_58d8
        mov    eax, dword ptr [ebp + 0xc]
        mov    edi, 3
        cmp    eax, edi
        mov    ebx, 1
        mov    esi, 2
        jne    L_4205
        mov    eax, dword ptr [g_0085a25c]
        test    eax, eax
        jne    L_4215
        mov    dword ptr [ebp + 0xc], esi
        jmp    L_4209
L_4205:
        cmp    eax, esi
        jne    L_4215
L_4209:
        mov    eax, dword ptr [g_0085a258]
        test    eax, eax
        jne    L_4215
        mov    dword ptr [ebp + 0xc], ebx
L_4215:
        mov    eax, dword ptr [ebp + 0xc]
        dec    eax
        je    L_433a
        dec    eax
        je    L_42bd
        dec    eax
        jne    L_58d8
        cmp    dword ptr [g_0087c15c], ebx
        jne    L_4257
        mov    ecx, dword ptr [g_0085a248]
        push    esi
        push    0x11
        push    0
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    esi
        push    0x10
        push    0
        push    edx
        call    FUN_0074a670
L_4257:
        mov    eax, dword ptr [g_0087c2a0]
        test    eax, eax
        je    L_4295
        mov    eax, dword ptr [g_0087c1d4]
        test    eax, eax
        je    L_4295
        test    byte ptr [eax + 6], bl
        jne    L_4295
        cmp    dword ptr [g_007b70c0], edi
        je    L_58d8
        mov    eax, dword ptr [g_0085a248]
        push    edi
        push    0x12
        push    0
        push    eax
        mov    dword ptr [g_007b70c0], edi
        call    FUN_0074a670
        jmp    L_58d8
L_4295:
        cmp    dword ptr [g_007b70c0], ebx
        je    L_58d8
        mov    ecx, dword ptr [g_0085a248]
        push    ebx
        push    0x12
        push    0
        push    ecx
        mov    dword ptr [g_007b70c0], ebx
        call    FUN_0074a670
        jmp    L_58d8
L_42bd:
        cmp    dword ptr [g_0087c15c], ebx
        jne    L_42e6
        mov    edx, dword ptr [g_0085a248]
        push    esi
        push    0x11
        push    0
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    esi
        push    0x10
        push    0
        push    eax
        call    FUN_0074a670
L_42e6:
        mov    eax, dword ptr [g_0087c2a0]
        test    eax, eax
        je    L_4325
        mov    eax, dword ptr [g_0087c1d4]
        test    eax, eax
        je    L_4325
        test    byte ptr [eax + 6], bl
        jne    L_4325
        cmp    dword ptr [g_007b70c0], esi
        je    L_58d8
        mov    ecx, dword ptr [g_0085a248]
        push    esi
        push    0x12
        push    0
        push    ecx
        mov    dword ptr [g_007b70c0], esi
        call    FUN_0074a670
        jmp    L_58d8
L_4325:
        cmp    dword ptr [g_007b70c0], ebx
        je    L_58d8
        mov    dword ptr [g_007b70c0], ebx
        push    ebx
        jmp    L_4378
L_433a:
        mov    eax, dword ptr [g_0085a248]
        push    ebx
        push    0x11
        push    0
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    ebx
        push    0x10
        push    0
        push    ecx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0087c214]
        test    eax, eax
        mov    eax, dword ptr [g_007b70c0]
        je    L_438d
        cmp    eax, esi
        je    L_58d8
        mov    dword ptr [g_007b70c0], esi
        push    esi
L_4378:
        mov    edx, dword ptr [g_0085a248]
        push    0x12
        push    0
        push    edx
        call    FUN_0074a670
        jmp    L_58d8
L_438d:
        cmp    eax, ebx
        je    L_58d8
        mov    eax, dword ptr [g_0085a248]
        push    ebx
        push    0x12
        push    0
        push    eax
        mov    dword ptr [g_007b70c0], ebx
        call    FUN_0074a670
        jmp    L_58d8
        mov    eax, dword ptr [ebp + 0xc]
        cmp    eax, 1
        jne    L_43bf
        mov    esi, 4
        jmp    L_43d0
L_43bf:
        xor    ecx, ecx
        cmp    eax, 2
        setne    cl
        dec    ecx
        and    ecx, 0xfffffffa
        add    ecx, 8
        mov    esi, ecx
L_43d0:
        mov    al, byte ptr [g_00858955]
        test    al, al
        je    L_43de
        mov    esi, 8
L_43de:
        mov    eax, dword ptr [g_0087c104]
        test    eax, eax
        jne    L_43ef
        cmp    dword ptr [g_0087c108], esi
        je    L_43fe
L_43ef:
        mov    edx, dword ptr [g_0085a248]
        push    esi
        push    0x17
        push    edx
        call    FUN_0074a590
L_43fe:
        mov    dword ptr [g_0087c104], 0
        mov    dword ptr [g_0087c108], esi
        jmp    L_58d8
        mov    ecx, dword ptr [ebp + 0xc]
        xor    eax, eax
        test    ecx, ecx
        setne    al
        mov    esi, eax
        mov    al, byte ptr [g_00858955]
        test    al, al
        je    L_442a
        xor    esi, esi
L_442a:
        mov    eax, dword ptr [g_0087c124]
        test    eax, eax
        jne    L_443b
        cmp    dword ptr [g_0087c128], esi
        je    L_444a
L_443b:
        mov    ecx, dword ptr [g_0085a248]
        push    esi
        push    0xe
        push    ecx
        call    FUN_0074a590
L_444a:
        mov    dword ptr [g_0087c124], 0
        mov    dword ptr [g_0087c128], esi
        jmp    L_58d8
        mov    al, byte ptr [g_0087bc35]
        test    al, al
        mov    ebx, 1
        jne    L_448a
        mov    eax, dword ptr [g_008aaea8]
        xor    edi, edi
        cmp    eax, edi
        je    L_447d
        mov    dword ptr [ebp + 0xc], edi
        jmp    L_448c
L_447d:
        cmp    dword ptr [g_008aaeac], edi
        je    L_448c
        mov    dword ptr [ebp + 0xc], ebx
        jmp    L_448c
L_448a:
        xor    edi, edi
L_448c:
        cmp    dword ptr [g_00859d70], edi
        je    L_44d0
        mov    ecx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [g_0087c12c]
        xor    edx, edx
        cmp    ecx, edi
        setne    dl
        cmp    eax, edi
        mov    esi, edx
        jne    L_44b1
        cmp    dword ptr [g_0087c130], esi
        je    L_44bf
L_44b1:
        mov    eax, dword ptr [g_0085a248]
        push    esi
        push    0xf
        push    eax
        call    FUN_0074a590
L_44bf:
        mov    dword ptr [g_0087c12c], edi
        mov    dword ptr [g_0087c130], esi
        jmp    L_58d8
L_44d0:
        cmp    dword ptr [ebp + 0xc], edi
        je    L_4538
        cmp    dword ptr [g_0087c204], ebx
        jne    L_58d8
        cmp    dword ptr [g_0087c264], edi
        jne    L_58d8
        mov    ecx, dword ptr [g_0085a248]
        push    5
        push    0x13
        push    ecx
        mov    dword ptr [g_0087c264], ebx
        call    FUN_0074a590
        mov    edx, dword ptr [g_0085a248]
        push    6
        push    0x14
        push    edx
        call    FUN_0074a590
        cmp    dword ptr [g_0087c268], edi
        jne    L_58d8
        mov    eax, dword ptr [g_0085a248]
        push    ebx
        push    0x1b
        push    eax
        mov    dword ptr [g_0087c268], ebx
        call    FUN_0074a590
        jmp    L_58d8
L_4538:
        cmp    dword ptr [g_0087c264], edi
        je    L_58d8
        cmp    dword ptr [g_0087c204], ebx
        jne    L_58d8
        cmp    dword ptr [g_0087c268], edi
        mov    dword ptr [g_0087c264], edi
        je    L_58d8
        mov    ecx, dword ptr [g_0085a248]
        push    edi
        push    0x1b
        push    ecx
        mov    dword ptr [g_0087c268], edi
        call    FUN_0074a590
        jmp    L_58d8
        mov    al, byte ptr [g_0087bc35]
        test    al, al
        jne    L_45a7
        mov    eax, dword ptr [g_008aae74]
        test    eax, eax
        je    L_4597
        mov    dword ptr [ebp + 0xc], 1
        jmp    L_45a7
L_4597:
        mov    eax, dword ptr [g_008aae78]
        test    eax, eax
        je    L_45a7
        mov    dword ptr [ebp + 0xc], 0
L_45a7:
        mov    ecx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [g_008b2520]
        xor    edx, edx
        test    ecx, ecx
        setne    dl
        test    ah, 0x80
        mov    esi, edx
        jne    L_45dc
        mov    eax, dword ptr [g_0087c134]
        test    eax, eax
        jne    L_45ce
        cmp    dword ptr [g_0087c138], esi
        je    L_45dc
L_45ce:
        mov    eax, dword ptr [g_0085a248]
        push    esi
        push    4
        push    eax
        call    FUN_0074a590
L_45dc:
        mov    dword ptr [g_0087c134], 0
        mov    dword ptr [g_0087c138], esi
        jmp    L_58d8
        mov    al, byte ptr [g_0087bc35]
        test    al, al
        jne    L_461c
        mov    eax, dword ptr [g_008aae7c]
        test    eax, eax
        je    L_460c
        mov    dword ptr [ebp + 0xc], 1
        jmp    L_461c
L_460c:
        mov    eax, dword ptr [g_008aae80]
        test    eax, eax
        je    L_461c
        mov    dword ptr [ebp + 0xc], 0
L_461c:
        mov    eax, dword ptr [g_0087c2bc]
        test    eax, eax
        je    L_58d8
        mov    esi, dword ptr [ebp + 0xc]
        mov    edx, dword ptr [g_0085a248]
        xor    ecx, ecx
        test    esi, esi
        setne    cl
        push    ecx
        push    0x1d
        push    edx
        call    FUN_0074a590
        jmp    L_58d8
        mov    eax, dword ptr [g_0087c2b8]
        test    eax, eax
        je    L_58d8
        mov    esi, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [g_0085a248]
        xor    eax, eax
        test    esi, esi
        setne    al
        push    eax
        push    0x1a
        push    ecx
        call    FUN_0074a590
        jmp    L_58d8
        mov    edx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [g_0085a248]
        neg    edx
        sbb    edx, edx
        add    edx, 3
        push    edx
        push    8
        push    eax
        call    FUN_0074a590
        jmp    L_58d8
        mov    eax, dword ptr [g_00859d6c]
        xor    esi, esi
        cmp    eax, esi
        mov    ebx, 1
        jne    L_46ab
        cmp    dword ptr [ebp + 0xc], ebx
        je    L_46ab
        mov    dword ptr [ebp + 0xc], 3
L_46ab:
        mov    ecx, dword ptr [ebp + 0xc]
        lea    eax, [ecx - 1]
        cmp    eax, 4
        ja    L_4834
        jmp    dword ptr [eax*4 + 0x715978]
        cmp    dword ptr [g_00859d70], esi
        jne    L_4728
        cmp    dword ptr [g_0087c1ec], esi
        je    L_4728
        cmp    dword ptr [g_0087c264], esi
        jne    L_58d8
        mov    edx, dword ptr [g_0085a248]
        push    5
        push    0x13
        push    edx
        mov    dword ptr [g_0087c264], ebx
        call    FUN_0074a590
        mov    eax, dword ptr [g_0085a248]
        push    6
        push    0x14
        push    eax
        call    FUN_0074a590
        cmp    dword ptr [g_0087c268], esi
        jne    L_58d8
        mov    ecx, dword ptr [g_0085a248]
        push    ebx
        push    0x1b
        push    ecx
        mov    dword ptr [g_0087c268], ebx
        call    FUN_0074a590
        jmp    L_58d8
L_4728:
        test    byte ptr [g_008b2520], 0x80
        mov    dword ptr [g_0087c264], esi
        je    L_477b
        mov    edx, dword ptr [g_0085a248]
        push    2
        push    0x13
        push    edx
        call    FUN_0074a590
        mov    eax, dword ptr [g_0085a248]
        push    ebx
        push    0x14
        push    eax
        call    FUN_0074a590
        cmp    dword ptr [g_0087c268], esi
        jne    L_58d8
        mov    ecx, dword ptr [g_0085a248]
        push    ebx
        push    0x1b
        push    ecx
        mov    dword ptr [g_0087c268], ebx
        call    FUN_0074a590
        jmp    L_58d8
L_477b:
        cmp    dword ptr [g_0087c268], esi
        je    L_58d8
        mov    edx, dword ptr [g_0085a248]
        push    esi
        push    0x1b
        push    edx
        mov    dword ptr [g_0087c268], esi
        call    FUN_0074a590
        jmp    L_58d8
        mov    eax, dword ptr [g_0085a248]
        push    2
        push    0x13
        push    eax
        mov    dword ptr [g_0087c264], esi
        call    FUN_0074a590
        push    2
        jmp    L_4800
        mov    eax, dword ptr [g_0085a248]
        push    5
        push    0x13
        push    eax
        mov    dword ptr [g_0087c264], esi
        call    FUN_0074a590
        push    2
        jmp    L_4800
        mov    dword ptr [g_0087c264], esi
        push    2
        jmp    L_47f1
        cmp    dword ptr [g_0087c264], esi
        jne    L_58d8
        mov    dword ptr [g_0087c264], ebx
        push    5
L_47f1:
        mov    eax, dword ptr [g_0085a248]
        push    0x13
        push    eax
        call    FUN_0074a590
        push    6
L_4800:
        mov    ecx, dword ptr [g_0085a248]
        push    0x14
        push    ecx
        call    FUN_0074a590
        cmp    dword ptr [g_0087c268], esi
        jne    L_58d8
        mov    edx, dword ptr [g_0085a248]
        push    ebx
        push    0x1b
        push    edx
        mov    dword ptr [g_0087c268], ebx
        call    FUN_0074a590
        jmp    L_58d8
L_4834:
        push    0x7a2398
        call    FUN_006fab90
        add    esp, 4
        test    eax, eax
        je    L_58d8
        int 3    
        jmp    L_58d8
        mov    esi, dword ptr [ebp + 0xc]
        cmp    esi, 2
        jne    L_4866
        mov    ecx, dword ptr [g_0087c2cc]
        xor    eax, eax
        test    ecx, ecx
        sete    al
        mov    esi, eax
L_4866:
        mov    eax, dword ptr [g_0087c0f4]
        test    eax, eax
        jne    L_4877
        cmp    dword ptr [g_0087c0f8], esi
        je    L_4889
L_4877:
        mov    ecx, dword ptr [g_0085a248]
        push    esi
        push    0x88
        push    ecx
        call    FUN_0074a590
L_4889:
        mov    dword ptr [g_0087c0f4], 0
        mov    dword ptr [g_0087c0f8], esi
        jmp    L_58d8
        mov    edx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [g_0085a248]
        dec    edx
        neg    edx
        sbb    edx, edx
        and    edx, 2
        inc    edx
        push    edx
        push    0xc
        push    0
        push    eax
        call    FUN_0074a670
        jmp    L_58d8
        mov    ecx, dword ptr [ebp + 0xc]
        mov    edx, dword ptr [g_0085a248]
        push    ecx
        push    0x16
        push    edx
        call    FUN_0074a590
        jmp    L_58d8
        mov    cl, byte ptr [g_0087bc35]
        test    cl, cl
        mov    eax, 2
        jne    L_4905
        mov    ecx, dword ptr [g_008aae68]
        test    ecx, ecx
        je    L_48f8
        mov    dword ptr [ebp + 0xc], 1
        jmp    L_4905
L_48f8:
        mov    ecx, dword ptr [g_008aae70]
        test    ecx, ecx
        je    L_4905
        mov    dword ptr [ebp + 0xc], eax
L_4905:
        mov    esi, dword ptr [ebp + 0xc]
        xor    ecx, ecx
        cmp    esi, eax
        mov    eax, dword ptr [g_0087c13c]
        sete    cl
        inc    ecx
        test    eax, eax
        mov    esi, ecx
        jne    L_4923
        cmp    dword ptr [g_0087c140], esi
        je    L_4932
L_4923:
        mov    edx, dword ptr [g_0085a248]
        push    esi
        push    9
        push    edx
        call    FUN_0074a590
L_4932:
        mov    dword ptr [g_0087c13c], 0
        mov    dword ptr [g_0087c140], esi
        jmp    L_58d8
        mov    eax, dword ptr [g_0087c240]
        test    eax, eax
        jne    L_58d8
        mov    al, byte ptr [g_0087bc35]
        test    al, al
        jne    L_496b
        mov    eax, dword ptr [g_008aae6c]
        test    eax, eax
        je    L_496b
        mov    dword ptr [ebp + 0xc], eax
        jmp    L_496e
L_496b:
        mov    eax, dword ptr [ebp + 0xc]
L_496e:
        cmp    eax, 3
        jne    L_497a
        mov    esi, 4
        jmp    L_4985
L_497a:
        xor    ecx, ecx
        cmp    eax, 2
        sete    cl
        inc    ecx
        mov    esi, ecx
L_4985:
        mov    eax, dword ptr [g_0087c144]
        test    eax, eax
        jne    L_4996
        cmp    dword ptr [g_0087c148], esi
        je    L_499c
L_4996:
        push    esi
        call    FUN_00713e30
L_499c:
        mov    dword ptr [g_0087c144], 0
        mov    dword ptr [g_0087c148], esi
        jmp    L_58d8
        mov    ecx, dword ptr [ebp + 0xc]
        test    ecx, ecx
        mov    eax, dword ptr [g_00858950]
        mov    ebx, 1
        je    L_49cf
        cmp    eax, 3
        jne    L_49cb
        mov    esi, ecx
        jmp    L_49d1
L_49cb:
        mov    esi, ebx
        jmp    L_49d1
L_49cf:
        xor    esi, esi
L_49d1:
        mov    dl, byte ptr [g_0087bc35]
        test    dl, dl
        jne    L_49ea
        mov    edx, dword ptr [g_008aae64]
        test    edx, edx
        je    L_49ea
        or    ecx, ebx
        mov    dword ptr [ebp + 0xc], ecx
L_49ea:
        cmp    eax, 3
        jne    L_4a18
        mov    al, byte ptr [g_00859afe]
        test    al, al
        jne    L_4a18
        mov    eax, dword ptr [g_0087c0fc]
        test    eax, eax
        jne    L_4a09
        cmp    dword ptr [g_0087c100], esi
        je    L_4a18
L_4a09:
        mov    edx, dword ptr [g_0085a248]
        push    esi
        push    0xb
        push    edx
        call    FUN_0074a590
L_4a18:
        mov    dword ptr [g_0087c0fc], 0
        mov    dword ptr [g_0087c100], esi
        jmp    L_58d8
        mov    al, byte ptr [g_0087bc35]
        test    al, al
        jne    L_4a42
        mov    eax, dword ptr [g_007b73d4]
        test    eax, eax
        jl    L_4a42
        mov    dword ptr [ebp + 0xc], eax
L_4a42:
        mov    eax, dword ptr [g_0087c2a0]
        test    eax, eax
        jne    L_4a52
        mov    dword ptr [ebp + 0xc], 0
L_4a52:
        mov    eax, dword ptr [ebp + 0xc]
        cmp    dword ptr [g_0087c270], eax
        je    L_58d8
        fild    dword ptr [ebp + 0xc]
        mov    ecx, eax
        mov    eax, dword ptr [g_0085a248]
        mov    dword ptr [g_0087c270], ecx
        fstp    dword ptr [ebp - 4]
        mov    edx, dword ptr [ebp - 4]
        push    edx
        push    0x13
        push    0
        push    eax
        call    FUN_0074a670
        mov    byte ptr [g_0087c0d1], 1
        jmp    L_58d8
        mov    ecx, dword ptr [ebp + 0xc]
        test    ecx, ecx
        je    L_4b26
        mov    eax, dword ptr [g_00859d78]
        test    eax, eax
        je    L_4b26
        mov    eax, dword ptr [g_0085a0c8]
        and    eax, ecx
        mov    cl, byte ptr [g_0085a26c]
        test    cl, cl
        mov    dword ptr [ebp - 4], eax
        je    L_4af6
        xor    ecx, ecx
        mov    cl, byte ptr [ebp - 2]
        xor    edx, edx
        xor    ebx, ebx
        mov    dl, byte ptr [ecx + 0x859c2c]
        mov    ecx, edx
        xor    edx, edx
        mov    dl, ah
        shl    ecx, 8
        mov    bl, byte ptr [edx + 0x859c2c]
        mov    edx, eax
        and    edx, 0xff
        and    eax, 0xff000000
        add    ecx, ebx
        xor    ebx, ebx
        mov    bl, byte ptr [edx + 0x859c2c]
        shl    ecx, 8
        add    ecx, ebx
        add    eax, ecx
L_4af6:
        push    eax
        mov    eax, dword ptr [g_0085a248]
        push    0x22
        push    eax
        call    FUN_0074a590
        mov    eax, dword ptr [g_0087c194]
        test    eax, eax
        jne    L_58d8
        mov    ecx, dword ptr [g_0085a248]
        push    1
        push    0x1c
        push    ecx
        call    FUN_0074a590
        jmp    L_58d8
L_4b26:
        mov    edx, dword ptr [g_0085a248]
        push    0
        push    0x1c
        push    edx
        call    FUN_0074a590
        jmp    L_58d8
        mov    al, byte ptr [g_00858958]
        test    al, al
        je    L_58d8
        mov    eax, dword ptr [g_0085a204]
        test    eax, eax
        jne    L_58d8
        mov    esi, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [g_0085a248]
        xor    eax, eax
        test    esi, esi
        setne    al
        push    eax
        push    0x34
        push    ecx
        call    FUN_0074a590
        jmp    L_58d8
        mov    al, byte ptr [g_00858958]
        test    al, al
        je    L_58d8
        mov    eax, dword ptr [g_0085a204]
        test    eax, eax
        jne    L_58d8
        mov    edx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [g_0085a248]
        push    edx
        push    0x38
        push    eax
        call    FUN_0074a590
        jmp    L_58d8
        mov    al, byte ptr [g_00858958]
        test    al, al
        je    L_58d8
        mov    eax, dword ptr [g_0085a204]
        test    eax, eax
        jne    L_58d8
        mov    ecx, dword ptr [ebp + 0xc]
        mov    edx, dword ptr [g_0085a248]
        push    ecx
        push    0x39
        push    edx
        call    FUN_0074a590
        jmp    L_58d8
        mov    al, byte ptr [g_00858958]
        test    al, al
        je    L_58d8
        mov    eax, dword ptr [g_0085a204]
        test    eax, eax
        jne    L_58d8
        mov    eax, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [g_0085a248]
        push    eax
        push    0x3a
        push    ecx
        call    FUN_0074a590
        jmp    L_58d8
        mov    al, byte ptr [g_00858958]
        test    al, al
        je    L_58d8
        mov    eax, dword ptr [g_0085a204]
        test    eax, eax
        jne    L_58d8
        mov    edx, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [g_0085a248]
        push    edx
        push    0x35
        push    eax
        call    FUN_0074a590
        jmp    L_58d8
        mov    al, byte ptr [g_00858958]
        test    al, al
        je    L_58d8
        mov    eax, dword ptr [g_0085a204]
        test    eax, eax
        jne    L_58d8
        mov    ecx, dword ptr [ebp + 0xc]
        mov    edx, dword ptr [g_0085a248]
        push    ecx
        push    0x36
        push    edx
        call    FUN_0074a590
        jmp    L_58d8
        mov    al, byte ptr [g_00858958]
        test    al, al
        je    L_58d8
        mov    eax, dword ptr [g_0085a204]
        test    eax, eax
        jne    L_58d8
        mov    eax, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [g_0085a248]
        push    eax
        push    0x37
        push    ecx
        call    FUN_0074a590
        jmp    L_58d8
        call    FUN_00713de0
        mov    eax, dword ptr [ebp + 0xc]
        cmp    eax, 5
        ja    L_58d8
        mov    edx, eax
        jmp    dword ptr [edx*4 + 0x71598c]
        mov    eax, dword ptr [g_0085a248]
        xor    esi, esi
        push    esi
        push    0xb
        push    esi
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        mov    ebx, 1
        push    ebx
        push    0xb
        push    ebx
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    3
        push    0xc
        push    ebx
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    ebx
        push    0xc
        push    2
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    4
        push    ebx
        push    esi
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    2
        push    2
        push    esi
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    esi
        push    3
        push    esi
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    4
        push    4
        push    esi
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    2
        push    5
        push    esi
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    esi
        push    6
        push    esi
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    ebx
        push    ebx
        push    ebx
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    ebx
        push    4
        push    ebx
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0087c1e0]
        cmp    eax, ebx
        jne    L_4db2
        mov    eax, dword ptr [g_0085a248]
        push    ebx
        push    0x11
        push    esi
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    ebx
        push    0x10
        push    esi
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_007b70c0]
        mov    eax, dword ptr [g_0085a248]
        push    edx
        push    0x12
        push    esi
        push    eax
        jmp    L_4e18
L_4db2:
        cmp    eax, 2
        push    2
        push    0x11
        push    esi
        jne    L_4deb
        mov    ecx, dword ptr [g_0085a248]
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    2
        push    0x10
        push    esi
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_007b70c0]
        mov    ecx, dword ptr [g_0085a248]
        push    eax
        push    0x12
        push    esi
        push    ecx
        jmp    L_4e18
L_4deb:
        mov    edx, dword ptr [g_0085a248]
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    2
        push    0x10
        push    esi
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_007b70c0]
        mov    edx, dword ptr [g_0085a248]
        push    ecx
        push    0x12
        push    esi
        push    edx
L_4e18:
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    esi
        push    ebx
        push    eax
        call    FUN_0074a620
        mov    ecx, dword ptr [g_0085a248]
        push    esi
        push    2
        push    ecx
        mov    dword ptr [g_0087c114], esi
        mov    dword ptr [g_0087c118], esi
        call    FUN_0074a620
        mov    edx, dword ptr [g_0087c148]
        push    edx
        mov    dword ptr [g_0087c10c], esi
        mov    dword ptr [g_0087c110], esi
        mov    dword ptr [g_0087c1d8], esi
        mov    dword ptr [g_0087c1dc], esi
        mov    dword ptr [g_007b70bc], esi
        mov    dword ptr [g_007b70b8], esi
        call    FUN_00713e30
        jmp    L_58d8
        mov    eax, dword ptr [g_0085a248]
        push    0
        push    0xb
        push    0
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        mov    ebx, 1
        push    ebx
        push    0xb
        push    ebx
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    3
        push    0xc
        push    ebx
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    ebx
        push    0xc
        push    2
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    2
        push    0x11
        push    0
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    2
        push    0x10
        push    0
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_00859d5c]
        test    eax, eax
        je    L_4efb
        mov    eax, dword ptr [g_0085a248]
        push    ebx
        push    0x12
        push    0
        push    eax
        jmp    L_4f08
L_4efb:
        mov    ecx, dword ptr [g_0085a248]
        push    3
        push    0x12
        push    0
        push    ecx
L_4f08:
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    2
        push    0x11
        push    ebx
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    2
        push    0x10
        push    ebx
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    ebx
        push    0x12
        push    ebx
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    4
        push    ebx
        push    0
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    2
        push    2
        push    0
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    0
        push    3
        push    0
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    2
        push    4
        push    0
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    2
        push    5
        push    0
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    0
        push    6
        push    0
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    5
        push    ebx
        push    ebx
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    2
        push    2
        push    ebx
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    ebx
        push    3
        push    ebx
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    2
        push    4
        push    ebx
        push    edx
        call    FUN_0074a670
        push    2
        push    5
        mov    eax, dword ptr [g_0085a248]
        push    ebx
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    ebx
        push    6
        push    ebx
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    ebx
        push    ebx
        push    2
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    ebx
        push    4
        push    2
        push    eax
        call    FUN_0074a670
        jmp    L_58d8
        mov    ecx, dword ptr [g_0085a248]
        push    0
        push    0xb
        push    0
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        mov    ebx, 1
        push    ebx
        push    0xb
        push    ebx
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    3
        push    0xc
        push    ebx
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    ebx
        push    0xc
        push    2
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    2
        push    0x11
        push    0
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    2
        push    0x10
        push    0
        push    eax
        call    FUN_0074a670
        mov    eax, dword ptr [g_00859d58]
        test    eax, eax
        je    L_50af
        mov    ecx, dword ptr [g_0085a248]
        push    ebx
        push    0x12
        push    0
        push    ecx
        jmp    L_50bc
L_50af:
        mov    edx, dword ptr [g_0085a248]
        push    3
        push    0x12
        push    0
        push    edx
L_50bc:
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    2
        push    0x11
        push    ebx
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    2
        push    0x10
        push    ebx
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    ebx
        push    0x12
        push    ebx
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    4
        push    ebx
        push    0
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    2
        push    2
        push    0
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    0
        push    3
        push    0
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    4
        push    4
        push    0
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    2
        push    5
        push    0
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    0
        push    6
        push    0
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    7
        push    ebx
        push    ebx
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    2
        push    2
        push    ebx
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    ebx
        push    3
        push    ebx
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    3
        push    4
        push    ebx
        push    eax
        call    FUN_0074a670
        push    2
        push    5
        mov    ecx, dword ptr [g_0085a248]
        push    ebx
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    ebx
        push    6
        push    ebx
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    ebx
        push    ebx
        push    2
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    ebx
        push    4
        push    2
        push    ecx
        call    FUN_0074a670
        jmp    L_58d8
        mov    edx, dword ptr [g_0085a248]
        push    0
        push    0xb
        push    0
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        mov    ebx, 1
        push    ebx
        push    0xb
        push    ebx
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    3
        push    0xc
        push    ebx
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    ebx
        push    0xc
        push    2
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    2
        push    0x11
        push    0
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    2
        push    0x10
        push    0
        push    ecx
        call    FUN_0074a670
        mov    eax, dword ptr [g_00859d54]
        test    eax, eax
        je    L_5263
        mov    edx, dword ptr [g_0085a248]
        push    ebx
        push    0x12
        push    0
        push    edx
        jmp    L_526f
L_5263:
        mov    eax, dword ptr [g_0085a248]
        push    3
        push    0x12
        push    0
        push    eax
L_526f:
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    2
        push    0x11
        push    ebx
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    2
        push    0x10
        push    ebx
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    ebx
        push    0x12
        push    ebx
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    4
        push    ebx
        push    0
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    2
        push    2
        push    0
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    0
        push    3
        push    0
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    4
        push    4
        push    0
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    2
        push    5
        push    0
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    0
        push    6
        push    0
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    7
        push    ebx
        push    ebx
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    2
        push    2
        push    ebx
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    ebx
        push    3
        push    ebx
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    3
        push    4
        push    ebx
        push    ecx
        call    FUN_0074a670
        push    2
        push    5
        mov    edx, dword ptr [g_0085a248]
        push    ebx
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    ebx
        push    6
        push    ebx
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    ebx
        push    ebx
        push    2
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    ebx
        push    4
        push    2
        push    edx
        call    FUN_0074a670
        jmp    L_58d8
        mov    eax, dword ptr [g_0085a248]
        mov    ebx, 1
        push    ebx
        push    0xc
        push    0
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    ebx
        push    0xc
        push    ebx
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    ebx
        push    0xc
        push    2
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    4
        push    ebx
        push    0
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    2
        push    2
        push    0
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    0
        push    3
        push    0
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    2
        push    4
        push    0
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    2
        push    5
        push    0
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    ebx
        push    ebx
        push    ebx
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    0
        push    0xb
        push    0
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    2
        push    ebx
        push    0
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    2
        push    2
        push    0
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    0
        push    3
        push    0
        push    eax
        call    FUN_0074a670
        push    ebx
        push    0xb
        mov    ecx, dword ptr [g_0085a248]
        push    ebx
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    2
        push    2
        push    ebx
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    ebx
        push    3
        push    ebx
        push    eax
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        mov    dword ptr [ebp - 4], 0x3f000000
        mov    ecx, dword ptr [ebp - 4]
        push    ecx
        push    7
        push    ebx
        push    edx
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        mov    dword ptr [ebp - 4], 0
        mov    eax, dword ptr [ebp - 4]
        push    eax
        push    8
        push    ebx
        push    ecx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        mov    dword ptr [ebp - 4], 0
        mov    edx, dword ptr [ebp - 4]
        push    edx
        push    9
        push    ebx
        push    eax
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        mov    dword ptr [ebp - 4], 0x3f000000
        mov    ecx, dword ptr [ebp - 4]
        push    ecx
        push    0xa
        push    ebx
        push    edx
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        mov    dword ptr [ebp - 4], 0x3f800000
        mov    eax, dword ptr [ebp - 4]
        push    eax
        push    0x16
        push    ebx
        push    ecx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        mov    dword ptr [ebp - 4], 0
        mov    edx, dword ptr [ebp - 4]
        push    edx
        push    0x17
        push    ebx
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    0x17
        push    ebx
        push    ebx
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    2
        push    0xb
        push    2
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    7
        push    ebx
        push    2
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    2
        push    2
        push    2
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    ebx
        push    3
        push    2
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    3
        push    4
        push    2
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    ebx
        push    6
        push    2
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    ebx
        push    ebx
        push    3
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    ebx
        push    4
        push    3
        push    eax
        call    FUN_0074a670
        jmp    L_58d8
        mov    ecx, dword ptr [g_0085a248]
        push    3
        push    0x10
        push    0
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    3
        push    0x11
        push    0
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    3
        push    0x12
        push    0
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        mov    ebx, 1
        push    ebx
        push    0xc
        push    0
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    ebx
        push    0xb
        push    0
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    2
        push    2
        push    0
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    0
        push    3
        push    0
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    0x18
        push    ebx
        push    0
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    2
        push    4
        push    0
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    2
        push    5
        push    0
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    ebx
        push    0xc
        push    ebx
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    0
        push    0xb
        push    ebx
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    3
        push    0x10
        push    ebx
        push    ecx
        call    FUN_0074a670
        push    3
        push    0x11
        mov    edx, dword ptr [g_0085a248]
        push    ebx
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    3
        push    0x12
        push    ebx
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    7
        push    ebx
        push    ebx
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    2
        push    3
        push    ebx
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    ebx
        push    2
        push    ebx
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    3
        push    4
        push    ebx
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    2
        push    6
        push    ebx
        push    edx
        call    FUN_0074a670
        mov    eax, dword ptr [g_0085a248]
        push    ebx
        push    ebx
        push    2
        push    eax
        call    FUN_0074a670
        mov    ecx, dword ptr [g_0085a248]
        push    ebx
        push    4
        push    2
        push    ecx
        call    FUN_0074a670
        mov    edx, dword ptr [g_0085a248]
        push    0xff80ff80
        push    0x3c
        push    edx
        call    FUN_0074a590
        jmp    L_58d8
        mov    ecx, dword ptr [ebp + 0xc]
        xor    ebx, ebx
        cmp    ecx, ebx
        jne    L_57a3
        cmp    dword ptr [g_0087c114], ebx
        jne    L_5784
        cmp    dword ptr [g_0087c118], ebx
        je    L_5792
L_5784:
        mov    eax, dword ptr [g_0085a248]
        push    ebx
        push    1
        push    eax
        call    FUN_0074a620
L_5792:
        mov    dword ptr [g_0087c114], ebx
        mov    dword ptr [g_0087c118], ebx
        jmp    L_58d8
L_57a3:
        call    FUN_007536a0
        mov    esi, eax
        cmp    dword ptr [g_0087c114], ebx
        jne    L_57ba
        cmp    dword ptr [g_0087c118], esi
        je    L_57c9
L_57ba:
        mov    ecx, dword ptr [g_0085a248]
        push    esi
        push    1
        push    ecx
        call    FUN_0074a620
L_57c9:
        mov    dword ptr [g_0087c114], ebx
        mov    dword ptr [g_0087c118], esi
        jmp    L_58d8
        mov    ecx, dword ptr [ebp + 0xc]
        xor    ebx, ebx
        cmp    ecx, ebx
        jne    L_5813
        cmp    dword ptr [g_0087c10c], ebx
        jne    L_57f3
        cmp    dword ptr [g_0087c110], ebx
        je    L_5802
L_57f3:
        mov    edx, dword ptr [g_0085a248]
        push    ebx
        push    2
        push    edx
        call    FUN_0074a620
L_5802:
        mov    dword ptr [g_0087c10c], ebx
        mov    dword ptr [g_0087c110], ebx
        jmp    L_58d8
L_5813:
        call    FUN_007536a0
        mov    esi, eax
        cmp    dword ptr [g_0087c10c], ebx
        jne    L_582a
        cmp    dword ptr [g_0087c110], esi
        je    L_5838
L_582a:
        mov    eax, dword ptr [g_0085a248]
        push    esi
        push    2
        push    eax
        call    FUN_0074a620
L_5838:
        mov    dword ptr [g_0087c10c], ebx
        mov    dword ptr [g_0087c110], esi
        jmp    L_58d8
        mov    ecx, dword ptr [ebp + 0xc]
        mov    edx, dword ptr [g_0085a248]
        push    ecx
        push    0x8b
        push    edx
        call    FUN_0074a590
        jmp    L_58d8
        mov    esi, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [g_0085a248]
        xor    eax, eax
        test    esi, esi
        setne    al
        push    eax
        push    0x89
        push    ecx
        call    FUN_0074a590
        jmp    L_58d8
        mov    edi, dword ptr [ebp + 0xc]
        mov    eax, dword ptr [g_0085a248]
        xor    edx, edx
        test    edi, edi
        setne    dl
        push    edx
        push    0x8f
        push    eax
        call    FUN_0074a590
        jmp    L_58d8
        mov    edx, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [g_00859d50]
        xor    eax, eax
        test    edx, edx
        setne    al
        test    ecx, ecx
        jne    L_58b1
        xor    eax, eax
L_58b1:
        mov    ecx, dword ptr [g_0085a248]
        push    eax
        push    0x97
        push    ecx
        call    FUN_0074a590
        jmp    L_58d8
L_58c5:
        push    ecx
        push    0x7a2380
        call    FUN_006fab90
        add    esp, 8
        test    eax, eax
        je    L_58d8
        int 3    
L_58d8:
        mov    eax, dword ptr [ebp + 0xc]
        mov    ecx, dword ptr [ebp + 8]
        pop    edi
        pop    esi
        mov    dword ptr [ecx*4 + 0x87c1d0], eax
        mov    dword ptr [ecx*4 + 0x87c14c], eax
        pop    ebx
        mov    esp, ebp
        pop    ebp
        ret    8
        __emit 0x8D  // alignment pad 8D 49 00
__emit 0x49
__emit 0x00
        // jump-table data @ 0x007158F8 (16 relocated pointers)
        __emit 0x5D
        __emit 0x40
        __emit 0x71
        __emit 0x00
        __emit 0x6B
        __emit 0x57
        __emit 0x71
        __emit 0x00
        __emit 0xDA
        __emit 0x57
        __emit 0x71
        __emit 0x00
        __emit 0xD4
        __emit 0x41
        __emit 0x71
        __emit 0x00
        __emit 0xB0
        __emit 0x43
        __emit 0x71
        __emit 0x00
        __emit 0x13
        __emit 0x44
        __emit 0x71
        __emit 0x00
        __emit 0x5F
        __emit 0x44
        __emit 0x71
        __emit 0x00
        __emit 0x7C
        __emit 0x45
        __emit 0x71
        __emit 0x00
        __emit 0xF1
        __emit 0x45
        __emit 0x71
        __emit 0x00
        __emit 0x47
        __emit 0x46
        __emit 0x71
        __emit 0x00
        __emit 0x4F
        __emit 0x48
        __emit 0x71
        __emit 0x00
        __emit 0x72
        __emit 0x46
        __emit 0x71
        __emit 0x00
        __emit 0x8F
        __emit 0x46
        __emit 0x71
        __emit 0x00
        __emit 0x9E
        __emit 0x48
        __emit 0x71
        __emit 0x00
        __emit 0xD6
        __emit 0x48
        __emit 0x71
        __emit 0x00
        __emit 0x47
        __emit 0x49
        __emit 0x71
        __emit 0x00
        // jump-table data @ 0x00715978 (5 relocated pointers)
        __emit 0x2D
        __emit 0x4A
        __emit 0x71
        __emit 0x00
        __emit 0x8E
        __emit 0x4A
        __emit 0x71
        __emit 0x00
        __emit 0xB1
        __emit 0x49
        __emit 0x71
        __emit 0x00
        __emit 0xBF
        __emit 0x48
        __emit 0x71
        __emit 0x00
        __emit 0x3B
        __emit 0x4B
        __emit 0x71
        __emit 0x00
        // jump-table data @ 0x0071598C (0 relocated pointers)
    }
}
