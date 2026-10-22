/*
 * FUN_0056dca0 (1416 B) — ABL object-id dispatcher / within-test.
 *
 * Reads object ids from a bytecode stream (DAT_00805918) and a value stack
 * (DAT_0080592c), resolves them to objects, and performs a within/contains
 * test, pushing a boolean result back onto the stack.
 *
 * CFLAGS: /O1
 * Match: target 100%
 *
 * NOTE: extern data/function symbols referenced by name so MSVC6 emits the
 * correct memory-deref (A1/A3/8B 0D/8B 35/8B 3D/8B 15/A0) and rel32 (E8)
 * opcode forms; the 4-byte address fields are relocations masked by the
 * diff harness.
 */

/* ---- external data symbols ---- */
extern int   g_805918;   /* 0x00805918 — bytecode stream pointer */
extern int   g_805908;   /* 0x00805908 — current bytecode value */
extern int   g_80592c;   /* 0x0080592c — value stack pointer */
extern int   g_805928;   /* 0x00805928 — value stack base */
extern int   g_80d964;   /* 0x0080d964 */
extern char  g_7dde2c;   /* 0x007dde2c — assert enable flag */
extern int   g_7dab44;   /* 0x007dab44 */
extern int   g_7dab40;   /* 0x007dab40 */
extern int   g_7dc690;   /* 0x007dc690 */
extern int   g_80d9b0;   /* 0x0080d9b0 */

/* ---- external functions ---- */
extern void __cdecl FUN_0064db40(void);
extern void __cdecl FUN_00566bf0(void);
extern void __cdecl FUN_005666d0(void);
extern void __cdecl FUN_006fabf0(void);
extern void __cdecl FUN_004fcb30(void);
extern void __cdecl FUN_00415230(void);
extern void __cdecl FUN_005808b0(void);
extern void __cdecl FUN_00566b90(void);
extern void __cdecl FUN_00563060(void);
extern void __cdecl FUN_00566c30(void);
extern void __cdecl FUN_0056da50(void);
extern void __cdecl FUN_0056d9b0(void);

__declspec(naked) void __cdecl func_0056DCA0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        push    ecx
        mov     eax, g_805918
        movsx   ecx, byte ptr [eax + 0x1]
        inc     eax
        push    ebx
        inc     eax
        push    esi
        mov     g_805908, ecx
        mov     g_805918, eax
        call    FUN_0064db40
        mov     eax, g_80592c
        mov     esi, dword ptr [eax]
        sub     eax, 0x4
        mov     g_80592c, eax
        mov     eax, g_805918
        movsx   edx, byte ptr [eax]
        inc     eax
        mov     g_805908, edx
        mov     g_805918, eax
        call    FUN_0064db40
        mov     eax, g_80592c
        mov     ebx, dword ptr [eax]
        sub     eax, 0x4
        mov     g_80592c, eax
        mov     eax, g_805918
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov     g_805908, ecx
        mov     g_805918, eax
        call    FUN_0064db40
        mov     eax, g_80592c
        mov     edx, dword ptr [eax]
        sub     eax, 0x4
        cmp     esi, -2
        mov     dword ptr [ebp - 0x4], edx
        mov     g_80592c, eax
        jz      L_56e1df
        cmp     ebx, -2
        jz      L_56e1df
        push    edi
        push    esi
        call    FUN_00566bf0
        add     esp, 0x4
        cmp     al, 1
        jz      L_56df25
        push    ebx
        call    FUN_00566bf0
        add     esp, 0x4
        cmp     al, 1
        jz      L_56df25
        cmp     esi, -1
        jnz     L_56dd68
        mov     esi, g_80d964
        jmp     L_56de3f

L_56dd68:
        mov     al, g_7dde2c
        mov     edi, esi
        sar     edi, 0x18
        test    al, al
        jz      L_56ddb8
        test    edi, edi
        jge     L_56dd92
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_56dd92
        int     3

L_56dd92:
        mov     al, g_7dde2c
        test    al, al
        jz      L_56ddb8
        cmp     edi, 0x12
        jl      L_56ddb8
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_56ddb8
        int     3

