/*
 * FUN_006541F0 (1472 B) — __thiscall (ECX = this), RET 0x18 (6 stack params).
 *
 * Reads 4 floats from param_1, converts via _ftol(), clamps against the
 * DAT_0080da* map-size constants, divides by 10, then fills a heightmap /
 * grid structure (word/byte/dword stores into a buffer at this+0x400004 and
 * param_4+8). Two main branches selected by param_3 (char).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0075db4a(void);   /* _ftol */

extern float DAT_0080da60;   /* 0x0080DA60 - map size x */
extern float DAT_0080da5c;   /* 0x0080DA5C - map size z */
extern float DAT_0080da58;   /* 0x0080DA58 - map size x */
extern float DAT_0080da54;   /* 0x0080DA54 - map size z */

__declspec(naked) void __stdcall FUN_006541f0(void)
{
    __asm {
        sub     esp, 0x28
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x34]
        fld     dword ptr [ebp]
        push    esi
        push    edi
        mov     dword ptr [esp + 0x20], ecx
        call    FUN_0075db4a
        fld     dword ptr [ebp + 0x4]
        mov     ebx, eax
        mov     dword ptr [esp + 0x18], ebx
        call    FUN_0075db4a
        fld     dword ptr [ebp + 0x10]
        mov     edi, eax
        mov     dword ptr [esp + 0x14], edi
        call    FUN_0075db4a
        fld     dword ptr [ebp + 0x14]
        mov     esi, eax
        mov     dword ptr [esp + 0x24], esi
        call    FUN_0075db4a
        fild    dword ptr [esp + 0x18]
        mov     ebp, eax
        mov     dword ptr [esp + 0x10], ebp
        fcomp   dword ptr [DAT_0080da60]
        fnstsw  ax
        test    ah, 0x1
        jz      l_54255
        fld     dword ptr [DAT_0080da60]
        call    FUN_0075db4a
        mov     ebx, eax
l_54255:
        fild    dword ptr [esp + 0x24]
        fcomp   dword ptr [DAT_0080da5c]
        fnstsw  ax
        test    ah, 0x1
        jz      l_54273
        fld     dword ptr [DAT_0080da5c]
        call    FUN_0075db4a
        mov     esi, eax
l_54273:
        fild    dword ptr [esp + 0x14]
        fcomp   dword ptr [DAT_0080da58]
        fnstsw  ax
        test    ah, 0x1
        jnz     l_54292
        fld     dword ptr [DAT_0080da58]
        call    FUN_0075db4a
        mov     edi, eax
        dec     edi
l_54292:
        fild    dword ptr [esp + 0x10]
        fcomp   dword ptr [DAT_0080da54]
        fnstsw  ax
        test    ah, 0x1
        jnz     l_542b1
        fld     dword ptr [DAT_0080da54]
        call    FUN_0075db4a
        mov     ebp, eax
        dec     ebp
l_542b1:
        mov     eax, 0x66666667
        fld     dword ptr [DAT_0080da60]
        imul    ebx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     ebx, edx
        mov     eax, 0x66666667
        imul    edi
        sar     edx, 0x2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        mov     edi, edx
        mov     eax, 0x66666667
        imul    esi
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     esi, edx
        mov     eax, 0x66666667
        imul    ebp
        sar     edx, 0x2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        mov     ebp, edx
        mov     dword ptr [esp + 0x18], ebx
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x10], ebp
        call    FUN_0075db4a
        mov     ecx, eax
        fld     dword ptr [DAT_0080da5c]
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     dword ptr [esp + 0x1c], edx
        call    FUN_0075db4a
        mov     ecx, eax
        mov     eax, 0x66666667
        imul    ecx
        mov     al, byte ptr [esp + 0x44]
        sar     edx, 0x2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        test    al, al
        mov     ecx, edx
        mov     dword ptr [esp + 0x24], ecx
        jz      l_546d7
        cmp     ebx, edi
        mov     edx, ebx
        mov     dword ptr [esp + 0x50], edx
        jg      l_54437
