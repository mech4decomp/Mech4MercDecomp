/*
 * FUN_1000333b (777 B, __cdecl) — allocate a string-table entry of
 * param_1 bytes. Scans the free-list buckets, splits/coalesces blocks,
 * updates the 0x44/0xc4 bitmaps, and returns a pointer to the new entry
 * (or 0 on failure).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_10008da8;
extern int   g_10008dac;
extern int   g_10008da0;
extern int   g_10008da4;
extern int   g_10008d9c;
extern void *__cdecl FUN_10003644(void);
extern void *__cdecl FUN_100036f5(void);

__declspec(naked) int *FUN_1000333b(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x14
        mov     eax, dword ptr [g_10008da8]
        mov     edx, dword ptr [g_10008dac]
        push    ebx
        push    esi
        lea     eax, [eax + eax*4]
        push    edi
        lea     edi, [edx + eax*4]
        mov     eax, dword ptr [ebp + 8]
        mov     dword ptr [ebp - 4], edi
        lea     ecx, [eax + 0x17]
        and     ecx, 0xfffffff0
        mov     dword ptr [ebp - 0x10], ecx
        sar     ecx, 4
        dec     ecx
        cmp     ecx, 0x20
        jge     L_337b
        or      esi, 0xffffffff
        shr     esi, cl
        or      dword ptr [ebp - 8], 0xffffffff
        mov     dword ptr [ebp - 0xc], esi
        jmp     L_338b
L_337b:
        add     ecx, -0x20
        or      eax, 0xffffffff
        xor     esi, esi
        shr     eax, cl
        mov     dword ptr [ebp - 0xc], esi
        mov     dword ptr [ebp - 8], eax
L_338b:
        mov     eax, dword ptr [g_10008da0]
        mov     ebx, eax
        cmp     ebx, edi
        mov     dword ptr [ebp + 8], ebx
        jnc     L_33b2
L_3399:
        mov     ecx, dword ptr [ebx + 4]
        mov     edi, dword ptr [ebx]
        and     ecx, dword ptr [ebp - 8]
        and     edi, esi
        or      ecx, edi
        jnz     L_33b2
        add     ebx, 0x14
        cmp     ebx, dword ptr [ebp - 4]
        mov     dword ptr [ebp + 8], ebx
        jc      L_3399
L_33b2:
        cmp     ebx, dword ptr [ebp - 4]
        jnz     L_3430
        mov     ebx, edx
L_33b9:
        cmp     ebx, eax
        mov     dword ptr [ebp + 8], ebx
        jnc     L_33d5
        mov     ecx, dword ptr [ebx + 4]
        mov     edi, dword ptr [ebx]
        and     ecx, dword ptr [ebp - 8]
        and     edi, esi
        or      ecx, edi
        jnz     L_33d3
        add     ebx, 0x14
        jmp     L_33b9
L_33d3:
        cmp     ebx, eax
L_33d5:
        jnz     L_3430
        cmp     ebx, dword ptr [ebp - 4]
        __emit 0x73   /* jnc L_33ed: MSVC6 miscomputes this forward rel8 (emits 73 F2 backward) when a backward jmp to a prior label sits between ref and target */
        __emit 0x11
L_33d7:
        cmp     dword ptr [ebx + 8], 0
        jnz     L_33ea
        add     ebx, 0x14
        mov     dword ptr [ebp + 8], ebx
        __emit 0xEB   /* jmp L_33d7: MSVC6 miscomputes this backward rel8 (off by 5) due to the forward jnc reference above */
        __emit 0xED
L_33ea:
        cmp     ebx, dword ptr [ebp - 4]
L_33ed:
        jnz     L_3415
        mov     ebx, edx
L_33f1:
        cmp     ebx, eax
        mov     dword ptr [ebp + 8], ebx
        jnc     L_3405
        cmp     dword ptr [ebx + 8], 0
        jnz     L_3403
        add     ebx, 0x14
        jmp     L_33f1
L_3403:
        cmp     ebx, eax
L_3405:
        jnz     L_3415
        call    FUN_10003644
        mov     ebx, eax
        test    ebx, ebx
        mov     dword ptr [ebp + 8], ebx
        jz      L_3429
