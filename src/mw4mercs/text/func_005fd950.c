/*
 * FUN_005fd950 (1804 B) — mission-name matcher.
 *
 * Builds a stack object (FUN_00412570 / FUN_004128e0), then compares the
 * input string against a list of exact-match mission names ("jungle",
 * "tropical", ... "griffonbase"); on a match calls FUN_0040d9b0() and
 * returns 1. Otherwise runs a chain of strstr() checks against a large
 * list of substrings (via function pointer g_0076b298); on a match
 * returns 1. If no substring matches, decrements param_1[-1] (a refcount)
 * and frees it if it hits 0, returning 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00412570(void);
extern void FUN_004128e0(void);
extern void FUN_0040d9b0(void);
extern void __stdcall FUN_004084e0(void *p);
extern int g_0076b298;

__declspec(naked) int __cdecl FUN_005fd950(void)
{
    __asm {
        mov     eax, dword ptr [esp + 4]
        push    ebx
        push    esi
        push    edi
        push    eax
        lea     ecx, [esp + 0x14]
        call    FUN_00412570
        lea     ecx, [esp + 0x10]
        call    FUN_004128e0
        mov     edi, dword ptr [esp + 0x10]

        /* "jungle" */
        mov     esi, 0x78b0ec
        mov     eax, edi
L975:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     L99d
        test    cl, cl
        jz      L999
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jnz     L99d
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L975
L999:
        xor     eax, eax
        jmp     L9a2
L99d:
        sbb     eax, eax
        sbb     eax, -1
L9a2:
        test    eax, eax
        jnz     L9b5
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
L9b5:

        /* "tropical" */
        mov     esi, 0x78b0e0
        mov     eax, edi
L9bc:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     L9e4
        test    cl, cl
        jz      L9e0
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jnz     L9e4
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     L9bc
L9e0:
        xor     eax, eax
        jmp     L9e9
L9e4:
        sbb     eax, eax
        sbb     eax, -1
L9e9:
        test    eax, eax
        jnz     L9fc
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
L9fc:

        /* "gladiatorpit" */
        mov     esi, 0x78b0d0
        mov     eax, edi
La03:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     La2b
        test    cl, cl
        jz      La27
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jnz     La2b
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     La03
La27:
        xor     eax, eax
        jmp     La30
La2b:
        sbb     eax, eax
        sbb     eax, -1
La30:
        test    eax, eax
        jnz     La43
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
La43:

        /* "rubblepile" */
        mov     esi, 0x78b0c4
        mov     eax, edi
La4a:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     La72
        test    cl, cl
        jz      La6e
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jnz     La72
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     La4a
La6e:
        xor     eax, eax
        jmp     La77
La72:
        sbb     eax, eax
        sbb     eax, -1
La77:
        test    eax, eax
        jnz     La8a
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
La8a:

        /* "manorhouseassault" */
        mov     esi, 0x78b0b0
        mov     eax, edi
La91:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     Lab9
        test    cl, cl
        jz      Lab5
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jnz     Lab9
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     La91
Lab5:
        xor     eax, eax
        jmp     Labe
Lab9:
        sbb     eax, eax
        sbb     eax, -1
Labe:
        test    eax, eax
        jnz     Lad1
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
Lad1:

        /* "paradisehold" */
        mov     esi, 0x78b0a0
        mov     eax, edi
Lad8:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     Lb00
        test    cl, cl
        jz      Lafc
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jnz     Lb00
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     Lad8
Lafc:
        xor     eax, eax
        jmp     Lb05
Lb00:
        sbb     eax, eax
        sbb     eax, -1
Lb05:
        test    eax, eax
        jnz     Lb18
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
Lb18:

        /* "tumbleweedassault" */
        mov     esi, 0x78b08c
        mov     eax, edi
Lb1f:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     Lb47
        test    cl, cl
        jz      Lb43
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jnz     Lb47
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     Lb1f
Lb43:
        xor     eax, eax
        jmp     Lb4c
Lb47:
        sbb     eax, eax
        sbb     eax, -1
Lb4c:
        test    eax, eax
        jnz     Lb5f
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
Lb5f:

        /* "royalguard" */
        mov     esi, 0x78b080
        mov     eax, edi
Lb66:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     Lb8e
        test    cl, cl
        jz      Lb8a
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jnz     Lb8e
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     Lb66
Lb8a:
        xor     eax, eax
        jmp     Lb93
Lb8e:
        sbb     eax, eax
        sbb     eax, -1