L_56ddb8:
        mov     eax, g_7dab44
        mov     ecx, g_7dab40
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        mov     al, g_7dde2c
        test    al, al
        jz      L_56de30
        test    esi, esi
        jnz     L_56ddfd
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_56ddfd
        int     3

L_56ddfd:
        mov     al, g_7dde2c
        test    al, al
        jz      L_56de30
        mov     eax, g_7dc690
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L_56de30
        push    0x77f68c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_56de30
        int     3

L_56de30:
        test    esi, esi
        jz      L_56de3f
        xor     ecx, ecx
        cmp     esi, -1
        setz    cl
        dec     ecx
        and     esi, ecx

L_56de3f:
        push    ebx
        call    FUN_005808b0
        push    esi
        mov     edi, eax
        call    FUN_00566b90
        push    edi
        mov     esi, eax
        call    FUN_00566b90
        add     esp, 0xc
        test    esi, esi
        mov     edi, eax
        jz      L_56def1
        test    edi, edi
        jz      L_56def1
        mov     edx, dword ptr [esi + 0x10]
        shr     edx, 0x13
        and     dl, 1
        cmp     dl, 1
        jz      L_56def1
        mov     eax, dword ptr [edi + 0x10]
        shr     eax, 0x13
        and     al, 1
        cmp     al, 1
        jz      L_56def1
        mov     al, g_7dde2c
        test    al, al
        jz      L_56dea9
        cmp     esi, edi
        jnz     L_56dea9
        push    0x780418
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_56dea9
        int     3

L_56dea9:
        fild    dword ptr [ebp - 0x4]
        mov     edx, dword ptr [esi]
        push    1
        push    ecx
        fstp    dword ptr [esp]
        push    edi
        mov     ecx, esi
        call    dword ptr [edx + 0x5c]
        mov     esi, g_80592c
        mov     bl, al
        mov     eax, g_805928
        add     esi, 0x4
        add     eax, 0xa000
        cmp     esi, eax
        mov     g_80592c, esi
        jc      L_56dee3
        push    0
        call    FUN_00563060
        add     esp, 0x4

L_56dee3:
        xor     ecx, ecx
        test    bl, bl
        setnz   cl
        mov     dword ptr [esi], ecx
        jmp     L_56e1bf

L_56def1:
        mov     esi, g_80592c
        mov     edx, g_805928
        add     esi, 0x4
        add     edx, 0xa000
        cmp     esi, edx
        mov     g_80592c, esi
        jc      L_56df1a
        push    0
        call    FUN_00563060
        add     esp, 0x4

L_56df1a:
        mov     dword ptr [esi], 0
        jmp     L_56e1bf

L_56df25:
        push    esi
        call    FUN_00566bf0
        add     esp, 0x4
        cmp     al, 1
        jnz     L_56e077
        push    ebx
        call    FUN_00566bf0
        add     esp, 0x4
        cmp     al, 1
        jnz     L_56df68
        fild    dword ptr [ebp - 0x4]
        push    ecx
        fstp    dword ptr [esp]
        push    ebx
        call    FUN_00566c30
        add     esp, 0x4
        push    eax
        push    esi
        call    FUN_00566c30
        add     esp, 0x4
        push    eax
        call    FUN_0056da50
        jmp     L_56e188

L_56df68:
        cmp     ebx, -1
        jnz     L_56df78
        mov     edi, g_80d964
        jmp     L_56e049

L_56df78:
        mov     al, g_7dde2c
        mov     edi, ebx
        sar     edi, 0x18
        test    al, al
        jz      L_56dfc8
        test    edi, edi
        jge     L_56dfa2
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_56dfa2
        int     3

L_56dfa2:
        mov     al, g_7dde2c
        test    al, al
        jz      L_56dfc8
        cmp     edi, 0x12
        jl      L_56dfc8
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_56dfc8
        int     3

