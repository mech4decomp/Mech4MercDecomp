/*
 * FUN_004ce190 (1032 B) — MLR subsystem: __thiscall/__stdcall (ret 0x10)
 * object-registration/streaming routine. Reads/writes the per-type table
 * (0x7dac7c), maintains global hash bookkeeping (0x7dab40/0x7dab44,
 * 0x7db090/0x7db094), does string/checksum work via 0x70e3xx stream
 * helpers, and updates per-type counters.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern int g_007db094;
extern int g_007db090;
extern int g_007b3cc8;

extern void FUN_004cdfa0(void);
extern void FUN_0041ea10(void);
extern void FUN_0070e390(void);
extern void FUN_0070e3c0(void);
extern void FUN_0070e460(void);
extern void FUN_004084d0(void);
extern void FUN_0041e690(void);
extern void FUN_004cc1d0(void);
extern void FUN_004179b0(void);
extern void FUN_004ce5a0(void);
extern void FUN_006fab90(void);
extern void FUN_00707e70(void);
extern void FUN_00718410(void);
extern void FUN_004084e0(void);

__declspec(naked) void FUN_004ce190(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x90
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        push    ebx
        mov     ebx, dword ptr [g_007dab40]
        push    esi
        push    edi
        mov     edi, ecx
        xor     eax, ebx
        mov     ecx, dword ptr [eax+0x14]
        mov     ebx, dword ptr [ebp+8]
        push    ebx
        xor     ecx, 0x85739531
        mov     dword ptr [ebp-0x14], edi
        call    FUN_004cdfa0
        mov     ecx, dword ptr [eax+0x2c]
        mov     esi, dword ptr [ebp+0x10]
        mov     dl, byte ptr [ebp+0xc]
        xor     eax, eax
        cmp     esi, eax
        mov     dword ptr [ebp-0x34], ecx
        mov     byte ptr [ebp-0x24], dl
        mov     byte ptr [ebp+0xb], 0
        jz      L_4ce3d9
        mov     ecx, esi
        call    FUN_0041ea10
        mov     eax, dword ptr [esi]
        push    0
        mov     ecx, esi
        call    dword ptr [eax+0xc]
        mov     ecx, dword ptr [ebp+0xc]
        __emit 0x8B  /* __emit: mov eax,[ecx*4+0x7dac7c] no-base SIB (8B 04 8D); MSVC6 re-bases via ebx */
        __emit 0x04
        __emit 0x8D
        __emit 0x7C
        __emit 0xAC
        __emit 0x7D
        __emit 0x00
        test    eax, eax
        mov     dword ptr [esi+8], 0xffffffec
        jz      L_4ce3c1
        lea     edx, [ebp+0xffffff70]
        push    edx
        call    FUN_0070e390
        push    4
        add     edi, 0x1804
        push    edi
        lea     eax, [ebp+0xffffff70]
        push    eax
        call    FUN_0070e3c0
        mov     ecx, dword ptr [ebp+0xc]
        __emit 0x83  /* __emit: cmp dword ptr [ecx*4+0x7dac7c],2 no-base SIB (83 3C 8D); MSVC6 re-bases via ebx */
        __emit 0x3C
        __emit 0x8D
        __emit 0x7C
        __emit 0xAC
        __emit 0x7D
        __emit 0x00
        __emit 0x02
        jnz     L_4ce28b
        mov     edx, dword ptr [g_007dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax+0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx+0x18]
        push    4
        lea     eax, [ebp+8]
        push    eax
        lea     ecx, [ebp+0xffffff70]
        xor     edx, 0x43215202
        push    ecx
        mov     dword ptr [ebp+8], edx
        call    FUN_0070e3c0
        mov     eax, dword ptr [g_007db094]
        xor     edx, edx
        mov     dx, word ptr [eax+0x36]
        push    4
        lea     ecx, [ebp+8]
        push    ecx
        mov     dword ptr [ebp+8], edx
        lea     edx, [ebp+0xffffff70]
        push    edx
        call    FUN_0070e3c0
