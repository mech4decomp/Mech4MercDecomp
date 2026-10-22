/*
 * FUN_004cd950 (1469 B) — MLR subsystem: __thiscall/__stdcall (ret 0xc)
 * object-registration/streaming routine. Reads/writes a per-type table
 * (0x7dac7c), maintains global hash bookkeeping (0x7dab40/0x7dab44,
 * 0x7db090/0x7db094), fills a 0x100-entry byte/dword buffer, and does
 * string/checksum work via the 0x70e3xx stream helpers.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007dab44;
extern int g_007dab40;
extern int g_007db094;
extern int g_007db090;

extern void FUN_00412a00(void);
extern void FUN_004084d0(void);
extern void FUN_004ce9d0(void);
extern void FUN_004ccaa0(void);
extern void FUN_004084e0(void);
extern void FUN_004ccb00(void);
extern void FUN_004d6350(void);
extern void FUN_004cdfa0(void);
extern void FUN_0041e690(void);
extern void FUN_0070e390(void);
extern void FUN_0070e3c0(void);
extern void FUN_0070e460(void);
extern void FUN_0041e710(void);
extern void FUN_006fab90(void);

__declspec(naked) void FUN_004cd950(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0x19c
        cmp     dword ptr [ebp+0xc], 9
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        jnz     L_4cdc23
        mov     esi, dword ptr [ebp+0x10]
        mov     eax, dword ptr [esi]
        push    4
        lea     ecx, [ebp-8]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax+0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebx+0x1804]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [ebp-8]
        cmp     edx, 1
        mov     ecx, 0x3f
        mov     eax, 0x1010101
        lea     edi, [ebp+0xfffffe65]
        rep     stosd
        mov     dword ptr [ebx+0x1800], edx
        stosw
        mov     byte ptr [ebp+0xf], 0
        mov     dword ptr [ebp-0x10], 1
        jc      L_4cdb0c
L_4cd9b9:
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [ebp+8]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        mov     edx, dword ptr [esi]
        push    4
        lea     eax, [ebp-0x24]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        lea     ecx, [ebp+0x10]
        push    ecx
        xor     edi, edi
        push    esi
        mov     dword ptr [ebp+0x10], edi
        call    FUN_00412a00
        mov     eax, dword ptr [ebp+8]
        and     eax, 0xff
        mov     ecx, dword ptr [ebx+eax*4+0x1818]
        add     esp, 8
        cmp     ecx, edi
        jnz     L_4cdad8
        push    0x2048
        call    FUN_004084d0
        add     esp, 4
        cmp     eax, edi
        jz      L_4cda22
        mov     edx, dword ptr [ebp+0x10]
        mov     ecx, dword ptr [ebp-0x24]
        push    edx
        mov     edx, dword ptr [ebp+8]
        push    ecx
        push    edx
        mov     ecx, eax
        call    FUN_004ce9d0
        mov     edi, eax
L_4cda22:
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx+0xc]
        mov     eax, dword ptr [ebp+8]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    edi
        and     eax, 0xff
        push    eax
        call    dword ptr [edx+0x38]
        mov     eax, dword ptr [ebp+8]
        mov     edx, dword ptr [g_007dab44]
        xor     ecx, ecx
        mov     cl, byte ptr [edi+0x28]
        and     eax, 0xff
        mov     dword ptr [ebx+eax*4+0x1818], edi
        mov     byte ptr [ebp+eax+0xfffffe64], 0
        mov     eax, dword ptr [edx]
        push    ecx
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax+0x14]
        xor     ecx, 0x85739531
        call    FUN_004ccaa0
        cmp     byte ptr [ebp+8], 1
        jnz     L_4cdae0
        mov     edx, dword ptr [esi+0x10]
        mov     eax, dword ptr [esi+0x18]
        mov     ecx, dword ptr [g_007dab44]
        mov     ecx, dword ptr [ecx]
        sub     eax, edx
        xor     edx, edx
        mov     dl, byte ptr [edi+0x28]
        mov     dword ptr [g_007db094], edi
        xor     ecx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ecx+0x14]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx+0x1814]
        mov     edi, dword ptr [ecx+edx*4+0x3038]
        add     ecx, 0x3030
        shl     eax, 3
        add     edi, eax
        mov     dword ptr [ecx+edx*4+8], edi
        add     dword ptr [ecx+0xc00], eax
        mov     byte ptr [ebp+0xf], 1
        jmp     L_4cdae0
L_4cdad8:
        mov     byte ptr [ebp+eax+0xfffffe64], 0
L_4cdae0:
        mov     eax, dword ptr [ebp+0x10]
        test    eax, eax
        jz      L_4cdafa
        mov     cl, byte ptr [eax-1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_4cdafa
        push    eax
        call    FUN_004084e0
        add     esp, 4
L_4cdafa:
        mov     eax, dword ptr [ebp-0x10]
        mov     ecx, dword ptr [ebp-8]
        inc     eax
        cmp     eax, ecx
        mov     dword ptr [ebp-0x10], eax
        jbe     L_4cd9b9
L_4cdb0c:
        mov     edx, dword ptr [esi]
        push    1
        lea     eax, [ebp-0xc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x20]
        mov     eax, dword ptr [g_007db090]
        test    eax, eax
        jnz     L_4cdb56
        mov     eax, dword ptr [ebp-0xc]
        mov     edx, dword ptr [g_007dab44]
        and     eax, 0xff
        mov     ecx, dword ptr [ebx+eax*4+0x1818]
        mov     dword ptr [g_007db090], ecx
        mov     ecx, dword ptr [g_007dab40]
        push    eax
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax+0x14]
        xor     ecx, 0x85739531
        call    FUN_004ccb00
L_4cdb56:
        mov     al, byte ptr [ebp+0xf]
        test    al, al
        jz      L_4cdb79
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx+0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        call    dword ptr [eax+0x44]
L_4cdb79:
        mov     edi, 1
        add     ebx, 0x181c
L_4cdb84:
        mov     al, byte ptr [ebp+edi+0xfffffe64]
        test    al, al
        jz      L_4cdbcd
        mov     esi, dword ptr [ebx]
        test    esi, esi
        jz      L_4cdbcd
        cmp     esi, dword ptr [g_007db090]
        jz      L_4cdbcd
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx+0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    esi
        push    edi
        call    dword ptr [eax+0x3c]
        test    esi, esi
        jz      L_4cdbc7
        mov     edx, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [edx]
L_4cdbc7:
        mov     dword ptr [ebx], 0
L_4cdbcd:
        inc     edi
        add     ebx, 4
        cmp     edi, 0xff
        jl      L_4cdb84
        mov     eax, dword ptr [g_007dab44]
        mov     eax, dword ptr [eax]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_004d6350
        test    al, al
        jz      L_4cdf04
L_4cdbfb:
        mov     ecx, dword ptr [g_007dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [g_007dab40]
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        call    FUN_004d6350
        test    al, al
        jnz     L_4cdbfb
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_4cdc23:
        mov     edx, dword ptr [g_007dab44]
        mov     edi, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, edi
        mov     ecx, dword ptr [eax+0x14]
        mov     edi, dword ptr [ebp+8]
        push    edi
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        test    eax, eax
        mov     dword ptr [ebp-0xc], eax
        jz      L_4cdf04
        mov     esi, dword ptr [ebp+0x10]
        test    esi, esi
        mov     eax, dword ptr [ebp+0xc]
        mov     byte ptr [ebp-1], 0
        jz      L_4cde4e
        __emit 0x8B  /* __emit: mov ecx,[eax*4+0x7dac7c] no-base SIB (8B 0C 85); MSVC6 re-bases via ebx */
        __emit 0x0C
        __emit 0x85
        __emit 0x7C
        __emit 0xAC
        __emit 0x7D
        __emit 0x00
        test    ecx, ecx
        jz      L_4cde4e
        mov     eax, dword ptr [esi+0x1c]
        push    0
        push    eax
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax+4]
        push    eax
        lea     ecx, [ebp-0x44]
        call    FUN_0041e690
        lea     ecx, [ebp+0xffffff64]
        push    ecx
        call    FUN_0070e390
        push    4
        add     ebx, 0x1804
        push    ebx
        lea     edx, [ebp+0xffffff64]
        push    edx
        call    FUN_0070e3c0
        mov     eax, dword ptr [ebp+0xc]
        __emit 0x83  /* __emit: cmp dword ptr [eax*4+0x7dac7c],2 no-base SIB (83 3C 85); MSVC6 re-bases via ebx */
        __emit 0x3C
        __emit 0x85
        __emit 0x7C
        __emit 0xAC
        __emit 0x7D
        __emit 0x00
        __emit 0x02
        jnz     L_4cdd0a
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     eax, dword ptr [edx+0xc]
        xor     eax, 0x85739531
        mov     ecx, dword ptr [eax+0x18]
        push    4
        lea     edx, [ebp+0x10]
        push    edx
        lea     eax, [ebp+0xffffff64]
        xor     ecx, 0x43215202
        push    eax
        mov     dword ptr [ebp+0x10], ecx
        call    FUN_0070e3c0
        mov     edx, dword ptr [g_007db094]
        xor     ecx, ecx
        mov     cx, word ptr [edx+0x36]
        push    4
        lea     eax, [ebp+0x10]
        push    eax
        mov     dword ptr [ebp+0x10], ecx
        lea     ecx, [ebp+0xffffff64]
        push    ecx
        call    FUN_0070e3c0
