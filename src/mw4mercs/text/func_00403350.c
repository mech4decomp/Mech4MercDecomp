/*
 * FUN_00403350 (1086 B) - Game-list filter application: reads options.ini,
 * builds a filter bitmask, and applies per-slot filter settings. __stdcall,
 * 3 args.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006f9050(void);
extern void __cdecl FUN_00700660(void);
extern void __cdecl FUN_00707100(void);
extern void __cdecl FUN_00512ff0(void);
extern void __cdecl FUN_0040dca0(void);
extern void __cdecl FUN_0040ecc0(void);
extern void __cdecl FUN_00411bf0(void);
extern void __cdecl FUN_0040de20(void);
extern void __cdecl FUN_00703400(void);
extern void __cdecl FUN_006f8e40(void);
extern void __cdecl FUN_00701f20(void);
extern void __cdecl FUN_00405f30(void);
extern void __cdecl FUN_006f9000(void);
extern void __cdecl FUN_004cdfa0(void);
extern void __cdecl FUN_006f8f30(void);
extern void __cdecl FUN_006fcab0(void);

extern int  *g_76b318;   /* atoi IAT */

extern int  g_7b21c4;
extern char g_8493d4;
extern char g_7b796a;
extern int  g_7b7b6c;
extern int  g_7b7e40;
extern int  g_7dab44;
extern int  g_7dab40;
extern int  g_7db094;

__declspec(naked) void FUN_00403350(void)
{
    __asm {
        mov     eax, dword ptr [g_7b21c4]
        sub     esp, 0xbc
        test    eax, eax
        push    ebx
        push    ebp
        push    esi
        push    edi
        jz      L_40377e
        mov     al, byte ptr [g_8493d4]
        test    al, al
        jnz     L_40377e
        mov     al, byte ptr [g_7b796a]
        test    al, al
        jz      L_40377e
        call    FUN_006f9050
        call    FUN_00700660
        call    FUN_00707100
        mov     edi, dword ptr [g_7b7b6c]
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    0
        lea     eax, [esp + 0x20]
        and     edi, 0xff
        push    0
        mov     dword ptr [esp + 0x20], edi
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x24], 0
        call    FUN_00512ff0
        test    eax, eax
        jz      L_4033cc
        or      edi, 0x100
        mov     dword ptr [esp + 0x14], edi
L_4033cc:
        lea     edx, [esp + 0x1c]
        push    edx
        push    0
        push    0
        mov     dword ptr [esp + 0x24], 0x28
        call    FUN_00512ff0
        test    eax, eax
        jz      L_4033f0
        or      edi, 0x200
        mov     dword ptr [esp + 0x14], edi
L_4033f0:
        lea     eax, [esp + 0x1c]
        push    eax
        push    0
        push    0
        mov     dword ptr [esp + 0x24], 1
        call    FUN_00512ff0
        test    eax, eax
        jz      L_403414
        or      edi, 0x800
        mov     dword ptr [esp + 0x14], edi
L_403414:
        push    1
        push    0
        xor     bl, bl
        push    0x77826c
        lea     ecx, [esp + 0x38]
        mov     byte ptr [esp + 0x1f], bl
        call    FUN_0040dca0
        push    0x778288
        lea     ecx, [esp + 0x30]
        call    FUN_0040ecc0
        mov     esi, eax
        test    esi, esi
        jz      L_40349c
        push    0
        lea     ecx, [esp + 0x2c]
        push    ecx
        push    0x76ba74
        mov     ecx, esi
        call    FUN_00411bf0
        test    al, al
        jz      L_40349c
        mov     edx, dword ptr [esp + 0x28]
        mov     ebp, dword ptr [g_76b318]
        push    edx
        call    ebp
        add     esp, 4
        test    eax, eax
        setnz   bl
        test    bl, bl
        jz      L_40349c
        push    0
        lea     eax, [esp + 0x28]
        push    eax
        push    0x76ba68
        mov     ecx, esi
        call    FUN_00411bf0
        test    al, al
        jz      L_40349a
        mov     ecx, dword ptr [esp + 0x24]
        push    ecx
        call    ebp
        add     esp, 4
        test    eax, eax
        setnz   byte ptr [esp + 0x13]
        jmp     L_40349c
L_40349a:
        xor     bl, bl
L_40349c:
        lea     ecx, [esp + 0x2c]
        call    FUN_0040de20
        test    bl, bl
        jz      L_4034b3
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     L_4034c6
        jmp     L_4034bc
L_4034b3:
        cmp     dword ptr [g_7b7b6c], 2
        jge     L_4034c6
L_4034bc:
        or      edi, 0x1000
        mov     dword ptr [esp + 0x14], edi
L_4034c6:
        push    edi
        call    FUN_00703400
        call    FUN_006f8e40
        test    al, al
        jnz     L_4034e7
        call    FUN_006f9050
        pop     edi
        pop     esi
        pop     ebp
        xor     eax, eax
        pop     ebx
        add     esp, 0xbc
        ret
L_4034e7:
        push    0
        push    0
        push    3
        call    FUN_00701f20
        test    eax, eax
        jz      L_403511
        push    0
        push    0
        push    3
        call    FUN_00701f20
        push    eax
        push    0x7b7e40
        call    FUN_00405f30
        add     esp, 8
        jmp     L_40351a
L_403511:
        mov     edx, dword ptr [g_7b7e40]
        mov     byte ptr [edx], 0
L_40351a:
        push    1
        push    0
        push    0x778278
        lea     ecx, [esp + 0x88]
        mov     dword ptr [esp + 0x2c], 0x76ba64
        call    FUN_0040dca0
        push    0x778278
        lea     ecx, [esp + 0x80]
        call    FUN_0040ecc0
        test    eax, eax
        jz      L_40355f
        push    0
        lea     ecx, [esp + 0x24]
        push    ecx
        push    0x76ba58
        mov     ecx, eax
        call    FUN_00411bf0
L_40355f:
        push    0
        push    0
        push    4
        call    FUN_00701f20
        mov     edx, dword ptr [esp + 0x20]
        push    edx
        push    0x79fb70
        push    eax
        call    FUN_006f9000
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ebp, dword ptr [ecx + 0xc]
        xor     ebp, 0x85739531
        xor     ebx, ebx
        lea     edi, [ebp + 0x358c]
L_403598:
        mov     al, byte ptr [edi - 0x54]
        test    al, al
        jz      L_4035f4
        mov     eax, dword ptr [esp + 0x14]
        __emit  0xF6   /* test ah,1 - MSVC6 rejects test ah,imm8 */
        __emit  0xC4
        __emit  0x01
        jz      L_4035b6
        mov     eax, dword ptr [g_7db094]
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x28]
        cmp     ebx, edx
        jz      L_4035f4