L_3415:
        push    ebx
        call    FUN_100036f5
        pop     ecx
        mov     ecx, dword ptr [ebx + 0x10]
        mov     dword ptr [ecx], eax
        mov     eax, dword ptr [ebx + 0x10]
        cmp     dword ptr [eax], -1
        jnz     L_3430
L_3429:
        xor     eax, eax
        jmp     L_363f
L_3430:
        mov     dword ptr [g_10008da0], ebx
        mov     eax, dword ptr [ebx + 0x10]
        mov     edx, dword ptr [eax]
        cmp     edx, -1
        mov     dword ptr [ebp - 4], edx
        jz      L_3457
        mov     ecx, dword ptr [eax + edx*4 + 0xc4]
        mov     edi, dword ptr [eax + edx*4 + 0x44]
        and     ecx, dword ptr [ebp - 8]
        and     edi, esi
        or      ecx, edi
        jnz     L_348e
L_3457:
        mov     edx, dword ptr [eax + 0xc4]
        mov     esi, dword ptr [eax + 0x44]
        and     edx, dword ptr [ebp - 8]
        and     esi, dword ptr [ebp - 0xc]
        and     dword ptr [ebp - 4], 0
        lea     ecx, [eax + 0x44]
        or      edx, esi
        mov     esi, dword ptr [ebp - 0xc]
        jnz     L_348b
L_3474:
        mov     edx, dword ptr [ecx + 0x84]
        inc     dword ptr [ebp - 4]
        and     edx, dword ptr [ebp - 8]
        add     ecx, 4
        mov     edi, esi
        and     edi, dword ptr [ecx]
        or      edx, edi
        jz      L_3474
L_348b:
        mov     edx, dword ptr [ebp - 4]
L_348e:
        mov     ecx, edx
        xor     edi, edi
        imul    ecx, ecx, 0x204
        lea     ecx, [ecx + eax + 0x144]
        mov     dword ptr [ebp - 0xc], ecx
        mov     ecx, dword ptr [eax + edx*4 + 0x44]
        and     ecx, esi
        jnz     L_34b7
        mov     ecx, dword ptr [eax + edx*4 + 0xc4]
        push    0x20
        and     ecx, dword ptr [ebp - 8]
        pop     edi
L_34b7:
        test    ecx, ecx
        jl      L_34c0
        shl     ecx, 1
        inc     edi
        jmp     L_34b7
L_34c0:
        mov     ecx, dword ptr [ebp - 0xc]
        mov     edx, dword ptr [ecx + edi*8 + 4]
        mov     ecx, dword ptr [edx]
        sub     ecx, dword ptr [ebp - 0x10]
        mov     esi, ecx
        mov     dword ptr [ebp - 8], ecx
        sar     esi, 4
        dec     esi
        cmp     esi, 0x3f
        jle     L_34dd
        push    0x3f
        pop     esi
L_34dd:
        cmp     esi, edi
        jz      L_35f2
        mov     ecx, dword ptr [edx + 4]
        cmp     ecx, dword ptr [edx + 8]
        jnz     L_354e
        cmp     edi, 0x20
        jge     L_351d
        mov     ebx, 0x80000000
        mov     ecx, edi
        shr     ebx, cl
        mov     ecx, dword ptr [ebp - 4]
        lea     edi, [eax + edi + 4]
        not     ebx
        mov     dword ptr [ebp - 0x14], ebx
        and     ebx, dword ptr [eax + ecx*4 + 0x44]
        mov     dword ptr [eax + ecx*4 + 0x44], ebx
        dec     byte ptr [edi]
        jnz     L_354b
        mov     ebx, dword ptr [ebp + 8]
        mov     ecx, dword ptr [ebp - 0x14]
        and     dword ptr [ebx], ecx
        jmp     L_354e
