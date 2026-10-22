/*
 * FUN_10007980 (880 B) - __thiscall XML-header parser state machine.
 * Reads a wide char from this+0x14 and dispatches on a state variable (ESI)
 * via an in-function jump table at 0x10007cf0. Handles the <?xml ...?>
 * prolog: version (FUN_100075e0), encoding (FUN_100076e0), standalone
 * (FUN_100077e0), whitespace skipping (FUN_10007f00), and wcsncmp checks
 * against 0x1002563c. Error paths call FUN_10008d30 with a message string.
 *
 * __thiscall (ECX = this), RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_1002114C;   /* function pointer loaded into EBX, called via CALL EBX */
extern void __cdecl FUN_10006e80(void);
extern void __cdecl FUN_10007f00(void);
extern void __cdecl FUN_100075e0(void);
extern void __cdecl FUN_100076e0(void);
extern void __cdecl FUN_100077e0(void);
extern void __cdecl FUN_10008d30(void);
extern int g_jt_10007cf0;   /* jump table base 0x10007cf0 */

__declspec(naked) void __cdecl FUN_10007980(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [g_1002114C]
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     edi, ecx
        xor     esi, esi
loc_7992:
        mov     ecx, dword ptr [edi + 0x14]
        cmp     esi, 7
        mov     ax, word ptr [ecx]
        ja      loc_7afe
        jmp     dword ptr [esi*4 + g_jt_10007cf0]
loc_79a8:
        mov     eax, 0x10025658
        test    eax, eax
        jnz     loc_79b8
        test    ecx, ecx
        setz    al
        jmp     loc_79c9
loc_79b8:
        test    ecx, ecx
        jz      loc_79d1
        push    5
        push    ecx
        push    0x10025658
        call    ebx
        add     esp, 0xc
loc_79c9:
        test    eax, eax
        jnz     loc_7b0b
loc_79d1:
        push    5
        lea     ecx, [edi + 0xc]
        mov     esi, 1
        call    FUN_10006e80
        jmp     loc_7992
loc_79e2:
        cmp     ax, 0x20
        jz      loc_79fe
        cmp     ax, 0x9
        jz      loc_79fe
        cmp     ax, 0xd
        jz      loc_79fe
        cmp     ax, 0xa
        jnz     loc_7b33
loc_79fe:
        mov     ecx, edi
        call    FUN_10007f00
        mov     esi, 2
        jmp     loc_7992
loc_7a0c:
        cmp     ax, 0x76
        jnz     loc_7b40
        lea     ecx, [ebp + 0x50]
        push    ecx
        mov     ecx, edi
        call    FUN_100075e0
        test    al, al
        jz      loc_7c1d
        mov     esi, 3
        jmp     loc_7992
loc_7a33:
        cmp     ax, 0x20
        jz      loc_7a4f
        cmp     ax, 0x9
        jz      loc_7a4f
        cmp     ax, 0xd
        jz      loc_7a4f
        cmp     ax, 0xa
        jnz     loc_7b4d
loc_7a4f:
        mov     ecx, edi
        call    FUN_10007f00
        mov     esi, 4
        jmp     loc_7992
loc_7a60:
        cmp     ax, 0x65
        jnz     loc_7a83
        lea     edx, [ebp + 0x5c]
        mov     ecx, edi
        push    edx
        call    FUN_100076e0
        test    al, al
        jz      loc_7c1d
        mov     esi, 5
        jmp     loc_7992
loc_7a83:
        cmp     ax, 0x73
        jnz     loc_7b71
        lea     eax, [ebp + 0x68]
        mov     ecx, edi
        push    eax
        call    FUN_100077e0
        test    al, al
        jz      loc_7c1d
        mov     esi, 7
        jmp     loc_7992
loc_7aaa:
        cmp     ax, 0x20
        jz      loc_7ac6
        cmp     ax, 0x9
        jz      loc_7ac6
        cmp     ax, 0xd
        jz      loc_7ac6
        cmp     ax, 0xa
        jnz     loc_7bc7
loc_7ac6:
        mov     ecx, edi
        call    FUN_10007f00
        mov     esi, 6
        jmp     loc_7992
loc_7ad7:
        cmp     ax, 0x73
        jnz     loc_7c2f
        lea     ecx, [ebp + 0x68]
        push    ecx
        mov     ecx, edi
        call    FUN_100077e0
        test    al, al
        jz      loc_7c1d
        mov     esi, 7
        jmp     loc_7992
loc_7afe:
        test    esi, esi
        jl      loc_7ce1
        jmp     loc_7992
loc_7b0b:
        mov     al, byte ptr [esp + 0x18]
        test    al, al
        jz      loc_7b26
        mov     esi, 0xfffffffe
        xor     eax, eax
        cmp     esi, esi
        pop     edi
        pop     esi
        pop     ebp
        setz    al
        pop     ebx
        ret     8
loc_7b26:
        or      esi, 0xffffffff
        push    0x10025650
        jmp     loc_7cda
loc_7b33:
        or      esi, 0xffffffff
        push    0x10025644
        jmp     loc_7cda
loc_7b40:
        or      esi, 0xffffffff
        push    0x100254a0
        jmp     loc_7cda
loc_7b4d:
        mov     eax, dword ptr [edi + 0x14]
        mov     edx, 0x1002563c
        test    edx, edx
        jnz     loc_7b67
        xor     ecx, ecx
        test    eax, eax
        setz    cl
        mov     eax, ecx
        jmp     loc_7bef
loc_7b67:
        test    eax, eax
        jz      loc_7bf3
        jmp     loc_7be2
loc_7b71:
        mov     eax, dword ptr [edi + 0x14]
        mov     edx, 0x1002563c
        test    edx, edx
        jnz     loc_7b88
        xor     ecx, ecx
        test    eax, eax
        setz    cl
        mov     eax, ecx
        jmp     loc_7b99
loc_7b88:
        test    eax, eax
        jz      loc_7b9d
        push    2
        push    eax
        push    0x1002563c
        call    ebx
        add     esp, 0xc
loc_7b99:
        test    eax, eax
        jnz     loc_7bba
loc_7b9d:
        push    2
        lea     ecx, [edi + 0xc]
        call    FUN_10006e80
        mov     esi, 0xfffffffe
        xor     eax, eax
        cmp     esi, esi
        pop     edi
        pop     esi
        pop     ebp
        setz    al
        pop     ebx
        ret     8
loc_7bba:
        or      esi, 0xffffffff
        push    0x1002560c
        jmp     loc_7cda
loc_7bc7:
        mov     eax, dword ptr [edi + 0x14]
        mov     edx, 0x1002563c
        test    edx, edx
        jnz     loc_7bde
        xor     ecx, ecx
        test    eax, eax
        setz    cl
        mov     eax, ecx
        jmp     loc_7bef
loc_7bde:
        test    eax, eax
        jz      loc_7bf3
loc_7be2:
        push    2
        push    eax
        push    0x1002563c
        call    ebx
        add     esp, 0xc
loc_7bef:
        test    eax, eax
        jnz     loc_7c10
loc_7bf3:
        push    2
        lea     ecx, [edi + 0xc]
        call    FUN_10006e80
        mov     esi, 0xfffffffe
        xor     eax, eax
        cmp     esi, esi
        pop     edi
        pop     esi
        pop     ebp
        setz    al
        pop     ebx
        ret     8
loc_7c10:
        or      esi, 0xffffffff
        push    0x100255f8
        jmp     loc_7cda
loc_7c1d:
        or      esi, 0xffffffff
        xor     eax, eax
        cmp     esi, -2
        pop     edi
        pop     esi
        pop     ebp
        setz    al
        pop     ebx
        ret     8
loc_7c2f:
        mov     eax, dword ptr [edi + 0x14]
        mov     edx, 0x1002563c
        test    edx, edx
        jnz     loc_7c46
        xor     ecx, ecx
        test    eax, eax
        setz    cl
        mov     eax, ecx
        jmp     loc_7c57
loc_7c46:
        test    eax, eax
        jz      loc_7c5b
        push    2
        push    eax
        push    0x1002563c
        call    ebx
        add     esp, 0xc
loc_7c57:
        test    eax, eax
        jnz     loc_7c78
loc_7c5b:
        push    2
        lea     ecx, [edi + 0xc]
        call    FUN_10006e80
        mov     esi, 0xfffffffe
        xor     eax, eax
        cmp     esi, esi
        pop     edi
        pop     esi
        pop     ebp
        setz    al
        pop     ebx
        ret     8
loc_7c78:
        or      esi, 0xffffffff
        push    0x100255d4
        jmp     loc_7cda
loc_7c82:
        mov     ecx, edi
        call    FUN_10007f00
        mov     eax, dword ptr [edi + 0x14]
        mov     edx, 0x1002563c
        test    edx, edx
        jnz     loc_7ca0
        xor     ecx, ecx
        test    eax, eax
        setz    cl
        mov     eax, ecx
        jmp     loc_7cb1
loc_7ca0:
        test    eax, eax
        jz      loc_7cb5
        push    2
        push    eax
        push    0x1002563c
        call    ebx
        add     esp, 0xc
loc_7cb1:
        test    eax, eax
        jnz     loc_7cd2
loc_7cb5:
        push    2
        lea     ecx, [edi + 0xc]
        call    FUN_10006e80
        mov     esi, 0xfffffffe
        xor     eax, eax
        cmp     esi, esi
        pop     edi
        pop     esi
        pop     ebp
        setz    al
        pop     ebx
        ret     8
loc_7cd2:
        or      esi, 0xffffffff
        push    0x100255cc
loc_7cda:
        mov     ecx, edi
        call    FUN_10008d30
loc_7ce1:
        xor     eax, eax
        cmp     esi, -2
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        setz    al
        ret     8
        /* in-function jump table DATA at 0x10007cf0 (8 dword case targets).
           Inline asm has no `dd`; emit the relocated address bytes directly. */
        __emit 0xA8  /* [0] -> case 0 (0x100079A8) */
        __emit 0x79
        __emit 0x00
        __emit 0x10
        __emit 0xE2  /* [1] -> case 1 (0x100079E2) */
        __emit 0x79
        __emit 0x00
        __emit 0x10
        __emit 0x0C  /* [2] -> case 2 (0x10007A0C) */
        __emit 0x7A
        __emit 0x00
        __emit 0x10
        __emit 0x33  /* [3] -> case 3 (0x10007A33) */
        __emit 0x7A
        __emit 0x00
        __emit 0x10
        __emit 0x60  /* [4] -> case 4 (0x10007A60) */
        __emit 0x7A
        __emit 0x00
        __emit 0x10
        __emit 0xAA  /* [5] -> case 5 (0x10007AAA) */
        __emit 0x7A
        __emit 0x00
        __emit 0x10
        __emit 0xD7  /* [6] -> case 6 (0x10007AD7) */
        __emit 0x7A
        __emit 0x00
        __emit 0x10
        __emit 0x82  /* [7] -> case 7 (0x10007C82) */
        __emit 0x7C
        __emit 0x00
        __emit 0x10
    }
}