L_4035b6:
        mov     ecx, dword ptr [g_7dab44]
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [g_7dab40]
        mov     ecx, dword ptr [eax + 0x14]
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        mov     edx, dword ptr [edi - 4]
        mov     esi, dword ptr [eax + 0x2c]
        push    0
        push    edx
        push    esi
        call    FUN_006f8f30
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      L_4035f4
        push    eax
        push    0x79fb70
        push    esi
        call    FUN_006fcab0
L_4035f4:
        inc     ebx
        add     edi, 0x2038
        cmp     ebx, 0xff
        jl      L_403598
        mov     edi, 0x100
        lea     esi, [ebp + 0x205e34]
L_40360e:
        mov     cl, byte ptr [esi + 0x100]
        test    cl, cl
        lea     eax, [esi + 0xffffff00]
        jz      L_403637
        push    0
        push    eax
        push    edi
        call    FUN_006f8f30
        test    esi, esi
        jz      L_403637
        push    esi
        push    0x79fb70
        push    edi
        call    FUN_006fcab0
L_403637:
        add     esi, 0x22ac
        inc     edi
        lea     eax, [edi + 0xffffff00]
        cmp     eax, 0x18
        jl      L_40360e
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    0
        push    0
        mov     dword ptr [esp + 0x24], 0xe
        call    FUN_00512ff0
        test    eax, eax
        jz      L_403683
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_7dab40]
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0xea60
        jmp     L_4036a0
L_403683:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0xea61
L_4036a0:
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x79fb0c
        push    0
        call    FUN_006fcab0
        lea     eax, [esp + 0x1c]
        push    eax
        push    0
        push    0
        mov     dword ptr [esp + 0x24], 6
        call    FUN_00512ff0
        test    eax, eax
        mov     ecx, dword ptr [g_7dab44]
        mov     edx, dword ptr [ecx]
        mov     ebx, dword ptr [g_7dab40]
        jz      L_4036ec
        xor     edx, ebx
        mov     ecx, dword ptr [edx + 0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    0xea61
        jmp     L_4036fe
L_4036ec:
        xor     edx, ebx
        mov     ecx, dword ptr [edx + 0xc]
        xor     ecx, 0x85739531
        mov     eax, dword ptr [ecx]
        push    0xea60
L_4036fe:
        call    dword ptr [eax + 0x34]
        push    eax
        push    0x79fb1c
        push    0
        call    FUN_006fcab0
        lea     ecx, [esp + 0x1c]
        push    ecx
        push    0
        push    0
        mov     dword ptr [esp + 0x24], 9
        call    FUN_00512ff0
        test    eax, eax
        jz      L_403748
        mov     edx, dword ptr [g_7dab44]
        mov     eax, dword ptr [edx]
        xor     eax, dword ptr [g_7dab40]
        mov     ecx, dword ptr [eax + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0xea60
        jmp     L_403765
L_403748:
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_7dab40]
        mov     ecx, dword ptr [ecx + 0xc]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0xea61
L_403765:
        call    dword ptr [edx + 0x34]
        push    eax
        push    0x79fb24
        push    0
        call    FUN_006fcab0
        lea     ecx, [esp + 0x7c]
        call    FUN_0040de20
L_40377e:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, 1
        pop     ebx
        add     esp, 0xbc
        ret
    }
}
