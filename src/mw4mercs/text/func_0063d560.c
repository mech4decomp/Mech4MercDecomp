/*
 * FUN_0063D560 (1399 B) — __thiscall (ECX = this), RET 0. Constructor that
 * registers a large set of GameData keys (via FUN_005614d0) and initializes
 * many fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00561430(void);
extern void __cdecl FUN_005614d0(void);
extern void __cdecl FUN_00561df0(void);
extern void __cdecl FUN_00641050(void);
extern void __cdecl FUN_00561a30(void);
extern void __cdecl FUN_005619f0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_00560190(void);
extern void __cdecl FUN_00560420(void);

extern int _DAT_007ddde0;            /* 0x007ddde0 */
extern unsigned char _DAT_007ddd78;  /* 0x007ddd78 */
extern int _DAT_007dab44;            /* 0x007dab44 */
extern int _DAT_007dab40;            /* 0x007dab40 */

__declspec(naked) void __fastcall FUN_0063d560(void)
{
    __asm {
        sub     esp, 0x1c
        mov     eax, dword ptr [_DAT_007ddde0]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx
        push    eax
        call    FUN_00561430
        push    0x43800000
        push    0x43800000
        push    0x42fe0000
        push    0x42fe0000
        push    0x42ee0000
        push    0x42e60000
        push    0x14
        push    0x792448
        mov     ecx, esi
        mov     dword ptr [esi], 0x792430
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
        push    0x42680000
        push    0x437e0000
        push    0x42480000
        push    0x43650000
        push    0x1e
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0
        mov     dword ptr [esp + 0xc], 0x14
        lea     ebx, [esi + 0x38]
        xor     edi, edi
l_63d76a:
        lea     ecx, [esp + 0xc]
        push    ecx
        lea     edx, [esp + 0x1c]
        push    edx
        mov     ecx, ebx
        call    FUN_00561df0
        mov     eax, dword ptr [eax]
        cmp     eax, dword ptr [ebx]
        mov     dword ptr [esp + 0x10], eax
        jz      l_63d78e
        mov     ecx, dword ptr [esp + 0xc]
        cmp     ecx, dword ptr [eax + 0x10]
        jge     l_63d7c5
l_63d78e:
        lea     edx, [esp + 0x14]
        push    edx
        lea     eax, [esp + 0x10]
        push    eax
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x1c], edi
        call    FUN_00641050
        push    eax
        push    ecx
        lea     edx, [esp + 0x18]
        mov     ecx, esp
        push    edx
        call    FUN_00561a30
        lea     eax, [esp + 0x24]
        push    eax
        mov     ecx, ebx
        call    FUN_005619f0
        mov     eax, dword ptr [eax]
        mov     dword ptr [esp + 0x10], eax
l_63d7c5:
        mov     ecx, dword ptr [eax + 0x14]
l_63d7c8:
        mov     dword ptr [ecx + 0x38], 0x1
        mov     eax, dword ptr [esp + 0xc]
        inc     eax
        cmp     eax, 0x1e
        mov     dword ptr [esp + 0xc], eax
        jle     l_63d76a
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
        push    0x42440000
        push    0x437e0000
        push    0x42240000
        push    0x43650000
        push    0x32
        push    0x792448
        mov     ecx, esi
        call    FUN_005614d0
        mov     dl, byte ptr [_DAT_007ddd78]
        mov     ecx, 0xc
        mov     dword ptr [esi + 0x20], 0x43180000
        mov     dword ptr [esi + 0x24], 0x43050000
        mov     dword ptr [esi + 0x28], edi
        mov     dword ptr [esi + 0xcc], edi
        mov     dword ptr [esi + 0xd4], edi
        mov     dword ptr [esi + 0x14], 0x44244000
        mov     dword ptr [esi + 0x18], 0x43e90000
        mov     dword ptr [esi + 0x1c], edi
        mov     dword ptr [esi + 0xb0], 0xe164e164
        mov     dword ptr [esi + 0xb4], 0xc8e1e100
        mov     dword ptr [esi + 0xb8], 0xafff9600
        mov     dword ptr [esi + 0xbc], 0x96ff3200
        mov     dword ptr [esi + 0xc0], 0x7dff3200
        mov     dword ptr [esi + 0xc4], 0x64000000
        mov     dword ptr [esi + 0x34], 0x9600af00
        mov     dword ptr [esi + 0xd0], edi
        mov     dword ptr [esi + 0xd8], edi
        mov     byte ptr [esi + 0x114], dl
        lea     eax, [esi + 0x50]
        mov     dword ptr [esp + 0xc], ecx
l_63da56:
        mov     dword ptr [eax + 0x90], edi
        mov     dword ptr [eax], edi
        mov     dword ptr [eax + 0x30], edi
        add     eax, 0x4
        dec     ecx
        jnz     l_63da56
        push    0x138
        mov     dword ptr [esi + 0x110], edi
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, edi
        jz      l_63da8a
        push    edi
        mov     ecx, eax
        call    FUN_00560190
        mov     ebx, eax
        jmp     l_63da8c
l_63da8a:
        xor     ebx, ebx
l_63da8c:
        mov     eax, dword ptr [_DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [_DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        push    edi
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    edi
        push    0x2dd
        mov     dword ptr [esi + 0xc8], ebx
        call    dword ptr [edx + 0x34]
        push    eax
        mov     ecx, ebx
        call    FUN_00560420
        mov     eax, dword ptr [ebx]
        push    edi
        mov     ecx, ebx
        call    dword ptr [eax + 0x4]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr [ebx + 0x104], 0xff49e749
        pop     ebx
        add     esp, 0x1c
        ret
    }
}
