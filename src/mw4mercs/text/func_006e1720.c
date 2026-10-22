/*
 * FUN_006e1720 (950 B) — Constructor for a texture/feature object.
 *
 * __stdcall, RET 8 (2 params). Allocates a 0x50-byte object, initializes its
 * fields, reads a set of named config values via FUN_00411cb0/FUN_00411bf0,
 * computes scale factors, and sets up texture masks.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_006e1b10(void *p);
extern void __cdecl FUN_00412780(void *p);
extern void __cdecl FUN_00412ab0(void *p);
extern void __cdecl FUN_00411cb0(void *p);
extern void __cdecl FUN_00411bf0(void *p);
extern void __cdecl FUN_006e1ae0(void *p);
extern void __cdecl FUN_006d2ed0(void *p);
extern void __cdecl FUN_006fab90(void *p);
extern void __cdecl FUN_004db630(void *p);
extern void __cdecl FUN_006d3160(void *p);

extern int g_84000c;
extern int g_84004c;

__declspec(naked) void __stdcall FUN_006e1720(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        push    esi
        push    edi
        push    0x50
        call    FUN_004084d0
        mov     esi, eax
        xor     edi, edi
        add     esp, 0x4
        cmp     esi, edi
        jz      L_6e1760
        mov     ecx, esi
        call    FUN_006e1b10
        mov     dword ptr [esi + 0x38], edi
        mov     dword ptr [esi], 0x79ecf8
        mov     dword ptr [esi + 0x3c], edi
        mov     byte ptr [esi + 0x4c], 0x0
        mov     dword ptr [esi + 0x44], edi
        mov     dword ptr [esi + 0x48], 0x80
        mov     dword ptr [esi + 0x40], edi
        jmp     L_6e1762
L_6e1760:
        xor     esi, esi
L_6e1762:
        mov     edi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [edi + 0x14]
        push    ebx
        lea     ebx, [esi + 0x38]
        push    eax
        mov     ecx, ebx
        call    FUN_00412780
        mov     ecx, dword ptr [ebx]
        push    ecx
        call    FUN_00412ab0
        add     esp, 0x4
        mov     dword ptr [esi + 0x34], eax
        push    0x0
        lea     eax, [esi + 0x4]
        push    eax
        push    0x79ec94
        mov     ecx, edi
        call    FUN_00411cb0
        push    0x0
        lea     eax, [esi + 0x8]
        push    eax
        push    0x79ec84
        mov     ecx, edi
        call    FUN_00411cb0
        push    0x0
        lea     edx, [esi + 0xc]
        push    edx
        push    0x79ec74
        mov     ecx, edi
        call    FUN_00411cb0
        push    0x0
        lea     eax, [esi + 0x10]
        push    eax
        push    0x79ec64
        mov     ecx, edi
        call    FUN_00411cb0
        push    0x0
        lea     eax, [esi + 0x14]
        push    eax
        push    0x79ec58
        mov     ecx, edi
        call    FUN_00411cb0
        push    0x0
        lea     eax, [esi + 0x18]
        push    eax
        push    0x79ec4c
        mov     ecx, edi
        call    FUN_00411cb0
        push    0x0
        lea     eax, [esi + 0x1c]
        push    eax
        push    0x79ec40
        mov     ecx, edi
        call    FUN_00411cb0
        push    0x0
        lea     eax, [esi + 0x20]
        push    eax
        push    0x79ec34
        mov     ecx, edi
        call    FUN_00411cb0
        push    0x0
        lea     eax, [esi + 0x30]
        push    eax
        push    0x79ec20
        mov     ecx, edi
        call    FUN_00411cb0
        push    0x0
        lea     ecx, [ebp - 0xc]
        push    ecx
        push    0x79ec28
        mov     ecx, edi
        call    FUN_00411bf0
        mov     eax, dword ptr [g_84000c]
        test    eax, eax
        mov     dword ptr [ebp + 0x8], 0x0
        jle     L_6e18a2
        mov     dword ptr [ebp - 0x8], 0x83f600
L_6e184d:
        mov     edx, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [ebp - 0xc]
        mov     eax, dword ptr [edx]
L_6e1855:
        mov     bl, byte ptr [eax]
        mov     dl, bl
        cmp     bl, byte ptr [ecx]
        jnz     L_6e1879
        test    dl, dl
        jz      L_6e1875
        mov     bl, byte ptr [eax + 0x1]
        mov     dl, bl
        cmp     bl, byte ptr [ecx + 0x1]
        jnz     L_6e1879
        add     eax, 0x2
        add     ecx, 0x2
        test    dl, dl
        jnz     L_6e1855
L_6e1875:
        xor     eax, eax
        jmp     L_6e187e
L_6e1879:
        sbb     eax, eax
        sbb     eax, -0x1
L_6e187e:
        test    eax, eax
        jnz     L_6e1888
        mov     eax, dword ptr [ebp + 0x8]
        mov     dword ptr [esi + 0x40], eax
L_6e1888:
        mov     eax, dword ptr [ebp + 0x8]
        mov     edx, dword ptr [ebp - 0x8]
        mov     ecx, dword ptr [g_84000c]
        inc     eax
        add     edx, 0xc
        cmp     eax, ecx
        mov     dword ptr [ebp + 0x8], eax
        mov     dword ptr [ebp - 0x8], edx
        jl      L_6e184d
L_6e18a2:
        mov     ebx, dword ptr [esi + 0x28]
        test    ebx, ebx
        jz      L_6e1900
        mov     eax, dword ptr [esi + 0x4]
        cdq
        idiv    dword ptr [ebx + 0x10]
        test    eax, eax
        jg      L_6e18b9
        or      edx, 0xffffffff
        jmp     L_6e18ce
L_6e18b9:
        mov     ecx, 0x1000000
        test    eax, ecx
        mov     edx, 0x18
        jnz     L_6e18ce
L_6e18c7:
        sar     ecx, 0x1
        dec     edx
        test    ecx, eax
        jz      L_6e18c7
L_6e18ce:
        lea     ecx, [eax - 0x1]
        and     ecx, eax
        mov     eax, dword ptr [esi + 0x8]
        neg     ecx
        sbb     ecx, ecx
        neg     ecx
        add     ecx, edx
        cdq
        idiv    dword ptr [ebx + 0x14]
        mov     dword ptr [esi + 0x14], ecx
        mov     ebx, eax
        push    ebx
        call    FUN_006e1ae0
        lea     edx, [ebx - 0x1]
        and     edx, ebx
        add     esp, 0x4
        neg     edx
        sbb     edx, edx
        neg     edx
        add     eax, edx
        mov     dword ptr [esi + 0x18], eax
L_6e1900:
        mov     ecx, dword ptr [esi + 0x2c]
        test    ecx, ecx
        jz      L_6e194b
        mov     eax, dword ptr [esi + 0x4]
        cdq
        idiv    dword ptr [ecx + 0x10]
        mov     ebx, eax
        push    ebx
        call    FUN_006e1ae0
        lea     ecx, [ebx - 0x1]
        and     ecx, ebx
        neg     ecx
        sbb     ecx, ecx
        neg     ecx
        add     eax, ecx
        mov     ecx, dword ptr [esi + 0x2c]
        mov     dword ptr [esi + 0x1c], eax
        mov     eax, dword ptr [esi + 0x8]
        cdq
        idiv    dword ptr [ecx + 0x14]
        mov     ebx, eax
        push    ebx
        call    FUN_006e1ae0
        lea     edx, [ebx - 0x1]
        and     edx, ebx
        add     esp, 0x8
        neg     edx
        sbb     edx, edx
        neg     edx
        add     eax, edx
        mov     dword ptr [esi + 0x20], eax
L_6e194b:
        push    0x0
        lea     eax, [ebp - 0x4]
        push    eax
        push    0x79ec14
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_6e1973
        mov     ecx, dword ptr [ebp - 0x4]
        push    ecx
        mov     ecx, dword ptr [g_84004c]
        call    FUN_006d2ed0
        mov     dword ptr [esi + 0x3c], eax
L_6e1973:
        push    0x0
        lea     edx, [ebp - 0x4]
        push    edx
        push    0x79ec04
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_6e199b
        mov     eax, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [g_84004c]
        push    eax
        call    FUN_006d2ed0
        mov     dword ptr [esi + 0x24], eax
L_6e199b:
        push    0x0
        lea     ecx, [ebp - 0x4]
        push    ecx
        push    0x79ebf4
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_6e19c3
        mov     edx, dword ptr [ebp - 0x4]
        mov     ecx, dword ptr [g_84004c]
        push    edx
        call    FUN_006d2ed0
        mov     dword ptr [esi + 0x28], eax
L_6e19c3:
        push    0x0
        lea     eax, [ebp - 0x4]
        push    eax
        push    0x79ebe4
        mov     ecx, edi
        call    FUN_00411bf0
        test    al, al
        jz      L_6e19eb
        mov     ecx, dword ptr [ebp - 0x4]
        push    ecx
        mov     ecx, dword ptr [g_84004c]
        call    FUN_006d2ed0
        mov     dword ptr [esi + 0x2c], eax
L_6e19eb:
        mov     eax, dword ptr [esi + 0x24]
        test    eax, eax
        jnz     L_6e1a0e
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x4]
        mov     eax, dword ptr [eax]
        push    eax
        push    0x79ed04
        call    FUN_006fab90
        add     esp, 0x8
        test    eax, eax
        jz      L_6e1a0e
        int     3
L_6e1a0e:
        mov     ebx, dword ptr [esi + 0x30]
        mov     eax, ebx
        and     eax, 0x3fc0
        cmp     eax, 0x100
        jnz     L_6e1a7c
        mov     edi, dword ptr [esi + 0x28]
        mov     ecx, dword ptr [esi + 0x4]
        cmp     ecx, dword ptr [edi + 0x10]
        jle     L_6e1a32
        mov     edx, dword ptr [esi + 0x8]
        cmp     edx, dword ptr [edi + 0x14]
        jg      L_6e1a7c
L_6e1a32:
        mov     eax, dword ptr [edi + 0x24]
        and     eax, 0x7
        cmp     al, 0x3
        jnz     L_6e1a6d
        push    edi
        call    FUN_004db630
        mov     ecx, dword ptr [edi + 0x24]
        and     ecx, 0xfffffffd
        or      ecx, 0x5
        mov     dword ptr [edi + 0x24], ecx
        and     ecx, 0xfffffff7
        add     esp, 0x4
        mov     dword ptr [edi + 0x24], ecx
        mov     ecx, dword ptr [g_84004c]
        push    edi
        call    FUN_006d3160
        mov     edx, dword ptr [g_84004c]
        mov     byte ptr [edx + 0x5c], 0x1
L_6e1a6d:
        and     ebx, 0xffffc2bf
        or      ebx, 0x280
        mov     dword ptr [esi + 0x30], ebx
L_6e1a7c:
        mov     eax, dword ptr [esi + 0x30]
        and     eax, 0x3fc0
        cmp     eax, 0x280
        pop     ebx
        jnz     L_6e1acc
        mov     edi, dword ptr [esi + 0x28]
        mov     ecx, dword ptr [edi + 0x24]
        and     ecx, 0x7
        cmp     cl, 0x5
        jz      L_6e1acc
        push    edi
        call    FUN_004db630
        mov     edx, dword ptr [edi + 0x24]
        and     edx, 0xfffffffd
        or      edx, 0x5
        mov     ecx, edx
        and     ecx, 0xfffffff7
        add     esp, 0x4
        mov     dword ptr [edi + 0x24], edx
        mov     dword ptr [edi + 0x24], ecx
        mov     ecx, dword ptr [g_84004c]
        push    edi
        call    FUN_006d3160
        mov     eax, dword ptr [g_84004c]
        mov     byte ptr [eax + 0x5c], 0x1
L_6e1acc:
        pop     edi
        mov     eax, esi
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
