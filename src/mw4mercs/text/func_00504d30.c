/*
 * FUN_00504D30 (1331 B) — Sound channel setup (ChannelType, Sample, Volume, etc.)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) int func_00504D30(void)
{
    /* extern data/function symbols */
    extern void __cdecl FUN_00504ac0(void);
    extern void __cdecl FUN_00411bf0(void);
    extern void __cdecl FUN_004dd0a0(void);
    extern void __cdecl FUN_006fabf0(void);
    extern void __cdecl FUN_00412570(void);
    extern void __cdecl FUN_004125e0(void);
    extern void __cdecl FUN_00412740(void);
    extern void __cdecl FUN_0040d9b0(void);
    extern void __cdecl FUN_004d2000(void);
    extern void __cdecl FUN_00412780(void);
    extern void __cdecl FUN_00411ec0(void);
    extern void __cdecl FUN_00411d60(void);
    extern void __cdecl FUN_00416f60(void);
    extern void __cdecl FUN_004084e0(void);
    extern void __cdecl FUN_004d21c0(void);
    extern float DAT_00776cfc;
    extern float DAT_007b220c;
    extern float DAT_0076d064;
    extern int DAT_007dc7b8;
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xD8
        push    ebx
        push    esi
        push    edi
        mov     edi, [ebp+8]
        mov     esi, [edi]
        mov     eax, [esi]
        push    0x74
        mov     ecx, esi
        call    dword ptr [eax+0x14]
        push    edi
        call    FUN_00504ac0
        mov     edi, [edi+8]
        add     esp, 4
        push    0
        lea     ecx, [ebp-0x1C]
        push    ecx
        push    0x776E68
        mov     ecx, edi
        mov     dword ptr [ebp-0x1C], 0x770D3C
        call    FUN_00411bf0
        mov     edx, [ebp-0x1C]
        push    edx
        call    FUN_004dd0a0
        add     esp, 4
        test    eax, eax
        mov     [ebp-0x48], eax
        jge     channel_type_ok
        mov     eax, [ebp-0x1C]
        mov     ecx, [edi+0x14]
        mov     edx, [edi+0x10]
        push    eax
        mov     eax, [edx]
        push    ecx
        push    eax
        push    0x776E34
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        je      channel_type_ok
        int     3

channel_type_ok:
        mov     edx, [esi]
        push    4
        lea     eax, [ebp-0x48]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        push    1
        lea     ecx, [ebp-0x10]
        push    ecx
        push    0x776E2C
        mov     ecx, edi
        call    FUN_00411bf0
        mov     edx, [ebp-0x10]
        push    edx
        lea     ecx, [ebp-8]
        call    FUN_00412570
        mov     eax, [ebp-8]
        push    0x77354C
        push    eax
        lea     ecx, [ebp-0x50]
        call    FUN_004125e0
        push    eax
        lea     ecx, [ebp-8]
        call    FUN_00412740
        lea     ecx, [ebp-0x50]
        call    FUN_0040d9b0
        mov     ecx, [ebp-8]
        push    1
        push    ecx
        lea     ecx, [ebp-0x94]
        call    FUN_004d2000
        mov     eax, [ebp-0x58]
        test    eax, eax
        je      sample_fail
        mov     eax, [ebp-0x78]
        test    eax, eax
        ja      sample_ok

sample_fail:
        mov     edx, [ebp-0x10]
        mov     eax, [edi+0x14]
        mov     ecx, [edi+0x10]
        push    edx
        mov     edx, [ecx]
        push    eax
        push    edx
        push    0x776DE8
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        je      sample_assert_done
        int     3

sample_assert_done:
        mov     eax, [esi]
        push    4
        push    0x7DB0AC
        mov     ecx, esi
        call    dword ptr [eax+0x24]
        jmp     after_sample

sample_ok:
        mov     edx, [esi]
        push    4
        lea     eax, [ebp-0x54]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]

after_sample:
        push    0
        lea     ecx, [ebp-0x10]
        push    ecx
        push    0x776DD8
        mov     ecx, edi
        call    FUN_00411bf0
        mov     edx, [ebp-0x10]
        push    edx
        lea     ecx, [ebp-8]
        call    FUN_00412780
        mov     eax, [ebp-8]
        push    0x77354C
        push    eax
        lea     ecx, [ebp-0x50]
        call    FUN_004125e0
        push    eax
        lea     ecx, [ebp-8]
        call    FUN_00412740
        lea     ecx, [ebp-0x50]
        call    FUN_0040d9b0
        mov     ecx, [ebp-8]
        push    1
        push    ecx
        lea     ecx, [ebp-0xD8]
        call    FUN_004d2000
        mov     eax, [ebp-0x9C]
        test    eax, eax
        je      lowend_fail
        mov     eax, [ebp-0xBC]
        test    eax, eax
        ja      lowend_ok