L_4ce28b:
        mov     eax, dword ptr [g_007db090]
        mov     edx, dword ptr [eax+0x30]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        push    ecx
        push    edx
        lea     ecx, [ebp+0xffffff70]
        push    ecx
        call    FUN_0070e3c0
        mov     ecx, dword ptr [esi+0x10]
        mov     edx, dword ptr [esi+0x18]
        mov     eax, dword ptr [esi]
        sub     edx, ecx
        push    edx
        mov     ecx, esi
        call    dword ptr [eax+4]
        push    eax
        lea     ecx, [ebp+0xffffff70]
        push    ecx
        call    FUN_0070e3c0
        lea     edx, [ebp+0xffffff70]
        push    edx
        lea     eax, [ebp-0x10]
        push    eax
        call    FUN_0070e460
        mov     dl, byte ptr [ebp-0xe]
        mov     cl, byte ptr [ebp-0x10]
        mov     al, byte ptr [ebp-0xc]
        xor     cl, dl
        mov     dl, byte ptr [ebp-0xa]
        xor     cl, al
        mov     al, byte ptr [ebp-8]
        xor     cl, dl
        mov     dl, byte ptr [ebp-6]
        xor     cl, al
        mov     al, byte ptr [ebp-4]
        xor     cl, dl
        mov     dl, byte ptr [ebp-2]
        xor     cl, al
        mov     eax, dword ptr [g_007dab44]
        xor     cl, dl
        xor     dx, dx
        mov     dl, cl
        mov     byte ptr [ebp+0xb], 1
        mov     dword ptr [ebp-0x18], edx
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx+0x14]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx+0x1814]
        mov     edi, dword ptr [eax+ebx*4+0x242c]
        add     eax, 0x2424
        mov     ecx, 0x10
        add     edi, ecx
        mov     dword ptr [eax+ebx*4+8], edi
        mov     edx, dword ptr [eax+0xc00]
        mov     edi, dword ptr [esi+0x10]
        add     edx, ecx
        mov     dword ptr [eax+0xc00], edx
        mov     eax, dword ptr [esi+0x18]
        sub     eax, edi
        lea     edi, [eax+2]
        push    edi
        mov     dword ptr [ebp-0x1c], eax
        call    FUN_004084d0
        push    0x20
        mov     dword ptr [ebp+0x10], eax
        call    FUN_004084d0
        add     esp, 8
        test    eax, eax
        jz      L_4ce384
        mov     ecx, dword ptr [ebp+0x10]
        push    0
        push    edi
        push    ecx
        mov     ecx, eax
        call    FUN_0041e690
        mov     edi, eax
        jmp     L_4ce386
L_4ce384:
        xor     edi, edi
L_4ce386:
        mov     eax, dword ptr [ebp-0x1c]
        mov     edx, dword ptr [edi]
        push    eax
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [ebp+0x10], edx
        call    dword ptr [eax+4]
        mov     edx, dword ptr [ebp+0x10]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+0x24]
        mov     eax, dword ptr [edi]
        push    2
        lea     ecx, [ebp-0x18]
        push    ecx
        mov     ecx, edi
        call    dword ptr [eax+0x24]
        mov     edx, dword ptr [edi]
        push    0
        mov     ecx, edi
        call    dword ptr [edx+0xc]
        mov     dword ptr [edi+8], 0xffffffec
        mov     esi, edi
        mov     edi, dword ptr [ebp-0x14]
L_4ce3c1:
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax+4]
        mov     dword ptr [ebp-0x23], eax
        mov     cx, word ptr [esi+0x18]
        sub     cx, word ptr [esi+0x10]
        mov     word ptr [ebp-0x26], cx
        jmp     L_4ce3e0
L_4ce3d9:
        mov     dword ptr [ebp-0x23], eax
        mov     word ptr [ebp-0x26], ax