l_54369:
        cmp     esi, ebp
        jg      l_5442a
        mov     eax, edx
        sub     eax, dword ptr [esp + 0x1c]
        lea     edx, [eax + eax*0x2]
        mov     eax, dword ptr [esp + 0x20]
        mov     eax, dword ptr [eax + 0x400004]
        lea     eax, [eax + edx*0x4]
        mov     edx, dword ptr [eax]
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, edx
        mov     dword ptr [esp + 0x28], edx
        mov     edx, dword ptr [esp + 0x48]
        mov     dword ptr [esp + 0x30], eax
        mov     eax, dword ptr [edx + 0x8]
        mov     dword ptr [esp + 0x34], eax
        lea     eax, [esi + esi*0x4]
        lea     ecx, [ecx + ecx*0x4]
        lea     edi, [esi + 0x100]
        sub     ebp, esi
        shl     eax, 0x3
        shl     ecx, 0x3
        shl     edi, 0x9
        inc     ebp
        mov     dword ptr [esp + 0x44], ebp
        mov     ebx, dword ptr [esp + 0x40]
        mov     ebp, dword ptr [esp + 0x28]
l_543be:
        mov     edx, eax
        sub     edx, ecx
        mov     dword ptr [edx + ebp*0x1 + 0x18], ebx
        mov     ebp, dword ptr [esp + 0x2c]
        mov     ebp, dword ptr [ebp]
        mov     edx, eax
        sub     edx, ecx
        mov     dword ptr [edx + ebp*0x1 + 0x1c], ebx
        mov     ebx, dword ptr [esp + 0x3c]
        mov     ebx, dword ptr [ebx + 0xc]
        mov     ebp, dword ptr [esp + 0x30]
        mov     edx, eax
        sub     edx, ecx
        mov     dword ptr [edx + ebp*0x1 + 0x24], ebx
        mov     edx, dword ptr [esp + 0x50]
        mov     ebp, dword ptr [esp + 0x34]
        lea     ebx, [edi + edx*0x1 + 0x100]
        mov     word ptr [ebp + ebx*0x2], 0x0
        mov     ebx, dword ptr [esp + 0x44]
        add     eax, 0x28
        add     edi, 0x200
        dec     ebx
        mov     dword ptr [esp + 0x44], ebx
        __emit 0x75   /* __emit: MSVC6 miscomputes backward JNZ rel8 (off-by-8) here */
        __emit 0xA4   /* target 0x6543BE, disp = 0x6543BE - 0x65441A = -0x5C = 0xA4 */
        mov     ecx, dword ptr [esp + 0x24]
        mov     ebp, dword ptr [esp + 0x10]
        mov     edi, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [esp + 0x18]
l_5442a:
        inc     edx
        cmp     edx, edi
        mov     dword ptr [esp + 0x50], edx
        jle     l_54369
l_54437:
        mov     edx, ebp
        mov     ecx, edi
        sub     edx, esi
        sub     ecx, ebx
        cmp     ecx, edx
        mov     dword ptr [esp + 0x2c], edx
        jle     l_545a1
        cmp     esi, ebp
        jg      l_544c2
        mov     eax, dword ptr [esp + 0x48]
        mov     ecx, dword ptr [eax + 0x8]
        lea     eax, [esi + 0x100]
        shl     eax, 0x9
        inc     edx
        mov     dword ptr [esp + 0x44], edx
l_54464:
        lea     edx, [eax + ebx*0x1 + 0xfd]
        mov     word ptr [ecx + edx*0x2], 0x0
        lea     edx, [eax + edi*0x1 + 0x103]
        mov     word ptr [ecx + edx*0x2], 0x0
        lea     edx, [eax + ebx*0x1 + 0xfe]
        mov     word ptr [ecx + edx*0x2], 0x0
        lea     edx, [eax + edi*0x1 + 0x102]
        mov     word ptr [ecx + edx*0x2], 0x0
        lea     edx, [eax + ebx*0x1 + 0xff]
        mov     word ptr [ecx + edx*0x2], 0x0
        lea     edx, [eax + edi*0x1 + 0x101]
        mov     word ptr [ecx + edx*0x2], 0x0
        mov     edx, dword ptr [esp + 0x44]
        add     eax, 0x200
        dec     edx
        mov     dword ptr [esp + 0x44], edx
        jnz     l_54464
