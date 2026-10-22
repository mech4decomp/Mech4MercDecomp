/*
 * FUN_005046A0 (693 B) — Camera/scene viewport parameter setup
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int func_005046A0(void)
{
    

/* extern data/function symbols */
extern void __cdecl FUN_1005033df(void);
extern void __cdecl FUN_100412546(void);
extern void __cdecl FUN_1004b83e7(void);
extern void __cdecl FUN_1004af221(void);
extern void __cdecl FUN_1004b9954(void);
extern int DAT_00776b48;
extern void __cdecl FUN_100411cf7(void);
extern void __cdecl FUN_100411cce(void);
extern int DAT_0076c5b0;
extern int DAT_0076d064;
extern void __cdecl FUN_100411c71(void);
extern void __cdecl FUN_100411c14(void);
extern void __cdecl FUN_100411bb9(void);
extern void __cdecl FUN_100411cc1(void);
extern void __cdecl FUN_100411c9b(void);
extern void __cdecl FUN_100411b12(void);
extern int DAT_007dc824;
extern void __cdecl FUN_100408241(void);
__asm {
sub     esp, 0x58
        push    ebx
        push    esi
        push    edi
        mov     edi, [esp+0x68]
        mov     esi, [edi]
        mov     eax, [esi]
        push    0x30
        mov     ecx, esi
        call    dword ptr [eax+0x14]
        push    edi
        call FUN_1005033df
        mov     edi, [edi+8]
        add     esp, 4
        test    eax, eax
        push    0x776BD0
        lea     ecx, [esp+0x2C]
        setne   bl
        call FUN_100412546
        lea     ecx, [esp+0x28]
        push    ecx
        push    edi
        lea     ecx, [esp+0x34]
        call FUN_1004b83e7
        push    esi
        call FUN_1004af221
        add     esp, 4
        push    esi
        lea     ecx, [esp+0x30]
        call FUN_1004b9954
        mov edx, dword ptr [DAT_00776b48]
        push    0
        lea     eax, [esp+0x28]
        push    eax
        push    0x776BC0
        mov     ecx, edi
        mov     [esp+0x30], edx
        call FUN_100411cf7
        mov     edx, [esi]
        push    4
        lea     eax, [esp+0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        push    0
        lea     ecx, [esp+0x18]
        push    ecx
        push    0x776BAC
        mov     ecx, edi
        mov     dword ptr [esp+0x20], 0x3F800000
        call FUN_100411cce
        fld     dword ptr [esp+0x14]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je      vpx_clamp_high
        mov     dword ptr [esp+0x14], 0
        jmp     vpx_done

vpx_clamp_high:
        fld     dword ptr [esp+0x14]
        fcomp dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne     vpx_done
        mov     dword ptr [esp+0x14], 0x3F800000

vpx_done:
        mov     edx, [esi]
        push    4
        lea     eax, [esp+0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        push    0
        lea     ecx, [esp+0x1C]
        push    ecx
        push    0x776B98
        mov     ecx, edi
        mov     dword ptr [esp+0x24], 0x3F800000
        call FUN_100411c71
        fld     dword ptr [esp+0x18]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je      vpy_clamp_high
        mov     dword ptr [esp+0x18], 0
        jmp     vpy_done

vpy_clamp_high:
        fld     dword ptr [esp+0x18]
        fcomp dword ptr [DAT_0076d064]
        fnstsw  ax
        test    ah, 0x41
        jne     vpy_done
        mov     dword ptr [esp+0x18], 0x3F800000

vpy_done:
        mov     edx, [esi]
        push    4
        lea     eax, [esp+0x1C]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        push    0
        lea     ecx, [esp+0x20]
        push    ecx
        push    0x776B88
        mov     ecx, edi
        mov     dword ptr [esp+0x28], 0x3F800000
        call FUN_100411c14
        fld     dword ptr [esp+0x1C]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je      vpw_clamp_high
        mov     dword ptr [esp+0x1C], 0
        jmp     vpw_done

vpw_clamp_high:
        fld     dword ptr [esp+0x1C]
        fcomp   dword ptr [esp+0x14]
        fnstsw  ax
        test    ah, 0x41
        jne     vpw_done
        mov     edx, [esp+0x14]
        mov     [esp+0x1C], edx

vpw_done:
        mov     eax, [esi]
        push    4
        lea     ecx, [esp+0x20]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x24]
        push    0
        lea     edx, [esp+0x24]
        push    edx
        push    0x776B78
        mov     ecx, edi
        mov     dword ptr [esp+0x2C], 0x3F800000
        call FUN_100411bb9
        fld     dword ptr [esp+0x20]
        fcomp dword ptr [DAT_0076c5b0]
        fnstsw  ax
        test    ah, 1
        je      vph_clamp_high
        mov     dword ptr [esp+0x20], 0
        jmp     vph_done

vph_clamp_high:
        fld     dword ptr [esp+0x20]
        fcomp   dword ptr [esp+0x18]
        fnstsw  ax
        test    ah, 0x41
        jne     vph_done
        mov     eax, [esp+0x18]
        mov     [esp+0x20], eax

vph_done:
        mov     edx, [esi]
        push    4
        lea     eax, [esp+0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        push    0
        lea     ecx, [esp+0x6C]
        push    ecx
        push    0x776B64
        mov     ecx, edi
        mov     byte ptr [esp+0x74], 1
        call FUN_100411cc1
        mov     edx, [esi]
        push    1
        lea     eax, [esp+0x6C]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        push    0
        lea     ecx, [esp+0x13]
        push    ecx
        push    0x776B5C
        mov     ecx, edi
        mov     byte ptr [esp+0x1B], 1
        call FUN_100411c9b
        mov     edx, [esi]
        push    1
        lea     eax, [esp+0x13]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        push    0
        lea     ecx, [esp+0x14]
        push    ecx
        push    0x776B50
        mov     ecx, edi
        mov     dword ptr [esp+0x1C], 0
        call FUN_100411b12
        fld     dword ptr [esp+0x10]
        fcomp dword ptr [DAT_0076c5b0]
        fld     dword ptr [esp+0x10]
        fmul    dword ptr [esp+0x10]
        fnstsw  ax
        test    ah, 1
        je      lod_skip_neg
        fchs

lod_skip_neg:
        push    4
        fstp    dword ptr [esp+0x14]
        mov     edx, [esi]
        lea     eax, [esp+0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        mov edx, dword ptr [DAT_007dc824]
        mov     eax, [esp+0x28]
        neg     bl
        sbb     ebx, ebx
        and     ebx, edx
        test    eax, eax
        je      cleanup_done
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     cleanup_done
        push    eax
        call FUN_100408241
        add     esp, 4

cleanup_done:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        add     esp, 0x58
        ret
    }


}
