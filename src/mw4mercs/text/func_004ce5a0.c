/*
 * FUN_004ce5a0 (904 B) — MLR subsystem: __thiscall/__stdcall (ret 0x10)
 * object-streaming routine. Iterates a size loop (bounded by 0x7b3cc8),
 * serializes object data via stream vtables (offsets 0x20/0x0c/0x04/0x18),
 * calls FUN_004ce190 for registration, and updates global hash
 * bookkeeping (0x7dab40/0x7dab44). Uses ESP-relative locals.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b3cc8;
extern int g_007dab44;
extern int g_007dab40;

extern void FUN_0041ee70(void);
extern void FUN_0041f030(void);
extern void FUN_004ce190(void);
extern void FUN_0041e720(void);
extern void FUN_0041ef60(void);
extern void FUN_0041e690(void);
extern void FUN_0041e710(void);

__declspec(naked) void FUN_004ce5a0(void)
{
    __asm {
        sub     esp, 0x8c
        push    ebx
        mov     ebx, dword ptr [esp+0x94]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp+0xa4]
        mov     ebp, dword ptr [esi+0x18]
        sub     ebp, dword ptr [esi+0x10]
        push    edi
        mov     dword ptr [esp+0x1c], ecx
        mov     dword ptr [esp+0x14], ebp
        mov     byte ptr [esp+0x13], 1
        jmp     L_4ce5d1
L_4ce5cd:
        mov     ebp, dword ptr [esp+0x14]
L_4ce5d1:
        mov     eax, dword ptr [g_007b3cc8]
        add     eax, -2
        cmp     ebp, eax
        mov     edi, ebp
        jbe     L_4ce5e1
        mov     edi, eax
L_4ce5e1:
        mov     al, byte ptr [esp+0x13]
        test    al, al
        jz      L_4ce786
        push    edi
        lea     ecx, [esp+0x78]
        call    FUN_0041ee70
        mov     ecx, dword ptr [esi+0x18]
        mov     edx, dword ptr [esi+0x10]
        mov     eax, dword ptr [esi+0x1c]
        xor     ebp, ebp
        sub     ecx, edx
        cmp     eax, ebp
        mov     dword ptr [esp+0x60], ecx
        mov     dword ptr [esp+0x18], ebp
        jbe     L_4ce63a
L_4ce610:
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [esp+0x68]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        mov     ecx, dword ptr [esp+0x64]
        mov     edx, dword ptr [esp+0x18]
        mov     eax, dword ptr [esi+0x1c]
        and     ecx, 0xff
        add     edx, ecx
        inc     ebp
        cmp     ebp, eax
        mov     dword ptr [esp+0x18], edx
        jc      L_4ce610
L_4ce63a:
        mov     edx, dword ptr [esi]
        push    0
        mov     ecx, esi
        call    dword ptr [edx+0xc]
        push    1
        lea     eax, [esp+0xa8]
        push    eax
        lea     ecx, [esp+0x7c]
        mov     dword ptr [esi+8], 0xffffffec
        call    FUN_0041f030
        push    4
        lea     ecx, [esp+0x64]
        push    ecx
        lea     ecx, [esp+0x7c]
        call    FUN_0041f030
        push    4
        lea     edx, [esp+0x1c]
        push    edx
        lea     ecx, [esp+0x7c]
        call    FUN_0041f030
        mov     eax, dword ptr [esi]
        lea     ebp, [edi-7]
        push    ebp
        mov     ecx, esi
        call    dword ptr [eax+4]
        push    eax
        lea     ecx, [esp+0x7c]
        call    FUN_0041f030
        mov     edx, dword ptr [esp+0x74]
        push    0
        lea     ecx, [esp+0x78]
        call    dword ptr [edx+0xc]
        mov     eax, dword ptr [esi]
        push    ebp
        mov     ecx, esi
        mov     dword ptr [esp+0x80], 0xffffffec
        call    dword ptr [eax+0x18]
        push    1
        lea     ecx, [esp+0x78]
        push    ecx
        mov     ecx, dword ptr [esp+0x24]
        push    4
        push    ebx
        mov     byte ptr [esp+0x23], 0
        call    FUN_004ce190
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        mov     edx, 7
        sub     edx, edi
        mov     edi, dword ptr [esp+0x14]
        add     edi, edx
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx+0x14]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx+0x1814]
        add     eax, 0x2424
        mov     dword ptr [esp+0x14], edi
        mov     edi, dword ptr [eax+ebx*4+8]
        mov     ecx, 3
        add     edi, ecx
        mov     dword ptr [eax+ebx*4+8], edi
        add     dword ptr [eax+0xc00], ecx
        mov     eax, dword ptr [esp+0x74]
        xor     edi, edi
        push    edi
        lea     ecx, [esp+0x78]
        call    dword ptr [eax+0xc]
        mov     eax, dword ptr [esp+0x90]
        test    eax, eax
        mov     ebp, 0xffffffec
        mov     dword ptr [esp+0x7c], ebp
        mov     dword ptr [esp+0x18], edi
        jbe     L_4ce767
L_4ce737:
        push    1
        lea     ecx, [esp+0x70]
        push    ecx
        lea     ecx, [esp+0x7c]
        call    FUN_0041e720
        mov     edx, dword ptr [esp+0x6c]
        mov     eax, dword ptr [esp+0x18]
        and     edx, 0xff
        add     eax, edx
        mov     dword ptr [esp+0x18], eax
        mov     eax, dword ptr [esp+0x90]
        inc     edi
        cmp     edi, eax
        jc      L_4ce737
L_4ce767:
        mov     eax, dword ptr [esp+0x74]
        push    0
        lea     ecx, [esp+0x78]
        call    dword ptr [eax+0xc]
        lea     ecx, [esp+0x74]
        mov     dword ptr [esp+0x7c], ebp
        call    FUN_0041ef60
        jmp     L_4ce90f
L_4ce786:
        sub     ebp, edi
        push    0
        push    edi
        jz      L_4ce850
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx+4]
        push    eax
        lea     ecx, [esp+0x4c]
        call    FUN_0041e690
        mov     eax, dword ptr [esp+0x54]
        mov     ecx, dword ptr [esp+0x58]
        add     eax, edi
        cmp     eax, ecx
        mov     dword ptr [esp+0x54], eax
        jbe     L_4ce7b8
        mov     dword ptr [esp+0x58], eax
L_4ce7b8:
        mov     eax, dword ptr [esp+0x40]
        push    0
        lea     ecx, [esp+0x44]
        call    dword ptr [eax+0xc]
        mov     edx, dword ptr [esi]
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp+0x4c], 0xffffffec
        call    dword ptr [edx+0x18]
        mov     ecx, dword ptr [esp+0x1c]
        push    1
        lea     eax, [esp+0x44]
        push    eax
        push    5
        push    ebx
        call    FUN_004ce190
        mov     edx, dword ptr [esp+0x40]
        push    0
        lea     ecx, [esp+0x44]
        mov     dword ptr [esp+0x18], ebp
        call    dword ptr [edx+0xc]
        mov     eax, dword ptr [esp+0x5c]
        xor     ebp, ebp
        xor     edi, edi
        test    eax, eax
        mov     dword ptr [esp+0x48], 0xffffffec
        jbe     L_4ce832
L_4ce80d:
        push    1
        lea     eax, [esp+0x6c]
        push    eax
        lea     ecx, [esp+0x48]
        call    FUN_0041e720
        mov     ecx, dword ptr [esp+0x68]
        mov     eax, dword ptr [esp+0x5c]
        and     ecx, 0xff
        add     ebp, ecx
        inc     edi
        cmp     edi, eax
        jc      L_4ce80d
L_4ce832:
        mov     edx, dword ptr [esp+0x40]
        push    0
        lea     ecx, [esp+0x44]
        call    dword ptr [edx+0xc]
        mov     dword ptr [esp+0x48], 0xffffffec
        lea     ecx, [esp+0x40]
        jmp     L_4ce90a
L_4ce850:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax+4]
        push    eax
        lea     ecx, [esp+0x2c]
        call    FUN_0041e690
        mov     eax, dword ptr [esp+0x34]
        mov     ecx, dword ptr [esp+0x38]
        add     eax, edi
        cmp     eax, ecx
        mov     dword ptr [esp+0x34], eax
        jbe     L_4ce877
        mov     dword ptr [esp+0x38], eax
L_4ce877:
        mov     edx, dword ptr [esp+0x20]
        push    0
        lea     ecx, [esp+0x24]
        call    dword ptr [edx+0xc]
        mov     eax, dword ptr [esi]
        push    edi
        mov     ecx, esi
        mov     dword ptr [esp+0x2c], 0xffffffec
        call    dword ptr [eax+0x18]
        push    1
        lea     ecx, [esp+0x24]
        push    ecx
        mov     ecx, dword ptr [esp+0x24]
        push    6
        push    ebx
        call    FUN_004ce190
        mov     edx, dword ptr [esp+0x20]
        push    0
        lea     ecx, [esp+0x24]
        mov     dword ptr [esp+0x18], ebp
        call    dword ptr [edx+0xc]
        mov     eax, dword ptr [esp+0x3c]
        xor     ebp, ebp
        xor     edi, edi
        test    eax, eax
        mov     dword ptr [esp+0x28], 0xffffffec
        jbe     L_4ce8f1
L_4ce8cc:
        push    1
        lea     eax, [esp+0x74]
        push    eax
        lea     ecx, [esp+0x28]
        call    FUN_0041e720
        mov     ecx, dword ptr [esp+0x70]
        mov     eax, dword ptr [esp+0x3c]
        and     ecx, 0xff
        add     ebp, ecx
        inc     edi
        cmp     edi, eax
        jc      L_4ce8cc
L_4ce8f1:
        mov     edx, dword ptr [esp+0x20]
        push    0
        lea     ecx, [esp+0x24]
        call    dword ptr [edx+0xc]
        mov     dword ptr [esp+0x28], 0xffffffec
        lea     ecx, [esp+0x20]
L_4ce90a:
        call    FUN_0041e710
L_4ce90f:
        mov     eax, dword ptr [esp+0x14]
        test    eax, eax
        ja      L_4ce5cd
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8c
        ret     0x10
    }
}