L_4cdd0a:
        mov     edx, dword ptr [ebp-0xc]
        mov     edx, dword ptr [edx+0x30]
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        dec     ecx
        push    ecx
        push    edx
        lea     eax, [ebp+0xffffff64]
        push    eax
        call    FUN_0070e3c0
        mov     eax, dword ptr [esi+0x1c]
        mov     edx, dword ptr [esi]
        add     eax, -2
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+4]
        push    eax
        lea     eax, [ebp+0xffffff64]
        push    eax
        call    FUN_0070e3c0
        lea     ecx, [ebp+0xffffff64]
        push    ecx
        lea     edx, [ebp-0x20]
        push    edx
        call    FUN_0070e460
        mov     cl, byte ptr [ebp-0x1e]
        mov     al, byte ptr [ebp-0x20]
        mov     bl, byte ptr [ebp-0x1c]
        mov     dl, byte ptr [ebp-0x1a]
        xor     al, cl
        mov     cl, byte ptr [ebp-0x18]
        xor     al, bl
        mov     bl, byte ptr [ebp-0x16]
        xor     al, dl
        mov     dl, byte ptr [ebp-0x14]
        xor     al, cl
        mov     cl, byte ptr [ebp-0x12]
        xor     al, bl
        xor     al, dl
        mov     edx, dword ptr [esi]
        xor     al, cl
        movzx   di, al
        mov     eax, dword ptr [esi+0x1c]
        sub     eax, 2
        push    eax
        mov     ecx, esi
        call    dword ptr [edx+0x18]
        mov     edx, dword ptr [esi]
        push    2
        lea     eax, [ebp-8]
        push    eax
        mov     ecx, esi
        mov     dword ptr [ebp-8], 0
        call    dword ptr [edx+0x20]
        cmp     word ptr [ebp-8], di
        jz      L_4cddb8
        lea     ecx, [ebp-0x44]
        call    FUN_0041e710
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
L_4cddb8:
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        mov     edi, dword ptr [g_007dab40]
        mov     ecx, dword ptr [ebp+8]
        xor     edx, edi
        mov     eax, dword ptr [edx+0x14]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax+0x1814]
        mov     edi, dword ptr [eax+ecx*4+0x1820]
        add     eax, 0x1818
        mov     edx, 0x10
        add     edi, edx
        mov     dword ptr [eax+ecx*4+8], edi
        mov     ebx, dword ptr [eax+0xc00]
        add     ebx, edx
        mov     edx, dword ptr [esi]
        push    0
        mov     ecx, esi
        mov     dword ptr [eax+0xc00], ebx
        call    dword ptr [edx+0xc]
        push    0x20
        mov     dword ptr [esi+8], 0xffffffec
        mov     byte ptr [ebp-1], 1
        call    FUN_004084d0
        mov     edi, eax
        add     esp, 4
        test    edi, edi
        jz      L_4cde3c
        mov     eax, dword ptr [esi+0x1c]
        add     eax, -2
        push    0
        push    eax
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax+4]
        push    eax
        mov     ecx, edi
        call    FUN_0041e690
        jmp     L_4cde3e