L_351d:
        lea     ecx, [edi - 0x20]
        mov     ebx, 0x80000000
        shr     ebx, cl
        mov     ecx, dword ptr [ebp - 4]
        lea     edi, [eax + edi + 4]
        lea     ecx, [eax + ecx*4 + 0xc4]
        not     ebx
        and     dword ptr [ecx], ebx
        dec     byte ptr [edi]
        mov     dword ptr [ebp - 0x14], ebx
        jnz     L_354b
        mov     ebx, dword ptr [ebp + 8]
        mov     ecx, dword ptr [ebp - 0x14]
        and     dword ptr [ebx + 4], ecx
        jmp     L_354e
L_354b:
        mov     ebx, dword ptr [ebp + 8]
L_354e:
        mov     ecx, dword ptr [edx + 8]
        mov     edi, dword ptr [edx + 4]
        cmp     dword ptr [ebp - 8], 0
        mov     dword ptr [ecx + 4], edi
        mov     ecx, dword ptr [edx + 4]
        mov     edi, dword ptr [edx + 8]
        mov     dword ptr [ecx + 8], edi
        jz      L_35fe
        mov     ecx, dword ptr [ebp - 0xc]
        mov     edi, dword ptr [ecx + esi*8 + 4]
        lea     ecx, [ecx + esi*8]
        mov     dword ptr [edx + 4], edi
        mov     dword ptr [edx + 8], ecx
        mov     dword ptr [ecx + 4], edx
        mov     ecx, dword ptr [edx + 4]
        mov     dword ptr [ecx + 8], edx
        mov     ecx, dword ptr [edx + 4]
        cmp     ecx, dword ptr [edx + 8]
        jnz     L_35ef
        mov     cl, byte ptr [esi + eax + 4]
        cmp     esi, 0x20
        mov     byte ptr [ebp + 0xb], cl
        jge     L_35c0
        inc     cl
        cmp     byte ptr [ebp + 0xb], 0
        mov     byte ptr [esi + eax + 4], cl
        jnz     L_35ae
        mov     edi, 0x80000000
        mov     ecx, esi
        shr     edi, cl
        or      dword ptr [ebx], edi
L_35ae:
        mov     edi, 0x80000000
        mov     ecx, esi
        shr     edi, cl
        mov     ecx, dword ptr [ebp - 4]
        or      dword ptr [eax + ecx*4 + 0x44], edi
        jmp     L_35ef
L_35c0:
        inc     cl
        cmp     byte ptr [ebp + 0xb], 0
        mov     byte ptr [esi + eax + 4], cl
        jnz     L_35d9
        lea     ecx, [esi - 0x20]
        mov     edi, 0x80000000
        shr     edi, cl
        or      dword ptr [ebx + 4], edi
L_35d9:
        mov     ecx, dword ptr [ebp - 4]
        lea     edi, [eax + ecx*4 + 0xc4]
        lea     ecx, [esi - 0x20]
        mov     esi, 0x80000000
        shr     esi, cl
        or      dword ptr [edi], esi
L_35ef:
        mov     ecx, dword ptr [ebp - 8]
L_35f2:
        test    ecx, ecx
        jz      L_3601
        mov     dword ptr [edx], ecx
        mov     dword ptr [ecx + edx - 4], ecx
        jmp     L_3601
L_35fe:
        mov     ecx, dword ptr [ebp - 8]
L_3601:
        mov     esi, dword ptr [ebp - 0x10]
        add     edx, ecx
        lea     ecx, [esi + 1]
        mov     dword ptr [edx], ecx
        mov     dword ptr [edx + esi - 4], ecx
        mov     esi, dword ptr [ebp - 0xc]
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        lea     edi, [ecx + 1]
        mov     dword ptr [esi], edi
        jnz     L_3637
        cmp     ebx, dword ptr [g_10008da4]
        jnz     L_3637
        mov     ecx, dword ptr [ebp - 4]
        cmp     ecx, dword ptr [g_10008d9c]
        jnz     L_3637
        and     dword ptr [g_10008da4], 0
L_3637:
        mov     ecx, dword ptr [ebp - 4]
        mov     dword ptr [eax], ecx
        lea     eax, [edx + 4]
L_363f:
        pop     edi
        pop     esi
        pop     ebx
        leave
        ret
    }
}
