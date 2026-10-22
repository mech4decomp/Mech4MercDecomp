/*
 * FUN_0058F350 (852 B) — __thiscall (ECX = this), RET 8. Gameplay object
 * update/state machine.
 *
 * Checks a state flag in this+0x10, and depending on this+0x160 dispatches
 * through several branches: config lookups (via globals 0x7dab40/0x7dab44
 * XOR-obfuscated pointers), string formatting (FUN_00563550/FUN_00563c80),
 * a jump-table dispatch on this+0x940 (table at 0x58F6A8), and virtual
 * calls. Ends by resetting fields and calling FUN_004da620.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int   g_7dab44;
extern int   g_7dab40;

extern void __cdecl FUN_0058f6c0(void);
extern void __cdecl FUN_00559be0(void);
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_004ceeb0(void);
extern void __cdecl FUN_0075db4a(void);   /* __ftol */
extern void __cdecl FUN_00563550(void);
extern void __cdecl FUN_00563c80(void);
extern void __cdecl FUN_005e1340(void);
extern void __cdecl FUN_0054b9d0(void);
extern void __cdecl FUN_005a30d0(void);
extern void __cdecl FUN_005f8fa0(void);
extern void __cdecl FUN_005fa300(void);
extern void __cdecl FUN_004da2f0(void);
extern void __cdecl FUN_005a7e40(void);
extern void __cdecl FUN_004db240(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004da1f0(void);
extern void __cdecl FUN_004da5d0(void);
extern void __cdecl FUN_00559bb0(void);
extern void __cdecl FUN_004da620(void);

__declspec(naked) void FUN_0058F350(void)
{
    __asm {
        push    ecx
        push    ebp
        mov     ebp, ecx
        mov     eax, dword ptr [ebp + 0x10]
        shr     eax, 0x13
        test    al, 1
        jne     L_58f66f
        cmp     dword ptr [ebp + 0x160], -0x4b
        push    esi
        push    edi
        je      L_58f4e6
        call    FUN_0058f6c0
        mov     esi, dword ptr [ebp + 0x3b0]
        test    esi, esi
        je      L_58f3a4
        push    3
        mov     ecx, esi
        call    FUN_00559be0
        push    0x1b
        mov     ecx, esi
        call    FUN_00559be0
        push    0x22
        mov     ecx, esi
        call    FUN_00559be0
        push    0x28
        mov     ecx, esi
        call    FUN_00559be0
L_58f3a4:
        mov     ecx, dword ptr [g_7dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [g_7dab40]
        mov     edx, dword ptr [eax + 0xc]
        xor     edx, 0x85739531
        mov     cl, byte ptr [edx + 0x16]
        test    cl, cl
        push    ebx
        je      L_58f4ba
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     dl, byte ptr [ecx + 0x17]
        test    dl, dl
        je      L_58f4ba
        mov     ecx, dword ptr [eax + 0x14]
        xor     edx, edx
        mov     dl, byte ptr [ebp + 0x15c]
        lea     edi, [ebp + 0x15c]
        xor     ecx, 0x85739531
        xor     ebx, ebx
        mov     esi, edx
        push    esi
        call    FUN_004cdfa0
        mov     edx, dword ptr [ebp + 0x5d0]
        cmp     edx, -1
        je      L_58f413
        add     edx, 0xff
        mov     dword ptr [esp + 0x10], edx
        jmp     L_58f41c
L_58f413:
        xor     ecx, ecx
        mov     cl, byte ptr [ebp + 0x14]
        mov     dword ptr [esp + 0x10], ecx
L_58f41c:
        test    eax, eax
        je      L_58f46c
        push    edi
        mov     ecx, eax
        call    FUN_004ceeb0
        test    eax, eax
        je      L_58f46c
        mov     edx, dword ptr [eax + 4]
        cmp     dword ptr [edx], 0x429
        jne     L_58f46c
        mov     ecx, dword ptr [eax + 0x5d0]
        cmp     ecx, -1
        je      L_58f448
        lea     esi, [ecx + 0xff]
L_58f448:
        test    esi, esi
        jle     L_58f46c
        fld     dword ptr [eax + 0x3b8]
        call    FUN_0075db4a
        fld     dword ptr [ebp + 0x3b8]
        mov     edi, eax
        call    FUN_0075db4a
        mov     ebx, eax
        sub     ebx, edi
        jns     L_58f46c
        xor     ebx, ebx
L_58f46c:
        mov     eax, dword ptr [ebp + 0x160]
        cmp     eax, -0x32
        jne     L_58f491
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    0x782394
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        add     esp, 0xc
        jmp     L_58f4ba
L_58f491:
        test    eax, eax
        jge     L_58f49f
        mov     ecx, dword ptr [esp + 0x1c]
        lea     eax, [ecx + 0xc8]
L_58f49f:
        mov     edx, dword ptr [esp + 0x10]
        push    ebx
        push    eax
        push    edx
        push    esi
        push    0x78237c
        call    FUN_00563550
        push    eax
        call    FUN_00563c80
        add     esp, 0x18
L_58f4ba:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0x20]
        push    3
        lea     eax, [ebp + 0x14]
        push    eax
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        lea     eax, [ebp + 0x15c]
        push    eax
        call    dword ptr [edx + 0xac]
        pop     ebx
L_58f4e6:
        push    ebp
        call    FUN_005e1340
        mov     ecx, dword ptr [ebp + 0x3b0]
        add     esp, 4
        test    ecx, ecx
        mov     dword ptr [ebp + 0x8d8], 0
        je      L_58f511
        mov     byte ptr [ecx + 0x6bc], 0
        je      L_58f511
        call    FUN_0054b9d0
L_58f511:
        cmp     dword ptr [ebp + 0x160], -0x4b
        je      L_58f589
        mov     eax, dword ptr [ebp + 0x940]
        cmp     eax, 4
        ja      L_58f54d
        __emit 0xFF          /* JMP [EAX*4+0x58F6A8] (FF 24 85) -- MSVC6 re-bases SIB via EBX */
        __emit 0x24
        __emit 0x85
        __emit 0xA8
        __emit 0xF6
        __emit 0x58
        __emit 0x00
        push    0
        push    4
        jmp     L_58f542
        push    0
        push    3
        jmp     L_58f542
        push    0
        push    2
        jmp     L_58f542
        push    0
        push    1
L_58f542:
        mov     ecx, dword ptr [ebp + 0x9a0]
        call    FUN_005a30d0
L_58f54d:
        mov     ecx, dword ptr [ebp + 0x2fc]
        test    ecx, ecx
        je      L_58f55f
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x12c]
L_58f55f:
        mov     eax, dword ptr [ebp + 0x78]
        lea     ecx, [ebp + 0x78]
        call    dword ptr [eax + 4]
        push    1
        push    0x782364
        mov     ecx, ebp
        mov     esi, eax
        call    FUN_005f8fa0
        push    eax
        add     esi, 0x68
        push    esi
        mov     ecx, ebp
        call    FUN_005fa300
        jmp     L_58f649
L_58f589:
        push    3
        mov     ecx, ebp
        call    FUN_004da2f0
        mov     esi, dword ptr [ebp + 0xd8]
        test    esi, esi
        je      L_58f5b5
        mov     eax, dword ptr [esi + 0x18]
        mov     edx, dword ptr [esi]
        or      eax, 0xc0
        mov     ecx, esi
        mov     dword ptr [esi + 0x18], eax
        call    dword ptr [edx + 0x10]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x14]
L_58f5b5:
        mov     esi, dword ptr [ebp + 0x418]
        test    esi, esi
        je      L_58f5d0
        mov     ecx, esi
        call    FUN_005a7e40
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0xb0]
L_58f5d0:
        mov     al, byte ptr [ebp + 0xdc]
        test    al, al
        jne     L_58f629
        cmp     dword ptr [ebp + 0x5d0], -1
        jne     L_58f5f9
        mov     ecx, dword ptr [ebp + 0xe0]
        mov     eax, dword ptr [ecx]
        push    0
        push    1
        call    dword ptr [eax + 4]
        mov     ecx, ebp
        call    FUN_004db240