L_4ce3e0:
        mov     cl, byte ptr [ebp+0x14]
        mov     eax, dword ptr [g_007db090]
        xor     edx, edx
        test    cl, cl
        setnz   dl
        test    eax, eax
        mov     word ptr [ebp-0x30], dx
        jz      L_4ce43f
        xor     edx, edx
        mov     dl, byte ptr [eax+0x28]
        cmp     ebx, edx
        jnz     L_4ce43f
        push    0x1c
        call    FUN_004084d0
        add     esp, 4
        test    eax, eax
        jz      L_4ce42c
        mov     ecx, dword ptr [ebp+0xc]
        push    esi
        push    ecx
        push    ebx
        mov     ecx, eax
        call    FUN_004cc1d0
        push    eax
        lea     ecx, [edi+0x180c]
        call    FUN_004179b0
        jmp     L_4ce561
L_4ce42c:
        xor     eax, eax
        push    eax
        lea     ecx, [edi+0x180c]
        call    FUN_004179b0
        jmp     L_4ce561
L_4ce43f:
        test    esi, esi
        jz      L_4ce48a
        mov     eax, dword ptr [esi+0x10]
        mov     edx, dword ptr [esi+0x18]
        sub     edx, eax
        cmp     edx, dword ptr [g_007b3cc8]
        jbe     L_4ce48a
        test    cl, cl
        jz      L_4ce46f
        mov     eax, dword ptr [ebp+0xc]
        push    1
        push    esi
        push    eax
        push    ebx
        mov     ecx, edi
        call    FUN_004ce5a0
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
L_4ce46f:
        push    0x771b18
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_4ce561
        int     3
        jmp     L_4ce561
L_4ce48a:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx+0x14]
        add     edx, 0x14
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax+0x1814]
        mov     ecx, dword ptr [eax+ebx*4+0xb4bc]
        add     eax, 0xb4b4
        inc     ecx
        mov     dword ptr [eax+ebx*4+8], ecx
        inc     dword ptr [eax+0xc00]
        mov     ecx, dword ptr [edx]
        mov     edx, dword ptr [edx]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx+0x1814]
        add     eax, 0xc0c
        xor     edx, 0x85739531
        mov     ecx, 0x150
        add     dword ptr [eax+ebx*4+8], ecx
        add     dword ptr [eax+0xc00], ecx
        mov     eax, dword ptr [edx+0x1814]
        mov     ecx, dword ptr [ebp-0x26]
        mov     edx, dword ptr [eax+ebx*4+0xccd4]
        add     eax, 0xcccc
        and     ecx, 0xffff
        shl     ecx, 3
        add     edx, ecx
        mov     dword ptr [eax+ebx*4+8], edx
        mov     edx, dword ptr [eax+0xc00]
        add     edx, ecx
        push    0
        mov     dword ptr [eax+0xc00], edx
        call    FUN_00707e70
        __emit 0xDD  /* __emit: fstp qword ptr [ebx*8+0x7db0c8] no-base SIB (DD 1C DD); MSVC6 re-bases via ebx */
        __emit 0x1C
        __emit 0xDD
        __emit 0xC8
        __emit 0xB0
        __emit 0x7D
        __emit 0x00
        mov     al, byte ptr [ebp+0x14]
        test    al, al
        jnz     L_4ce558
        inc     dword ptr [edi+ebx*4+0x1004]
        lea     eax, [ebp-0x38]
        push    eax
        call    FUN_00718410
        mov     ecx, dword ptr [edi+ebx*4+0x1400]
        neg     al
        sbb     eax, eax
        inc     eax
        add     ecx, eax
        mov     dword ptr [edi+ebx*4+0x1400], ecx
        jmp     L_4ce561
L_4ce558:
        lea     ecx, [ebp-0x38]
        push    ecx
        call    FUN_00718410
L_4ce561:
        mov     al, byte ptr [ebp+0xb]
        test    al, al
        jz      L_4ce594
        mov     edx, dword ptr [esi]
        push    0
        mov     ecx, esi
        call    dword ptr [edx+0xc]
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        mov     dword ptr [esi+8], 0xffffffec
        call    dword ptr [eax+4]
        push    eax
        call    FUN_004084e0
        add     esp, 4
        test    esi, esi
        jz      L_4ce594
        mov     edx, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [edx]
L_4ce594:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x10
    }
}
