/*
 * FUN_004E7270 (512 B) — __thiscall (ret 8). Gameplay update routine with
 * FPU math: reads globals [0x7dab44]/[0x7dab40], compares floats against
 * constants, adjusts [esi+0x14] velocity, dispatches via vtable offsets
 * 0x84/0x88/0x10/0x14.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_7dab44;   /* 0x7dab44 */
extern int   g_7dab40;   /* 0x7dab40 */
extern float g_76c5b0;   /* 0x76c5b0 */
extern float g_77431c;   /* 0x77431c */
extern float g_774318;   /* 0x774318 */
extern float g_76d064;   /* 0x76d064 */
extern float g_76d584;   /* 0x76d584 */

extern void __cdecl FUN_00707E70(void);
extern void __cdecl FUN_004E7470(void);

__declspec(naked) void FUN_004E7270(void)
{
    __asm {
        sub     esp, 8
        mov     eax, dword ptr [g_7dab44]
        mov     edx, dword ptr [g_7dab40]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     edx, dword ptr [ecx + 0x14]
        xor     edx, 0x85739531
        mov     al, byte ptr [edx + 0x17fc]
        test    al, al
        push    edi
        mov     dword ptr [esp + 0xc], 0
        mov     dword ptr [esp + 8], 0
        je      L_4E742D
        fld     dword ptr [esi + 0x14]
        mov     edi, dword ptr [esp + 0x18]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne     L_4E7393
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 8], eax
        cmp     dword ptr [esi + 0x38], 3
        jne     L_4E7343
        mov     eax, dword ptr [esi + 0x3c]
        cmp     eax, -1
        jle     L_4E7343
        cmp     eax, 0xa
        jge     L_4E7343
        push    0
        call    FUN_00707E70
        fcomp   qword ptr [esi + 0x44]
        fnstsw  ax
        test    ah, 1
        je      L_4E7343
        cmp     byte ptr [edi + 0x1c], 0xb
        je      L_4E7343
        mov     ecx, dword ptr [esi + 0x18]
        test    ecx, ecx
        je      L_4E7306
        fld     dword ptr [ecx]
        fsub    dword ptr [esp + 0x14]
        fstp    dword ptr [ecx]
L_4E7306:
        fld     dword ptr [esi + 0x14]
        fsub    dword ptr [esp + 0x14]
        fcom    dword ptr [g_77431c]
        fst     dword ptr [esi + 0x14]
        fnstsw  ax
        test    ah, 1
        je      L_4E732D
        test    ecx, ecx
        je      L_4E732D
        fld     dword ptr [g_77431c]
        __emit 0xD8 /* __emit: MSVC6 encodes fsub st(1),st(0) as DC E9; ref needs D8 E1 */
        __emit 0xE1
        fadd    dword ptr [ecx]
        fstp    dword ptr [ecx]
L_4E732D:
        fcomp   dword ptr [g_774318]
        fnstsw  ax
        test    ah, 1
        je      L_4E7363
        mov     dword ptr [esi + 0x14], 0x3db851ec
        jmp     L_4E7363
L_4E7343:
        mov     eax, dword ptr [esi + 0x18]
        test    eax, eax
        mov     ecx, dword ptr [esi + 0x14]
        mov     dword ptr [esp + 0xc], ecx
        je      L_4E7359
        fld     dword ptr [eax]
        fsub    dword ptr [esp + 0x14]
        fstp    dword ptr [eax]
L_4E7359:
        fld     dword ptr [esi + 0x14]
        fsub    dword ptr [esp + 0x14]
        fstp    dword ptr [esi + 0x14]
L_4E7363:
        push    edi
        mov     ecx, esi
        call    FUN_004E7470
        cmp     byte ptr [esi + 0x4c], 1
        mov     ecx, dword ptr [esi + 0x2c]
        jne     L_4E7380
        mov     edx, dword ptr [ecx]
        push    7
        call    dword ptr [edx + 0x84]
        jmp     L_4E738C
L_4E7380:
        mov     edx, dword ptr [esi + 0x38]
        mov     eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x84]
L_4E738C:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
L_4E7393:
        fld     dword ptr [esi + 0x14]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        je      L_4E7464
        mov     ecx, dword ptr [esi + 0x30]
        test    ecx, ecx
        je      L_4E7403
        mov     eax, dword ptr [esi + 0x50]
        fld     dword ptr [g_76c5b0]
        sub     eax, 0
        je      L_4E73C9
        dec     eax
        jne     L_4E73D1
        fstp    st(0)
        fld     dword ptr [g_76d064]
        jmp     L_4E73D1
L_4E73C9:
        fstp    st(0)
        fld     dword ptr [g_76d584]
L_4E73D1:
        fld     dword ptr [ecx + 0x14]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 0x41
        jne     L_4E7401
        fld     dword ptr [esp + 0x14]
        mov     edx, dword ptr [ecx]
        fsub    dword ptr [esp + 0xc]
        push    edi
        push    ecx
        __emit 0xD8 /* __emit: MSVC6 encodes fmul st(1),st(0) as DC C9; ref needs D8 C9 */
        __emit 0xC9
        fstp    dword ptr [esp]
        fstp    st(0)
        call    dword ptr [edx + 0x10]
        fadd    dword ptr [esp + 8]
        fstp    dword ptr [esp + 8]
        jmp     L_4E7403
L_4E7401:
        fstp    st(0)
L_4E7403:
        mov     ecx, dword ptr [esi + 0x2c]
        mov     eax, dword ptr [ecx + 0x10]
        shr     eax, 0x13
        test    al, 1
        jne     L_4E7464
        movsx   eax, byte ptr [edi + 0x1c]
        mov     edx, dword ptr [ecx]
        push    eax
        mov     eax, dword ptr [esi + 0x38]
        push    eax
        call    dword ptr [edx + 0x88]
        pop     edi
        fld     dword ptr [esp + 4]
        pop     esi
        add     esp, 8
        ret     8
L_4E742D:
        mov     ecx, dword ptr [esp + 0x18]
        push    ecx
        mov     ecx, esi
        call    FUN_004E7470
        cmp     byte ptr [esi + 0x4c], 1
        mov     ecx, dword ptr [esi + 0x2c]
        jne     L_4E7458
        mov     edx, dword ptr [ecx]
        push    7
        call    dword ptr [edx + 0x84]
        fld     dword ptr [esp + 8]
        pop     edi
        pop     esi
        add     esp, 8
        ret     8
L_4E7458:
        mov     edx, dword ptr [esi + 0x38]
        mov     eax, dword ptr [ecx]
        push    edx
        call    dword ptr [eax + 0x84]
L_4E7464:
        fld     dword ptr [esp + 8]
        pop     edi
        pop     esi
        add     esp, 8
        ret     8
    }
}