Lb93:
        test    eax, eax
        jnz     Lba6
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
Lba6:

        /* "defianceholds" */
        mov     esi, 0x78b070
        mov     eax, edi
Lbad:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     Lbd5
        test    cl, cl
        jz      Lbd1
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jnz     Lbd5
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     Lbad
Lbd1:
        xor     eax, eax
        jmp     Lbda
Lbd5:
        sbb     eax, eax
        sbb     eax, -1
Lbda:
        test    eax, eax
        jnz     Lbed
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
Lbed:

        /* "griffonbase" */
        mov     esi, 0x78b064
        mov     eax, edi
Lbf4:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     Lc1c
        test    cl, cl
        jz      Lc18
        mov     dl, byte ptr [eax + 1]
        mov     bl, byte ptr [esi + 1]
        mov     cl, dl
        cmp     dl, bl
        jnz     Lc1c
        add     eax, 2
        add     esi, 2
        test    cl, cl
        jnz     Lbf4
Lc18:
        xor     eax, eax
        jmp     Lc21
Lc1c:
        sbb     eax, eax
        sbb     eax, -1
Lc21:
        test    eax, eax
        jnz     Lc34
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
Lc34:

        /* strstr chain via g_0076b298 */
        mov     esi, dword ptr [g_0076b298]

        /* "equinox" */
        push    0x78b05c
        push    edi
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldc58
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
Ldc58:
        /* "highlands" */
        mov     eax, dword ptr [esp + 0x10]
        push    0x78b050
        push    eax
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldc7a
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
Ldc7a:
        /* "hogsback" */
        mov     ecx, dword ptr [esp + 0x10]
        push    0x78b044
        push    ecx
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldc9c
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
Ldc9c:
        /* "polartundra" */
        mov     edx, dword ptr [esp + 0x10]
        push    0x78b038
        push    edx
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldcbe
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
Ldcbe:
        /* "snowbound" */
        mov     eax, dword ptr [esp + 0x10]
        push    0x78b02c
        push    eax
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldce0
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
Ldce0:
        /* "wetlands" */
        mov     ecx, dword ptr [esp + 0x10]
        push    0x78b020
        push    ecx
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldd02
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
Ldd02:
        /* "scrub" */
        mov     edx, dword ptr [esp + 0x10]
        push    0x78b018
        push    edx
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldd24
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
Ldd24:
        /* "lakefront" */
        mov     eax, dword ptr [esp + 0x10]
        push    0x78b00c
        push    eax
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldd46
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
Ldd46:
        /* "bigcity" */
        mov     ecx, dword ptr [esp + 0x10]
        push    0x78b004
        push    ecx
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldd68
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
Ldd68:
        /* "centralpark" */
        mov     edx, dword ptr [esp + 0x10]
        push    0x78aff8
        push    edx
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldd8a
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
Ldd8a:
        /* "dustbowl" */
        mov     eax, dword ptr [esp + 0x10]
        push    0x78afec
        push    eax
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Lddac
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
Lddac:
        /* "frostbite" */
        mov     ecx, dword ptr [esp + 0x10]
        push    0x78afe0
        push    ecx
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Lddce
        lea     ecx, [esp + 0x10]
        call    FUN_0040d9b0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
Lddce:
        /* "gatorbait" */
        mov     edx, dword ptr [esp + 0x10]
        push    0x78afd4
        push    edx
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Lddea
        mov     eax, dword ptr [esp + 0x10]
        jmp     Le022
Lddea:
        /* "innercity" */
        mov     eax, dword ptr [esp + 0x10]
        push    0x78afc8
        push    eax
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Lde06
        mov     eax, dword ptr [esp + 0x10]
        jmp     Le022
Lde06:
        /* "lunacy" */
        mov     ecx, dword ptr [esp + 0x10]
        push    0x78afc0
        push    ecx
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Lde22
        mov     eax, dword ptr [esp + 0x10]
        jmp     Le022
Lde22:
        /* "palacegates" */
        mov     edx, dword ptr [esp + 0x10]
        push    0x78afb4
        push    edx
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Lde3e
        mov     eax, dword ptr [esp + 0x10]
        jmp     Le022
Lde3e:
        /* "snowjob" */
        mov     eax, dword ptr [esp + 0x10]
        push    0x78afac
        push    eax
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Lde5a
        mov     eax, dword ptr [esp + 0x10]
        jmp     Le022
