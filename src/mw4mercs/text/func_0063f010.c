/*
 * FUN_0063f010 (2354 B) — __thiscall HUD object constructor. Sets up a
 * HUD vtable, initializes member fields, and registers a large set of
 * HUD elements ("hud\\hud4", "hud\\hud4x", "hud\\hud5v", "hud\\hud5m")
 * via FUN_005614d0 with float geometry, plus several FPU loops.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007ddde0;
extern float g_0076d978;
extern float g_00792480;
extern float g_0079247c;
extern float g_0078f208;
extern float g_00770168;
extern unsigned char g_007ddd79;

extern void FUN_00561430(void);
extern void FUN_0041fc80(void);
extern void FUN_005614d0(void);
extern void FUN_00561df0(void);
extern void FUN_00561a30(void);
extern void FUN_005619f0(void);
extern void FUN_004084d0(void);
extern void FUN_00560190(void);
extern void FUN_00560aa0(void);
extern void FUN_00560420(void);

__declspec(naked) void FUN_0063f010(void)
{
    __asm {
        sub     esp, 0x1c
        mov     eax, dword ptr [g_007ddde0]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00561430
        lea     edi, [esi+0x54]
        xor     ebx, ebx
        push    ebx
        mov     ecx, edi
        call    FUN_0041fc80
        mov     cl, byte ptr [esp+0x13]
        push    0x43800000
        push    0x43800000
        push    0x42b80000
        push    0x41d00000
        push    0x422c0000
        mov     dword ptr [edi], 0x773328
        push    0x40c00000
        mov     dword ptr [esi+0x5c], ebx
        mov     byte ptr [esi+0x64], cl
        mov     ebp, 0x1
        push    ebp
        mov     dword ptr [esi+0x64], ebx
        push    0x792448
        mov     ecx, esi
        mov     dword ptr [esi+0x60], ebx
        mov     dword ptr [esi], 0x792490
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42b60000
        push    0x42440000
        push    0x422c0000
        push    0x41e80000
        push    ebx
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42280000
        push    0x41400000
        push    0x41300000
        push    ebx
        push    0x3
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42280000
        push    0x42600000
        push    0x41300000
        push    0x422c0000
        push    0x2
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42040000
        push    0x422c0000
        push    0x40e00000
        push    0x42040000
        push    0x5
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42040000
        push    0x41b00000
        push    0x40e00000
        push    0x41400000
        push    0x4
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42240000
        push    0x42040000
        push    0x41200000
        push    0x41b00000
        push    0x6
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    0x7
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x41200000
        push    0x42040000
        push    ebx
        push    0x41b00000
        push    0x8
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    0x9
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    ebx
        push    ebx
        push    ebx
        push    ebx
        push    0xa
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42b20000
        push    0x425c0000
        push    0x42820000
        push    ebx
        push    0xb
        push    0x792484
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42100000
        push    0x42180000
        push    ebx
        push    ebx
        push    0xd
        push    0x792484
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x427c0000
        push    0x42500000
        push    0x42180000
        push    ebx
        push    0x10
        push    0x792484
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42fe0000
        push    0x42fe0000
        push    0x42ee0000
        push    0x42e60000
        push    0x14
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42fe0000
        push    0x430d0000
        push    0x42ee0000
        push    0x43010000
        push    0x15
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42fe0000
        push    0x431b0000
        push    0x42ee0000
        push    0x430f0000
        push    0x16
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42fe0000
        push    0x43290000
        push    0x42ee0000
        push    0x431d0000
        push    0x17
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42fe0000
        push    0x43370000
        push    0x42ee0000
        push    0x432b0000
        push    0x18
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42fe0000
        push    0x43450000
        push    0x42ee0000
        push    0x43390000
        push    0x19
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42fe0000
        push    0x43530000
        push    0x42ee0000
        push    0x43470000
        push    0x1a
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42fe0000
        push    0x43610000
        push    0x42ee0000
        push    0x43550000
        push    0x1b
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42fe0000
        push    0x43710000
        push    0x42ee0000
        push    0x43650000
        push    0x1c
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42fe0000
        push    0x437f0000
        push    0x42ee0000
        push    0x43730000
        push    0x1d
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42fe0000
        push    0x43290000
        push    0x42ee0000
        push    0x431d0000
        push    0x1e
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        mov     dword ptr [esp+0x14], 0x14
        lea     edi, [esi+0x38]
loop_45f:
        lea     edx, [esp+0x14]
        push    edx
        lea     eax, [esp+0x20]
        push    eax
        mov     ecx, edi
        call    FUN_00561df0
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [edi]
        mov     ecx, dword ptr [esp+0x14]
        mov     dword ptr [esp+0x18], eax
        jz      loc_483
        cmp     ecx, dword ptr [eax+0x10]
        jge     loc_4af
loc_483:
        mov     dword ptr [esp+0x24], ecx
        lea     ecx, [esp+0x24]
        push    ecx
        push    ecx
        lea     edx, [esp+0x20]
        mov     ecx, esp
        push    edx
        mov     dword ptr [esp+0x34], ebx
        call    FUN_00561a30
        lea     eax, [esp+0x28]
        push    eax
        mov     ecx, edi
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp+0x18], eax
loc_4af:
        mov     ecx, dword ptr [eax+0x14]
        mov     dword ptr [ecx+0x38], ebp
        mov     eax, dword ptr [esp+0x14]
        inc     eax
        cmp     eax, 0x1e
        mov     dword ptr [esp+0x14], eax
        jle     loop_45f

        push    0x43800000
        push    0x43800000
        push    0x42ec0000
        push    0x42fe0000
        push    0x42dc0000
        push    0x42e60000
        push    0x28
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42ec0000
        push    0x430d0000
        push    0x42dc0000
        push    0x43010000
        push    0x29
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42ec0000
        push    0x431b0000
        push    0x42dc0000
        push    0x430f0000
        push    0x2a
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42ec0000
        push    0x43290000
        push    0x42dc0000
        push    0x431d0000
        push    0x2b
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42ec0000
        push    0x43370000
        push    0x42dc0000
        push    0x432b0000
        push    0x2c
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42ec0000
        push    0x43450000
        push    0x42dc0000
        push    0x43390000
        push    0x2d
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42ec0000
        push    0x43530000
        push    0x42dc0000
        push    0x43470000
        push    0x2e
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42ec0000
        push    0x43610000
        push    0x42dc0000
        push    0x43550000
        push    0x2f
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42ec0000
        push    0x43710000
        push    0x42dc0000
        push    0x43650000
        push    0x30
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42ec0000
        push    0x437f0000
        push    0x42dc0000
        push    0x43730000
        push    0x31
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        push    0x43800000
        push    0x43800000
        push    0x42ec0000
        push    0x43290000
        push    0x42dc0000
        push    0x431d0000
        push    0x32
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0

        xor     eax, eax
        mov     dword ptr [esp+0x14], eax
loop_6ad:
        fild    dword ptr [esp+0x14]
        push    0x43800000
        push    0x43800000
        push    ecx
        fmul    dword ptr [g_0076d978]
        add     eax, 0x64
        fld     st(0)
        fadd    dword ptr [g_00792480]
        fstp    dword ptr [esp]
        push    0x42b00000
        push    ecx
        fadd    dword ptr [g_0079247c]
        mov     ecx, esi
        fstp    dword ptr [esp]
        push    0x42700000
        push    eax
        push    0x792448
        call    FUN_005614d0
        mov     eax, dword ptr [esp+0x14]
        inc     eax
        cmp     eax, 0x3a
        mov     dword ptr [esp+0x14], eax
        jl      loop_6ad

        xor     eax, eax
        mov     dword ptr [esp+0x14], eax
loop_705:
        fild    dword ptr [esp+0x14]
        push    0x43800000
        push    0x43800000
        push    ecx
        fmul    dword ptr [g_0076d978]
        add     eax, 0xa0
        fld     st(0)
        fadd    dword ptr [g_00792480]
        fstp    dword ptr [esp]
        push    0x42b00000
        push    ecx
        fadd    dword ptr [g_0079247c]
        mov     ecx, esi
        fstp    dword ptr [esp]
        push    0x42700000
        push    eax
        push    0x792484
        call    FUN_005614d0
        mov     eax, dword ptr [esp+0x14]
        inc     eax
        cmp     eax, 0x9
        mov     dword ptr [esp+0x14], eax
        jl      loop_705

        xor     eax, eax
        mov     dword ptr [esp+0x14], eax
loop_75f:
        fild    dword ptr [esp+0x14]
        push    0x43800000
        push    0x43800000
        push    ecx
        fmul    dword ptr [g_0076d978]
        add     eax, 0xaa
        fld     st(0)
        fadd    dword ptr [g_0078f208]
        fstp    dword ptr [esp]
        push    0x42180000
        push    ecx
        fadd    dword ptr [g_00770168]
        mov     ecx, esi
        fstp    dword ptr [esp]
        push    0x41200000
        push    eax
        push    0x792470
        call    FUN_005614d0
        mov     eax, dword ptr [esp+0x14]
        inc     eax
        cmp     eax, 0x5
        mov     dword ptr [esp+0x14], eax
        jl      loop_75f

        xor     eax, eax
        mov     dword ptr [esp+0x14], eax
loop_7b9:
        fild    dword ptr [esp+0x14]
        push    0x43800000
        push    0x43800000
        push    ecx
        fmul    dword ptr [g_0076d978]
        add     eax, 0xaf
        fld     st(0)
        fadd    dword ptr [g_0078f208]
        fstp    dword ptr [esp]
        push    0x42180000
        push    ecx
        fadd    dword ptr [g_00770168]
        mov     ecx, esi
        fstp    dword ptr [esp]
        push    0x41200000
        push    eax
        push    0x792464
        call    FUN_005614d0
        mov     eax, dword ptr [esp+0x14]
        inc     eax
        cmp     eax, 0x4
        mov     dword ptr [esp+0x14], eax
        jl      loop_7b9

        push    0x138
        mov     dword ptr [esi+0xd8], 0xe164e164
        mov     dword ptr [esi+0xdc], 0xc8e1e100
        mov     dword ptr [esi+0xe0], 0xafff9600
        mov     dword ptr [esi+0xe4], 0x96ff3200
        mov     dword ptr [esi+0xe8], 0x7dff3200
        mov     dword ptr [esi+0xec], 0x64000000
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      loc_866
        push    ebx
        mov     ecx, eax
        call    FUN_00560190
        mov     ebp, eax
        jmp     loc_868
loc_866:
        xor     ebp, ebp
loc_868:
        push    0x138
        mov     dword ptr [esi+0x68], ebp
        mov     dword ptr [ebp+0x10c], ebx
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      loc_88d
        mov     ecx, eax
        call    FUN_00560aa0
        mov     edi, eax
        jmp     loc_88f
loc_88d:
        xor     edi, edi
loc_88f:
        mov     dword ptr [edi+0x10c], ebx
        mov     edx, dword ptr [edi]
        push    0x2
        mov     ecx, edi
        mov     dword ptr [esi+0x6c], edi
        call    dword ptr [edx+0x4]
        push    ebx
        push    ebx
        push    0x76b768
        mov     ecx, ebp
        mov     dword ptr [esi+0x70], ebx
        mov     dword ptr [esi+0x74], 0xbf800000
        call    FUN_00560420
        push    ebx
        push    ebx
        push    0x76b768
        mov     ecx, edi
        call    FUN_00560420
        mov     ecx, 0xc
        mov     dword ptr [esi+0xf0], ebx
        mov     dword ptr [esi+0xf8], ebx
        mov     dword ptr [esi+0x34], 0x9600af00
        mov     dword ptr [esi+0xf4], ebx
        mov     dword ptr [esi+0xfc], ebx
        lea     eax, [esi+0x78]
        mov     dword ptr [esp+0x14], ecx
loop_8f2:
        mov     dword ptr [eax+0x8c], ebx
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax+0x30], ebx
        add     eax, 0x4
        dec     ecx
        jnz     loop_8f2
        mov     eax, dword ptr [esi+0x60]
        mov     ecx, dword ptr [esi+0x5c]
        mov     edx, eax
        sub     edx, eax
        sar     edx, 0x3
        cmp     edx, ebx
        jle     loc_927
loop_914:
        mov     edi, dword ptr [eax]
        mov     dword ptr [ecx], edi
        mov     edi, dword ptr [eax+0x4]
        mov     dword ptr [ecx+0x4], edi
        add     eax, 0x8
        add     ecx, 0x8
        dec     edx
        jnz     loop_914
loc_927:
        mov     al, byte ptr [g_007ddd79]
        pop     edi
        mov     byte ptr [esi+0x50], al
        mov     byte ptr [esi+0x135], bl
        mov     dword ptr [esi+0x60], ecx
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x1c
        ret
    }
}
