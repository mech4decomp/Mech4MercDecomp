/*
 * FUN_0050e250 (1513 B) — Game initialization function.
 *
 * Calls ~100 subsystem init functions, then parses network and
 * graphics options from config.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __cdecl _stricmp(const char *, const char *);
extern void FUN_006f4710(void);
extern void FUN_006f4950(void);
extern void FUN_00607e40(void);
extern void FUN_00561280(void);
extern void FUN_00606db0(void);
extern void FUN_00606870(void);
extern void FUN_00605330(void);
extern void FUN_006053a0(void);
extern void FUN_00603940(void);
extern void FUN_006035f0(void);
extern void FUN_00603490(void);
extern void FUN_005fd530(void);
extern void FUN_005fc210(void);
extern void FUN_005fc2f0(void);
extern void FUN_005f74b0(void);
extern void FUN_005f6c80(void);
extern void FUN_005f2bf0(void);
extern void FUN_005f2d50(void);
extern void FUN_00548f70(void);
extern void FUN_005490f0(void);
extern void FUN_005f0af0(void);
extern void FUN_005f0340(void);
extern void FUN_005f04c0(void);
extern void FUN_00581490(void);
extern void FUN_005816f0(void);
extern void FUN_005efdb0(void);
extern void FUN_005ee820(void);
extern void FUN_005ecbd0(void);
extern void FUN_005ebd20(void);
extern void FUN_005ebee0(void);
extern void FUN_005eb900(void);
extern void FUN_005e9db0(void);
extern void FUN_005e8a80(void);
extern void FUN_005e81b0(void);
extern void FUN_005e7930(void);
extern void FUN_005e7720(void);
extern void FUN_005e6850(void);
extern void FUN_005e6a40(void);
extern void FUN_005e65d0(void);
extern void FUN_005e3d50(void);
extern void FUN_005e3e50(void);
extern void FUN_005e3240(void);
extern void FUN_005e2dc0(void);
extern void FUN_005e2930(void);
extern void FUN_005e24a0(void);
extern void FUN_005e2040(void);
extern void FUN_005e1c70(void);
extern void FUN_005df160(void);
extern void FUN_005ddef0(void);
extern void FUN_005daae0(void);
extern void FUN_005d8030(void);
extern void FUN_005d9e30(void);
extern void FUN_005cd850(void);
extern void FUN_005cc130(void);
extern void FUN_005c0ee0(void);
extern void FUN_005c0470(void);
extern void FUN_005c0280(void);
extern void FUN_005bfcf0(void);
extern void FUN_005bfdf0(void);
extern void FUN_005bf5e0(void);
extern void FUN_0052e160(void);
extern void FUN_005bcc70(void);
extern void FUN_005bb820(void);
extern void FUN_005baec0(void);
extern void FUN_005bafc0(void);
extern void FUN_005bac00(void);
extern void FUN_005ba830(void);
extern void FUN_005b8f20(void);
extern void FUN_005b9020(void);
extern void FUN_005b8c30(void);
extern void FUN_005b8a70(void);
extern void FUN_005b8390(void);
extern void FUN_005b8290(void);
extern void FUN_005b77a0(void);
extern void FUN_005b6c30(void);
extern void FUN_005b6850(void);
extern void FUN_005b3980(void);
extern void FUN_005b3b50(void);
extern void FUN_005b20b0(void);
extern void FUN_005b1020(void);
extern void FUN_005afa80(void);
extern void FUN_005afc00(void);
extern void FUN_005af5f0(void);
extern void FUN_005af140(void);
extern void FUN_005aef60(void);
extern void FUN_005ace50(void);
extern void FUN_005ad2f0(void);
extern void FUN_005abd40(void);
extern void FUN_005abaf0(void);
extern void FUN_005ab240(void);
extern void FUN_005aac70(void);
extern void FUN_005aa980(void);
extern void FUN_005aa6e0(void);
extern void FUN_005aa320(void);
extern void FUN_005a9e10(void);
extern void FUN_005a9a40(void);
extern void FUN_005a85e0(void);
extern void FUN_005a88b0(void);
extern void FUN_005a8130(void);
extern void FUN_005a7fd0(void);
extern void FUN_005a7640(void);
extern void FUN_005a7130(void);
extern void FUN_005a6c30(void);
extern void FUN_005a60e0(void);
extern void FUN_005a6330(void);
extern void FUN_005a5a20(void);
extern void FUN_005a4f50(void);
extern void FUN_005a4ba0(void);
extern void FUN_005a46b0(void);
extern void FUN_005a3d50(void);
extern void FUN_005a3140(void);
extern void FUN_005a2fa0(void);
extern void FUN_005a1810(void);
extern void FUN_005a0a80(void);
extern void FUN_005a0bb0(void);
extern void FUN_005a0000(void);
extern void FUN_005a0160(void);
extern void FUN_0059f1e0(void);
extern void FUN_0059e130(void);
extern void FUN_0059c0e0(void);
extern void FUN_0059b680(void);
extern void FUN_0059afc0(void);
extern void FUN_0059a3c0(void);
extern void FUN_0059a570(void);
extern void FUN_00599f20(void);
extern void FUN_00599ca0(void);
extern void FUN_00599b40(void);
extern void FUN_00599820(void);
extern void FUN_00594c90(void);
extern void FUN_00591da0(void);
extern void FUN_005919d0(void);
extern void FUN_00591860(void);
extern void FUN_00591690(void);
extern int FUN_0040ecc0(void);
extern void FUN_00411bf0(void);
extern void FUN_00412570(void);
extern void FUN_00411cb0(void);
extern void FUN_00411ec0(void);
extern void __stdcall FUN_004084e0(void *ptr);
extern void FUN_006f49a0(void);

__declspec(naked) void FUN_0050e250(void)
{
    

extern int DAT_00849304;
extern int DAT_007dd238;
extern int DAT_007dd234;
extern int DAT_0076b2ac;
extern int DAT_007b4678;
extern int DAT_007b4674;
extern int DAT_007b467c;
extern int DAT_007b3cc8;
__asm {
        mov eax, dword ptr [DAT_00849304]
        sub     esp, 0x08
        push    eax
        push    0x00
        push    0x00778010
        call    FUN_006f4710
        push    eax
        push    0x00
        push    0x00778004
        mov dword ptr [DAT_007dd238], eax
        call    FUN_006f4710
        push    eax
        mov dword ptr [DAT_007dd234], eax
        call    FUN_006f4950
        call    FUN_00607e40
        call    FUN_00561280
        call    FUN_00606db0
        call    FUN_00606870
        call    FUN_00605330
        call    FUN_006053a0
        call    FUN_00603940
        call    FUN_006035f0
        call    FUN_00603490
        call    FUN_005fd530
        call    FUN_005fc210
        call    FUN_005fc2f0
        call    FUN_005f74b0
        call    FUN_005f6c80
        call    FUN_005f2bf0
        call    FUN_005f2d50
        call    FUN_00548f70
        call    FUN_005490f0
        call    FUN_005f0af0
        call    FUN_005f0340
        call    FUN_005f04c0
        call    FUN_00581490
        call    FUN_005816f0
        call    FUN_005efdb0
        call    FUN_005ee820
        call    FUN_005ecbd0
        call    FUN_005ebd20
        call    FUN_005ebee0
        call    FUN_005eb900
        call    FUN_005e9db0
        call    FUN_005e8a80
        call    FUN_005e81b0
        call    FUN_005e7930
        call    FUN_005e7720
        call    FUN_005e6850
        call    FUN_005e6a40
        call    FUN_005e65d0
        call    FUN_005e3d50
        call    FUN_005e3e50
        call    FUN_005e3240
        call    FUN_005e2dc0
        call    FUN_005e2930
        call    FUN_005e24a0
        call    FUN_005e2040
        call    FUN_005e1c70
        call    FUN_005df160
        call    FUN_005ddef0
        call    FUN_005daae0
        call    FUN_005d8030
        call    FUN_005d9e30
        call    FUN_005cd850
        call    FUN_005cc130
        call    FUN_005c0ee0
        call    FUN_005c0470
        call    FUN_005c0280
        call    FUN_005bfcf0
        call    FUN_005bfdf0
        call    FUN_005bf5e0
        call    FUN_0052e160
        call    FUN_005bcc70
        call    FUN_005bb820
        call    FUN_005baec0
        call    FUN_005bafc0
        call    FUN_005bac00
        call    FUN_005ba830
        call    FUN_005b8f20
        call    FUN_005b9020
        call    FUN_005b8c30
        call    FUN_005b8a70
        call    FUN_005b8390
        call    FUN_005b8290
        call    FUN_005b77a0
        call    FUN_005b6c30
        call    FUN_005b6850
        call    FUN_005b3980
        call    FUN_005b3b50
        call    FUN_005b20b0
        call    FUN_005b1020
        call    FUN_005afa80
        call    FUN_005afc00
        call    FUN_005af5f0
        call    FUN_005af140
        call    FUN_005aef60
        call    FUN_005ace50
        call    FUN_005ad2f0
        call    FUN_005abd40
        call    FUN_005abaf0
        call    FUN_005ab240
        call    FUN_005aac70
        call    FUN_005aa980
        call    FUN_005aa6e0
        call    FUN_005aa320
        call    FUN_005a9e10
        call    FUN_005a9a40
        call    FUN_005a85e0
        call    FUN_005a88b0
        call    FUN_005a8130
        call    FUN_005a7fd0
        call    FUN_005a7640
        call    FUN_005a7130
        call    FUN_005a6c30
        call    FUN_005a60e0
        call    FUN_005a6330
        call    FUN_005a5a20
        call    FUN_005a4f50
        call    FUN_005a4ba0
        call    FUN_005a46b0
        call    FUN_005a3d50
        call    FUN_005a3140
        call    FUN_005a2fa0
        call    FUN_005a1810
        call    FUN_005a0a80
        call    FUN_005a0bb0
        call    FUN_005a0000
        call    FUN_005a0160
        call    FUN_0059f1e0
        call    FUN_0059e130
        call    FUN_0059c0e0
        call    FUN_0059b680
        call    FUN_0059afc0
        call    FUN_0059a3c0
        call    FUN_0059a570
        call    FUN_00599f20
        call    FUN_00599ca0
        call    FUN_00599b40
        call    FUN_00599820
        call    FUN_00594c90
        call    FUN_00591da0
        call    FUN_005919d0
        call    FUN_00591860
        call    FUN_00591690
        mov     ecx, dword ptr [esp + 0x0c]
        test    ecx, ecx
        jz      l_skip_network
        push    esi
        push    edi
        push    0x00777ff4
        call    FUN_0040ecc0
        mov     edi, eax
        test    edi, edi
        jz      l_skip_graphics
        push    0x00
        lea     ecx, [esp + 0x0c]
        push    ecx
        push    0x0076c1bc
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x00
        call    FUN_00411bf0
        test    al, al
        mov esi, dword ptr [DAT_0076b2ac]
        jz      l_skip_conn_type

        mov     edx, dword ptr [esp + 0x08]
        push    edx
        lea     ecx, [esp + 0x10]
        call    FUN_00412570
        mov     eax, dword ptr [esp + 0x08]
        push    0x00777fec
        push    eax
        call    esi
        add     esp, 0x08
        test    eax, eax
        jnz     l_check_isdn
        mov dword ptr [DAT_007b4678], eax
        jmp     l_conn_type_done

    l_check_isdn:
        mov     ecx, dword ptr [esp + 0x08]
        push    0x00777fe4
        push    ecx
        call    esi
        add     esp, 0x08
        test    eax, eax
        jnz     l_check_xdsl
        mov dword ptr [DAT_007b4678], 0x1
        jmp     l_conn_type_done

    l_check_xdsl:
        mov     edx, dword ptr [esp + 0x08]
        push    0x00777fdc
        push    edx
        call    esi
        add     esp, 0x08
        test    eax, eax
        jnz     l_check_cable
        mov dword ptr [DAT_007b4678], 0x2
        jmp     l_conn_type_done

    l_check_cable:
        mov     eax, dword ptr [esp + 0x08]
        push    0x00777fd4
        push    eax
        call    esi
        add     esp, 0x08
        test    eax, eax
        jnz     l_check_lan
        mov dword ptr [DAT_007b4678], 0x3
        jmp     l_conn_type_done

    l_check_lan:
        mov     ecx, dword ptr [esp + 0x08]
        push    0x00777fd0
        push    ecx
        call    esi
        add     esp, 0x08
        test    eax, eax
        jnz     l_conn_type_done
        mov dword ptr [DAT_007b4678], 0x4

    l_conn_type_done:
        mov     eax, dword ptr [esp + 0x0c]
        test    eax, eax
        jz      l_skip_conn_type
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_conn_type
        push    eax
        call    FUN_004084e0
        add     esp, 0x04

    l_skip_conn_type:
        push    0x00
        lea     edx, [esp + 0x0c]
        push    edx
        push    0x00777fc0
        mov     ecx, edi
        mov     dword ptr [esp + 0x14], 0x00
        call    FUN_00411bf0
        test    al, al
        jz      l_skip_conn_speed

        mov     eax, dword ptr [esp + 0x08]
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_00412570
        mov     ecx, dword ptr [esp + 0x08]
        push    0x00777fbc
        push    ecx
        call    esi
        add     esp, 0x08
        test    eax, eax
        jnz     l_speed_28
        mov dword ptr [DAT_007b4674], eax
        jmp     l_speed_done

    l_speed_28:
        mov     edx, dword ptr [esp + 0x08]
        push    0x00777fb8
        push    edx
        call    esi
        add     esp, 0x08
        test    eax, eax
        jnz     l_speed_56
        mov dword ptr [DAT_007b4674], 0x1
        jmp     l_speed_done

    l_speed_56:
        mov     eax, dword ptr [esp + 0x08]
        push    0x00777fb4
        push    eax
        call    esi
        add     esp, 0x08
        test    eax, eax
        jnz     l_speed_64
        mov dword ptr [DAT_007b4674], 0x2
        jmp     l_speed_done

    l_speed_64:
        mov     ecx, dword ptr [esp + 0x08]
        push    0x00777fb0
        push    ecx
        call    esi
        add     esp, 0x08
        test    eax, eax
        jnz     l_speed_128
        mov dword ptr [DAT_007b4674], 0x3
        jmp     l_speed_done

    l_speed_128:
        mov     edx, dword ptr [esp + 0x08]
        push    0x00777fac
        push    edx
        call    esi
        add     esp, 0x08
        test    eax, eax
        jnz     l_speed_384
        mov dword ptr [DAT_007b4674], 0x4
        jmp     l_speed_done

    l_speed_384:
        mov     eax, dword ptr [esp + 0x08]
        push    0x00777fa8
        push    eax
        call    esi
        add     esp, 0x08
        test    eax, eax
        jnz     l_speed_768
        mov dword ptr [DAT_007b4674], 0x5
        jmp     l_speed_done

    l_speed_768:
        mov     ecx, dword ptr [esp + 0x08]
        push    0x00777fa4
        push    ecx
        call    esi
        add     esp, 0x08
        test    eax, eax
        jnz     l_speed_1500
        mov dword ptr [DAT_007b4674], 0x6
        jmp     l_speed_done

    l_speed_1500:
        mov     edx, dword ptr [esp + 0x08]
        push    0x00777f9c
        push    edx
        call    esi
        add     esp, 0x08
        test    eax, eax
        jnz     l_speed_10000
        mov dword ptr [DAT_007b4674], 0x7
        jmp     l_speed_done

    l_speed_10000:
        mov     eax, dword ptr [esp + 0x08]
        push    0x00777f94
        push    eax
        call    esi
        add     esp, 0x08
        test    eax, eax
        jnz     l_speed_100000
        mov dword ptr [DAT_007b4674], 0x8
        jmp     l_speed_done

    l_speed_100000:
        mov     ecx, dword ptr [esp + 0x08]
        push    0x00777f8c
        push    ecx
        call    esi
        add     esp, 0x08
        test    eax, eax
        jnz     l_speed_done
        mov dword ptr [DAT_007b4674], 0x9

    l_speed_done:
        mov     eax, dword ptr [esp + 0x0c]
        test    eax, eax
        jz      l_skip_conn_speed
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_conn_speed
        push    eax
        call    FUN_004084e0
        add     esp, 0x04

    l_skip_conn_speed:
        push    0x00
        push    0x007b467c
        push    0x00777f80
        mov     ecx, edi
        call    FUN_00411cb0
        mov eax, dword ptr [DAT_007b467c]
        cmp     eax, 0x400
        mov dword ptr [DAT_007b3cc8], eax
        jle     l_check_min
        mov dword ptr [DAT_007b3cc8], 0x400
        jmp     l_skip_graphics

    l_check_min:
        cmp     eax, 0x80
        jge     l_skip_graphics
        mov dword ptr [DAT_007b3cc8], 0x80

    l_skip_graphics:
        mov     esi, dword ptr [esp + 0x14]
        push    0x0076d9ec
        mov     ecx, esi
        call    FUN_0040ecc0
        test    eax, eax
        jz      l_skip_noblend
        push    0x00
        push    0x007f1f7c
        push    0x00777f78
        mov     ecx, eax
        call    FUN_00411ec0

    l_skip_noblend:
        push    0x0076d9ec
        mov     ecx, esi
        call    FUN_0040ecc0
        test    eax, eax
        pop     edi
        pop     esi
        jz      l_skip_network
        push    0x00
        push    0x007b5230
        push    0x00777f68
        mov     ecx, eax
        call    FUN_00411ec0

    l_skip_network:
        call    FUN_006f49a0
        add     esp, 0x08
        ret
    }


}