L_56dfc8:
        mov     eax, g_7dab44
        mov     ecx, g_7dab40
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    ebx
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     edi, eax
        mov     al, g_7dde2c
        test    al, al
        jz      L_56e040
        test    edi, edi
        jnz     L_56e00d
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_56e00d
        int     3

L_56e00d:
        mov     al, g_7dde2c
        test    al, al
        jz      L_56e040
        mov     eax, g_7dc690
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L_56e040
        push    0x77f68c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_56e040
        int     3

L_56e040:
        test    edi, edi
        jz      L_56e04d
        cmp     edi, -1
        jz      L_56e04d

L_56e049:
        test    edi, edi
        jnz     L_56e054

L_56e04d:
        xor     bl, bl
        jmp     L_56e18d

L_56e054:
        mov     ecx, dword ptr [edi + 0x10]
        shr     ecx, 0x13
        and     cl, 1
        cmp     cl, 1
        jnz     L_56e069
        xor     bl, bl
        jmp     L_56e18d

L_56e069:
        fild    dword ptr [ebp - 0x4]
        push    ecx
        fstp    dword ptr [esp]
        push    edi
        push    esi
        jmp     L_56e17a

L_56e077:
        cmp     esi, -1
        jnz     L_56e087
        mov     esi, g_80d964
        jmp     L_56e159

L_56e087:
        mov     al, g_7dde2c
        mov     edi, esi
        sar     edi, 0x18
        test    al, al
        jz      L_56e0d7
        test    edi, edi
        jge     L_56e0b1
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_56e0b1
        int     3

L_56e0b1:
        mov     al, g_7dde2c
        test    al, al
        jz      L_56e0d7
        cmp     edi, 0x12
        jl      L_56e0d7
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_56e0d7
        int     3

L_56e0d7:
        mov     edx, g_7dab44
        mov     ecx, g_7dab40
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        mov     al, g_7dde2c
        test    al, al
        jz      L_56e150
        test    esi, esi
        jnz     L_56e11d
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_56e11d
        int     3

L_56e11d:
        mov     al, g_7dde2c
        test    al, al
        jz      L_56e150
        mov     eax, g_7dc690
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     L_56e150
        push    0x77f68c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      L_56e150
        int     3

L_56e150:
        test    esi, esi
        jz      L_56e15d
        cmp     esi, -1
        jz      L_56e15d

L_56e159:
        test    esi, esi
        jnz     L_56e161

L_56e15d:
        xor     bl, bl
        jmp     L_56e18d

L_56e161:
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        and     al, 1
        cmp     al, 1
        jnz     L_56e171
        xor     bl, bl
        jmp     L_56e18d

L_56e171:
        fild    dword ptr [ebp - 0x4]
        push    ecx
        fstp    dword ptr [esp]
        push    esi
        push    ebx

L_56e17a:
        call    FUN_00566c30
        add     esp, 0x4
        push    eax
        call    FUN_0056d9b0

L_56e188:
        add     esp, 0xc
        mov     bl, al

L_56e18d:
        mov     esi, g_80592c
        mov     ecx, g_805928
        add     esi, 0x4
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     g_80592c, esi
        jc      L_56e1b6
        push    0
        call    FUN_00563060
        add     esp, 0x4

L_56e1b6:
        xor     edx, edx
        test    bl, bl
        setnz   dl
        mov     dword ptr [esi], edx

L_56e1bf:
        mov     eax, g_805918
        movsx   ecx, byte ptr [eax]
        pop     edi
        inc     eax
        pop     esi
        mov     g_805918, eax
        mov     eax, g_80d9b0
        mov     g_805908, ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret

L_56e1df:
        mov     edx, g_805928
        add     eax, 0x4
        mov     esi, eax
        add     edx, 0xa000
        cmp     esi, edx
        mov     g_80592c, eax
        jc      L_56e203
        push    0
        call    FUN_00563060
        add     esp, 0x4

L_56e203:
        mov     eax, g_805918
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov     dword ptr [esi], 0
        pop     esi
        mov     g_805918, eax
        mov     eax, g_80d9b0
        mov     g_805908, ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }
}