Lde5a:
        /* "timberline" */
        mov     ecx, dword ptr [esp + 0x10]
        push    0x78afa0
        push    ecx
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Lde76
        mov     eax, dword ptr [esp + 0x10]
        jmp     Le022
Lde76:
        /* "coliseum" */
        mov     edx, dword ptr [esp + 0x10]
        push    0x78af94
        push    edx
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Lde92
        mov     eax, dword ptr [esp + 0x10]
        jmp     Le022
Lde92:
        /* "factory" */
        mov     eax, dword ptr [esp + 0x10]
        push    0x78af8c
        push    eax
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldeae
        mov     eax, dword ptr [esp + 0x10]
        jmp     Le022
Ldeae:
        /* "canyon" */
        mov     ecx, dword ptr [esp + 0x10]
        push    0x78af84
        push    ecx
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldeca
        mov     eax, dword ptr [esp + 0x10]
        jmp     Le022
Ldeca:
        /* "ghosthighway" */
        mov     edx, dword ptr [esp + 0x10]
        push    0x78af74
        push    edx
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldee6
        mov     eax, dword ptr [esp + 0x10]
        jmp     Le022
Ldee6:
        /* "spaceport" */
        mov     eax, dword ptr [esp + 0x10]
        push    0x78af68
        push    eax
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldf02
        mov     eax, dword ptr [esp + 0x10]
        jmp     Le022
Ldf02:
        /* "rubble" */
        mov     ecx, dword ptr [esp + 0x10]
        push    0x78af60
        push    ecx
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldf1e
        mov     eax, dword ptr [esp + 0x10]
        jmp     Le022
Ldf1e:
        /* "vbase" */
        mov     edx, dword ptr [esp + 0x10]
        push    0x78af58
        push    edx
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldf3a
        mov     eax, dword ptr [esp + 0x10]
        jmp     Le022
Ldf3a:
        /* "aspen" */
        mov     eax, dword ptr [esp + 0x10]
        push    0x78af50
        push    eax
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldf56
        mov     eax, dword ptr [esp + 0x10]
        jmp     Le022
Ldf56:
        /* "cantina" */
        mov     ecx, dword ptr [esp + 0x10]
        push    0x78af48
        push    ecx
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldf72
        mov     eax, dword ptr [esp + 0x10]
        jmp     Le022
Ldf72:
        /* "minehq" */
        mov     edx, dword ptr [esp + 0x10]
        push    0x78af40
        push    edx
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldf8e
        mov     eax, dword ptr [esp + 0x10]
        jmp     Le022
Ldf8e:
        /* "riogrande" */
        mov     eax, dword ptr [esp + 0x10]
        push    0x78af34
        push    eax
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldfa7
        mov     eax, dword ptr [esp + 0x10]
        jmp     Le022
Ldfa7:
        /* "mechworks" */
        mov     ecx, dword ptr [esp + 0x10]
        push    0x78af28
        push    ecx
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldfc0
        mov     eax, dword ptr [esp + 0x10]
        jmp     Le022
Ldfc0:
        /* "lakeside" */
        mov     edx, dword ptr [esp + 0x10]
        push    0x78af1c
        push    edx
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldfd9
        mov     eax, dword ptr [esp + 0x10]
        jmp     Le022
Ldfd9:
        /* "lakesidehold" */
        mov     eax, dword ptr [esp + 0x10]
        push    0x78af0c
        push    eax
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Ldff2
        mov     eax, dword ptr [esp + 0x10]
        jmp     Le022
Ldff2:
        /* "mountain" */
        mov     ecx, dword ptr [esp + 0x10]
        push    0x78af00
        push    ecx
        call    esi
        add     esp, 8
        test    eax, eax
        jz      Le00b
        mov     eax, dword ptr [esp + 0x10]
        jmp     Le022
Le00b:
        /* "mountainhold" */
        mov     edx, dword ptr [esp + 0x10]
        push    0x78aef0
        push    edx
        call    esi
        add     esp, 8
        test    eax, eax
        mov     eax, dword ptr [esp + 0x10]
        jz      Le03f
Le022:
        test    eax, eax
        jz      Le039
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     Le039
        push    eax
        call    FUN_004084e0
        add     esp, 4
Le039:
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret
Le03f:
        test    eax, eax
        jz      Le056
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     Le056
        push    eax
        call    FUN_004084e0
        add     esp, 4
Le056:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        ret
    }
}
