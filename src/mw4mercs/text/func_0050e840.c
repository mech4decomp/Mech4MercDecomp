/*
 * FUN_0050e840 (961 B) — Network/graphics options apply function.
 *
 * Applies network connection type/speed settings, then calls
 * many subsystem init functions.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int FUN_0040ecc0(void);
extern int FUN_0040edc0(void);
extern void FUN_00411c40(void);
extern void FUN_00411d10(void);
extern int FUN_0040eda0(void);
extern void FUN_00411f20(void);
extern void FUN_00591750(void);
extern void FUN_005918e0(void);
extern void FUN_005df1e0(void);
extern void FUN_005e1d40(void);
extern void FUN_00591a50(void);
extern void FUN_00591ea0(void);
extern void FUN_005998a0(void);
extern void FUN_00594cf0(void);
extern void FUN_00599bb0(void);
extern void FUN_00599d10(void);
extern void FUN_00599fa0(void);
extern void FUN_0059a6b0(void);
extern void FUN_0059a540(void);
extern void FUN_0059b6c0(void);
extern void FUN_0059c120(void);
extern void FUN_0059b040(void);
extern void FUN_0059e170(void);
extern void FUN_0059f220(void);
extern void FUN_005a01e0(void);
extern void FUN_005a0050(void);
extern void FUN_005a0d10(void);
extern void FUN_005a0ad0(void);
extern void FUN_005a1850(void);
extern void FUN_005a2fe0(void);
extern void FUN_005a33a0(void);
extern void FUN_005a3dd0(void);
extern void FUN_005a4730(void);
extern void FUN_005a4c20(void);
extern void FUN_005a4fd0(void);
extern void FUN_005a5b20(void);
extern void FUN_005a6670(void);
extern void FUN_005a6130(void);
extern void FUN_005a6cb0(void);
extern void FUN_005a71e0(void);
extern void FUN_005a7740(void);
extern void FUN_005a8040(void);
extern void FUN_005a8230(void);
extern void FUN_005a8c30(void);
extern void FUN_005a8630(void);
extern void FUN_005a9ac0(void);
extern void FUN_005a9f80(void);
extern void FUN_005aa3a0(void);
extern void FUN_005aa750(void);
extern void FUN_005aaa50(void);
extern void FUN_005aacf0(void);
extern void FUN_005ab350(void);
extern void FUN_005abbb0(void);
extern void FUN_005abd80(void);
extern void FUN_005ad440(void);
extern void FUN_005acea0(void);
extern void FUN_005af020(void);
extern void FUN_005af1b0(void);
extern void FUN_005af670(void);
extern void FUN_005afc80(void);
extern void FUN_005afad0(void);
extern void FUN_005b10a0(void);
extern void FUN_005b2120(void);
extern void FUN_005b40f0(void);
extern void FUN_005b39d0(void);
extern void FUN_005b68d0(void);
extern void FUN_005b6c70(void);
extern void FUN_005b7810(void);
extern void FUN_005b82e0(void);
extern void FUN_005b8400(void);
extern void FUN_005b8b30(void);
extern void FUN_005b8d30(void);
extern void FUN_005b90b0(void);
extern void FUN_005b8f70(void);
extern void FUN_005ba8b0(void);
extern void FUN_005bac70(void);
extern void FUN_005bb0b0(void);
extern void FUN_005baf10(void);
extern void FUN_005bb860(void);
extern void FUN_005bcd50(void);
extern void FUN_0052f510(void);
extern void FUN_005bf620(void);
extern void FUN_005bfe60(void);
extern void FUN_005bfd40(void);
extern void FUN_005c02f0(void);
extern void FUN_005c04e0(void);
extern void FUN_005c0f50(void);
extern void FUN_005cc1a0(void);
extern void FUN_005cd8c0(void);
extern void FUN_005d9e40(void);
extern void FUN_005d8070(void);
extern void FUN_005dac30(void);
extern void FUN_005ddf30(void);
extern void FUN_005e20c0(void);
extern void FUN_005e2520(void);
extern void FUN_005e29b0(void);
extern void FUN_005e2e40(void);
extern void FUN_005e3310(void);
extern void FUN_005e3fc0(void);
extern void FUN_005e3da0(void);
extern void FUN_005e6650(void);
extern void FUN_005e6c70(void);
extern void FUN_005e68a0(void);
extern void FUN_005e77a0(void);
extern void FUN_005e79b0(void);
extern void FUN_005e8280(void);
extern void FUN_005e8c70(void);
extern void FUN_005ea120(void);
extern void FUN_005eb9f0(void);
extern void FUN_005ec090(void);
extern void FUN_005ebd70(void);
extern void FUN_005ece30(void);
extern void FUN_005eec60(void);
extern void FUN_005eff20(void);
extern void FUN_00583250(void);
extern void FUN_005814e0(void);
extern void FUN_005f0670(void);
extern void FUN_005f0390(void);
extern void FUN_005f0b60(void);
extern void FUN_005498d0(void);
extern void FUN_00548fc0(void);
extern void FUN_005f2c40(void);
extern void FUN_005f3550(void);
extern void FUN_005f6dd0(void);
extern void FUN_005f7950(void);
extern void FUN_005fc260(void);
extern void FUN_005fc460(void);
extern void FUN_005fd630(void);
extern void FUN_006034e0(void);
extern void FUN_00603640(void);
extern void FUN_006039a0(void);
extern void FUN_006053e0(void);
extern void FUN_00605370(void);
extern void FUN_00606900(void);
extern void FUN_00606e20(void);
extern void FUN_00561290(void);
extern void FUN_00607e50(void);
extern void FUN_006f4850(void);

__declspec(naked) void FUN_0050e840(void)
{
    

extern int DAT_007b4678;
extern int DAT_007b4674;
extern int DAT_007b467c;
extern int DAT_007f1f7c;
extern int DAT_007dd234;
extern int DAT_007dd238;
extern int g_50ec04;   // jump table 1 @ 0x50EC04
extern int g_50ec18;   // jump table 2 @ 0x50EC18
__asm {
push    edi
        mov     edi, dword ptr [esp + 0x08]
        test    edi, edi
        jz      l_skip_network
        push    esi
        push    0x00777ff4
        mov     ecx, edi
        call    FUN_0040ecc0
        mov     esi, eax
        test    esi, esi
        jnz     l_have_net_opts
        push    0x00777ff4
        mov     ecx, edi
        call    FUN_0040edc0
        mov     esi, eax

    l_have_net_opts:
        mov eax, dword ptr [DAT_007b4678]
        cmp     eax, 0x04
        ja      l_skip_conn_type_switch
        jmp     dword ptr [eax*4 + g_50ec04]

        push    0x00777fec
        jmp     l_conn_type_call
        push    0x00777fe4
        jmp     l_conn_type_call
        push    0x00777fdc
        jmp     l_conn_type_call
        push    0x00777fd4
        jmp     l_conn_type_call
        push    0x00777fd0

    l_conn_type_call:
        push    0x0076c1bc
        mov     ecx, esi
        call    FUN_00411c40

    l_skip_conn_type_switch:
        mov eax, dword ptr [DAT_007b4674]
        cmp     eax, 0x09
        ja      l_skip_speed_switch
        jmp     dword ptr [eax*4 + g_50ec18]

        push    0x00777fbc
        jmp     l_speed_call
        push    0x00777fb8
        jmp     l_speed_call
        push    0x00777fb4
        jmp     l_speed_call
        push    0x00777fb0
        jmp     l_speed_call
        push    0x00777fac
        jmp     l_speed_call
        push    0x00777fa8
        jmp     l_speed_call
        push    0x00777fa4
        jmp     l_speed_call
        push    0x00777f9c
        jmp     l_speed_call
        push    0x00777f94
        jmp     l_speed_call
        push    0x00777f8c

    l_speed_call:
        push    0x00777fc0
        mov     ecx, esi
        call    FUN_00411c40

    l_skip_speed_switch:
        mov eax, dword ptr [DAT_007b467c]
        push    eax
        push    0x00777f80
        mov     ecx, esi
        call    FUN_00411d10
        push    0x0076d9ec
        mov     ecx, edi
        call    FUN_0040eda0
        xor     ecx, ecx
        mov cl, byte ptr [DAT_007f1f7c]
        push    ecx
        push    0x00777f78
        mov     ecx, eax
        call    FUN_00411f20
        pop     esi

    l_skip_network:
        call    FUN_00591750
        call    FUN_005918e0
        call    FUN_005df1e0
        call    FUN_005e1d40
        call    FUN_00591a50
        call    FUN_00591ea0
        call    FUN_005998a0
        call    FUN_00594cf0
        call    FUN_00599bb0
        call    FUN_00599d10
        call    FUN_00599fa0
        call    FUN_0059a6b0
        call    FUN_0059a540
        call    FUN_0059b6c0
        call    FUN_0059c120
        call    FUN_0059b040
        call    FUN_0059e170
        call    FUN_0059f220
        call    FUN_005a01e0
        call    FUN_005a0050
        call    FUN_005a0d10
        call    FUN_005a0ad0
        call    FUN_005a1850
        call    FUN_005a2fe0
        call    FUN_005a33a0
        call    FUN_005a3dd0
        call    FUN_005a4730
        call    FUN_005a4c20
        call    FUN_005a4fd0
        call    FUN_005a5b20
        call    FUN_005a6670
        call    FUN_005a6130
        call    FUN_005a6cb0
        call    FUN_005a71e0
        call    FUN_005a7740
        call    FUN_005a8040
        call    FUN_005a8230
        call    FUN_005a8c30
        call    FUN_005a8630
        call    FUN_005a9ac0
        call    FUN_005a9f80
        call    FUN_005aa3a0
        call    FUN_005aa750
        call    FUN_005aaa50
        call    FUN_005aacf0
        call    FUN_005ab350
        call    FUN_005abbb0
        call    FUN_005abd80
        call    FUN_005ad440
        call    FUN_005acea0
        call    FUN_005af020
        call    FUN_005af1b0
        call    FUN_005af670
        call    FUN_005afc80
        call    FUN_005afad0
        call    FUN_005b10a0
        call    FUN_005b2120
        call    FUN_005b40f0
        call    FUN_005b39d0
        call    FUN_005b68d0
        call    FUN_005b6c70
        call    FUN_005b7810
        call    FUN_005b82e0
        call    FUN_005b8400
        call    FUN_005b8b30
        call    FUN_005b8d30
        call    FUN_005b90b0
        call    FUN_005b8f70
        call    FUN_005ba8b0
        call    FUN_005bac70
        call    FUN_005bb0b0
        call    FUN_005baf10
        call    FUN_005bb860
        call    FUN_005bcd50
        call    FUN_0052f510
        call    FUN_005bf620
        call    FUN_005bfe60
        call    FUN_005bfd40
        call    FUN_005c02f0
        call    FUN_005c04e0
        call    FUN_005c0f50
        call    FUN_005cc1a0
        call    FUN_005cd8c0
        call    FUN_005d9e40
        call    FUN_005d8070
        call    FUN_005dac30
        call    FUN_005ddf30
        call    FUN_005e20c0
        call    FUN_005e2520
        call    FUN_005e29b0
        call    FUN_005e2e40
        call    FUN_005e3310
        call    FUN_005e3fc0
        call    FUN_005e3da0
        call    FUN_005e6650
        call    FUN_005e6c70
        call    FUN_005e68a0
        call    FUN_005e77a0
        call    FUN_005e79b0
        call    FUN_005e8280
        call    FUN_005e8c70
        call    FUN_005ea120
        call    FUN_005eb9f0
        call    FUN_005ec090
        call    FUN_005ebd70
        call    FUN_005ece30
        call    FUN_005eec60
        call    FUN_005eff20
        call    FUN_00583250
        call    FUN_005814e0
        call    FUN_005f0670
        call    FUN_005f0390
        call    FUN_005f0b60
        call    FUN_005498d0
        call    FUN_00548fc0
        call    FUN_005f2c40
        call    FUN_005f3550
        call    FUN_005f6dd0
        call    FUN_005f7950
        call    FUN_005fc260
        call    FUN_005fc460
        call    FUN_005fd630
        call    FUN_006034e0
        call    FUN_00603640
        call    FUN_006039a0
        call    FUN_006053e0
        call    FUN_00605370
        call    FUN_00606900
        call    FUN_00606e20
        call    FUN_00561290
        call    FUN_00607e50
        mov edx, dword ptr [DAT_007dd234]
        push    0x01
        push    edx
        call    FUN_006f4850
        mov eax, dword ptr [DAT_007dd238]
        push    0x01
        push    eax
        mov dword ptr [DAT_007dd234], 0x0
        call    FUN_006f4850
        mov dword ptr [DAT_007dd238], 0x0
        pop     edi
        ret
    }


}
