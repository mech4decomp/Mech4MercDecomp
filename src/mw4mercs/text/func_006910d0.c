/*
 * FUN_006910d0 (1130 B) — __thiscall HUD element update/placement.
 * Computes grid coordinates, converts via _ftol, checks bounds against
 * a 0x80x0x80 occupancy grid at 0x80db0c, and inserts the element into
 * the object's linked list at +0x38.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006864d0(void);
extern void __cdecl FUN_0041c540(void);
extern void __cdecl FUN_0075db4a(void);
extern void __cdecl FUN_005d8cc0(void);
extern void __cdecl FUN_006907f0(void);
extern void *__cdecl FUN_004084d0(unsigned int n);
extern void __cdecl FUN_00691080(void);
extern void __cdecl FUN_006f49a0(void);
extern unsigned int g_7f2464;
extern unsigned int g_7b220c;
extern unsigned int g_7f2438;
extern int g_82db10;
extern int g_82db0c;
extern int g_82db14;
extern float g_80da60;
extern float g_80da5c;
extern float g_80da58;
extern float g_80da54;
extern float g_76def8;
extern float g_76d064;
extern int g_80db0c;
extern int g_80db10;

__declspec(naked) void FUN_006910d0(void)
{
    __asm {
        sub     esp, 0x40
        mov     eax, dword ptr [g_7f2464]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        call    FUN_006f4950
        mov     ecx, dword ptr [esi + 0x14]
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x2
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        mov     ecx, dword ptr [esi + 0x18]
        mov     ebp, edx
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, dword ptr [esi + 0x1c]
        mov     ebx, edx
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x2
        mov     dword ptr [esp + 0x18], ecx
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        cmp     ebp, edx
        mov     byte ptr [esi + 0x26], 0x0
        jnz     l1165
        mov     ecx, dword ptr [esi + 0x20]
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     ebx, edx
        jnz     l1165
        mov     byte ptr [esi + 0x24], 0x1
        mov     byte ptr [esi + 0x26], 0x1
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x40
        ret
l1165:
        fild    dword ptr [esp + 0x18]
        mov     ax, word ptr [esi + 0x2c]
        mov     ecx, dword ptr [esi + 0x30]
        lea     edx, [esp + 0x2c]
        fstp    dword ptr [esp + 0x2c]
        mov     dword ptr [esp + 0x30], 0x0
        fild    dword ptr [esi + 0x20]
        mov     dword ptr [esp + 0x3c], 0x0
        fstp    dword ptr [esp + 0x34]
        and     eax, 0xffff
        fild    dword ptr [esp + 0x14]
        push    eax
        push    edx
        lea     eax, [esp + 0x40]
        fstp    dword ptr [esp + 0x40]
        push    eax
        fild    dword ptr [esp + 0x1c]
        lea     edx, [esp + 0x50]
        push    edx
        fstp    dword ptr [esp + 0x50]
        call    FUN_006864d0
        mov     ecx, dword ptr [eax]
        mov     dword ptr [esp + 0x20], ecx
        mov     edx, dword ptr [eax + 0x4]
        mov     ecx, dword ptr [g_7b220c]
        mov     dword ptr [esp + 0x24], edx
        mov     eax, dword ptr [eax + 0x8]
        push    ecx
        lea     edx, [esp + 0x48]
        mov     dword ptr [esp + 0x2c], eax
        push    edx
        lea     eax, [esp + 0x28]
        push    eax
        mov     dword ptr [esp + 0x50], 0xbf800000
        mov     dword ptr [esp + 0x54], 0xbf800000
        mov     dword ptr [esp + 0x58], 0xbf800000
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jz      l1219
        mov     ecx, dword ptr [g_7f2438]
        mov     byte ptr [esi + 0x24], 0x0
        mov     byte ptr [ecx + 0x14], 0x1
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x40
        ret
l1219:
        fld     dword ptr [esp + 0x20]
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x28]
        mov     edi, eax
        mov     dword ptr [esi + 0x1c], edi
        call    FUN_0075db4a
        mov     ecx, eax
        mov     eax, 0x66666667
        imul    edi
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     dword ptr [esp + 0x18], edx
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        cmp     ebp, dword ptr [esp + 0x18]
        mov     dword ptr [esi + 0x20], ecx
        mov     dword ptr [esp + 0x1c], edx
        jnz     l127e
        cmp     ebx, edx
        jnz     l127e
        mov     byte ptr [esi + 0x24], 0x1
        mov     byte ptr [esi + 0x26], 0x1
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x40
        ret
l127e:
        mov     dl, byte ptr [esi + 0x27]
        test    dl, dl
        setz    dl
        xor     eax, eax
        mov     ax, word ptr [esi + 0x2c]
        push    edx
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        push    ecx
        mov     ecx, dword ptr [esp + 0x20]
        push    edi
        push    eax
        push    ecx
        mov     ecx, dword ptr [esi + 0x30]
        call    FUN_005d8cc0
        test    al, al
        jz      l12bb
        mov     byte ptr [esi + 0x26], 0x1
        mov     byte ptr [esi + 0x24], 0x1
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x40
        ret
l12bb:
        xor     eax, eax
        mov     ecx, 0x8000
        mov     edi, 0x80db0c
        rep stosd
        mov     ecx, dword ptr [esp + 0x18]
        cmp     ebp, ecx
        jle     l12d7
        mov     eax, ebp
        sub     eax, ecx
        jmp     l12db
l12d7:
        sub     ecx, ebp
        mov     eax, ecx
l12db:
        mov     edx, dword ptr [esp + 0x1c]
        cmp     ebx, edx
        jle     l12e9
        mov     ecx, ebx
        sub     ecx, edx
        jmp     l12ed
l12e9:
        sub     edx, ebx
        mov     ecx, edx
l12ed:
        cmp     eax, 0x80
        jl      l130f
        mov     edx, dword ptr [g_7f2438]
        mov     byte ptr [esi + 0x24], 0x0
        mov     byte ptr [edx + 0x14], 0x1
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x40
        ret
l130f:
        cmp     ecx, 0x80
        jl      l1331
        mov     eax, dword ptr [g_7f2438]
        mov     byte ptr [esi + 0x24], 0x0
        mov     byte ptr [eax + 0x14], 0x1
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x40
        ret
l1331:
        mov     edx, 0x80
        sub     edx, eax
        sar     edx, 0x1
        mov     eax, ebp
        sub     eax, edx
        mov     dword ptr [g_82db10], eax
        fild    dword ptr [g_82db10]
        mov     edx, 0x80
        sub     edx, ecx
        fcomp   dword ptr [g_80da60]
        sar     edx, 0x1
        mov     eax, ebx
        sub     eax, edx
        mov     dword ptr [g_82db0c], eax
        fnstsw  ax
        test    ah, 0x1
        jz      l1378
        fld     dword ptr [g_80da60]
        call    FUN_0075db4a
        mov     dword ptr [g_82db10], eax
l1378:
        fild    dword ptr [g_82db0c]
        fcomp   dword ptr [g_80da5c]
        fnstsw  ax
        test    ah, 0x1
        jz      l139b
        fld     dword ptr [g_80da5c]
        call    FUN_0075db4a
        mov     dword ptr [g_82db0c], eax
l139b:
        fld     dword ptr [g_80da58]
        fsub    dword ptr [g_76def8]
        fild    dword ptr [g_82db10]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x1
        jnz     l13c8
        fsub    dword ptr [g_76d064]
        call    FUN_0075db4a
        mov     dword ptr [g_82db10], eax
        jmp     l13ca
l13c8:
        fstp    st(0)
l13ca:
        fld     dword ptr [g_80da54]
        fsub    dword ptr [g_76def8]
        fild    dword ptr [g_82db0c]
        fcomp   st(1)
        fnstsw  ax
        test    ah, 0x1
        jnz     l13fd
        fsub    dword ptr [g_76d064]
        fsub    dword ptr [g_76d064]
        call    FUN_0075db4a
        mov     dword ptr [g_82db0c], eax
        jmp     l13ff
l13fd:
        fstp    st(0)
l13ff:
        mov     ecx, dword ptr [esi + 0x1c]
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     ecx, edx
        mov     edx, dword ptr [esi + 0x20]
        mov     eax, 0x66666667
        imul    edx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     edi, edx
        sub     ecx, ebp
        sub     edi, ebx
        test    ecx, ecx
        jge     l1435
        neg     ecx
l1435:
        test    edi, edi
        jge     l143b
        neg     edi
l143b:
        cmp     edi, ecx
        jge     l144a
        mov     eax, edi
        cdq
        sub     eax, edx
        sar     eax, 0x1
        add     eax, ecx
        jmp     l1453
l144a:
        mov     eax, ecx
        cdq
        sub     eax, edx
        sar     eax, 0x1
        add     eax, edi
l1453:
        mov     ecx, dword ptr [g_82db10]
        lea     edi, [eax + eax*0x4]
        shl     edi, 0x1
        mov     eax, ebp
        and     edi, 0xffff
        sub     eax, ecx
        js      l14db
        mov     ecx, dword ptr [g_82db0c]
        mov     edx, ebx
        sub     edx, ecx
        js      l14db
        cmp     eax, 0x80
        jge     l14db
        cmp     edx, 0x80
        jge     l14db
        shl     eax, 0x7
        sub     eax, ecx
        add     eax, ebx
        mov     eax, dword ptr [eax*0x8 + g_80db0c]
        test    eax, eax
        mov     dword ptr [esp + 0x1c], eax
        jz      l14b6
        push    ebx
        push    ebp
        call    FUN_006907f0
        add     eax, dword ptr [esp + 0x24]
        lea     ecx, [edi + 0x1]
        add     esp, 0x8
        cmp     eax, ecx
        jc      l14db
        mov     ecx, dword ptr [g_82db0c]
l14b6:
        mov     eax, dword ptr [g_82db10]
        mov     edx, ebp
        sub     edx, eax
        shl     edx, 0x7
        mov     eax, edx
        sub     eax, ecx
        add     eax, ebx
        shl     eax, 0x3
        mov     dword ptr [eax + g_80db0c], 0x1
        mov     dword ptr [eax + g_80db10], edi
l14db:
        push    0x10
        call    FUN_004084d0
        xor     edx, edx
        add     esp, 0x4
        cmp     eax, edx
        jz      l14fe
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0xc], edx
        mov     dword ptr [eax + 0x8], ebp
        mov     dword ptr [eax + 0xc], ebx
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [eax], edx
        jmp     l1500
l14fe:
        xor     eax, eax
l1500:
        mov     ebx, dword ptr [esi + 0x3c]
        mov     ecx, dword ptr [esi + 0x38]
        inc     ebx
        cmp     ecx, edx
        mov     dword ptr [eax + 0x4], edx
        mov     dword ptr [esi + 0x3c], ebx
        mov     dword ptr [eax], ecx
        jz      l1516
        mov     dword ptr [ecx + 0x4], eax
l1516:
        mov     ecx, esi
        mov     dword ptr [esi + 0x38], eax
        mov     dword ptr [g_82db14], esi
        mov     dword ptr [esi + 0x28], edx
        mov     byte ptr [esi + 0x25], 0x1
        call    FUN_00691080
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x40
        ret
    }
}