L_58f5f9:
        mov     al, byte ptr [ebp + 0xdc]
        test    al, al
        jne     L_58f629
        cmp     dword ptr [ebp + 0x5d0], -1
        jne     L_58f629
        lea     ecx, [ebp + 0x20]
        call    FUN_0041fd80
        test    eax, eax
        je      L_58f620
        mov     edx, dword ptr [eax]
        push    1
        mov     ecx, eax
        call    dword ptr [edx]
L_58f620:
        push    0
        mov     ecx, ebp
        call    FUN_004da1f0
L_58f629:
        mov     eax, dword ptr [ebp]
        push    1
        mov     ecx, ebp
        call    dword ptr [eax + 0x48]
        mov     esi, dword ptr [ebp + 0xd8]
        add     esi, 0x50
        lea     edi, [ebp + 0xf4]
        mov     ecx, 0xc
        rep movsd
L_58f649:
        push    3
        mov     ecx, ebp
        call    FUN_004da5d0
        cmp     dword ptr [esp + 0x18], 3
        pop     edi
        pop     esi
        jne     L_58f664
        mov     byte ptr [ebp + 0x8fc], 1
        jmp     L_58f66f
L_58f664:
        mov     edx, dword ptr [ebp]
        mov     ecx, ebp
        call    dword ptr [edx + 0xd8]
L_58f66f:
        mov     ecx, dword ptr [ebp + 0x3b0]
        xor     eax, eax
        cmp     ecx, eax
        mov     dword ptr [ebp + 0x41c], eax
        mov     dword ptr [ebp + 0x420], eax
        mov     dword ptr [ebp + 0x424], eax
        je      L_58f692
        call    FUN_00559bb0
L_58f692:
        mov     eax, dword ptr [esp + 0x10]
        push    eax
        push    3
        mov     ecx, ebp
        call    FUN_004da620
        pop     ebp
        pop     ecx
        ret     8
    }
}
