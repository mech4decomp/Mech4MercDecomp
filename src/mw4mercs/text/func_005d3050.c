/*
 * FUN_005d3050 (849 B) — __thiscall, RET 8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006f4950(void *p);
extern void __stdcall FUN_005db360(void);
extern void __stdcall FUN_005d9500(void);
extern void __stdcall FUN_004084e0(void *p);
extern void __stdcall FUN_0041c540(void);
extern double __stdcall FUN_00707e70(int);
extern void __stdcall FUN_00416110(void);
extern void __stdcall FUN_005b3610(void);
extern void __stdcall FUN_005dcd00(void *p);
extern void __stdcall FUN_005dc4a0(void);
extern void __stdcall FUN_006f49a0(void);

__declspec(naked) void __stdcall FUN_005d3050(void)
{
    

extern int DAT_007f244c;
extern int DAT_0076c5b0;
extern int DAT_007f24cc;
extern int DAT_007b220c;
extern int DAT_007f1f70;
__asm {
push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 0x14
        mov eax, dword ptr [DAT_007f244c]
        push    ebx
        push    esi
        push    edi
        push    eax
        mov     esi, ecx
        call    FUN_006f4950
        push    0x1
        mov     ecx, esi
        call    FUN_005db360
        test    al, al
        mov     edx, dword ptr [esi]
        jnz     L_3187
        mov     edi, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x8]
        push    edi
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x158]
        mov     al, byte ptr [esi + 0x4ac]
        xor     ebx, ebx
        cmp     al, bl
        jnz     L_30cb
        mov     eax, dword ptr [esi + 0x368]
        cmp     eax, ebx
        jz      L_30a7
        cmp     byte ptr [eax + 0x3c], bl
        jz      L_30cb
L_30a7:
        mov     ecx, dword ptr [esi + 0x364]
        cmp     ecx, ebx
        jz      L_337b
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x34]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_337b
L_30cb:
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov ecx, dword ptr [DAT_007f24cc]
        call    FUN_00416110
        cmp     eax, ebx
        jz      L_30f0
        push    ebx
        push    0x3
        mov     ecx, eax
        call    FUN_005b3610
        jmp     L_30f2
L_30f0:
        xor     eax, eax
L_30f2:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x8], ecx
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax + 0xc], edx
        call    FUN_005dcd00
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov ecx, dword ptr [DAT_007f24cc]
        call    FUN_00416110
        cmp     eax, ebx
        jz      L_312d
        push    ebx
        push    0x7
        mov     ecx, eax
        call    FUN_005b3610
        jmp     L_312f
L_312d:
        xor     eax, eax
L_312f:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x8], ecx
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax + 0xc], edx
        mov     dword ptr [eax + 0x14], ebx
        call    FUN_005dcd00
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov ecx, dword ptr [DAT_007f24cc]
        call    FUN_00416110
        cmp     eax, ebx
        jz      L_3178
        push    ebx
        push    0x8
        mov     ecx, eax
        call    FUN_005b3610
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        jmp     L_336a
L_3178:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        xor     eax, eax
        jmp     L_336a
L_3187:
        xor     ebx, ebx
        push    ebx
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x184]
        mov     edi, dword ptr [esi + 0x45c]
        cmp     edi, ebx
        jz      L_31d6
        cmp     byte ptr [edi + 0xc], bl
        jz      L_31d6
        cmp     edi, ebx
        mov     eax, dword ptr [edi + 0x10]
        mov     dword ptr [esp + 0x10], eax
        mov     dword ptr [edi + 0x10], ebx
        jz      L_31c0
        mov     ecx, edi
        call    FUN_005d9500
        push    edi
        call    FUN_004084e0
        add     esp, 0x4
L_31c0:
        mov     eax, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esi]
        push    ebx
        push    eax
        mov     ecx, esi
        mov     dword ptr [esi + 0x45c], ebx
        call    dword ptr [edx + 0x1c8]
L_31d6:
        mov ecx, dword ptr [DAT_007b220c]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        lea     edi, [esi + 0x384]
        push    edi
        mov     dword ptr [esp + 0x1c], 0xbf800000
        mov     dword ptr [esp + 0x20], 0xbf800000
        mov     dword ptr [esp + 0x24], 0xbf800000
        call    FUN_0041c540
        add     esp, 0xc
        test    al, al
        jz      L_3248
        mov     eax, dword ptr [esi + 0x35c]
        cmp     eax, ebx
        jz      L_3248
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x9c]
        fld     dword ptr [eax + 0x8c]
        mov     edx, dword ptr [eax + 0xac]
        fstp    dword ptr [edi]
        add     eax, 0x80
        mov     eax, ecx
        mov     dword ptr [esp + 0x14], ecx
        mov     ecx, edx
        mov     dword ptr [esp + 0x18], edx
        mov     dword ptr [edi + 0x4], eax
        mov     dword ptr [edi + 0x8], ecx
L_3248:
        mov     edi, dword ptr [ebp + 0xc]
        mov     eax, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [esi]
        push    edi
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x14c]
        mov     eax, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [esi]
        push    edi
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x144]
        mov     eax, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [esi]
        push    edi
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x158]
        mov     edx, dword ptr [esi]
        push    ebx
        push    ebx
        mov     ecx, esi
        call    dword ptr [edx + 0x188]
        cmp     byte ptr [esi + 0x4ac], bl
        jnz     L_32bf
        mov     eax, dword ptr [esi + 0x368]
        cmp     eax, ebx
        jz      L_329b
        cmp     byte ptr [eax + 0x3c], bl
        jz      L_32bf
L_329b:
        mov     ecx, dword ptr [esi + 0x364]
        cmp     ecx, ebx
        jz      L_337b
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax + 0x34]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 0x40
        jz      L_337b
L_32bf:
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov ecx, dword ptr [DAT_007f24cc]
        call    FUN_00416110
        cmp     eax, ebx
        jz      L_32e3
        mov     dword ptr [eax + 0x4], 0x3
        mov     byte ptr [eax], bl
        jmp     L_32e5
L_32e3:
        xor     eax, eax
L_32e5:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x8], ecx
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax + 0xc], edx
        call    FUN_005dcd00
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov ecx, dword ptr [DAT_007f24cc]
        call    FUN_00416110
        cmp     eax, ebx
        jz      L_3320
        push    ebx
        push    0x7
        mov     ecx, eax
        call    FUN_005b3610
        jmp     L_3322
L_3320:
        xor     eax, eax
L_3322:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
        mov     dword ptr [eax + 0x8], ecx
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax + 0xc], edx
        mov     dword ptr [eax + 0x14], ebx
        call    FUN_005dcd00
        push    ebx
        call    FUN_00707e70
        fstp    qword ptr [esp + 0x10]
        mov ecx, dword ptr [DAT_007f24cc]
        call    FUN_00416110
        cmp     eax, ebx
        jz      L_3360
        push    ebx
        push    0x8
        mov     ecx, eax
        call    FUN_005b3610
        jmp     L_3362
L_3360:
        xor     eax, eax
L_3362:
        mov     ecx, dword ptr [esp + 0x10]
        mov     edx, dword ptr [esp + 0x14]
L_336a:
        mov     dword ptr [eax + 0x8], ecx
        push    eax
        mov     ecx, esi
        mov     dword ptr [eax + 0xc], edx
        mov     dword ptr [eax + 0x14], ebx
        call    FUN_005dcd00
L_337b:
        mov     eax, dword ptr [ebp + 0x8]
        push    edi
        push    eax
        mov     ecx, esi
        mov dword ptr [DAT_007f1f70], esi
        call    FUN_005dc4a0
        mov dword ptr [DAT_007f1f70], ebx
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }


}
