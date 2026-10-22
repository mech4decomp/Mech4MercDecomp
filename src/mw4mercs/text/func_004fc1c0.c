/*
 * FUN_004fc1c0 (1018 B) — __thiscall, RET 0x4: MLR/Adept application-core
 * loader. Reads a stream, builds per-type record arrays (0x1c-byte records),
 * and fills two 0x100-entry tables (type 3 and type 0xb) from the stream.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8810;
extern void *g_0076b318;
extern void *g_0076b420;
extern void __cdecl FUN_004084c0(void);
extern void __cdecl FUN_004fd380(void);
extern void __cdecl FUN_0040c0e0(void);
extern void *__cdecl FUN_004084d0(int);
extern void __cdecl FUN_004fd3a0(void);
extern void __cdecl FUN_00417a40(void);
extern void __cdecl FUN_00406c90(void);
extern void __cdecl FUN_004fc170(void);
extern void __cdecl FUN_004084e0(void *);
extern void __cdecl FUN_00412780(void);
extern void __cdecl FUN_0041fcb0(void);

__declspec(naked) void FUN_004fc1c0(void)
{
    __asm {
        sub     esp, 0x120
        mov     eax, dword ptr [g_007b8810]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     ebx, ecx
        push    0xc
        mov     dword ptr [esp + 0x18], ebx
        call    FUN_004084c0
        add     esp, 0x8
        test    eax, eax
        jz      L_fc1fe
        mov     ecx, dword ptr [esp + 0x134]
        add     ecx, 0x44
        push    ecx
        mov     ecx, eax
        call    FUN_004fd380
        mov     ebp, eax
        mov     dword ptr [esp + 0x20], ebp
        jmp     L_fc20a
    L_fc1fe:
        mov     dword ptr [esp + 0x20], 0
        mov     ebp, dword ptr [esp + 0x20]
    L_fc20a:
        mov     ecx, ebp
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jz      L_fc3d0
    L_fc21b:
        mov     edi, dword ptr [esi + 0x14]
        push    edi
        mov     dword ptr [esp + 0x1c], edi
        call    dword ptr [g_0076b318]
        mov     ebx, eax
        add     esp, 0x4
        cmp     ebx, 0x3
        mov     dword ptr [esp + 0x2c], ebx
        jz      L_fc3b1
        cmp     ebx, 0xb
        jz      L_fc3b1
        push    0xc
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_fc263
        add     esi, 0x18
        push    esi
        mov     ecx, eax
        call    FUN_004fd3a0
        mov     dword ptr [esp + 0x14], eax
        jmp     L_fc26b
    L_fc263:
        mov     dword ptr [esp + 0x14], 0
    L_fc26b:
        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [edx + 0x4]
        call    FUN_00417a40
        mov     edi, dword ptr [esp + 0x10]
        lea     esi, [edi + ebx*8 + 0x14]
        mov     ebp, eax
        cmp     ebp, dword ptr [esi]
        mov     dword ptr [esp + 0x24], esi
        jz      L_fc358
        test    ebp, ebp
        jbe     L_fc340
        lea     eax, [ebp*8 + 0x0]
        sub     eax, ebp
        lea     ecx, [eax*4 + 0x4]
        push    ecx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_fc2cf
        push    0x4fc100
        push    ebp
        lea     esi, [eax + 0x4]
        push    0x1c
        push    esi
        mov     dword ptr [eax], ebp
        call    FUN_00406c90
        mov     dword ptr [esp + 0x1c], esi
        mov     esi, dword ptr [esp + 0x24]
        jmp     L_fc2d7
    L_fc2cf:
        mov     dword ptr [esp + 0x1c], 0
    L_fc2d7:
        mov     ecx, dword ptr [edi + ebx*8 + 0x10]
        test    ecx, ecx
        mov     dword ptr [esp + 0x28], ecx
        jz      L_fc336
        mov     eax, dword ptr [esi]
        cmp     ebp, eax
        jnc     L_fc2eb
        mov     eax, ebp
    L_fc2eb:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_fc32c
        mov     edx, dword ptr [esp + 0x1c]
        lea     esi, [eax*8 + 0x0]
        sub     esi, eax
        mov     ebx, ecx
        lea     esi, [edx + esi*4]
        sub     ebx, edx
        lea     edi, [eax + 0x1]
    L_fc309:
        lea     eax, [ebx + esi]
        push    eax
        mov     ecx, esi
        call    FUN_004fc170
        dec     edi
        sub     esi, 0x1c
        test    edi, edi
        ja      L_fc309
        mov     ecx, dword ptr [esp + 0x28]
        mov     ebx, dword ptr [esp + 0x2c]
        mov     edi, dword ptr [esp + 0x10]
        mov     esi, dword ptr [esp + 0x24]
    L_fc32c:
        test    ecx, ecx
        jz      L_fc336
        mov     edx, dword ptr [ecx]
        push    0x3
        call    dword ptr [edx]
    L_fc336:
        mov     eax, dword ptr [esp + 0x1c]
        mov     dword ptr [edi + ebx*8 + 0x10], eax
        jmp     L_fc356
    L_fc340:
        mov     ecx, dword ptr [edi + ebx*8 + 0x10]
        test    ecx, ecx
        jz      L_fc34e
        mov     edx, dword ptr [ecx]
        push    0x3
        call    dword ptr [edx]
    L_fc34e:
        mov     dword ptr [edi + ebx*8 + 0x10], 0
    L_fc356:
        mov     dword ptr [esi], ebp
    L_fc358:
        mov     ecx, dword ptr [esp + 0x14]
        call    FUN_0040c0e0
        test    eax, eax
        jz      L_fc39c
        mov     ecx, dword ptr [esp + 0x10]
        mov     esi, dword ptr [ecx + ebx*8 + 0x10]
        mov     edi, ebx
        shl     edi, 0x18
        add     esi, 0x14
    L_fc375:
        mov     edx, dword ptr [eax + 0x14]
        push    edx
        lea     ecx, [esi + -0x4]
        call    FUN_00412780
        mov     ecx, dword ptr [esi]
        call    FUN_0041fcb0
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr [esi + 0x4], edi
        inc     edi
        add     esi, 0x1c
        call    FUN_0040c0e0
        test    eax, eax
        jnz     L_fc375
    L_fc39c:
        mov     eax, dword ptr [esp + 0x14]
        push    eax
        call    FUN_004084e0
        mov     ebp, dword ptr [esp + 0x24]
        mov     edi, dword ptr [esp + 0x1c]
        add     esp, 0x4
    L_fc3b1:
        push    edi
        call    dword ptr [g_0076b318]
        add     esp, 0x4
        mov     ecx, ebp
        call    FUN_0040c0e0
        mov     esi, eax
        test    esi, esi
        jnz     L_fc21b
        mov     ebx, dword ptr [esp + 0x10]
    L_fc3d0:
        push    ebp
        call    FUN_004084e0
        mov     edi, dword ptr [ebx + 0x2c]
        add     esp, 0x4
        cmp     edi, 0xff
        jz      L_fc47e
        push    0x1be8
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_fc418
        push    0x4fc100
        push    0xff
        lea     esi, [eax + 0x4]
        push    0x1c
        push    esi
        mov     dword ptr [eax], 0xff
        call    FUN_00406c90
        mov     ebp, esi
        jmp     L_fc41a
    L_fc418:
        xor     ebp, ebp
    L_fc41a:
        mov     ecx, dword ptr [ebx + 0x28]
        test    ecx, ecx
        mov     dword ptr [esp + 0x18], ecx
        jz      L_fc474
        cmp     edi, 0xff
        mov     eax, 0xff
        ja      L_fc434
        mov     eax, edi
    L_fc434:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_fc46a
        lea     edx, [eax*8 + 0x0]
        sub     edx, eax
        mov     ebx, ecx
        lea     esi, [ebp + edx*4]
        sub     ebx, ebp
        lea     edi, [eax + 0x1]
    L_fc44f:
        lea     eax, [ebx + esi]
        push    eax
        mov     ecx, esi
        call    FUN_004fc170
        dec     edi
        sub     esi, 0x1c
        test    edi, edi
        ja      L_fc44f
        mov     ebx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x18]
    L_fc46a:
        test    ecx, ecx
        jz      L_fc474
        mov     edx, dword ptr [ecx]
        push    0x3
        call    dword ptr [edx]
    L_fc474:
        mov     dword ptr [ebx + 0x28], ebp
        mov     dword ptr [ebx + 0x2c], 0xff
    L_fc47e:
        mov     esi, dword ptr [ebx + 0x28]
        xor     edi, edi
        add     esi, 0x14
    L_fc486:
        push    edi
        lea     eax, [esp + 0x34]
        push    0x775eb4
        push    eax
        call    dword ptr [g_0076b420]
        add     esp, 0xc
        lea     ecx, [esp + 0x30]
        push    ecx
        lea     ecx, [esi + -0x4]
        call    FUN_00412780
        mov     ecx, dword ptr [esi]
        call    FUN_0041fcb0
        lea     edx, [edi + 0x3000000]
        mov     dword ptr [esi + 0x4], edx
        inc     edi
        add     esi, 0x1c
        cmp     edi, 0xff
        jl      L_fc486
        mov     edi, dword ptr [ebx + 0x6c]
        cmp     edi, 0xff
        jz      L_fc568
        push    0x1be8
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_fc502
        push    0x4fc100
        push    0xff
        lea     esi, [eax + 0x4]
        push    0x1c
        push    esi
        mov     dword ptr [eax], 0xff
        call    FUN_00406c90
        mov     ebp, esi
        jmp     L_fc504
    L_fc502:
        xor     ebp, ebp
    L_fc504:
        mov     ecx, dword ptr [ebx + 0x68]
        test    ecx, ecx
        mov     dword ptr [esp + 0x18], ecx
        jz      L_fc55e
        cmp     edi, 0xff
        mov     eax, 0xff
        ja      L_fc51e
        mov     eax, edi
    L_fc51e:
        mov     edx, eax
        dec     eax
        test    edx, edx
        jz      L_fc554
        lea     edx, [eax*8 + 0x0]
        sub     edx, eax
        mov     ebx, ecx
        lea     esi, [ebp + edx*4]
        sub     ebx, ebp
        lea     edi, [eax + 0x1]
    L_fc539:
        lea     eax, [ebx + esi]
        push    eax
        mov     ecx, esi
        call    FUN_004fc170
        dec     edi
        sub     esi, 0x1c
        test    edi, edi
        ja      L_fc539
        mov     ebx, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x18]
    L_fc554:
        test    ecx, ecx
        jz      L_fc55e
        mov     edx, dword ptr [ecx]
        push    0x3
        call    dword ptr [edx]
    L_fc55e:
        mov     dword ptr [ebx + 0x68], ebp
        mov     dword ptr [ebx + 0x6c], 0xff
    L_fc568:
        mov     esi, dword ptr [ebx + 0x68]
        xor     edi, edi
        add     esi, 0x14
    L_fc570:
        push    edi
        lea     eax, [esp + 0x34]
        push    0x775ea8
        push    eax
        call    dword ptr [g_0076b420]
        add     esp, 0xc
        lea     ecx, [esp + 0x30]
        push    ecx
        lea     ecx, [esi + -0x4]
        call    FUN_00412780
        mov     ecx, dword ptr [esi]
        call    FUN_0041fcb0
        lea     edx, [edi + 0xb000000]
        mov     dword ptr [esi + 0x4], edx
        inc     edi
        add     esi, 0x1c
        cmp     edi, 0xff
        jl      L_fc570
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x120
        ret     0x4
    }
}