l_544c2:
        cmp     ebx, edi
        jg      l_547a6
        lea     eax, [esi + 0xfe]
        shl     eax, 0x9
        mov     edx, eax
        lea     eax, [ebp + 0x102]
        shl     eax, 0x9
        mov     dword ptr [esp + 0x44], eax
        lea     eax, [esi + 0xfd]
        shl     eax, 0x9
        mov     dword ptr [esp + 0x50], eax
        lea     eax, [ebp + 0x103]
        shl     eax, 0x9
        mov     dword ptr [esp + 0x3c], eax
        lea     eax, [esi + 0xff]
        shl     eax, 0x9
        mov     dword ptr [esp + 0x40], eax
        lea     eax, [ebp + 0x101]
        shl     eax, 0x9
        mov     dword ptr [esp + 0x34], eax
        mov     eax, dword ptr [esp + 0x48]
        mov     ecx, dword ptr [eax + 0x8]
        add     esi, 0x100
        add     ebp, 0x100
        shl     esi, 0x9
        shl     ebp, 0x9
        lea     eax, [ebx + 0x100]
l_54535:
        lea     ebx, [eax + edx*0x1]
        mov     word ptr [ecx + ebx*0x2], 0x3f
        mov     ebx, dword ptr [esp + 0x44]
        add     ebx, eax
        mov     word ptr [ecx + ebx*0x2], 0x3f
        mov     ebx, dword ptr [esp + 0x50]
        add     ebx, eax
        mov     word ptr [ecx + ebx*0x2], 0x3f
        mov     ebx, dword ptr [esp + 0x3c]
        add     ebx, eax
        mov     word ptr [ecx + ebx*0x2], 0x3f
        mov     ebx, dword ptr [esp + 0x40]
        add     ebx, eax
        mov     word ptr [ecx + ebx*0x2], 0x3f
        mov     ebx, dword ptr [esp + 0x34]
        add     ebx, eax
        mov     word ptr [ecx + ebx*0x2], 0x3f
        lea     ebx, [eax + esi*0x1]
        mov     word ptr [ecx + ebx*0x2], 0x3f
        lea     ebx, [eax + ebp*0x1]
        inc     eax
        mov     word ptr [ecx + ebx*0x2], 0x3f
        lea     ebx, [eax + 0xffffff00]
        cmp     ebx, edi
        jle     l_54535
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x28
        ret     0x18
l_545a1:
        cmp     ebx, edi
        jg      l_5465b
        mov     ecx, dword ptr [esp + 0x48]
        mov     ecx, dword ptr [ecx + 0x8]
        lea     eax, [esi + 0xfe]
        shl     eax, 0x9
        mov     dword ptr [esp + 0x44], eax
        lea     eax, [ebp + 0x102]
        shl     eax, 0x9
        mov     dword ptr [esp + 0x50], eax
        lea     eax, [esi + 0xfd]
        shl     eax, 0x9
        mov     dword ptr [esp + 0x3c], eax
        lea     eax, [ebp + 0x103]
        shl     eax, 0x9
        mov     dword ptr [esp + 0x40], eax
        lea     eax, [esi + 0xff]
        shl     eax, 0x9
        mov     dword ptr [esp + 0x34], eax
        lea     eax, [ebp + 0x101]
        shl     eax, 0x9
        mov     dword ptr [esp + 0x30], eax
        lea     eax, [ebx + 0x100]
l_54604:
        mov     edx, dword ptr [esp + 0x44]
        add     edx, eax
        mov     word ptr [ecx + edx*0x2], 0x0
        mov     edx, dword ptr [esp + 0x50]
        add     edx, eax
        mov     word ptr [ecx + edx*0x2], 0x0
        mov     edx, dword ptr [esp + 0x3c]
        add     edx, eax
        mov     word ptr [ecx + edx*0x2], 0x0
        mov     edx, dword ptr [esp + 0x40]
        add     edx, eax
        mov     word ptr [ecx + edx*0x2], 0x0
        mov     edx, dword ptr [esp + 0x34]
        add     edx, eax
        mov     word ptr [ecx + edx*0x2], 0x0
        mov     edx, dword ptr [esp + 0x30]
        add     edx, eax
        inc     eax
        mov     word ptr [ecx + edx*0x2], 0x0
        lea     edx, [eax + 0xffffff00]
        cmp     edx, edi
        jle     l_54604
        mov     edx, dword ptr [esp + 0x2c]
