/*
 * FUN_5e013200 (1122 B) — DirectDraw caps/format init (__fastcall, ECX=this).
 *
 * __fastcall, RET (no stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_5e77a834;
extern int g_5e77a838;
extern int g_5e77a840;
extern int g_5e77a57c;
extern int g_5e77a848;
extern int g_5e77a580;
extern int g_5e03892c;
extern int g_5e038930;
extern int g_5e038990;
extern int g_5e036008;

extern int __cdecl FUN_5e00e630(void);
extern int __cdecl FUN_5e00e640(void);
extern int __cdecl FUN_5e00e650(void);
extern int __cdecl FUN_5e00e350(void);
extern int __cdecl FUN_5e00e670(void);
extern int __cdecl FUN_5e00e610(void);
extern int __cdecl FUN_5e00e680(void);
extern int __cdecl FUN_5e00e620(void);
extern int __cdecl FUN_5e00eaa0(void);
extern int __cdecl FUN_5e00ead0(void);
extern int __cdecl FUN_5e00e600(void);
extern int __cdecl FUN_5e00e4e0(void);
extern int __cdecl FUN_5e00e3d0(void);
extern int __cdecl FUN_5e00e440(void);
extern int __cdecl FUN_5e00e480(void);
extern int __cdecl FUN_5e00e4b0(void);
extern int __cdecl FUN_5e00e400(void);
extern int __cdecl FUN_5e00e530(void);
extern int __cdecl FUN_5e00e580(void);
extern int __cdecl FUN_5e00e660(void);
extern int __cdecl FUN_5e00e380(void);
extern int __cdecl FUN_5e00e3a0(void);
extern int __cdecl FUN_5e00e3c0(void);
extern int __cdecl FUN_5e00eb00(void);

__declspec(naked) void __fastcall FUN_5e013200(void)
{
    __asm {
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        push    edi
        xor     ebx, ebx
        mov     edi, dword ptr [esi + 0x64]
        xor     ebp, ebp
        mov     ecx, edi
        mov     dword ptr [esi + 0x5c], ebx
        call    FUN_5e00e630
        test    eax, eax
        jz      L_27f
        mov     ecx, edi
        call    FUN_5e00e640
        cmp     eax, 0x2
        mov     ecx, edi
        jnz     L_251
        call    FUN_5e00e650
        cmp     eax, 0x2
        jnz     L_23c
        mov     dword ptr [esi + 0x5c], 0x16000
        jmp     L_27f
L_23c:
        mov     ecx, edi
        call    FUN_5e00e650
        cmp     eax, 0x6
        jnz     L_27f
        mov     dword ptr [esi + 0x5c], 0x20000
        jmp     L_27a
L_251:
        call    FUN_5e00e640
        cmp     eax, 0x5
        mov     ecx, edi
        jnz     L_269
        call    FUN_5e00e650
        cmp     eax, 0x6
        jnz     L_27f
        jmp     L_273
L_269:
        call    FUN_5e00e640
        cmp     eax, 0xc
        jnz     L_27f
L_273:
        mov     dword ptr [esi + 0x5c], 0x30000
L_27a:
        mov     ebp, 0x1
L_27f:
        mov     ecx, edi
        call    FUN_5e00e350
        test    eax, eax
        jz      L_29a
        mov     eax, dword ptr [esi + 0x5c]
        mov     ebp, 0x1
        or      eax, 0x40000
        mov     dword ptr [esi + 0x5c], eax
L_29a:
        mov     ecx, edi
        call    FUN_5e00e670
        test    eax, eax
        jz      L_2cb
        mov     eax, dword ptr [esi + 0x5c]
        mov     dword ptr [g_5e77a834], 0x1
        or      eax, 0x800000
        mov     dword ptr [esi + 0x5c], eax
        mov     eax, dword ptr [esi + 0x14]
        mov     dword ptr [g_5e77a838], eax
        add     eax, eax
        mov     dword ptr [g_5e77a840], eax
        jmp     L_2da
L_2cb:
        mov     ecx, dword ptr [esi + 0x14]
        mov     dword ptr [g_5e77a834], ebx
        mov     dword ptr [g_5e77a840], ecx
L_2da:
        mov     ecx, edi
        call    FUN_5e00e610
        test    eax, eax
        jz      L_1422
        mov     edx, dword ptr [esi + 0x5c]
        mov     ecx, edi
        or      edx, 0x240
        mov     dword ptr [esi + 0x5c], edx
        mov     ebx, edx
        call    FUN_5e00e680
        test    eax, eax
        jz      L_308
        or      bh, 0x8
        mov     dword ptr [esi + 0x5c], ebx
L_308:
        mov     ecx, edi
        call    FUN_5e00e620
        cmp     eax, 0x613
        mov     ebx, 0x6000
        ja      L_36b
        jz      L_345
        sub     eax, 0x22b
        jz      L_339
        sub     eax, 0xa
        jnz     L_65d
        mov     dword ptr [g_5e03892c], 0x5e028d0c
        jmp     L_38b
L_339:
        mov     dword ptr [g_5e03892c], 0x5e028cd1
        jmp     L_38b
L_345:
        mov     edx, dword ptr [esi + 0x5c]
        mov     ecx, dword ptr [g_5e77a57c]
        or      edx, 0x200020
        mov     dword ptr [g_5e03892c], 0x5e027b5a
        test    ecx, ecx
        mov     dword ptr [esi + 0x5c], edx
        mov     eax, edx
        jnz     L_38b
        or      eax, ebx
        jmp     L_388
L_36b:
        cmp     eax, 0x115c
        jnz     L_65d
        mov     eax, dword ptr [esi + 0x5c]
        mov     dword ptr [g_5e03892c], 0x5e027bba
        or      eax, 0x206020
L_388:
        mov     dword ptr [esi + 0x5c], eax
L_38b:
        mov     ecx, dword ptr [esi + 0x48]
        mov     eax, dword ptr [esi + 0x30]
        mov     edx, 0x10000
        sar     edx, cl
        cmp     eax, edx
        jz      L_39f
        or      dword ptr [esi + 0x5c], ebx
L_39f:
        mov     ecx, edi
        call    FUN_5e00eaa0
        test    eax, eax
        mov     ecx, edi
        jz      L_3d5
        call    FUN_5e00ead0
        test    eax, eax
        jz      L_3c1
        mov     dword ptr [g_5e038930], 0x5e0288d0
        jmp     L_401
L_3c1:
        mov     eax, dword ptr [esi + 0x5c]
        mov     dword ptr [g_5e038930], 0x5e027d2a
        or      eax, ebx
        mov     dword ptr [esi + 0x5c], eax
        jmp     L_401
L_3d5:
        call    FUN_5e00ead0
        test    eax, eax
        mov     eax, dword ptr [esi + 0x5c]
        jz      L_3f2
        or      eax, ebx
        mov     dword ptr [g_5e038930], 0x5e027caa
        mov     dword ptr [esi + 0x5c], eax
        jmp     L_401
L_3f2:
        or      eax, ebx
        mov     dword ptr [g_5e038930], 0x5e027c1a
        mov     dword ptr [esi + 0x5c], eax
L_401:
        mov     eax, dword ptr [g_5e77a834]
        test    eax, eax
        jz      L_416
        mov     dword ptr [g_5e038990], 0x5e029eda
        jmp     L_466
L_416:
        mov     dword ptr [g_5e038990], 0x5e028f92
        jmp     L_466
L_1422:
        mov     ecx, edi
        call    FUN_5e00e600
        test    eax, eax
        mov     eax, dword ptr [g_5e77a834]
        jnz     L_44e
        cmp     eax, ebx
        jz      L_442
        mov     dword ptr [g_5e038990], 0x5e027f6a
        jmp     L_466
L_442:
        mov     dword ptr [g_5e038990], 0x5e027f1a
        jmp     L_466
L_44e:
        cmp     eax, ebx
        mov     dword ptr [g_5e038990], 0x5e02803a
        jnz     L_466
        mov     dword ptr [g_5e038990], 0x5e027faa
L_466:
        mov     ebx, dword ptr [esi + 0x5c]
        test    bl, 0x60
        jz      L_538
        mov     ecx, edi
        call    FUN_5e00e4e0
        test    eax, eax
        jnz     L_538
        mov     ecx, edi
        call    FUN_5e00e3d0
        test    eax, eax
        jnz     L_541
        mov     ecx, edi
        call    FUN_5e00e440
        test    eax, eax
        jnz     L_538
        mov     ecx, edi
        call    FUN_5e00e480
        test    eax, eax
        jz      L_4db
        and     ebx, 0xffdbffdf
        mov     eax, ebx
        mov     dword ptr [esi + 0x5c], ebx
        and     eax, 0x30000
        cmp     eax, 0x20000
        jz      L_4c8
        cmp     eax, 0x30000
        jnz     L_4d1
L_4c8:
        and     ebx, 0xfffcffff
        mov     dword ptr [esi + 0x5c], ebx
L_4d1:
        mov     eax, dword ptr [esi + 0x5c]
        or      al, 0x8
        mov     dword ptr [esi + 0x5c], eax
        jmp     L_545
L_4db:
        mov     ecx, edi
        call    FUN_5e00e4b0
        test    eax, eax
        jz      L_50f
        and     ebx, 0xffdbffdf
        mov     eax, ebx
        mov     dword ptr [esi + 0x5c], ebx
        and     eax, 0x30000
        cmp     eax, 0x20000
        jz      L_504
        cmp     eax, 0x30000
        jnz     L_545
L_504:
        and     ebx, 0xfffcffff
        mov     dword ptr [esi + 0x5c], ebx
        jmp     L_545
L_50f:
        mov     ecx, edi
        call    FUN_5e00e400
        test    eax, eax
        jz      L_524
        test    bl, 0x20
        jz      L_538
        or      ebx, 0x8
        jmp     L_53e
L_524:
        mov     ecx, edi
        call    FUN_5e00e530
        test    eax, eax
        jnz     L_541
        mov     ecx, edi
        call    FUN_5e00e580
        jmp     L_541
L_538:
        or      ebx, 0x200018
L_53e:
        mov     dword ptr [esi + 0x5c], ebx
L_541:
        test    ebp, ebp
        jnz     L_54c
L_545:
        and     dword ptr [esi + 0x5c], 0xffdfffcf
L_54c:
        mov     ecx, edi
        call    FUN_5e00e660
        test    eax, eax
        jz      L_567
        mov     eax, dword ptr [esi + 0x5c]
        test    al, 0x8
        jz      L_567
        test    al, 0x40
        jz      L_567
        or      al, 0x2
        mov     dword ptr [esi + 0x5c], eax
L_567:
        mov     ecx, edi
        call    FUN_5e00e600
        test    eax, eax
        jz      L_581
        mov     eax, dword ptr [esi + 0x5c]
        test    al, 0x18
        jz      L_581
        or      eax, 0x404
        mov     dword ptr [esi + 0x5c], eax
L_581:
        mov     ecx, edi
        call    FUN_5e00e380
        test    eax, eax
        jz      L_593
        or      dword ptr [esi + 0x5c], 0x80101
L_593:
        mov     ecx, edi
        call    FUN_5e00e3a0
        test    eax, eax
        jz      L_5a5
        or      dword ptr [esi + 0x5c], 0x100101
L_5a5:
        mov     ecx, edi
        call    FUN_5e00e3c0
        test    eax, eax
        jz      L_626
        mov     eax, dword ptr [esi + 0x5c]
        or      ah, 0x30
        mov     dword ptr [esi + 0x5c], eax
        mov     ebx, eax
        mov     eax, dword ptr [edi + 0x4634]
        mov     ecx, eax
        mov     edx, eax
        shr     ecx, 0x2
        and     ecx, 0x3e
        and     edx, 0xf800
        or      ecx, edx
        and     eax, 0xf80000
        shr     ecx, 0x1
        shl     eax, 0x1
        or      ecx, eax
        mov     dword ptr [g_5e77a848], ecx
        mov     ecx, edi
        call    FUN_5e00eb00
        test    eax, eax
        mov     eax, dword ptr [g_5e77a848]
        jnz     L_60e
        mov     edx, eax
        mov     ecx, eax
        shr     edx, 0xa
        and     ecx, 0x1f
        and     edx, 0x1f
        xor     edx, ecx
        jnz     L_626
        mov     edx, eax
        shr     edx, 0x14
        cmp     ecx, edx
        jnz     L_626
L_60e:
        mov     ecx, eax
        shl     ecx, 0xa
        or      ecx, eax
        shl     ecx, 0xa
        or      ecx, eax
        or      bh, 0x80
        mov     dword ptr [g_5e77a848], ecx
        mov     dword ptr [esi + 0x5c], ebx
L_626:
        mov     eax, dword ptr [esi + 0x5c]
        test    eax, 0x202008
        jz      L_637
        test    eax, 0x202040
        jnz     L_63f
L_637:
        or      eax, 0x400080
        mov     dword ptr [esi + 0x5c], eax
L_63f:
        mov     eax, dword ptr [esi + 0x5c]
        mov     ecx, esi
        mov     edx, eax
        mov     dword ptr [g_5e77a580], eax
        shr     edx, 0x8
        and     edx, 0x1f
        mov     edx, dword ptr [edx*4 + g_5e036008]
        mov     dword ptr [esi + 0x60], edx
        call    edx
L_65d:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret
    }
}