lowend_fail:
        mov     edx, [ebp-0x10]
        mov     eax, [edi+0x14]
        mov     ecx, [edi+0x10]
        push    edx
        mov     edx, [ecx]
        push    eax
        push    edx
        push    0x776D8C
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        je      lowend_assert_done
        int     3

lowend_assert_done:
        mov     eax, [esi]
        push    4
        push    0x7DB0AC
        mov     ecx, esi
        call    dword ptr [eax+0x24]
        jmp     after_lowend

lowend_ok:
        mov     edx, [esi]
        push    4
        lea     eax, [ebp-0x98]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]

after_lowend:
        mov     edx, [ebp-0x94]
        push    4
        lea     ecx, [ebp-0x3C]
        push    ecx
        or      ebx, -1
        lea     ecx, [ebp-0x94]
        mov     word ptr [ebp-0x3C], bx
        mov     word ptr [ebp-0x3A], 0
        call    dword ptr [edx+0x20]
        mov     edx, [eax]
        push    4
        lea     ecx, [ebp-0x4C]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     edx, [eax]
        push    1
        lea     ecx, [ebp-3]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     edx, [eax]
        push    1
        lea     ecx, [ebp-2]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        mov     al, byte ptr [ebp-2]
        test    al, al
        jne     _3d_check_done
        mov     edx, [ebp-0x10]
        mov     eax, [edi+0x14]
        mov     ecx, [edi+0x10]
        push    edx
        mov     edx, [ecx]
        push    eax
        push    edx
        push    0x776D5C
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        je      _3d_check_done
        int     3

_3d_check_done:
        push    0
        lea     eax, [ebp+0xB]
        push    eax
        push    0x776A98
        mov     ecx, edi
        mov     byte ptr [ebp+0xB], 0
        call    FUN_00411ec0
        mov     dl, byte ptr [ebp+0xB]
        xor     ecx, ecx
        test    dl, dl
        setne   cl
        push    4
        lea     eax, [ebp-0x44]
        push    eax
        mov     [ebp-0x44], ecx
        mov     edx, [esi]
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        push    0
        lea     ecx, [ebp-0x28]
        push    ecx
        push    0x770C60
        mov     ecx, edi
        mov     dword ptr [ebp-0x28], 0x3F800000
        call    FUN_00411d60
        mov     edx, [esi]
        push    4
        lea     eax, [ebp-0x28]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        push    0
        lea     ecx, [ebp-0x40]
        push    ecx
        push    0x776D54
        mov     ecx, edi
        mov     dword ptr [ebp-0x40], 0x3F800000
        call    FUN_00411d60
        mov     edx, [esi]
        push    4
        lea     eax, [ebp-0x40]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        push    0
        lea     ecx, [ebp-0x14]
        push    ecx
        push    0x776D44
        mov     ecx, edi
        mov     dword ptr [ebp-0x14], 0x3F000000
        call    FUN_00411d60
        mov     edx, [esi]
        push    4
        lea     eax, [ebp-0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        push    0
        lea     ecx, [ebp-0x14]
        push    ecx
        push    0x776D34
        mov     ecx, edi
        mov     dword ptr [ebp-0x14], 0x3F4CCCCD
        call    FUN_00411d60
        mov     edx, [esi]
        push    4
        lea     eax, [ebp-0x14]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        push    0
        lea     ecx, [ebp-0x18]
        push    ecx
        push    0x776D24
        mov     ecx, edi
        mov     dword ptr [ebp-0x18], 0x41F00000
        call    FUN_00411d60
        fld     dword ptr [DAT_00776cfc]
        fmul    dword ptr [ebp-0x18]
        fstp    dword ptr [ebp-0x18]
        mov     edx, [esi]
        push    4
        lea     eax, [ebp-0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x24]
        push    0
        lea     ecx, [ebp-0x30]
        push    ecx
        push    0x776D18
        mov     ecx, edi
        mov     dword ptr [ebp-0x30], 0x41200000
        call    FUN_00411d60
        push    0
        lea     edx, [ebp-0x34]
        push    edx
        push    0x775644
        mov     ecx, edi
        mov     dword ptr [ebp-0x34], 0
        call    FUN_00411d60
        push    0
        lea     eax, [ebp-0x20]
        push    eax
        push    0x776D0C
        mov     ecx, edi
        mov     dword ptr [ebp-0x20], 0x42C80000
        call    FUN_00411d60
        mov     ecx, [ebp-0x20]
        push    0
        lea     edx, [ebp-0x38]
        push    edx
        mov     [ebp-0x38], ecx
        push    0x77563C
        mov     ecx, edi
        call    FUN_00411d60
        mov     eax, [esi]
        push    4
        lea     ecx, [ebp-0x34]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x24]
        mov     edx, [eax]
        push    4
        lea     ecx, [ebp-0x30]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x24]
        mov     edx, [eax]
        push    4
        lea     ecx, [ebp-0x20]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x24]
        mov     edx, [eax]
        push    4
        lea     ecx, [ebp-0x38]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x24]
        push    0
        lea     edx, [ebp-0x24]
        push    edx
        mov     [ebp-0x2C], ebx
        push    0x776994
        mov     ecx, edi
        mov     bl, 1
        call    FUN_00411bf0
        test    al, al
        je      status_done
        mov     eax, [ebp-0x24]
        push    eax
        lea     ecx, [ebp-0x50]
        call    FUN_00412570
        mov     edx, [ebp+0xC]
        lea     ecx, [ebp-0x50]
        push    ecx
        lea     ecx, [edx+0x5C]
        call    FUN_00416f60
        mov     ecx, [ebp-0x50]
        test    ecx, ecx
        mov     [ebp+0xC], eax
        je      status_parse_done
        mov     dl, byte ptr [ecx-1]
        dec     ecx
        dec     dl
        mov     [ecx], dl
        jne     status_parse_done
        push    ecx
        call    FUN_004084e0
        mov     eax, [ebp+0xC]
        add     esp, 4