L_4cde3c:
        xor     eax, eax
L_4cde3e:
        lea     ecx, [ebp-0x44]
        mov     esi, eax
        call    FUN_0041e710
        mov     edi, dword ptr [ebp+8]
        mov     eax, dword ptr [ebp+0xc]
L_4cde4e:
        cmp     eax, 0xa
        jl      L_4cdeb3
        cmp     eax, 0x46
        jge     L_4cdeb3
        test    esi, esi
        mov     ebx, dword ptr [g_007dab40]
        mov     edx, dword ptr [g_007dab44]
        jz      L_4cde9c
        mov     ecx, dword ptr [esi+0x10]
        mov     eax, dword ptr [esi+0x18]
        sub     eax, ecx
        mov     ecx, dword ptr [edx]
        xor     ecx, ebx
        mov     ecx, dword ptr [ecx+0x14]
        xor     ecx, 0x85739531
        mov     ecx, dword ptr [ecx+0x1814]
        shl     eax, 3
        add     dword ptr [ecx+edi*4+0x3038], eax
        add     ecx, 0x3030
        add     dword ptr [ecx+0xc00], eax
        mov     eax, dword ptr [ebp+0xc]
L_4cde9c:
        mov     edx, dword ptr [edx]
        xor     edx, ebx
        mov     ecx, dword ptr [edx+0xc]
        push    esi
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        push    edi
        call    dword ptr [edx+0x40]
        jmp     L_4cdef1
L_4cdeb3:
        cmp     eax, 0x47
        jl      L_4cdedf
        cmp     eax, 0x97
        jge     L_4cdedf
        mov     ecx, dword ptr [g_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [g_007dab40]
        mov     ecx, dword ptr [edx]
        push    esi
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    eax
        push    edi
        call    dword ptr [edx+0x20]
        jmp     L_4cdef1
L_4cdedf:
        push    0x771b00
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_4cdef1
        int     3
L_4cdef1:
        mov     al, byte ptr [ebp-1]
        test    al, al
        jz      L_4cdf04
        test    esi, esi
        jz      L_4cdf04
        mov     eax, dword ptr [esi]
        push    1
        mov     ecx, esi
        call    dword ptr [eax]
L_4cdf04:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0xc
    }
}