l_5465b:
        cmp     esi, ebp
        jg      l_547a6
        mov     eax, dword ptr [esp + 0x48]
        mov     eax, dword ptr [eax + 0x8]
        add     esi, 0x100
        shl     esi, 0x9
        lea     ecx, [edx + 0x1]
l_54676:
        lea     edx, [ebx + esi*0x1 + 0xfd]
        mov     word ptr [eax + edx*0x2], 0x3f
        lea     edx, [edi + esi*0x1 + 0x103]
        mov     word ptr [eax + edx*0x2], 0x3f
        lea     edx, [ebx + esi*0x1 + 0xfe]
        mov     word ptr [eax + edx*0x2], 0x3f
        lea     edx, [edi + esi*0x1 + 0x102]
        mov     word ptr [eax + edx*0x2], 0x3f
        lea     edx, [ebx + esi*0x1 + 0xff]
        mov     word ptr [eax + edx*0x2], 0x3f
        lea     edx, [edi + esi*0x1 + 0x101]
        add     esi, 0x200
        dec     ecx
        mov     word ptr [eax + edx*0x2], 0x3f
        jnz     l_54676
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x28
        ret     0x18
l_546d7:
        cmp     ebx, edi
        jg      l_547a6
        mov     eax, dword ptr [esp + 0x1c]
        lea     edx, [ebx + ebx*0x2]
        lea     eax, [eax + eax*0x2]
        shl     edx, 0x2
        shl     eax, 0x2
        sub     edi, ebx
        inc     edi
        mov     dword ptr [esp + 0x44], edx
        mov     dword ptr [esp + 0x34], eax
        mov     dword ptr [esp + 0x48], edi
l_546fe:
        cmp     esi, ebp
        jg      l_54790
        mov     ebx, dword ptr [esp + 0x34]
        mov     edi, dword ptr [esp + 0x20]
        mov     edi, dword ptr [edi + 0x400004]
        mov     eax, edx
        sub     eax, ebx
        mov     eax, dword ptr [edi + eax*0x1]
        mov     dword ptr [esp + 0x30], eax
        mov     eax, edx
        sub     eax, ebx
        mov     eax, dword ptr [edi + eax*0x1]
        mov     dword ptr [esp + 0x2c], eax
        mov     eax, dword ptr [esp + 0x3c]
        fld     dword ptr [eax + 0xc]
        lea     ecx, [ecx + ecx*0x4]
        fsub    dword ptr [eax + 0x8]
        mov     eax, edx
        sub     eax, ebx
        mov     edx, dword ptr [edi + eax*0x1]
        lea     eax, [esi + esi*0x4]
        sub     ebp, esi
        shl     eax, 0x3
        shl     ecx, 0x3
        mov     dword ptr [esp + 0x28], edx
        inc     ebp
l_5474e:
        mov     dl, byte ptr [esp + 0x50]
        fld     st(0)
        mov     ebx, dword ptr [esp + 0x30]
        mov     edi, eax
        sub     edi, ecx
        mov     byte ptr [ebx + edi*0x1 + 0x20], dl
        mov     edi, dword ptr [esp + 0x40]
        mov     ebx, dword ptr [esp + 0x2c]
        mov     edx, eax
        sub     edx, ecx
        mov     dword ptr [ebx + edx*0x1 + 0x18], edi
        mov     edi, dword ptr [esp + 0x28]
        mov     edx, eax
        sub     edx, ecx
        add     eax, 0x28
        fstp    dword ptr [edi + edx*0x1 + 0x24]
        dec     ebp
        jnz     l_5474e
        mov     edx, dword ptr [esp + 0x44]
        fstp    st(0)
        mov     ebp, dword ptr [esp + 0x10]
        mov     ecx, dword ptr [esp + 0x24]
l_54790:
        mov     eax, dword ptr [esp + 0x48]
        add     edx, 0xc
        dec     eax
        mov     dword ptr [esp + 0x44], edx
        mov     dword ptr [esp + 0x48], eax
        jnz     l_546fe
l_547a6:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x28
        ret     0x18
    }
}
