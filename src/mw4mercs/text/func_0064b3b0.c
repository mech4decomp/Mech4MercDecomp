/*
 * FUN_0064b3b0 (1018 B) — __thiscall ABL module deserializer. Reads a module
 * from a stream (virtual read method vtable+0x20 / +0x2c), allocates
 * static-data arrays via the stack heap (g_008058b8), registers the object
 * in g_0080d974[g_0080d980], and (when g_007f2ba8 is set) builds
 * WatchManager/BreakPointManager sub-objects.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  g_0080d96c;
extern int  g_0080d970;
extern int  g_008058b8;
extern int  g_0080d974;
extern int  g_0080d980;
extern int  g_007f2ba8;
extern int  g_007b5a30;
extern int  g_007b5a34;

extern char g_792c00[];
extern char g_792bbc[];
extern char g_792b70[];
extern char g_792b3c[];

extern int (__cdecl *g_0076b420)(char *, const char *, ...);

extern int  __cdecl FUN_006f3c80(int, int);
extern void __cdecl FUN_0061ebc0(int, int *, int);
extern void __cdecl FUN_00562f10(int, const char *);
extern int  __cdecl FUN_004084d0(int);
extern int  __cdecl FUN_0061ee80(int, int, int);
extern void __cdecl FUN_0064c920(void);
extern int  __cdecl FUN_0061f110(int);
extern int  __cdecl FUN_0061f270(void);
extern int  __cdecl FUN_0061f690(int);
extern int  __cdecl FUN_0061f7f0(void);
extern void __cdecl FUN_0064b7d0(void);
extern void __cdecl FUN_004084e0(int);

__declspec(naked) void FUN_0064b3b0(void)
{
    __asm {
        sub     esp, 14ch
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, dword ptr [esp+160h]
        mov     eax, dword ptr [edi]
        xor     esi, esi
        mov     ebx, ecx
        push    esi
        push    19h
        lea     ecx, [esp+48h]
        push    ecx
        mov     ecx, edi
        mov     dword ptr [esp+48h], ebx
        mov     dword ptr [esp+38h], esi
        call    dword ptr [eax+2ch]
        cmp     dword ptr [ebx], -1
        setz    al
        test    al, al
        mov     byte ptr [esp+13h], al
        jz      L_b409
        mov     eax, dword ptr [g_0080d96c]
        mov     edx, dword ptr [edi]
        mov     dword ptr [ebx], eax
        inc     eax
        mov     dword ptr [g_0080d96c], eax
        push    4
        lea     eax, [ebx+20h]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+20h]
        mov     dword ptr [ebx+24h], esi
        jmp     L_b417
L_b409:
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esp+24h]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+20h]
L_b417:
        mov     edx, dword ptr [edi]
        push    1
        lea     eax, [esp+1fh]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+20h]
        mov     al, byte ptr [esp+1bh]
        test    al, al
        jz      L_b45b
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esp+20h]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx+20h]
        mov     ecx, dword ptr [esp+1ch]
        inc     ecx
        push    ecx
        call    FUN_004084d0
        mov     ecx, dword ptr [esp+20h]
        mov     edx, dword ptr [edi]
        add     esp, 4
        inc     ecx
        push    ecx
        push    eax
        mov     ecx, edi
        mov     dword ptr [esp+34h], eax
        call    dword ptr [edx+20h]
L_b45b:
        mov     eax, dword ptr [ebx+20h]
        mov     edx, dword ptr [g_0080d970]
        lea     ebp, [eax+eax*4]
        shl     ebp, 3
        mov     ecx, dword ptr [edx+ebp*1+18h]
        cmp     ecx, esi
        mov     dword ptr [esp+24h], ebp
        mov     dword ptr [esp+1ch], ecx
        jz      L_b6ab
        mov     al, byte ptr [esp+13h]
        test    al, al
        jz      L_b514
        mov     esi, dword ptr [g_008058b8]
        mov     eax, dword ptr [esi+0ch]
        test    eax, eax
        jz      L_b4e5
        push    eax
        lea     eax, [ecx*4]
        push    eax
        call    FUN_006f3c80
        lea     ecx, [esi+10h]
        mov     esi, dword ptr [ecx+8]
        mov     edx, eax
        mov     eax, dword ptr [ecx+4]
        cmp     eax, esi
        mov     dword ptr [esp+14h], edx
        jz      L_b4ce
        test    eax, eax
        jz      L_b4be
        mov     dword ptr [eax], edx
L_b4be:
        add     eax, 4
        mov     dword ptr [ecx+4], eax
        mov     eax, dword ptr [esp+14h]
        mov     ecx, dword ptr [esp+1ch]
        jmp     L_b4e7
L_b4ce:
        push    1
        lea     edx, [esp+18h]
        push    edx
        push    eax
        call    FUN_0061ebc0
        mov     eax, dword ptr [esp+14h]
        mov     ecx, dword ptr [esp+1ch]
        jmp     L_b4e7
L_b4e5:
        xor     eax, eax
L_b4e7:
        test    eax, eax
        mov     dword ptr [ebx+24h], eax
        jnz     L_b514
        mov     eax, dword ptr [ebx]
        push    eax
        lea     ecx, [esp+60h]
        push    offset g_792c00
        push    ecx
        call    dword ptr [g_0076b420]
        lea     edx, [esp+68h]
        push    edx
        push    0
        call    FUN_00562f10
        mov     ecx, dword ptr [esp+30h]
        add     esp, 14h
L_b514:
        mov     eax, dword ptr [g_0080d970]
        mov     edx, dword ptr [eax+ebp*1+1ch]
        xor     esi, esi
        test    ecx, ecx
        mov     dword ptr [esp+38h], edx
        mov     dword ptr [esp+28h], esi
        jle     L_b6ab
L_b52f:
        mov     eax, dword ptr [esp+38h]
        mov     ecx, dword ptr [eax+esi*4]
        test    ecx, ecx
        mov     dword ptr [esp+30h], ecx
        jle     L_b684
        mov     al, byte ptr [esp+13h]
        test    al, al
        jz      L_b678
        mov     ebp, dword ptr [g_008058b8]
        mov     eax, dword ptr [ebp+0ch]
        test    eax, eax
        jz      L_b632
        push    eax
        push    ecx
        call    FUN_006f3c80
        mov     edi, dword ptr [ebp+14h]
        mov     esi, dword ptr [ebp+18h]
        cmp     edi, esi
        mov     dword ptr [esp+34h], eax
        jz      L_b585
        test    edi, edi
        jz      L_b57a
        mov     dword ptr [edi], eax
L_b57a:
        add     edi, 4
        mov     dword ptr [ebp+14h], edi
        jmp     L_b61d
L_b585:
        mov     ebx, dword ptr [ebp+10h]
        mov     eax, edi
        sub     eax, ebx
        sar     eax, 2
        cmp     eax, 1
        mov     dword ptr [esp+14h], 1
        mov     dword ptr [esp+20h], eax
        lea     ecx, [esp+14h]
        jc      L_b5a8
        lea     ecx, [esp+20h]
L_b5a8:
        mov     ecx, dword ptr [ecx]
        add     ecx, eax
        mov     dword ptr [esp+20h], ecx
        jz      L_b5c4
        shl     ecx, 2
        push    ecx
        call    FUN_004084d0
        add     esp, 4
        mov     dword ptr [esp+14h], eax
        jmp     L_b5cc
L_b5c4:
        mov     dword ptr [esp+14h], 0
L_b5cc:
        mov     edx, dword ptr [esp+14h]
        push    edx
        push    edi
        push    ebx
        call    FUN_0061ee80
        add     esp, 0ch
        test    eax, eax
        jz      L_b5e5
        mov     ecx, dword ptr [esp+34h]
        mov     dword ptr [eax], ecx
L_b5e5:
        add     eax, 4
        push    eax
        push    edi
        push    edi
        call    FUN_0061ee80
        sub     esi, ebx
        add     esp, 0ch
        sar     esi, 2
        push    esi
        lea     esi, [ebp+18h]
        push    ebx
        mov     ecx, esi
        mov     edi, eax
        call    FUN_0064c920
        mov     eax, dword ptr [esp+14h]
        mov     edx, dword ptr [esp+20h]
        mov     ebx, dword ptr [esp+3ch]
        mov     dword ptr [ebp+10h], eax
        lea     eax, [eax+edx*4]
        mov     dword ptr [ebp+14h], edi
        mov     dword ptr [esi], eax
L_b61d:
        mov     edx, dword ptr [esp+34h]
        mov     edi, dword ptr [esp+160h]
        mov     esi, dword ptr [esp+28h]
        mov     ecx, dword ptr [esp+30h]
        jmp     L_b634
L_b632:
        xor     edx, edx
L_b634:
        mov     eax, dword ptr [ebx+24h]
        test    eax, eax
        mov     dword ptr [eax+esi*4], edx
        jnz     L_b674
        mov     ecx, dword ptr [ebx]
        push    ecx
        lea     edx, [esp+60h]
        push    offset g_792bbc
        push    edx
        call    dword ptr [g_0076b420]
        lea     eax, [esp+68h]
        push    eax
        push    0
        call    FUN_00562f10
        mov     ecx, dword ptr [esp+44h]
        mov     eax, dword ptr [ebx+24h]
        mov     ebp, dword ptr [esp+38h]
        mov     edx, dword ptr [edi]
        add     esp, 14h
        push    ecx
        mov     ecx, dword ptr [eax+esi*4]
        push    ecx
        jmp     L_b695
L_b674:
        mov     ebp, dword ptr [esp+24h]
L_b678:
        mov     eax, dword ptr [ebx+24h]
        mov     edx, dword ptr [edi]
        push    ecx
        mov     ecx, dword ptr [eax+esi*4]
        push    ecx
        jmp     L_b695
L_b684:
        mov     edx, dword ptr [ebx+24h]
        lea     eax, [edx+esi*4]
        mov     edx, dword ptr [edi]
        push    4
        mov     dword ptr [eax], 0
        push    eax
L_b695:
        mov     ecx, edi
        call    dword ptr [edx+20h]
        mov     eax, dword ptr [esp+1ch]
        inc     esi
        cmp     esi, eax
        mov     dword ptr [esp+28h], esi
        jl      L_b52f
L_b6ab:
        mov     al, byte ptr [esp+13h]
        test    al, al
        jz      L_b788
        mov     eax, dword ptr [g_0080d970]
        mov     edx, dword ptr [eax+ebp*1+24h]
        mov     ecx, dword ptr [g_0080d974]
        inc     edx
        mov     dword ptr [eax+ebp*1+24h], edx
        mov     eax, dword ptr [g_0080d980]
        mov     dword ptr [ecx+eax*4], ebx
        inc     eax
        mov     dword ptr [g_0080d980], eax
        mov     eax, dword ptr [g_007f2ba8]
        xor     esi, esi
        cmp     eax, esi
        mov     byte ptr [ebx+2ch], 0
        jz      L_b788
        push    0ch
        call    FUN_0061f110
        add     esp, 4
        cmp     eax, esi
        jz      L_b701
        mov     dword ptr [eax], esi
        mov     dword ptr [eax+8], esi
        mov     esi, eax
L_b701:
        xor     edi, edi
        cmp     esi, edi
        mov     dword ptr [ebx+30h], esi
        jnz     L_b718
        push    offset g_792b70
        push    edi
        call    FUN_00562f10
        add     esp, 8
L_b718:
        mov     edx, dword ptr [g_007b5a30]
        push    edx
        mov     ecx, esi
        call    FUN_0061f270
        test    eax, eax
        jz      L_b738
        push    offset g_792b70
        push    edi
        call    FUN_00562f10
        add     esp, 8
L_b738:
        push    0ch
        call    FUN_0061f690
        add     esp, 4
        cmp     eax, edi
        jz      L_b752
        mov     dword ptr [eax], edi
        mov     dword ptr [eax+4], edi
        mov     dword ptr [eax+8], edi
        mov     esi, eax
        jmp     L_b754
L_b752:
        xor     esi, esi
L_b754:
        cmp     esi, edi
        mov     dword ptr [ebx+34h], esi
        jnz     L_b769
        push    offset g_792b3c
        push    edi
        call    FUN_00562f10
        add     esp, 8
L_b769:
        mov     eax, dword ptr [g_007b5a34]
        push    eax
        mov     ecx, esi
        call    FUN_0061f7f0
        test    eax, eax
        jz      L_b788
        push    offset g_792b3c
        push    edi
        call    FUN_00562f10
        add     esp, 8
L_b788:
        mov     esi, dword ptr [esp+2ch]
        push    esi
        mov     ecx, ebx
        call    FUN_0064b7d0
        push    esi
        call    FUN_004084e0
        add     esp, 4
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 14ch
        ret     4
    }
}