status_parse_done:
        test    eax, eax
        jne     status_has_value
        mov     eax, [ebp-0x24]
        mov     ecx, [edi+0x14]
        mov     edx, [edi+0x10]
        push    eax
        mov     eax, [edx]
        push    ecx
        push    eax
        push    0x77696C
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        je      status_unknown
        int     3

status_unknown:
        xor     bl, bl
        jmp     status_done

status_has_value:
        cmp     dword ptr [eax+0x18], 1
        je      status_type_ok
        mov     ecx, [ebp-0x24]
        mov     edx, [edi+0x14]
        mov     eax, [edi+0x10]
        push    ecx
        mov     ecx, [eax]
        push    edx
        push    ecx
        push    0x776938
        call    FUN_006fabf0
        add     esp, 0x10
        test    eax, eax
        je      status_wrong_type
        int     3

status_wrong_type:
        xor     bl, bl
        jmp     status_done

status_type_ok:
        mov     edx, [eax+0x10]
        mov     [ebp-0x2C], edx

status_done:
        mov     eax, [esi]
        push    4
        lea     ecx, [ebp-0x2C]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x24]
        push    0
        lea     edx, [ebp-1]
        push    edx
        push    0x775458
        mov     ecx, edi
        mov     byte ptr [ebp-1], 0
        call    FUN_00411ec0
        mov     eax, [esi]
        push    1
        lea     ecx, [ebp-1]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x24]
        push    0
        lea     edx, [ebp-0xC]
        push    edx
        push    0x776D00
        mov     ecx, edi
        mov     dword ptr [ebp-0xC], 0x41000000
        call    FUN_00411d60
        fld     dword ptr [ebp-0xC]
        fcomp   dword ptr [DAT_007b220c]
        fnstsw  ax
        test    ah, 0x41
        jne     framerate_clamp
        fld     dword ptr [DAT_0076d064]
        fdiv    dword ptr [ebp-0xC]
        fstp    dword ptr [ebp-0xC]
        jmp     framerate_done

framerate_clamp:
        mov     dword ptr [ebp-0xC], 0

framerate_done:
        mov     eax, [esi]
        push    4
        lea     ecx, [ebp-0xC]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x24]
        mov     edx, dword ptr [DAT_007dc7b8]
        neg     bl
        lea     ecx, [ebp-0xD8]
        sbb     ebx, ebx
        and     ebx, edx
        call    FUN_004d21c0
        lea     ecx, [ebp-0x94]
        call    FUN_004d21c0
        mov     eax, [ebp-8]
        test    eax, eax
        je      done
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jne     done
        push    eax
        call    FUN_004084e0
        add     esp, 4

done:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
